//
// Created by pc on 27-01-22.
//

#include "UniformInteger.h"

namespace rndm {

UniformInteger::UniformInteger(size_t seed) : m_generator(seed) {}

UniformInteger::ResultType UniformInteger::operator()() {
  return m_generator();
}

}  // namespace rndm