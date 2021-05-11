#ifndef _ROS_SERVICE_PlannerService_h
#define _ROS_SERVICE_PlannerService_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/PoseStamped.h"
#include "trajectory_msgs/MultiDOFJointTrajectory.h"
#include "geometry_msgs/Vector3.h"
#include "mav_planning_msgs/PolynomialTrajectory4D.h"

namespace mav_planning_msgs
{

static const char PLANNERSERVICE[] = "mav_planning_msgs/PlannerService";

  class PlannerServiceRequest : public ros::Msg
  {
    public:
      typedef geometry_msgs::PoseStamped _start_pose_type;
      _start_pose_type start_pose;
      typedef geometry_msgs::Vector3 _start_velocity_type;
      _start_velocity_type start_velocity;
      typedef geometry_msgs::PoseStamped _goal_pose_type;
      _goal_pose_type goal_pose;
      typedef geometry_msgs::Vector3 _goal_velocity_type;
      _goal_velocity_type goal_velocity;
      typedef geometry_msgs::Vector3 _bounding_box_type;
      _bounding_box_type bounding_box;

    PlannerServiceRequest():
      start_pose(),
      start_velocity(),
      goal_pose(),
      goal_velocity(),
      bounding_box()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->start_pose.serialize(outbuffer + offset);
      offset += this->start_velocity.serialize(outbuffer + offset);
      offset += this->goal_pose.serialize(outbuffer + offset);
      offset += this->goal_velocity.serialize(outbuffer + offset);
      offset += this->bounding_box.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->start_pose.deserialize(inbuffer + offset);
      offset += this->start_velocity.deserialize(inbuffer + offset);
      offset += this->goal_pose.deserialize(inbuffer + offset);
      offset += this->goal_velocity.deserialize(inbuffer + offset);
      offset += this->bounding_box.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return PLANNERSERVICE; };
    const char * getMD5(){ return "6090fe8ab3df1362b8c26859b8850940"; };

  };

  class PlannerServiceResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;
      typedef mav_planning_msgs::PolynomialTrajectory4D _polynomial_plan_type;
      _polynomial_plan_type polynomial_plan;
      typedef trajectory_msgs::MultiDOFJointTrajectory _sampled_plan_type;
      _sampled_plan_type sampled_plan;

    PlannerServiceResponse():
      success(0),
      polynomial_plan(),
      sampled_plan()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      offset += this->polynomial_plan.serialize(outbuffer + offset);
      offset += this->sampled_plan.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
      offset += this->polynomial_plan.deserialize(inbuffer + offset);
      offset += this->sampled_plan.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return PLANNERSERVICE; };
    const char * getMD5(){ return "2b0f390ba4c264f0182acc6839f4d8b4"; };

  };

  class PlannerService {
    public:
    typedef PlannerServiceRequest Request;
    typedef PlannerServiceResponse Response;
  };

}
#endif
