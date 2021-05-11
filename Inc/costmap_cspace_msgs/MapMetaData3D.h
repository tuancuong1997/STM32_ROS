#ifndef _ROS_costmap_cspace_msgs_MapMetaData3D_h
#define _ROS_costmap_cspace_msgs_MapMetaData3D_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Pose.h"

namespace costmap_cspace_msgs
{

  class MapMetaData3D : public ros::Msg
  {
    public:
      typedef float _linear_resolution_type;
      _linear_resolution_type linear_resolution;
      typedef float _angular_resolution_type;
      _angular_resolution_type angular_resolution;
      typedef uint32_t _width_type;
      _width_type width;
      typedef uint32_t _height_type;
      _height_type height;
      typedef uint32_t _angle_type;
      _angle_type angle;
      typedef geometry_msgs::Pose _origin_type;
      _origin_type origin;

    MapMetaData3D():
      linear_resolution(0),
      angular_resolution(0),
      width(0),
      height(0),
      angle(0),
      origin()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_linear_resolution;
      u_linear_resolution.real = this->linear_resolution;
      *(outbuffer + offset + 0) = (u_linear_resolution.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_linear_resolution.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_linear_resolution.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_linear_resolution.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->linear_resolution);
      union {
        float real;
        uint32_t base;
      } u_angular_resolution;
      u_angular_resolution.real = this->angular_resolution;
      *(outbuffer + offset + 0) = (u_angular_resolution.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angular_resolution.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angular_resolution.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angular_resolution.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angular_resolution);
      *(outbuffer + offset + 0) = (this->width >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->width >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->width >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->width >> (8 * 3)) & 0xFF;
      offset += sizeof(this->width);
      *(outbuffer + offset + 0) = (this->height >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->height >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->height >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->height >> (8 * 3)) & 0xFF;
      offset += sizeof(this->height);
      *(outbuffer + offset + 0) = (this->angle >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->angle >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->angle >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->angle >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle);
      offset += this->origin.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_linear_resolution;
      u_linear_resolution.base = 0;
      u_linear_resolution.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_linear_resolution.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_linear_resolution.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_linear_resolution.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->linear_resolution = u_linear_resolution.real;
      offset += sizeof(this->linear_resolution);
      union {
        float real;
        uint32_t base;
      } u_angular_resolution;
      u_angular_resolution.base = 0;
      u_angular_resolution.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angular_resolution.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angular_resolution.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angular_resolution.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angular_resolution = u_angular_resolution.real;
      offset += sizeof(this->angular_resolution);
      this->width =  ((uint32_t) (*(inbuffer + offset)));
      this->width |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->width |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->width |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->width);
      this->height =  ((uint32_t) (*(inbuffer + offset)));
      this->height |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->height |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->height |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->height);
      this->angle =  ((uint32_t) (*(inbuffer + offset)));
      this->angle |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->angle |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->angle |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->angle);
      offset += this->origin.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "costmap_cspace_msgs/MapMetaData3D"; };
    const char * getMD5(){ return "64571c9ed0c92d4e4b7d5cd2a97576a7"; };

  };

}
#endif
