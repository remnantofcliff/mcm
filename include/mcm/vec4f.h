#ifndef MCM_VEC4F_H
#define MCM_VEC4F_H

#include "structs.h"
#include <math.h>
#include <tgmath.h>

static inline mcm_Vec4f mcm_Vec4f_abs(mcm_Vec4f v0) {
  return (mcm_Vec4f){
      .x = fabs(v0.x),
      .y = fabs(v0.y),
      .z = fabs(v0.z),
      .w = fabs(v0.w),
  };
}

static inline mcm_Vec4f mcm_Vec4f_add_Vec4f(mcm_Vec4f v0, mcm_Vec4f v1) {
  return (mcm_Vec4f){
      .x = v0.x + v1.x,
      .y = v0.y + v1.y,
      .z = v0.z + v1.z,
      .w = v0.w + v1.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_add_f(mcm_Vec4f v0, float num) {
  return (mcm_Vec4f){
      .x = v0.x + num,
      .y = v0.y + num,
      .z = v0.z + num,
      .w = v0.w + num,
  };
}

static inline mcm_Vec4f mcm_Vec4f_ceil(mcm_Vec4f v0) {
  return (mcm_Vec4f){
      .x = ceil(v0.x),
      .y = ceil(v0.y),
      .z = ceil(v0.z),
      .w = ceil(v0.w),
  };
}

static inline mcm_Vec4f mcm_Vec4f_div_Vec4f(mcm_Vec4f v0, mcm_Vec4f v1) {
  return (mcm_Vec4f){
      .x = v0.x / v1.x,
      .y = v0.y / v1.y,
      .z = v0.z / v1.z,
      .w = v0.w / v1.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_div_f(mcm_Vec4f v0, float num) {
  return (mcm_Vec4f){
      .x = v0.x / num,
      .y = v0.y / num,
      .z = v0.z / num,
      .w = v0.w / num,
  };
}

static inline float mcm_Vec4f_dot(mcm_Vec4f v0, mcm_Vec4f v1) {
  return fma(v0.x, v1.x, fma(v0.y, v1.y, fma(v0.z, v1.z, v0.w * v1.w)));
}

static inline mcm_Vec4f mcm_Vec4f_exp(mcm_Vec4f v0) {
  return (mcm_Vec4f){
      .x = exp(v0.x),
      .y = exp(v0.y),
      .z = exp(v0.z),
      .w = exp(v0.w),
  };
}

static inline mcm_Vec4f mcm_Vec4f_floor(mcm_Vec4f v0) {
  return (mcm_Vec4f){
      .x = floor(v0.x),
      .y = floor(v0.y),
      .z = floor(v0.z),
      .w = floor(v0.w),
  };
}

static inline mcm_Vec4f mcm_Vec4f_from_array(float arr[static 4]) {
  return (mcm_Vec4f){
      .x = arr[0],
      .y = arr[1],
      .z = arr[2],
      .w = arr[3],
  };
}

static inline bool mcm_Vec4f_is_finite(mcm_Vec4f v0) {
  return isfinite(v0.x) && isfinite(v0.y) && isfinite(v0.z) && isfinite(v0.w);
}

static inline float mcm_Vec4f_length(mcm_Vec4f v0) {
  return sqrt(mcm_Vec4f_dot(v0, v0));
}

static inline float mcm_Vec4f_length_squared(mcm_Vec4f v0) {
  return mcm_Vec4f_dot(v0, v0);
}

static inline mcm_Vec4f mcm_Vec4f_max_Vec4f(mcm_Vec4f v0, mcm_Vec4f v1) {
  return (mcm_Vec4f){
      .x = (v0.x > v1.x) ? v0.x : v1.x,
      .y = (v0.y > v1.y) ? v0.y : v1.y,
      .z = (v0.z > v1.z) ? v0.z : v1.z,
      .w = (v0.w > v1.w) ? v0.w : v1.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_max_f(mcm_Vec4f v0, float num) {
  return (mcm_Vec4f){
      .x = (v0.x > num) ? v0.x : num,
      .y = (v0.y > num) ? v0.y : num,
      .z = (v0.z > num) ? v0.z : num,
      .w = (v0.w > num) ? v0.w : num,
  };
}

static inline float mcm_Vec4f_max_element(mcm_Vec4f v0) {
  float max2d = (v0.x > v0.y) ? v0.x : v0.y;
  float max3d = (max2d > v0.z) ? max2d : v0.z;

  return (max3d > v0.w) ? max3d : v0.w;
}

static inline mcm_Vec4f mcm_Vec4f_min_Vec4f(mcm_Vec4f v0, mcm_Vec4f v1) {
  return (mcm_Vec4f){
      .x = (v0.x < v1.x) ? v0.x : v1.x,
      .y = (v0.y < v1.y) ? v0.y : v1.y,
      .z = (v0.z < v1.z) ? v0.z : v1.z,
      .w = (v0.w < v1.w) ? v0.w : v1.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_min_f(mcm_Vec4f v0, float num) {
  return (mcm_Vec4f){
      .x = (v0.x < num) ? v0.x : num,
      .y = (v0.y < num) ? v0.y : num,
      .z = (v0.z < num) ? v0.z : num,
      .w = (v0.w < num) ? v0.w : num,
  };
}

static inline float mcm_Vec4f_min_element(mcm_Vec4f v0) {
  float min2d = (v0.x < v0.y) ? v0.x : v0.y;
  float min3d = (min2d < v0.z) ? min2d : v0.z;

  return (min3d < v0.w) ? min3d : v0.w;
}

static inline mcm_Vec4f mcm_Vec4f_mul_Vec4f(mcm_Vec4f v0, mcm_Vec4f v1) {
  return (mcm_Vec4f){
      .x = v0.x * v1.x,
      .y = v0.y * v1.y,
      .z = v0.z * v1.z,
      .w = v0.w * v1.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_mul_f(mcm_Vec4f v0, float num) {
  return (mcm_Vec4f){
      .x = v0.x * num,
      .y = v0.y * num,
      .z = v0.z * num,
      .w = v0.w * num,
  };
}

static inline mcm_Vec4f mcm_Vec4f_neg(mcm_Vec4f v0) {
  return (mcm_Vec4f){
      .x = -v0.x,
      .y = -v0.y,
      .z = -v0.z,
      .w = -v0.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_normalize(mcm_Vec4f v0) {
  return mcm_Vec4f_div_f(v0, mcm_Vec4f_length(v0));
}

static inline mcm_Vec4f mcm_Vec4f_normalize_or_zero(mcm_Vec4f v0) {
  float length = mcm_Vec4f_length(v0);

  return (mcm_Vec4f_is_finite(v0) && (length > 0.0))
             ? mcm_Vec4f_div_f(v0, length)
             : (mcm_Vec4f){0};
}

static inline mcm_Vec4f mcm_Vec4f_pow(mcm_Vec4f v0, float e) {
  return (mcm_Vec4f){
      .x = pow(v0.x, e),
      .y = pow(v0.y, e),
      .z = pow(v0.z, e),
      .w = pow(v0.w, e),
  };
}

static inline mcm_Vec4f mcm_Vec4f_recip(mcm_Vec4f v0) {
  return (mcm_Vec4f){
      .x = 1.0f / v0.x,
      .y = 1.0f / v0.y,
      .z = 1.0f / v0.z,
      .w = 1.0f / v0.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_round(mcm_Vec4f v0) {
  return (mcm_Vec4f){
      .x = round(v0.x),
      .y = round(v0.y),
      .z = round(v0.z),
      .w = round(v0.w),
  };
}

static inline mcm_Vec4f mcm_Vec4f_sub_Vec4f(mcm_Vec4f v0, mcm_Vec4f v1) {
  return (mcm_Vec4f){
      .x = v0.x - v1.x,
      .y = v0.y - v1.y,
      .z = v0.z - v1.z,
      .w = v0.w - v1.w,
  };
}

static inline mcm_Vec4f mcm_Vec4f_sub_f(mcm_Vec4f v0, float num) {
  return (mcm_Vec4f){
      .x = v0.x - num,
      .y = v0.y - num,
      .z = v0.z - num,
      .w = v0.w - num,
  };
}

static inline void mcm_Vec4f_to_array(mcm_Vec4f v0, float arr[static 4]) {
  arr[0] = v0.x;
  arr[1] = v0.y;
  arr[2] = v0.z;
  arr[3] = v0.z;
}

static inline float mcm_Vec4f_angle_between(mcm_Vec4f v0, mcm_Vec4f v1) {
  return acos(mcm_Vec4f_dot(v0, v1) / sqrt(mcm_Vec4f_length_squared(v0) *
                                           mcm_Vec4f_length_squared(v1)));
}

static inline float mcm_Vec4f_distance_to(mcm_Vec4f v0, mcm_Vec4f v1) {
  return mcm_Vec4f_length(mcm_Vec4f_sub_Vec4f(v0, v1));
}

static inline float mcm_Vec4f_distance_squared_to(mcm_Vec4f v0, mcm_Vec4f v1) {
  return mcm_Vec4f_length_squared(mcm_Vec4f_sub_Vec4f(v0, v1));
}

static inline mcm_Vec4f mcm_Vec4f_fract(mcm_Vec4f v0) {
  return mcm_Vec4f_sub_Vec4f(v0, mcm_Vec4f_floor(v0));
}

static inline mcm_Vec4f mcm_Vec4f_lerp(mcm_Vec4f v0, mcm_Vec4f v1, float s) {
  return mcm_Vec4f_add_Vec4f(v0,
                             mcm_Vec4f_mul_f(mcm_Vec4f_sub_Vec4f(v1, v0), s));
}

static inline mcm_Vec4f mcm_Vec4f_project_onto(mcm_Vec4f this,
                                               mcm_Vec4f other) {
  return mcm_Vec4f_div_f(mcm_Vec4f_mul_f(other, mcm_Vec4f_dot(this, other)),
                         mcm_Vec4f_length_squared(other));
}

static inline mcm_Vec4f mcm_Vec4f_project_onto_normalized(mcm_Vec4f this,
                                                          mcm_Vec4f other) {
  return mcm_Vec4f_mul_f(other, mcm_Vec4f_dot(this, other));
}

static inline mcm_Vec4f mcm_Vec4f_reject_from(mcm_Vec4f this, mcm_Vec4f other) {
  return mcm_Vec4f_sub_Vec4f(this, mcm_Vec4f_project_onto(this, other));
}

#endif
