# rand-enhanced 🎲

![GitHub release](https://img.shields.io/github/release/Nishanth-Gowthaman/rand-enhanced.svg)

Welcome to the **rand-enhanced** repository! This project provides a fast and statistically strong pseudo-random number generator (PRNG) that uses 32-bit integers. It is designed to replace the traditional 16-bit `rand()` function in C, ensuring better security compliance and performance.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Introduction

In many applications, random number generation is crucial. However, the standard `rand()` function in C often falls short in terms of both security and statistical quality. The **rand-enhanced** library aims to address these issues by providing a robust PRNG that generates 32-bit integers. This makes it suitable for cryptographic applications and other scenarios where high-quality randomness is required.

## Features

- **Fast Performance**: Optimized for speed, making it suitable for real-time applications.
- **Statistical Strength**: Produces high-quality random numbers that meet statistical standards.
- **Security Compliance**: Designed to be secure, making it suitable for sensitive applications.
- **Easy Integration**: Simple API that allows for easy integration into existing C projects.

## Installation

To get started with **rand-enhanced**, you can download the latest release from our [Releases page](https://github.com/Nishanth-Gowthaman/rand-enhanced/releases). Simply download the appropriate file for your system, and follow the installation instructions provided in the documentation.

## Usage

Using **rand-enhanced** is straightforward. After installation, you can include the header file in your C program:

```c
#include "rand-enhanced.h"
```

You can then initialize the PRNG and generate random numbers as follows:

```c
// Initialize the PRNG
init_rand();

// Generate a random number
uint32_t random_number = rand32();
```

## Examples

Here are a few examples demonstrating how to use the library effectively:

### Basic Example

```c
#include <stdio.h>
#include "rand-enhanced.h"

int main() {
    init_rand(); // Initialize the PRNG
    for (int i = 0; i < 10; i++) {
        printf("Random Number %d: %u\n", i + 1, rand32());
    }
    return 0;
}
```

### Secure Random Number Generation

For applications requiring secure random numbers, ensure you properly seed the PRNG:

```c
#include <stdio.h>
#include <time.h>
#include "rand-enhanced.h"

int main() {
    // Seed with the current time
    seed_rand(time(NULL));
    for (int i = 0; i < 10; i++) {
        printf("Secure Random Number %d: %u\n", i + 1, rand32());
    }
    return 0;
}
```

## Contributing

We welcome contributions from the community! If you want to help improve **rand-enhanced**, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your branch to your forked repository.
5. Open a pull request with a clear description of your changes.

Please ensure that your code adheres to our coding standards and includes appropriate tests.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For any questions or feedback, feel free to reach out via the issues section on GitHub or contact me directly. You can also check the [Releases page](https://github.com/Nishanth-Gowthaman/rand-enhanced/releases) for updates and new features.

---

Thank you for checking out **rand-enhanced**! We hope you find it useful for your projects. Happy coding!