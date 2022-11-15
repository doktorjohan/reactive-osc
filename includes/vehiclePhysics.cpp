#include "vehicle.h"
#include <cmath>

#define PI 3.14159265359

double Vehicle::m_calculateLowerLimitSpeed(
		double distanceInKM, double timeInHours) {
	return distanceInKM / timeInHours;
}

double Vehicle::m_calculateCurrentSpeed() {



	return 0;
}

double Vehicle::m_calculateNecessaryTorque(double rpm) {
	return m_wattage / (rpm*2*PI);
}

double Vehicle::m_calculateTotalWattage(double road_angle, double acceleration,
		double relative_wind_angle, double wind_speed_mps) {
	double wattage =  m_calculateWattageForFriction(road_angle) +
			m_calculateWattageForWindSpeed(
					relative_wind_angle, wind_speed_mps) +
			m_calculateWattageForRoadProfile(road_angle) +
			m_calculateWattageForAcceleration(acceleration);
	m_wattage = wattage;
	return m_wattage;
}

double Vehicle::m_calculateWattageForAcceleration(double acceleration) {
	return m_vehicle_mass * acceleration * m_current_speed;
}

double Vehicle::m_calculateWattageForFriction(double road_angle) {
	return m_vehicle_mass * m_gravity_constant * m_friction_constant *
			m_current_speed * cos(road_angle);
}

double Vehicle::m_calculateWattageForRoadProfile(double road_angle) {
	return m_vehicle_mass * m_gravity_constant * m_current_speed *
			sin(road_angle);
}

double Vehicle::m_calculateWattageForWindSpeed(
		double relative_angle, double wind_speed_mps) {
	return (m_air_density *
				   m_calculateWindSpeed(relative_angle, wind_speed_mps) *
				   m_current_speed * m_wind_resistance_factor *
				   m_front_max_area) /
			2;
}

double Vehicle::m_calculateWindSpeed(
		double relative_angle, double wind_speed_mps) {
	return pow(std::abs(sin(relative_angle) * wind_speed_mps), 2);
}
