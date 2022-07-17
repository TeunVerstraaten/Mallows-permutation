//
// Created by pc on 27-01-22.
//

#ifndef H_SRC_RANDOM_RANDOMGENERATOR_H
#define H_SRC_RANDOM_RANDOMGENERATOR_H

#include "UniformInteger.h"
#include "UniformZeroOne.h"

namespace rndm {

class RandomGenerator {

  UniformZeroOne m_uniform_zero_one;
  UniformInteger m_uniform_integer;

 public:
  RandomGenerator() = default;
  explicit RandomGenerator(size_t seed);

  UniformZeroOne& uniform_zero_one();
  UniformInteger& uniform_integer();
};

}  // namespace rndm

#endif  // H_SRC_RANDOM_RANDOMGENERATOR_H
