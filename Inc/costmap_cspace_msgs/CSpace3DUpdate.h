#ifndef _ROS_costmap_cspace_msgs_CSpace3DUpdate_h
#define _ROS_costmap_cspace_msgs_CSpace3DUpdate_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace costmap_cspace_msgs
{

  class CSpace3DUpdate : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint32_t _x_type;
      _x_type x;
      typedef uint32_t _y_type;
      _y_type y;
      typedef uint32_t _yaw_type;
      _yaw_type yaw;
      typedef uint32_t _width_type;
      _width_type width;
      typedef uint32_t _height_type;
      _height_type height;
      typedef uint32_t _angle_type;
      _angle_type angle;
      uint32_t data_length;
      typedef int8_t _data_type;
      _data_type st_data;
      _data_type * data;

    CSpace3DUpdate():
      header(),
      x(0),
      y(0),
      yaw(0),
      width(0),
      height(0),
      angle(0),
      data_length(0), data(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->x >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->x >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->x >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->x >> (8 * 3)) & 0xFF;
      offset += sizeof(this->x);
      *(outbuffer + offset + 0) = (this->y >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->y >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->y >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->y >> (8 * 3)) & 0xFF;
      offset += sizeof(this->y);
      *(outbuffer + offset + 0) = (this->yaw >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->yaw >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->yaw >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->yaw >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yaw);
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
      *(outbuffer + offset + 0) = (this->data_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->data_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->data_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->data_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->data_length);
      for( uint32_t i = 0; i < data_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_datai;
      u_datai.real = this->data[i];
      *(outbuffer + offset + 0) = (u_datai.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->data[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->x =  ((uint32_t) (*(inbuffer + offset)));
      this->x |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->x |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->x |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->x);
      this->y =  ((uint32_t) (*(inbuffer + offset)));
      this->y |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->y |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->y |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->y);
      this->yaw =  ((uint32_t) (*(inbuffer + offset)));
      this->yaw |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->yaw |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->yaw |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->yaw);
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
      uint32_t data_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      data_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      data_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      data_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->data_length);
      if(data_lengthT > data_length)
        this->data = (int8_t*)realloc(this->data, data_lengthT * sizeof(int8_t));
      data_length = data_lengthT;
      for( uint32_t i = 0; i < data_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_data;
      u_st_data.base = 0;
      u_st_data.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_data = u_st_data.real;
      offset += sizeof(this->st_data);
        memcpy( &(this->data[i]), &(this->st_data), sizeof(int8_t));
      }
     return offset;
    }

    const char * getType(){ return "costmap_cspace_msgs/CSpace3DUpdate"; };
    const char * getMD5(){ return "96652e1e1204436fdc0c25c35382eb42"; };

  };

}
#endif
