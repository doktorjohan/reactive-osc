#include "vehicle.h"
#include <iostream>

using namespace std;

int main() {

  Vehicle v1(100, 100000, 0.2);
  Vehicle v2(50, 100000, 0.2);

  double distance_in_kms = 1000;
  double time_in_hours = 24;

  while (true) {

	  // get parametets
	  // call function with collected parameters
	  v1.drive();
	  v1.getCurrentSpeed();
	  // car assumes speed

  }

  double lower_limit_speed =
		  calculateLowerLimitSpeed(distance_in_kms, time_in_hours);

  cout << lower_limit_speed << endl;
  cout << v1.getRange() << endl;
  cout << v2.getRange() << endl;

}
