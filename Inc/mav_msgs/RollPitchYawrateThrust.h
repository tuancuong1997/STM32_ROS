#ifndef _ROS_mav_msgs_RollPitchYawrateThrust_h
#define _ROS_mav_msgs_RollPitchYawrateThrust_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"

namespace mav_msgs
{

  class RollPitchYawrateThrust : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _roll_type;
      _roll_type roll;
      typedef double _pitch_type;
      _pitch_type pitch;
      typedef double _yaw_rate_type;
      _yaw_rate_type yaw_rate;
      typedef geometry_msgs::Vector3 _thrust_type;
      _thrust_type thrust;

    RollPitchYawrateThrust():
      header(),
      roll(0),
      pitch(0),
      yaw_rate(0),
      thrust()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_roll;
      u_roll.real = this->roll;
      *(outbuffer + offset + 0) = (u_roll.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roll.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roll.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roll.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_roll.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_roll.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_roll.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_roll.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->roll);
      union {
        double real;
        uint64_t base;
      } u_pitch;
      u_pitch.real = this->pitch;
      *(outbuffer + offset + 0) = (u_pitch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pitch.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pitch.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pitch.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pitch.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pitch);
      union {
        double real;
        uint64_t base;
      } u_yaw_rate;
      u_yaw_rate.real = this->yaw_rate;
      *(outbuffer + offset + 0) = (u_yaw_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yaw_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yaw_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yaw_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yaw_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yaw_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yaw_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yaw_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yaw_rate);
      offset += this->thrust.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_roll;
      u_roll.base = 0;
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->roll = u_roll.real;
      offset += sizeof(this->roll);
      union {
        double real;
        uint64_t base;
      } u_pitch;
      u_pitch.base = 0;
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pitch = u_pitch.real;
      offset += sizeof(this->pitch);
      union {
        double real;
        uint64_t base;
      } u_yaw_rate;
      u_yaw_rate.base = 0;
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yaw_rate = u_yaw_rate.real;
      offset += sizeof(this->yaw_rate);
      offset += this->thrust.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "mav_msgs/RollPitchYawrateThrust"; };
    const char * getMD5(){ return "10a56a30857affade0889a3662fc2bc9"; };

  };

}
#endif
