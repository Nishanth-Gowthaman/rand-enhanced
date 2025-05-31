#ifndef RAND_ENHANCED_C99_H
#define RAND_ENHANCED_C99_H

#include <stdint.h>

struct rand_enhanced_c99_s {
  uint32_t a;
  uint32_t b;
};

uint16_t rand_enhanced_c99(struct rand_enhanced_c99_s *s);

#endif
