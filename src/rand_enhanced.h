#ifndef RAND_ENHANCED_H
#define RAND_ENHANCED_H

#include <stdint.h>

struct rand_enhanced_s {
  uint32_t a;
  uint32_t b;
};

uint16_t rand_enhanced(struct rand_enhanced_s *s);

#endif
