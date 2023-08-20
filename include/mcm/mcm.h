#ifndef MCM_H
#define MCM_H

#include "vec2f.h"
#include "vec3f.h"
#include "vec4f.h"

#define mcm_abs(x)                                                             \
  _Generic((x),                                                                \
      float: fabsf,                                                            \
      mcm_Vec2f: mcm_Vec2f_abs,                                                \
      mcm_Vec3f: mcm_Vec3f_abs,                                                \
      mcm_Vec4f: mcm_Vec4f_abs)((x))

#define mcm_add(x, y)                                                          \
  _Generic((x),                                                                \
      float: _Generic((y), float: ((x) + (y))),                                \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_add_f((x), (y)),                                        \
      mcm_Vec2f: mcm_Vec2f_add_Vec2f((x), (y))),                               \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_add_f((x), (y)),                                        \
      mcm_Vec3f: mcm_Vec3f_add_Vec3f((x), (y))),                               \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_add_f((x), (y)),                                        \
      mcm_Vec4f: mcm_Vec4f_add_Vec4f((x), (y))))

#define mcm_ceil(x)                                                            \
  _Generic((x),                                                                \
      float: ceil((x)),                                                        \
      mcm_Vec2f: mcm_Vec2f_ceil((x)),                                          \
      mcm_Vec3f: mcm_Vec3f_ceil((x)),                                          \
      mcm_Vec4f: mcm_Vec4f_ceil((x)))

#define mcm_div(x, y)                                                          \
  _Generic((x),                                                                \
      float: _Generic((y), float: ((x) / (y))),                                \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_div_f((x), (y)),                                        \
      mcm_Vec2f: mcm_Vec2f_div_Vec2f((x), (y))),                               \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_div_f((x), (y)),                                        \
      mcm_Vec3f: mcm_Vec3f_div_Vec3f((x), (y))),                               \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_div_f((x), (y)),                                        \
      mcm_Vec4f: mcm_Vec4f_div_Vec4f((x), (y))))

#define mcm_dot(x, y)                                                          \
  _Generic((x),                                                                \
      mcm_Vec2f: mcm_Vec2f_dot((x), (y)),                                      \
      mcm_Vec3f: mcm_Vec3f_dot((x), (y)),                                      \
      mcm_Vec4f: mcm_Vec4f_dot((x), (y)))

#define mcm_exp(x, y)                                                          \
  _Generic((x),                                                                \
      mcm_Vec2f: mcm_Vec2f_exp((x), (y)),                                      \
      mcm_Vec3f: mcm_Vec3f_exp((x), (y)),                                      \
      mcm_Vec4f: mcm_Vec4f_exp((x), (y)))

#define mcm_floor(x, y)                                                        \
  _Generic((x),                                                                \
      mcm_Vec2f: mcm_Vec2f_floor((x), (y)),                                    \
      mcm_Vec3f: mcm_Vec3f_floor((x), (y)),                                    \
      mcm_Vec4f: mcm_Vec4f_floor((x), (y)))

#define mcm_is_finite(x)                                                       \
  _Generic((x),                                                                \
      float: isfinite((x)),                                                    \
      mcm_Vec2f: mcm_Vec2f_is_finite((x)),                                     \
      mcm_Vec3f: mcm_Vec3f_is_finite((x)),                                     \
      mcm_Vec4f: mcm_Vec4f_is_finite((x)))

#define mcm_length(x)                                                          \
  _Generic((x),                                                                \
      float: fabs((x)),                                                        \
      mcm_Vec2f: mcm_Vec2f_length((x)),                                        \
      mcm_Vec3f: mcm_Vec3f_length((x)),                                        \
      mcm_Vec4f: mcm_Vec4f_length((x)))

#define mcm_length_squared(x)                                                  \
  _Generic((x),                                                                \
      float: ((x) * (x)),                                                      \
      mcm_Vec2f: mcm_Vec2f_length_squared((x)),                                \
      mcm_Vec3f: mcm_Vec3f_length_squared((x)),                                \
      mcm_Vec4f: mcm_Vec4f_length_squared((x)))

#define mcm_max(x, max) _Generic((x), float: (((x) < max) ? , max))

#define mcm_mul(x, y)                                                          \
  _Generic((x),                                                                \
      float: _Generic((y), float: ((x) * (y))),                                \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_mul_f((x), (y)),                                        \
      mcm_Vec2f: mcm_Vec2f_mul_Vec2f((x), (y))),                               \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_mul_f((x), (y)),                                        \
      mcm_Vec3f: mcm_Vec3f_mul_Vec3f((x), (y))),                               \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_mul_f((x), (y)),                                        \
      mcm_Vec4f: mcm_Vec4f_mul_Vec4f((x), (y))))

#define mcm_neg(x)                                                             \
  _Generic((x),                                                                \
      float: (-(x)),                                                           \
      mcm_Vec2f: mcm_Vec2f_neg((x)),                                           \
      mcm_Vec3f: mcm_Vec3f_neg((x))),                                          \
      mcm_Vec4f : mcm_Vec4f_neg((x))

#define mcm_sub(x, y)                                                          \
  _Generic((x),                                                                \
      float: _Generic((y), float: ((x) - (y))),                                \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_sub_f((x), (y)),                                        \
      mcm_Vec2f: mcm_Vec2f_sub_Vec2f((x), (y))),                               \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_sub_f((x), (y)),                                        \
      mcm_Vec3f: mcm_Vec3f_sub_Vec3f((x), (y))),                               \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_sub_f((x), (y)),                                        \
      mcm_Vec4f: mcm_Vec4f_sub_Vec4f((x), (y))))

#define mcm_to_array(x, out)                                                   \
  _Generic((x),                                                                \
      float: (out)[0] = (x),                                                   \
      mcm_Vec2f: mcm_Vec2f_to_array((x), (out)),                               \
      mcm_Vec3f: mcm_Vec3f_to_array((x), (out)),                               \
      mcm_Vec4f: mcm_Vec4f_to_array((x), (out)))

#endif
