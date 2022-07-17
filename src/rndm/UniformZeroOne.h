//
// Created by pc on 27-01-22.
//

#ifndef H_SRC_RANDOM_UNIFORMZEROONE_H
#define H_SRC_RANDOM_UNIFORMZEROONE_H

#include <random>

namespace rndm {
class UniformZeroOne {

  std::mt19937 m_mersenne_twister;
  std::uniform_real_distribution<> m_distribution;

 public:
  UniformZeroOne();
  explicit UniformZeroOne(size_t seed);

  double operator()();
};

}  // namespace rndm

#endif  // H_SRC_RANDOM_UNIFORMZEROONE_H
