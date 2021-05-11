#ifndef _ROS_mav_msgs_GpsWaypoint_h
#define _ROS_mav_msgs_GpsWaypoint_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace mav_msgs
{

  class GpsWaypoint : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _latitude_type;
      _latitude_type latitude;
      typedef double _longitude_type;
      _longitude_type longitude;
      typedef double _altitude_type;
      _altitude_type altitude;
      typedef double _heading_type;
      _heading_type heading;
      typedef double _maxSpeed_type;
      _maxSpeed_type maxSpeed;
      typedef double _maxAcc_type;
      _maxAcc_type maxAcc;

    GpsWaypoint():
      header(),
      latitude(0),
      longitude(0),
      altitude(0),
      heading(0),
      maxSpeed(0),
      maxAcc(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_latitude;
      u_latitude.real = this->latitude;
      *(outbuffer + offset + 0) = (u_latitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_latitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_latitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_latitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_latitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_latitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_latitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_latitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->latitude);
      union {
        double real;
        uint64_t base;
      } u_longitude;
      u_longitude.real = this->longitude;
      *(outbuffer + offset + 0) = (u_longitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_longitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_longitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_longitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_longitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_longitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_longitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_longitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->longitude);
      union {
        double real;
        uint64_t base;
      } u_altitude;
      u_altitude.real = this->altitude;
      *(outbuffer + offset + 0) = (u_altitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_altitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_altitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_altitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_altitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_altitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_altitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_altitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->altitude);
      union {
        double real;
        uint64_t base;
      } u_heading;
      u_heading.real = this->heading;
      *(outbuffer + offset + 0) = (u_heading.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_heading.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_heading.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_heading.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_heading.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_heading.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_heading.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_heading.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->heading);
      union {
        double real;
        uint64_t base;
      } u_maxSpeed;
      u_maxSpeed.real = this->maxSpeed;
      *(outbuffer + offset + 0) = (u_maxSpeed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_maxSpeed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_maxSpeed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_maxSpeed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_maxSpeed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_maxSpeed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_maxSpeed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_maxSpeed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->maxSpeed);
      union {
        double real;
        uint64_t base;
      } u_maxAcc;
      u_maxAcc.real = this->maxAcc;
      *(outbuffer + offset + 0) = (u_maxAcc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_maxAcc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_maxAcc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_maxAcc.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_maxAcc.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_maxAcc.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_maxAcc.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_maxAcc.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->maxAcc);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_latitude;
      u_latitude.base = 0;
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->latitude = u_latitude.real;
      offset += sizeof(this->latitude);
      union {
        double real;
        uint64_t base;
      } u_longitude;
      u_longitude.base = 0;
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->longitude = u_longitude.real;
      offset += sizeof(this->longitude);
      union {
        double real;
        uint64_t base;
      } u_altitude;
      u_altitude.base = 0;
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->altitude = u_altitude.real;
      offset += sizeof(this->altitude);
      union {
        double real;
        uint64_t base;
      } u_heading;
      u_heading.base = 0;
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_heading.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->heading = u_heading.real;
      offset += sizeof(this->heading);
      union {
        double real;
        uint64_t base;
      } u_maxSpeed;
      u_maxSpeed.base = 0;
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_maxSpeed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->maxSpeed = u_maxSpeed.real;
      offset += sizeof(this->maxSpeed);
      union {
        double real;
        uint64_t base;
      } u_maxAcc;
      u_maxAcc.base = 0;
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_maxAcc.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->maxAcc = u_maxAcc.real;
      offset += sizeof(this->maxAcc);
     return offset;
    }

    const char * getType(){ return "mav_msgs/GpsWaypoint"; };
    const char * getMD5(){ return "61c3751c96f3b418f93879727f9a070a"; };

  };

}
#endif
