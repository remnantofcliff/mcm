#ifndef MCM_STRUCTS_H
#define MCM_STRUCTS_H

#include <stdint.h>

typedef struct mcm_Vec2 {
  double x, y;
} mcm_Vec2;

typedef struct mcm_Vec3 {
  double x, y, z;
} mcm_Vec3;

typedef struct mcm_Vec4 {
  double x, y, z, w;
} mcm_Vec4;

typedef struct mcm_Vec2f {
  float x, y;
} mcm_Vec2f;

typedef struct mcm_Vec3f {
  float x, y, z;
} mcm_Vec3f;

typedef struct mcm_Vec4f {
  float x, y, z, w;
} mcm_Vec4f;

typedef struct mcm_Vec2i8 {
  int8_t x, y;
} mcm_Vec2i8;

typedef struct mcm_Vec3i8 {
  int8_t x, y, z;
} mcm_Vec3i8;

typedef struct mcm_Vec4i8 {
  int8_t x, y, z, w;
} mcm_Vec4i8;

typedef struct mcm_Vec2i16 {
  int16_t x, y;
} mcm_Vec2i16;

typedef struct mcm_Vec3i16 {
  int16_t x, y, z;
} mcm_Vec3i16;

typedef struct mcm_Vec4i16 {
  int16_t x, y, z, w;
} mcm_Vec4i16;

typedef struct mcm_Vec2i32 {
  int32_t x, y;
} mcm_Vec2i32;

typedef struct mcm_Vec3i32 {
  int32_t x, y, z;
} mcm_Vec3i32;

typedef struct mcm_Vec4i32 {
  int32_t x, y, z, w;
} mcm_Vec4i32;

typedef struct mcm_Vec2i64 {
  int64_t x, y;
} mcm_Vec2i64;

typedef struct mcm_Vec3i64 {
  int64_t x, y, z;
} mcm_Vec3i64;

typedef struct mcm_Vec4i64 {
  int64_t x, y, z, w;
} mcm_Vec4i64;

typedef struct mcm_Vec2u8 {
  uint8_t x, y;
} mcm_Vec2u8;

typedef struct mcm_Vec3u8 {
  uint8_t x, y, z;
} mcm_Vec3u8;

typedef struct mcm_Vec4u8 {
  uint8_t x, y, z, w;
} mcm_Vec4u8;

typedef struct mcm_Vec2u16 {
  uint16_t x, y;
} mcm_Vec2u16;

typedef struct mcm_Vec3u16 {
  uint16_t x, y, z;
} mcm_Vec3u16;

typedef struct mcm_Vec4u16 {
  uint16_t x, y, z, w;
} mcm_Vec4u16;

typedef struct mcm_Vec2u32 {
  uint32_t x, y;
} mcm_Vec2u32;

typedef struct mcm_Vec3u32 {
  uint32_t x, y, z;
} mcm_Vec3u32;

typedef struct mcm_Vec4u32 {
  uint32_t x, y, z, w;
} mcm_Vec4u32;

typedef struct mcm_Vec2u64 {
  uint64_t x, y;
} mcm_Vec2u64;

typedef struct mcm_Vec3u64 {
  uint64_t x, y, z;
} mcm_Vec3u64;

typedef struct mcm_Vec4u64 {
  uint64_t x, y, z, w;
} mcm_Vec4u64;

#endif
