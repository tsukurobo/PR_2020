#ifndef _ROS_pr_msg_PrMsg_h
#define _ROS_pr_msg_PrMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace pr_msg
{

  class PrMsg : public ros::Msg
  {
    public:
      typedef int32_t _pick_slide_type;
      _pick_slide_type pick_slide;
      typedef int32_t _pick_grasp_type;
      _pick_grasp_type pick_grasp;
      typedef int32_t _pick_turn_type;
      _pick_turn_type pick_turn;
      typedef int32_t _pick_lift_type;
      _pick_lift_type pick_lift;
      typedef int32_t _kick_roll_type;
      _kick_roll_type kick_roll;
      typedef int32_t _kick_fire_type;
      _kick_fire_type kick_fire;
      typedef int32_t _pass_tee_type;
      _pass_tee_type pass_tee;

    PrMsg():
      pick_slide(0),
      pick_grasp(0),
      pick_turn(0),
      pick_lift(0),
      kick_roll(0),
      kick_fire(0),
      pass_tee(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pick_slide;
      u_pick_slide.real = this->pick_slide;
      *(outbuffer + offset + 0) = (u_pick_slide.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pick_slide.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pick_slide.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pick_slide.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pick_slide);
      union {
        int32_t real;
        uint32_t base;
      } u_pick_grasp;
      u_pick_grasp.real = this->pick_grasp;
      *(outbuffer + offset + 0) = (u_pick_grasp.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pick_grasp.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pick_grasp.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pick_grasp.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pick_grasp);
      union {
        int32_t real;
        uint32_t base;
      } u_pick_turn;
      u_pick_turn.real = this->pick_turn;
      *(outbuffer + offset + 0) = (u_pick_turn.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pick_turn.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pick_turn.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pick_turn.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pick_turn);
      union {
        int32_t real;
        uint32_t base;
      } u_pick_lift;
      u_pick_lift.real = this->pick_lift;
      *(outbuffer + offset + 0) = (u_pick_lift.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pick_lift.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pick_lift.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pick_lift.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pick_lift);
      union {
        int32_t real;
        uint32_t base;
      } u_kick_roll;
      u_kick_roll.real = this->kick_roll;
      *(outbuffer + offset + 0) = (u_kick_roll.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_kick_roll.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_kick_roll.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_kick_roll.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->kick_roll);
      union {
        int32_t real;
        uint32_t base;
      } u_kick_fire;
      u_kick_fire.real = this->kick_fire;
      *(outbuffer + offset + 0) = (u_kick_fire.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_kick_fire.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_kick_fire.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_kick_fire.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->kick_fire);
      union {
        int32_t real;
        uint32_t base;
      } u_pass_tee;
      u_pass_tee.real = this->pass_tee;
      *(outbuffer + offset + 0) = (u_pass_tee.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pass_tee.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pass_tee.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pass_tee.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pass_tee);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pick_slide;
      u_pick_slide.base = 0;
      u_pick_slide.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pick_slide.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pick_slide.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pick_slide.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pick_slide = u_pick_slide.real;
      offset += sizeof(this->pick_slide);
      union {
        int32_t real;
        uint32_t base;
      } u_pick_grasp;
      u_pick_grasp.base = 0;
      u_pick_grasp.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pick_grasp.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pick_grasp.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pick_grasp.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pick_grasp = u_pick_grasp.real;
      offset += sizeof(this->pick_grasp);
      union {
        int32_t real;
        uint32_t base;
      } u_pick_turn;
      u_pick_turn.base = 0;
      u_pick_turn.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pick_turn.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pick_turn.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pick_turn.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pick_turn = u_pick_turn.real;
      offset += sizeof(this->pick_turn);
      union {
        int32_t real;
        uint32_t base;
      } u_pick_lift;
      u_pick_lift.base = 0;
      u_pick_lift.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pick_lift.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pick_lift.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pick_lift.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pick_lift = u_pick_lift.real;
      offset += sizeof(this->pick_lift);
      union {
        int32_t real;
        uint32_t base;
      } u_kick_roll;
      u_kick_roll.base = 0;
      u_kick_roll.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_kick_roll.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_kick_roll.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_kick_roll.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->kick_roll = u_kick_roll.real;
      offset += sizeof(this->kick_roll);
      union {
        int32_t real;
        uint32_t base;
      } u_kick_fire;
      u_kick_fire.base = 0;
      u_kick_fire.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_kick_fire.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_kick_fire.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_kick_fire.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->kick_fire = u_kick_fire.real;
      offset += sizeof(this->kick_fire);
      union {
        int32_t real;
        uint32_t base;
      } u_pass_tee;
      u_pass_tee.base = 0;
      u_pass_tee.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pass_tee.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pass_tee.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pass_tee.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pass_tee = u_pass_tee.real;
      offset += sizeof(this->pass_tee);
     return offset;
    }

    const char * getType(){ return "pr_msg/PrMsg"; };
    const char * getMD5(){ return "0b7477fdb01b1f98d79601f95a7c0be2"; };

  };

}
#endif
