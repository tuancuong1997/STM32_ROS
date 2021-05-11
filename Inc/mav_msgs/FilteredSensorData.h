#ifndef _ROS_mav_msgs_FilteredSensorData_h
#define _ROS_mav_msgs_FilteredSensorData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"

namespace mav_msgs
{

  class FilteredSensorData : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef geometry_msgs::Vector3 _accelerometer_type;
      _accelerometer_type accelerometer;
      typedef geometry_msgs::Vector3 _gyroscope_type;
      _gyroscope_type gyroscope;
      typedef geometry_msgs::Vector3 _magnetometer_type;
      _magnetometer_type magnetometer;
      typedef double _barometer_type;
      _barometer_type barometer;

    FilteredSensorData():
      header(),
      accelerometer(),
      gyroscope(),
      magnetometer(),
      barometer(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->accelerometer.serialize(outbuffer + offset);
      offset += this->gyroscope.serialize(outbuffer + offset);
      offset += this->magnetometer.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_barometer;
      u_barometer.real = this->barometer;
      *(outbuffer + offset + 0) = (u_barometer.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_barometer.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_barometer.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_barometer.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_barometer.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_barometer.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_barometer.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_barometer.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->barometer);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->accelerometer.deserialize(inbuffer + offset);
      offset += this->gyroscope.deserialize(inbuffer + offset);
      offset += this->magnetometer.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_barometer;
      u_barometer.base = 0;
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_barometer.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->barometer = u_barometer.real;
      offset += sizeof(this->barometer);
     return offset;
    }

    const char * getType(){ return "mav_msgs/FilteredSensorData"; };
    const char * getMD5(){ return "a9b51fae1f4ed3a8a0522b4ffe61659f"; };

  };

}
#endif
