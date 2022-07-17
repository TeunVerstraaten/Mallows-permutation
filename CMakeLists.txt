cmake_minimum_required(VERSION 3.21)
project(Mallows)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wextra -pedantic -Werror -O3)

add_executable(Mallows main.cpp src/MallowsPermutation.cpp src/MallowsPermutation.h src/rndm/Dist.h src/rndm/UniformZeroOne.cpp src/rndm/UniformZeroOne.h src/rndm/UniformInteger.cpp src/rndm/UniformInteger.h src/rndm/RandomGenerator.cpp src/rndm/RandomGenerator.h)
