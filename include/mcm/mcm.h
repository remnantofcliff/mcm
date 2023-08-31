#ifndef MCM_H
#define MCM_H

#include "f.h"
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
      float: _Generic((y),                                                     \
      float: mcm_f_add,                                                        \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_add_f,                                                  \
      mcm_Vec2f: mcm_Vec2f_add_Vec2f,                                          \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_add_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: mcm_Vec3f_add_Vec3f,                                          \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_add_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: mcm_Vec4f_add_Vec4f))(x, y)

#define mcm_ceil(x)                                                            \
  _Generic((x),                                                                \
      float: ceil,                                                             \
      mcm_Vec2f: mcm_Vec2f_ceil,                                               \
      mcm_Vec3f: mcm_Vec3f_ceil,                                               \
      mcm_Vec4f: mcm_Vec4f_ceil)((x))

#define mcm_div(x, y)                                                          \
  _Generic((x),                                                                \
      float: _Generic((y),                                                     \
      float: mcm_f_div,                                                        \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_div_f,                                                  \
      mcm_Vec2f: mcm_Vec2f_div_Vec2f,                                          \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_div_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: mcm_Vec3f_div_Vec3f,                                          \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_div_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: mcm_Vec4f_div_Vec4f))

#define mcm_dot(x, y)                                                          \
  _Generic((x),                                                                \
      mcm_Vec2f: mcm_Vec2f_dot,                                                \
      mcm_Vec3f: mcm_Vec3f_dot,                                                \
      mcm_Vec4f: mcm_Vec4f_dot)(x, y)

#define mcm_exp(x)                                                             \
  _Generic((x),                                                                \
      float: expf,                                                             \
      mcm_Vec2f: mcm_Vec2f_exp,                                                \
      mcm_Vec3f: mcm_Vec3f_exp,                                                \
      mcm_Vec4f: mcm_Vec4f_exp)(x)

#define mcm_floor(x)                                                           \
  _Generic((x),                                                                \
      mcm_Vec2f: mcm_Vec2f_floor,                                              \
      mcm_Vec3f: mcm_Vec3f_floor,                                              \
      mcm_Vec4f: mcm_Vec4f_floor)(x)

#define mcm_is_finite(x)                                                       \
  _Generic((x),                                                                \
      float: isfinite,                                                         \
      mcm_Vec2f: mcm_Vec2f_is_finite,                                          \
      mcm_Vec3f: mcm_Vec3f_is_finite,                                          \
      mcm_Vec4f: mcm_Vec4f_is_finite)(x)

#define mcm_length(x)                                                          \
  _Generic((x),                                                                \
      float: fabs,                                                             \
      mcm_Vec2f: mcm_Vec2f_length,                                             \
      mcm_Vec3f: mcm_Vec3f_length,                                             \
      mcm_Vec4f: mcm_Vec4f_length)(x)

#define mcm_length_squared(x)                                                  \
  _Generic((x),                                                                \
      float: mcm_f_squared,                                                    \
      mcm_Vec2f: mcm_Vec2f_length_squared,                                     \
      mcm_Vec3f: mcm_Vec3f_length_squared,                                     \
      mcm_Vec4f: mcm_Vec4f_length_squared)(x)

#define mcm_max(x, max)                                                        \
  _Generic((x),                                                                \
      float: _Generic((max),                                                   \
      float: mcm_f_max,                                                        \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec2f: _Generic((max),                                               \
      float: mcm_Vec2f_max_f,                                                  \
      mcm_Vec2f: mcm_Vec2f_max_Vec2f,                                          \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec3f: _Generic((max),                                               \
      float: mcm_Vec3f_max_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: mcm_Vec3f_max_Vec3f,                                          \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec4f: _Generic((max),                                               \
      float: mcm_Vec4f_max_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: mcm_Vec4f_max_Vec4f))((x), (max))

#define mcm_max_element(x)                                                     \
  _Generic((x),                                                                \
      mcm_Vec2f: mcm_Vec2f_max_element,                                        \
      mcm_Vec3f: mcm_Vec3f_max_element,                                        \
      mcm_Vec4f: mcm_Vec4f_max_element)(x)

#define mcm_min(x, min)                                                        \
  _Generic((x),                                                                \
      float: _Generic((min),                                                   \
      float: mcm_f_min,                                                        \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec2f: _Generic((min),                                               \
      float: mcm_Vec2f_min,                                                    \
      mcm_Vec2f: mcm_Vec2f_min,                                                \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec3f: _Generic((min),                                               \
      float: mcm_Vec3f_min,                                                    \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: mcm_Vec3f_min,                                                \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec4f: _Generic((min),                                               \
      float: mcm_Vec4f_min,                                                    \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: mcm_Vec4f_min))((x), (min))

#define mcm_min_element(x)                                                     \
  _Generic((x),                                                                \
      mcm_Vec2f: mcm_Vec2f_min_element((x)),                                   \
      mcm_Vec3f: mcm_Vec3f_min_element((x)),                                   \
      mcm_Vec4f: mcm_Vec4f_min_element((x)))(x)

#define mcm_mul(x, y)                                                          \
  _Generic((x),                                                                \
      float: _Generic((y),                                                     \
      float: mcm_f_mul,                                                        \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_mul_f,                                                  \
      mcm_Vec2f: mcm_Vec2f_mul_Vec2f,                                          \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_mul_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: mcm_Vec3f_mul_Vec3f,                                          \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_mul_f,                                                  \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: mcm_Vec4f_mul_Vec4f))((x), (y))

#define mcm_neg(x)                                                             \
  _Generic((x),                                                                \
      float: mcm_f_neg,                                                        \
      mcm_Vec2f: mcm_Vec2f_neg,                                                \
      mcm_Vec3f: mcm_Vec3f_neg,                                                \
      mcm_Vec4f: mcm_Vec4f_neg)(x)

#define mcm_sub(x, y)                                                          \
  _Generic((x),                                                                \
      float: _Generic((y),                                                     \
      float: mcm_f_sub,                                                        \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec2f: _Generic((y),                                                 \
      float: mcm_Vec2f_sub,                                                    \
      mcm_Vec2f: mcm_Vec2f_sub,                                                \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec3f: _Generic((y),                                                 \
      float: mcm_Vec3f_sub,                                                    \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: mcm_Vec3f_sub,                                                \
      mcm_Vec4f: nullptr),                                                     \
      mcm_Vec4f: _Generic((y),                                                 \
      float: mcm_Vec4f_sub,                                                    \
      mcm_Vec2f: nullptr,                                                      \
      mcm_Vec3f: nullptr,                                                      \
      mcm_Vec4f: mcm_Vec4f_sub))((x), (y))

#define mcm_to_array(x, out)                                                   \
  _Generic((x),                                                                \
      float: mcm_f_to_array,                                                   \
      mcm_Vec2f: mcm_Vec2f_to_array,                                           \
      mcm_Vec3f: mcm_Vec3f_to_array,                                           \
      mcm_Vec4f: mcm_Vec4f_to_array)((x), (out))

#endif
