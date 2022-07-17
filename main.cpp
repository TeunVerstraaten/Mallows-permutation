#include "src/MallowsPermutation.h"

#include <iostream>

int main() {
  const auto perm = MallowsPermutation::generate(2.5, 1000);
  for (unsigned long i : perm)
    std::cout << i << " ";
  std::cout << "\n";
}
