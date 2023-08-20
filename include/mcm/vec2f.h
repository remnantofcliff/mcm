#ifndef MCM_VEC2F_H
#define MCM_VEC2F_H

#include "structs.h"
#include <math.h>
#include <tgmath.h>

static inline mcm_Vec2f mcm_Vec2f_abs(mcm_Vec2f v0) {
  return (mcm_Vec2f){
      .x = fabs(v0.x),
      .y = fabs(v0.y),
  };
}

static inline mcm_Vec2f mcm_Vec2f_add_Vec2f(mcm_Vec2f v0, mcm_Vec2f v1) {
  return (mcm_Vec2f){
      .x = v0.x + v1.x,
      .y = v0.y + v1.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_add_f(mcm_Vec2f v0, float num) {
  return (mcm_Vec2f){
      .x = v0.x + num,
      .y = v0.y + num,
  };
}

static inline mcm_Vec2f mcm_Vec2f_ceil(mcm_Vec2f v0) {
  return (mcm_Vec2f){
      .x = ceil(v0.x),
      .y = ceil(v0.y),
  };
}

static inline mcm_Vec2f mcm_Vec2f_div_Vec2f(mcm_Vec2f v0, mcm_Vec2f v1) {
  return (mcm_Vec2f){
      .x = v0.x / v1.x,
      .y = v0.y / v1.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_div_f(mcm_Vec2f v0, float num) {
  return (mcm_Vec2f){
      .x = v0.x / num,
      .y = v0.y / num,
  };
}

static inline float mcm_Vec2f_dot(mcm_Vec2f v0, mcm_Vec2f v1) {
  return fma(v0.x, v1.x, v0.y * v1.y);
}

static inline mcm_Vec2f mcm_Vec2f_exp(mcm_Vec2f v0) {
  return (mcm_Vec2f){
      .x = exp(v0.x),
      .y = exp(v0.y),
  };
}

static inline mcm_Vec2f mcm_Vec2f_floor(mcm_Vec2f v0) {
  return (mcm_Vec2f){
      .x = floor(v0.x),
      .y = floor(v0.y),
  };
}

static inline mcm_Vec2f mcm_Vec2f_from_array(float arr[static 2]) {
  return (mcm_Vec2f){
      .x = arr[0],
      .y = arr[1],
  };
}

static inline bool mcm_Vec2f_is_finite(mcm_Vec2f v0) {
  return isfinite(v0.x) && isfinite(v0.y);
}

static inline float mcm_Vec2f_length(mcm_Vec2f v0) {
  return sqrt(mcm_Vec2f_dot(v0, v0));
}

static inline float mcm_Vec2f_length_squared(mcm_Vec2f v0) {
  return mcm_Vec2f_dot(v0, v0);
}

static inline mcm_Vec2f mcm_Vec2f_max_Vec2f(mcm_Vec2f v0, mcm_Vec2f v1) {
  return (mcm_Vec2f){
      .x = (v0.x > v1.x) ? v0.x : v1.x,
      .y = (v0.y > v1.y) ? v0.y : v1.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_max_f(mcm_Vec2f v0, float num) {
  return (mcm_Vec2f){
      .x = (v0.x > num) ? v0.x : num,
      .y = (v0.y > num) ? v0.y : num,
  };
}

static inline float mcm_Vec2f_max_element(mcm_Vec2f v0) {
  return (v0.x > v0.y) ? v0.x : v0.y;
}

static inline mcm_Vec2f mcm_Vec2f_min_Vec2f(mcm_Vec2f v0, mcm_Vec2f v1) {
  return (mcm_Vec2f){
      .x = (v0.x < v1.x) ? v0.x : v1.x,
      .y = (v0.y < v1.y) ? v0.y : v1.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_min_f(mcm_Vec2f v0, float num) {
  return (mcm_Vec2f){
      .x = (v0.x < num) ? v0.x : num,
      .y = (v0.y < num) ? v0.y : num,
  };
}

static inline float mcm_Vec2f_min_element(mcm_Vec2f v0) {
  return (v0.x < v0.y) ? v0.x : v0.y;
}

static inline mcm_Vec2f mcm_Vec2f_mul_Vec2f(mcm_Vec2f v0, mcm_Vec2f v1) {
  return (mcm_Vec2f){
      .x = v0.x * v1.x,
      .y = v0.y * v1.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_mul_f(mcm_Vec2f v0, float num) {
  return (mcm_Vec2f){
      .x = v0.x * num,
      .y = v0.y * num,
  };
}

static inline mcm_Vec2f mcm_Vec2f_neg(mcm_Vec2f v0) {
  return (mcm_Vec2f){
      .x = -v0.x,
      .y = -v0.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_normalize(mcm_Vec2f v0) {
  return mcm_Vec2f_div_f(v0, mcm_Vec2f_length(v0));
}

static inline mcm_Vec2f mcm_Vec2f_normalize_or_zero(mcm_Vec2f v0) {
  float length = mcm_Vec2f_length(v0);

  return (mcm_Vec2f_is_finite(v0) && (length > 0.0))
             ? mcm_Vec2f_div_f(v0, length)
             : (mcm_Vec2f){0};
}

static inline mcm_Vec2f mcm_Vec2f_perp(mcm_Vec2f v0) {
  return (mcm_Vec2f) {
    .x = -v0.y,
    .y = v0.x,
  };
}

static inline mcm_Vec2f mcm_Vec2f_pow(mcm_Vec2f v0, float e) {
  return (mcm_Vec2f){
      .x = pow(v0.x, e),
      .y = pow(v0.y, e),
  };
}

static inline mcm_Vec2f mcm_Vec2f_recip(mcm_Vec2f v0) {
  return (mcm_Vec2f){
      .x = 1.0f / v0.x,
      .y = 1.0f / v0.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_round(mcm_Vec2f v0) {
  return (mcm_Vec2f){
      .x = round(v0.x),
      .y = round(v0.y),
  };
}

static inline mcm_Vec2f mcm_Vec2f_sub_Vec2f(mcm_Vec2f v0, mcm_Vec2f v1) {
  return (mcm_Vec2f){
      .x = v0.x - v1.x,
      .y = v0.y - v1.y,
  };
}

static inline mcm_Vec2f mcm_Vec2f_sub_f(mcm_Vec2f v0, float num) {
  return (mcm_Vec2f){
      .x = v0.x - num,
      .y = v0.y - num,
  };
}

static inline mcm_Vec3f mcm_Vec2f_to_Vec3f(mcm_Vec2f v0, float z) {
  return (mcm_Vec3f){
      .x = v0.x,
      .y = v0.y,
      .z = z,
  };
}

static inline void mcm_Vec2f_to_array(mcm_Vec2f v0, float arr[static 2]) {
  arr[0] = v0.x;
  arr[1] = v0.y;
}

static inline float mcm_Vec2f_angle_between(mcm_Vec2f v0, mcm_Vec2f v1) {
  return acos(mcm_Vec2f_dot(v0, v1) / sqrt(mcm_Vec2f_length_squared(v0) *
                                           mcm_Vec2f_length_squared(v1)));
}

static inline float mcm_Vec2f_distance_to(mcm_Vec2f v0, mcm_Vec2f v1) {
  return mcm_Vec2f_length(mcm_Vec2f_sub_Vec2f(v0, v1));
}

static inline float mcm_Vec2f_distance_squared_to(mcm_Vec2f v0, mcm_Vec2f v1) {
  return mcm_Vec2f_length_squared(mcm_Vec2f_sub_Vec2f(v0, v1));
}

static inline mcm_Vec2f mcm_Vec2f_fract(mcm_Vec2f v0) {
  return mcm_Vec2f_sub_Vec2f(v0, mcm_Vec2f_floor(v0));
}

static inline mcm_Vec2f mcm_Vec2f_lerp(mcm_Vec2f v0, mcm_Vec2f v1, float s) {
  return mcm_Vec2f_add_Vec2f(v0,
                             mcm_Vec2f_mul_f(mcm_Vec2f_sub_Vec2f(v1, v0), s));
}

static inline mcm_Vec2f mcm_Vec2f_project_onto(mcm_Vec2f this,
                                               mcm_Vec2f other) {
  return mcm_Vec2f_div_f(mcm_Vec2f_mul_f(other, mcm_Vec2f_dot(this, other)),
                         mcm_Vec2f_length_squared(other));
}

static inline mcm_Vec2f mcm_Vec2f_project_onto_normalized(mcm_Vec2f this,
                                                          mcm_Vec2f other) {
  return mcm_Vec2f_mul_f(other, mcm_Vec2f_dot(this, other));
}

static inline mcm_Vec2f mcm_Vec2f_reject_from(mcm_Vec2f this, mcm_Vec2f other) {
  return mcm_Vec2f_sub_Vec2f(this, mcm_Vec2f_project_onto(this, other));
}

#endif
