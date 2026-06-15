cmake_minimum_required(VERSION 3.10)
project(LaMarchaDeLasLetras)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create library with instructor logic
add_library(letras
        src/letras.cpp
)

# Tell CMake where letras.h lives
target_include_directories(letras PUBLIC src)

# Student executable
add_executable(main
        src/main.cpp
)

target_link_libraries(main letras)

# Test executable
add_executable(tests
        tests/test_letras.cpp
)

target_link_libraries(tests letras)

enable_testing()
add_test(NAME VocalesTest COMMAND tests)
