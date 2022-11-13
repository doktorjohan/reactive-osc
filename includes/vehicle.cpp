#include "vehicle.h"


Vehicle::Vehicle(double efficiency, double battery_level) :
        m_efficiency{efficiency}, m_battery_level{battery_level} {}

double Vehicle::getRange() {
  return m_battery_level / m_efficiency;
}

double Vehicle::driveNKilometers(int n) {
  double new_battery_level = m_battery_level - (n * m_efficiency);
  if (new_battery_level < 0)
    return -1;

  m_battery_level = new_battery_level;
  return new_battery_level;
}

double Vehicle::getBatteryLevel() {
  return m_battery_level;
}

double Vehicle::getEfficiency() {
  return m_efficiency;
}
