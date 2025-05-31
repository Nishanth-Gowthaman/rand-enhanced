#include "rand_enhanced_c99.h"

uint16_t rand_enhanced_c99(struct rand_enhanced_c99_s *s) {
  s->a = ((s->a << 13) | (s->a >> 19)) ^ s->b;
  s->b += 1111111;
  return s->a;
}
