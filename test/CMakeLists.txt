# Find the Catch2 package from vcpkg
find_package(Catch2 CONFIG REQUIRED)

# Create a test executable
add_executable(tests kmath_test.cpp)

# Link the Catch2::Catch2 target to your test executable
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain kmath::kmath)

# Enable CTest testing
enable_testing()

# Register the test executable as a CTest test
include(CTest)
include(Catch)
catch_discover_tests(tests)