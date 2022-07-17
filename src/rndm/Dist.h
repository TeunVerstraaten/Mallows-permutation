#ifndef H_SRC_RANDOM_DIST_H
#define H_SRC_RANDOM_DIST_H

#include "RandomGenerator.h"

#include <cassert>
#include <cstddef>

namespace rndm {

inline size_t truncated_geometric(double q, size_t n, RandomGenerator& random_generator) {
  assert(q < 1.0 && q > 0.0);
  auto result = static_cast<size_t>(std::floor(
      std::log(1.0 - random_generator.uniform_zero_one()() * (1.0 - std::pow(1.0 - q, n))) / std::log(1.0 - q)));
  assert(result <= n);
  return result;
}

}  // namespace rndm

#endif  // H_SRC_RANDOM_DIST_H
