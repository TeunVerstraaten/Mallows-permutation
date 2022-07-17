//
// Created by pc on 27-01-22.
//

#ifndef H_SRC_RANDOM_UNIFORMINTEGER_H
#define H_SRC_RANDOM_UNIFORMINTEGER_H

#include <random>

namespace rndm {

class UniformInteger {

  std::default_random_engine m_generator;
  typedef std::default_random_engine::result_type ResultType;

 public:
  UniformInteger() = default;
  explicit UniformInteger(size_t seed);

  [[nodiscard]] ResultType operator()();
};

}  // namespace rndm

#endif  // H_SRC_RANDOM_UNIFORMINTEGER_H
