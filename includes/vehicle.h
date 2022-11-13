
#ifndef REACTIVE_VEHICLE_H
#define REACTIVE_VEHICLE_H

class Vehicle {
public:
    Vehicle(double efficiency, double battery_level);

    double getRange();

    double driveNKilometers(int n);

    // getters
    double getBatteryLevel();

    double getEfficiency();

private:
    double m_battery_level;
    const double m_efficiency;
};

#endif //REACTIVE_VEHICLE_H
