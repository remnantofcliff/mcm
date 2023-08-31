#ifndef MCM_F_H
#define MCM_F_H

static inline float mcm_f_add(float lh, float rh) { return lh + rh; }

static inline float mcm_f_div(float lh, float rh) { return lh / rh; }

static inline float mcm_f_max(float num, float max) {
  return (num < max) ? max : num;
}

static inline float mcm_f_mul(float lh, float rh) { return lh * rh; }

static inline float mcm_f_min(float num, float min) {
  return (num < min) ? num : min;
}

static inline float mcm_f_neg(float num) { return -num; }

static inline float mcm_f_squared(float num) { return num * num; }

static inline float mcm_f_sub(float lh, float rh) { return lh - rh; }

static inline void mcm_f_to_array(float num, float out[static 1]) {
  out[0] = num;
}

#endif
