#include "mcm/mcm.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  mcm_Vec2f vec2 = {
      .x = -1.0,
      .y = -12.0,
  };

  mcm_Vec3f vec3 = {
      .x = -1.0,
      .y = -12.0,
      .z = -123.0,
  };

#define ARRAY_SZ 2

  float out[ARRAY_SZ] = {0};

  mcm_to_array(vec2, out);

  for (size_t i = 0; i < ARRAY_SZ; i++)
    printf("%f\n", out[i]);

  return EXIT_SUCCESS;
}
