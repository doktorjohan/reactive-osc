#include "vehicle.h"

Vehicle::Vehicle(
		double efficiency, double battery_level, double wind_resistance)
	: m_efficiency {efficiency}, m_battery_level {battery_level},
	  m_wind_resistance_factor {wind_resistance} {}

void Vehicle::drive() {

}

double Vehicle::getRange() const {
	return m_battery_level / m_efficiency;
}

double Vehicle::getBatteryLevel() const {
	return m_battery_level;
}

double Vehicle::getEfficiency() const {
	return m_efficiency;
}

double Vehicle::getCurrentSpeed() {
	return m_current_speed;
}

double Vehicle::getWattage() {
	return m_wattage;
}
