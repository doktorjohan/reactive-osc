#include "library.h"
#include "vehicle.h"
#include <iostream>

using namespace std;

int main() {

  Vehicle v1(100, 100000);
  Vehicle v2(50, 100000);

  double distance_in_kms = 1000;
  double time_in_hours = 24;

  double constant_speed = calculateConstantSpeedInKPH(distance_in_kms, time_in_hours);

  cout << constant_speed << endl;
  cout << v1.getRange() << endl;
  cout << v2.getRange() << endl;

}
