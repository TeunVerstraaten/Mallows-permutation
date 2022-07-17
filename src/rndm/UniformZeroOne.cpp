//
// Created by pc on 27-01-22.
//

#include "UniformZeroOne.h"

namespace rndm {

UniformZeroOne::UniformZeroOne() : m_mersenne_twister(std::random_device{}()), m_distribution(0.0, 1.0) {}

UniformZeroOne::UniformZeroOne(size_t seed) : m_mersenne_twister(seed), m_distribution(0.0, 1.0) {}

double UniformZeroOne::operator()() {
  return m_distribution(m_mersenne_twister);
}

}  // namespace rndm