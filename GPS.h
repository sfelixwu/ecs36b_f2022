
#ifndef _GPS_H_
#define _GPS_H_

// GPS.h

class GPS_DD
{
 private:
  double latitude;
  double longitude;
 public:
  GPS_DD();
  GPS_DD(double, double);
  double getLatitude();
  double getLongitude();
  double distance(GPS_DD *);

#ifdef NOT_RIGHT_NOW
  virtual Json::Value * dumpJ();
  virtual bool Jdump(Json::Value *);
#endif /* NOT_RIGHT_NOW */

};

#endif /* _GPS_H_ */
