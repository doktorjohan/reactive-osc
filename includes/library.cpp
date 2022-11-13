#include "library.h"

double metersToKMs(double meters) {
  return meters / 1000;
}

double minutesToHours(double minutes) {
  return minutes / 60;
}

double calculateConstantSpeedInKPH(
        double distanceInKM, double timeInHours) {
  return distanceInKM / timeInHours;
}