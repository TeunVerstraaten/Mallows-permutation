//
// Created by pc on 27-01-22.
//

#ifndef H_SRC_MALLOWSPERMUTATION_H
#define H_SRC_MALLOWSPERMUTATION_H

#include <cstddef>
#include <deque>

class MallowsPermutation {

 public:
  // Generate Mallows(length, q) distributed permutation, see e.g. https://arxiv.org/abs/2201.11610
  static std::deque<size_t> generate(double q, size_t length);

 private:
  static std::deque<size_t> generateImplementation(double q, size_t length);
};

#endif  // H_SRC_MALLOWSPERMUTATION_H
