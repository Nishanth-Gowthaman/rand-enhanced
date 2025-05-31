#ifndef RAND_ENHANCED_C89_H
#define RAND_ENHANCED_C89_H

struct rand_enhanced_c89_s {
  unsigned long a;
  unsigned long b;
};

unsigned short rand_enhanced_c89(struct rand_enhanced_c89_s *s);

#endif
