#ifndef MCM_VEC3F_H
#define MCM_VEC3F_H

#include "structs.h"
#include <math.h>
#include <tgmath.h>

static inline mcm_Vec3f mcm_Vec3f_abs(mcm_Vec3f v0) {
  return (mcm_Vec3f){
      .x = fabs(v0.x),
      .y = fabs(v0.y),
      .z = fabs(v0.z),
  };
}

static inline mcm_Vec3f mcm_Vec3f_add_Vec3f(mcm_Vec3f v0, mcm_Vec3f v1) {
  return (mcm_Vec3f){
      .x = v0.x + v1.x,
      .y = v0.y + v1.y,
      .z = v0.z + v1.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_add_f(mcm_Vec3f v0, float num) {
  return (mcm_Vec3f){
      .x = v0.x + num,
      .y = v0.y + num,
      .z = v0.z + num,
  };
}

static inline mcm_Vec3f mcm_Vec3f_ceil(mcm_Vec3f v0) {
  return (mcm_Vec3f){
      .x = ceil(v0.x),
      .y = ceil(v0.y),
      .z = ceil(v0.z),
  };
}

static inline mcm_Vec3f mcm_Vec3f_cross(mcm_Vec3f v0, mcm_Vec3f v1) {
    return (mcm_Vec3f){
        .x = fma(v0.y, v1.z, -v1.y * v0.z),
        .y = fma(v0.z, v1.x, -v1.z * v0.x),
        .z = fma(v0.x, v1.y, -v1.x * v0.y),
    };
}

static inline mcm_Vec3f mcm_Vec3f_div_Vec3f(mcm_Vec3f v0, mcm_Vec3f v1) {
  return (mcm_Vec3f){
      .x = v0.x / v1.x,
      .y = v0.y / v1.y,
      .z = v0.z / v1.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_div_f(mcm_Vec3f v0, float num) {
  return (mcm_Vec3f){
      .x = v0.x / num,
      .y = v0.y / num,
      .z = v0.z / num,
  };
}


static inline float mcm_Vec3f_dot(mcm_Vec3f v0, mcm_Vec3f v1) {
  return fma(v0.x, v1.x, fma(v0.y, v1.y, v0.z * v1.z));
}

static inline mcm_Vec3f mcm_Vec3f_exp(mcm_Vec3f v0) {
  return (mcm_Vec3f){
      .x = exp(v0.x),
      .y = exp(v0.y),
      .z = exp(v0.z),
  };
}

static inline mcm_Vec3f mcm_Vec3f_floor(mcm_Vec3f v0) {
  return (mcm_Vec3f){
      .x = floor(v0.x),
      .y = floor(v0.y),
      .z = floor(v0.z),
  };
}

static inline mcm_Vec3f mcm_Vec3f_from_array(float arr[static 3]) {
  return (mcm_Vec3f){
      .x = arr[0],
      .y = arr[1],
      .z = arr[2],
  };
}

static inline bool mcm_Vec3f_is_finite(mcm_Vec3f v0) {
  return isfinite(v0.x) && isfinite(v0.y) && isfinite(v0.z);
}

static inline float mcm_Vec3f_length(mcm_Vec3f v0) {
  return sqrt(mcm_Vec3f_dot(v0, v0));
}

static inline float mcm_Vec3f_length_squared(mcm_Vec3f v0) {
  return mcm_Vec3f_dot(v0, v0);
}

static inline mcm_Vec3f mcm_Vec3f_max_Vec3f(mcm_Vec3f v0, mcm_Vec3f v1) {
  return (mcm_Vec3f){
      .x = (v0.x > v1.x) ? v0.x : v1.x,
      .y = (v0.y > v1.y) ? v0.y : v1.y,
      .z = (v0.z > v1.z) ? v0.z : v1.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_max_f(mcm_Vec3f v0, float num) {
  return (mcm_Vec3f){
      .x = (v0.x > num) ? v0.x : num,
      .y = (v0.y > num) ? v0.y : num,
      .z = (v0.z > num) ? v0.z : num,
  };
}

static inline float mcm_Vec3f_max_element(mcm_Vec3f v0) {
  float max2d = (v0.x > v0.y) ? v0.x : v0.y;

  return (max2d > v0.z) ? max2d : v0.z;
}

static inline mcm_Vec3f mcm_Vec3f_min_Vec3f(mcm_Vec3f v0, mcm_Vec3f v1) {
  return (mcm_Vec3f){
      .x = (v0.x < v1.x) ? v0.x : v1.x,
      .y = (v0.y < v1.y) ? v0.y : v1.y,
      .z = (v0.z < v1.z) ? v0.z : v1.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_min_f(mcm_Vec3f v0, float num) {
  return (mcm_Vec3f){
      .x = (v0.x < num) ? v0.x : num,
      .y = (v0.y < num) ? v0.y : num,
      .z = (v0.z < num) ? v0.z : num,
  };
}

static inline float mcm_Vec3f_min_element(mcm_Vec3f v0) {
  float min2d = (v0.x < v0.y) ? v0.x : v0.y;

  return (min2d < v0.z) ? min2d : v0.z;
}

static inline mcm_Vec3f mcm_Vec3f_mul_Vec3f(mcm_Vec3f v0, mcm_Vec3f v1) {
  return (mcm_Vec3f){
      .x = v0.x * v1.x,
      .y = v0.y * v1.y,
      .z = v0.z * v1.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_mul_f(mcm_Vec3f v0, float num) {
  return (mcm_Vec3f){
      .x = v0.x * num,
      .y = v0.y * num,
      .z = v0.z * num,
  };
}

static inline mcm_Vec3f mcm_Vec3f_neg(mcm_Vec3f v0) {
  return (mcm_Vec3f){
      .x = -v0.x,
      .y = -v0.y,
      .z = -v0.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_normalize(mcm_Vec3f v0) {
  return mcm_Vec3f_div_f(v0, mcm_Vec3f_length(v0));
}

static inline mcm_Vec3f mcm_Vec3f_normalize_or_zero(mcm_Vec3f v0) {
  float length = mcm_Vec3f_length(v0);

  return (mcm_Vec3f_is_finite(v0) && (length > 0.0))
             ? mcm_Vec3f_div_f(v0, length)
             : (mcm_Vec3f){0};
}

static inline mcm_Vec3f mcm_Vec3f_pow(mcm_Vec3f v0, float e) {
  return (mcm_Vec3f){
      .x = pow(v0.x, e),
      .y = pow(v0.y, e),
      .z = pow(v0.z, e),
  };
}

static inline mcm_Vec3f mcm_Vec3f_recip(mcm_Vec3f v0) {
  return (mcm_Vec3f){
      .x = 1.0f / v0.x,
      .y = 1.0f / v0.y,
      .z = 1.0f / v0.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_round(mcm_Vec3f v0) {
  return (mcm_Vec3f){
      .x = round(v0.x),
      .y = round(v0.y),
      .z = round(v0.z),
  };
}

static inline mcm_Vec3f mcm_Vec3f_sub_Vec3f(mcm_Vec3f v0, mcm_Vec3f v1) {
  return (mcm_Vec3f){
      .x = v0.x - v1.x,
      .y = v0.y - v1.y,
      .z = v0.z - v1.z,
  };
}

static inline mcm_Vec3f mcm_Vec3f_sub_f(mcm_Vec3f v0, float num) {
  return (mcm_Vec3f){
      .x = v0.x - num,
      .y = v0.y - num,
      .z = v0.z - num,
  };
}

static inline mcm_Vec4f mcm_Vec3f_to_Vec4f(mcm_Vec3f v0, float w) {
  return (mcm_Vec4f){
      .x = v0.x,
      .y = v0.y,
      .z = v0.z,
      .w = w,
  };
}

static inline void mcm_Vec3f_to_array(mcm_Vec3f v0, float arr[static 3]) {
  arr[0] = v0.x;
  arr[1] = v0.y;
  arr[2] = v0.z;
}

static inline float mcm_Vec3f_angle_between(mcm_Vec3f v0, mcm_Vec3f v1) {
  return acos(mcm_Vec3f_dot(v0, v1) / sqrt(mcm_Vec3f_length_squared(v0) *
                                           mcm_Vec3f_length_squared(v1)));
}

static inline float mcm_Vec3f_distance_to(mcm_Vec3f v0, mcm_Vec3f v1) {
  return mcm_Vec3f_length(mcm_Vec3f_sub_Vec3f(v0, v1));
}

static inline float mcm_Vec3f_distance_squared_to(mcm_Vec3f v0, mcm_Vec3f v1) {
  return mcm_Vec3f_length_squared(mcm_Vec3f_sub_Vec3f(v0, v1));
}

static inline mcm_Vec3f mcm_Vec3f_fract(mcm_Vec3f v0) {
  return mcm_Vec3f_sub_Vec3f(v0, mcm_Vec3f_floor(v0));
}

static inline mcm_Vec3f mcm_Vec3f_lerp(mcm_Vec3f v0, mcm_Vec3f v1, float s) {
  return mcm_Vec3f_add_Vec3f(v0,
                             mcm_Vec3f_mul_f(mcm_Vec3f_sub_Vec3f(v1, v0), s));
}

static inline mcm_Vec3f mcm_Vec3f_project_onto(mcm_Vec3f this,
                                               mcm_Vec3f other) {
  return mcm_Vec3f_div_f(mcm_Vec3f_mul_f(other, mcm_Vec3f_dot(this, other)),
                         mcm_Vec3f_length_squared(other));
}

static inline mcm_Vec3f mcm_Vec3f_project_onto_normalized(mcm_Vec3f this,
                                                          mcm_Vec3f other) {
  return mcm_Vec3f_mul_f(other, mcm_Vec3f_dot(this, other));
}

static inline mcm_Vec3f mcm_Vec3f_reject_from(mcm_Vec3f this, mcm_Vec3f other) {
  return mcm_Vec3f_sub_Vec3f(this, mcm_Vec3f_project_onto(this, other));
}

#endif
