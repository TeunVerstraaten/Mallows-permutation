//
// Created by pc on 27-01-22.
//

#include "RandomGenerator.h"

namespace rndm {
RandomGenerator::RandomGenerator(size_t seed) : m_uniform_zero_one(seed), m_uniform_integer(seed) {}

UniformZeroOne& RandomGenerator::uniform_zero_one() {
  return m_uniform_zero_one;
}

UniformInteger& RandomGenerator::uniform_integer() {
  return m_uniform_integer;
}

}  // namespace rndm
