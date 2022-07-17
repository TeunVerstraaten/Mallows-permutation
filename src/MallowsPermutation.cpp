#include "MallowsPermutation.h"

#include "rndm/Dist.h"

#include <algorithm>

static void extend_if_needed(size_t& max, size_t new_size, std::deque<size_t>& vec) {
  if (new_size >= vec.size()) {
    auto const missing = new_size - vec.size() + 1;
    for (size_t i = 0; i != missing; ++i) {
      ++max;
      vec.push_back(max);
    }
  }
}

std::deque<size_t> MallowsPermutation::generate(double q, size_t length) {
  assert(q > 0.0 && q != 1.0);
  if (q < 1.0)  // If q < 1.0 we generate as normal
    return generateImplementation(q, length);

  // If q > 1.0, then we generate with 1.0 / q, and then reverse the result
  auto result = generateImplementation(1.0 / q, length);
  std::reverse(result.begin(), result.end());
  return result;
}

std::deque<size_t> MallowsPermutation::generateImplementation(double q, size_t length) {
  // See e.g. https://arxiv.org/abs/2201.11610 for the algorithm

  assert(q < 1.0);
  std::deque<size_t> unselected = {0};
  size_t max = 0;
  std::deque<size_t> result(length);
  rndm::RandomGenerator generator;
  for (size_t i = 0; i != length; ++i) {
    const size_t k = rndm::truncated_geometric(1.0 - q, length - result.size() - 1, generator);
    // We select the kth smallest number not yet selected, but we do not want to store the entire vector of unselected
    // numbers because k is typically small. So we store only a small part of this vector and extend it when k is so
    // that it is necessary
    extend_if_needed(max, k, unselected);
    result[i] = unselected[k];
    unselected.erase(std::next(unselected.begin(), k));
  }
  return result;
}
