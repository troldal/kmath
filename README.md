# kmath Library

`kmath` is a header-only C++ library that serves as a wrapper around the standard `<cmath>` header and the GCEM library
for compile-time math computations. It is designed to utilize GCEM functions for compile-time calculations and the
standard `<cmath>` functions for runtime, offering the best of both worlds in terms of performance and utility.

## Features

- **Header-only**: Easy to integrate into any C++20 project.
- **Compile-time Computations**: Leverages the GCEM library for compile-time calculations.
- **Runtime Performance**: Utilizes the highly optimized `<cmath>` functions for runtime operations.
- **Modern C++**: Requires C++20, taking advantage of the latest language features for maximum efficiency and safety.
- **CMake Integration**: Supports CMake 3.21+, making it easy to add to your build system.

## Getting Started

### Prerequisites

- A C++20 compliant compiler (e.g., GCC, Clang, MSVC).
- CMake version 3.21 or higher for building the project.

### Installation

As `kMath` is a header-only library, installation is straightforward. You can add it to your project as a submodule or
simply copy the `kmath` directory into your project's include path.

To add `kMath` as a submodule:

```sh
git submodule add https://github.com/yourusername/kmath.git external/kmath
git submodule update --init --recursive
```

Then, in your CMakeLists.txt, add kmath as an interface library:

```cmake
add_subdirectory(external/kmath)
target_link_libraries(your_target_name PUBLIC kmath)
```

### Example Usage

```cpp
#include <kmath/kmath.hpp>

int main() {
    constexpr double compile_time_result = kmath::cos(1.5707963267948966); // Compile-time calculation
    double run_time_result = kmath::cos(1.5707963267948966); // Run-time calculation

    std::cout << "Compile-time cos(pi/2): " << compile_time_result << std::endl;
    std::cout << "Run-time cos(pi/2): " << run_time_result << std::endl;

    return 0;
}
```

### Documentation

The documentation for each function within the kMath library is provided within the code via doxygen comments. To
generate the full documentation, run doxygen in the project root directory.

### Contributing

Contributions to kMath are welcome! To contribute, please fork the repository, create a feature branch, and submit a
pull request.

### Testing

kMath uses a suite of unit tests to ensure functionality. Although the library itself is header-only, you can run the
tests using the provided CMake configuration.

### License

kMath is licensed under the Apache License, Version 2.0. See the LICENSE file for more details.

### Acknowledgements

GCEM library for providing compile-time math functions.
Contributors who have spent time to improve the kMath library.

### Support

If you have any questions or encounter issues, please open an issue on the GitHub repository's issue tracker.


