# Rand Enhanced

It's a fast, statistically-strong PRNG with 32-bit integers that replaces 16-bit `rand()` in C99 for security compliance.

`rand_enhanced()` is the randomization function that generates a 16-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It returns a 16-bit unsigned integer pseudorandom number result.

It has a minimum period of 2³² without broken cycles, therefore meeting the [POSIX minimum period requirements](https://pubs.opengroup.org/onlinepubs/9699919799/functions/rand.html) of `rand()`.

Incrementing `b` outside of `rand_enhanced()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2³².

Zeroland escapes quickly after generating 3 subsequent numbers.

It's faster and safer than every other evaluated C standard implementation of `rand()` as the fastest 16-bit PRNG that generates numbers individually, has a period of at least 2³² and passes `stdin16` PractRand tests with 8MB of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

Multiple widely-used implementations of both POSIX `random()` and C99 `rand()` suffer from substantially-slower speed and weaker `stdin16` PractRand test results that pass with only 512KB to 1MB of numbers.

Furthermore, `rand()` has no memory space guarantees and POSIX `random()` [allocates a large amount of memory](https://man7.org/linux/man-pages/man3/random.3.html#DESCRIPTION) with 31 `long` integers.

Although `rand_enhanced()` is built specifically to replace `rand()` from C99 and beyond, it's still portable to other programming languages.

It uses 32-bit state integers as `rand()` [violating Misra C guidelines](https://www.mathworks.com/help/bugfinder/ref/misrac2023rule21.24.html) already excludes usage in embedded systems that have 8-bit and 16-bit microprocessors.

Although `rand()` is allowed to generate numbers larger than 16 bits, a vast majority of existing `rand()` function instances don't expect anything larger than 16 bits.

Furthermore, `eightomic_rand()` generates numbers in the full 16-bit range of `0` to `65535` instead of `0` to `32767`.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
