
#ifndef REACTIVE_VEHICLE_H
#define REACTIVE_VEHICLE_H

class Vehicle {
public:
    Vehicle(double efficiency, double battery_level, double wind_resistance);

    double getRange() const;

	double getCurrentSpeed();

    double getBatteryLevel() const;

    double getEfficiency() const;

	double getWattage();

	/**
	 * Main method, drives 1 unit (1 loop)
	 */
	void drive();


private:
    double m_battery_level;
    double m_efficiency;
	double m_current_speed;
	const double m_wind_resistance_factor;
	double m_wattage;
	double m_air_density;
	double m_front_max_area;
	double m_vehicle_mass;
	double m_friction_constant;
	const double m_gravity_constant = 9.79;
	double m_current_torque;
	double m_current_rpm;

	// all below defined in vehiclePhysics.cpp
	double m_calculateTotalWattage(double road_angle, double acceleration,
			double relative_wind_angle, double wind_speed_mps);

	double m_calculateWattageForAcceleration(double acceleration);

	double m_calculateWattageForWindSpeed(double relative_angle, double wind_speed_mps);

	double m_calculateWattageForFriction(double road_angle);

	double m_calculateWattageForRoadProfile(double road_angle);

	double m_calculateCurrentSpeed();

	double m_calculateWindSpeed(double relative_angle, double wind_speed_mps);

	double m_calculateLowerLimitSpeed(double distanceInKM, double timeInHours);

	double m_calculateNecessaryTorque(double rpm);

};

#endif //REACTIVE_VEHICLE_H
