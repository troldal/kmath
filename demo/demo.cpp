//
// Created by I22696 on 09-11-2023.
//

#include <iostream>
#include <kmath.hpp>

int main() {

  constexpr int abs1 = kmath::abs(-42);
  std::cout << abs1 << std::endl;

  int abs2 = kmath::abs(-33);
  std::cout << abs2 << std::endl;

  return 0;
}