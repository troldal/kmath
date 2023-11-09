/*################################################################################
  ##
  ##   Copyright (C) 2016-2023 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#define TEST_PRINT_PRECISION_1 3
#define TEST_PRINT_PRECISION_2 18

#include "gcem_tests.hpp"

int main() {
  print_begin("atanh");

  //

  GCEM_TEST_COMPARE_VALS(gcem::atanh, std::atanh, -0.99L);
  GCEM_TEST_COMPARE_VALS(gcem::atanh, std::atanh, 0.0L);
  GCEM_TEST_COMPARE_VALS(gcem::atanh, std::atanh, 0.001L);
  GCEM_TEST_COMPARE_VALS(gcem::atanh, std::atanh, 1.0L);
  GCEM_TEST_COMPARE_VALS(gcem::atanh, std::atanh, -1.0L);
  GCEM_TEST_COMPARE_VALS(gcem::atanh, std::atanh, 1.1L);

  GCEM_TEST_COMPARE_VALS(gcem::atanh, std::atanh, TEST_NAN);

  //

  print_final("atanh");

  return 0;
}
