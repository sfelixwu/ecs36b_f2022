
// test_GPS.cpp

#include <stdlib.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

#include "GPS.h"

int
main(int argc, char *argv[])
{
  if (argc != 3) return -1;

  GPS_DD gps_Davis {38.5, -121.7};
  GPS_DD current { atof(argv[1]), atof(argv[2]) };
    
  // GPS_DD gps_NYC {40.7, -73.95};
  // GPS_DD gps_Sydney {-33.87, 151.213};

  std::cout << "the distance to Davis is " << gps_Davis.distance(&current) << " miles." << std::endl;
  return 0;
}
