//
// Created by kenne on 10/11/2023.
//

#define CATCH_CONFIG_MAIN
#include "kmath.hpp"
#include <catch2/catch_all.hpp>
#include <limits>
#include <numeric>

constexpr double eps = kmath::sqrt(std::numeric_limits<double>::epsilon());

TEST_CASE("abs function with integers", "[kmath][abs]") {

  constexpr auto cabs1 = kmath::abs(5);
  constexpr auto cabs2 = kmath::abs(-5);
  constexpr auto cabs3 = kmath::abs(0);
  constexpr auto cabs4 = kmath::abs(-0);
  auto rabs1 = kmath::abs(5);
  auto rabs2 = kmath::abs(-5);
  auto rabs3 = kmath::abs(0);
  auto rabs4 = kmath::abs(-0);

  REQUIRE_THAT(cabs1, Catch::Matchers::WithinAbs(rabs1, eps));
  REQUIRE_THAT(cabs2, Catch::Matchers::WithinAbs(rabs2, eps));
  REQUIRE_THAT(cabs3, Catch::Matchers::WithinAbs(rabs3, eps));
  REQUIRE_THAT(cabs4, Catch::Matchers::WithinAbs(rabs4, eps));
}

TEST_CASE("abs function with floating point numbers", "[kmath][abs]") {

  constexpr auto cabs1 = kmath::abs(5.5);
  constexpr auto cabs2 = kmath::abs(-5.5);
  constexpr auto cabs3 = kmath::abs(0.0);
  constexpr auto cabs4 = kmath::abs(-0.0);
  auto rabs1 = kmath::abs(5.5);
  auto rabs2 = kmath::abs(-5.5);
  auto rabs3 = kmath::abs(0.0);
  auto rabs4 = kmath::abs(-0.0);

  REQUIRE_THAT(cabs1, Catch::Matchers::WithinAbs(rabs1, eps));
  REQUIRE_THAT(cabs2, Catch::Matchers::WithinAbs(rabs2, eps));
  REQUIRE_THAT(cabs3, Catch::Matchers::WithinAbs(rabs3, eps));
  REQUIRE_THAT(cabs4, Catch::Matchers::WithinAbs(rabs4, eps));
}

TEST_CASE("acos function with integers", "[kmath][acos]") {

  constexpr auto cacos1 = kmath::acos(1);
  constexpr auto cacos2 = kmath::acos(0);
  constexpr auto cacos3 = kmath::acos(-1);
  auto racos1 = kmath::acos(1);
  auto racos2 = kmath::acos(0);
  auto racos3 = kmath::acos(-1);

  REQUIRE_THAT(cacos1, Catch::Matchers::WithinAbs(racos1, eps));
  REQUIRE_THAT(cacos2, Catch::Matchers::WithinAbs(racos2, eps));
  REQUIRE_THAT(cacos3, Catch::Matchers::WithinAbs(racos3, eps));
}

TEST_CASE("acos function with floating point numbers", "[kmath][acos]") {

  constexpr auto cacos1 = kmath::acos(0.5);
  constexpr auto cacos2 = kmath::acos(-0.5);
  auto racos1 = kmath::acos(0.5);
  auto racos2 = kmath::acos(-0.5);

  REQUIRE_THAT(cacos1, Catch::Matchers::WithinAbs(racos1, eps));
  REQUIRE_THAT(cacos2, Catch::Matchers::WithinAbs(racos2, eps));
}

TEST_CASE("acosh function with integers", "[kmath][acosh]") {

  constexpr auto cacosh1 = kmath::acosh(1);
  constexpr auto cacosh2 = kmath::acosh(2);
  auto racosh1 = kmath::acosh(1);
  auto racosh2 = kmath::acosh(2);

  REQUIRE_THAT(cacosh1, Catch::Matchers::WithinAbs(racosh1, eps));
  REQUIRE_THAT(cacosh2, Catch::Matchers::WithinAbs(racosh2, eps));
}

TEST_CASE("acosh function with floating point numbers", "[kmath][acosh]") {

  constexpr auto cacosh1 = kmath::acosh(1.5);
  constexpr auto cacosh2 = kmath::acosh(2.5);
  auto racosh1 = kmath::acosh(1.5);
  auto racosh2 = kmath::acosh(2.5);

  REQUIRE_THAT(cacosh1, Catch::Matchers::WithinAbs(racosh1, eps));
  REQUIRE_THAT(cacosh2, Catch::Matchers::WithinAbs(racosh2, eps));
}

TEST_CASE("asin function with integers", "[kmath][asin]") {

  constexpr auto casin1 = kmath::asin(1);
  constexpr auto casin2 = kmath::asin(0);
  constexpr auto casin3 = kmath::asin(-1);
  auto rasin1 = kmath::asin(1);
  auto rasin2 = kmath::asin(0);
  auto rasin3 = kmath::asin(-1);

  REQUIRE_THAT(casin1, Catch::Matchers::WithinAbs(rasin1, eps));
  REQUIRE_THAT(casin2, Catch::Matchers::WithinAbs(rasin2, eps));
  REQUIRE_THAT(casin3, Catch::Matchers::WithinAbs(rasin3, eps));
}

TEST_CASE("asin function with floating point numbers", "[kmath][asin]") {

  constexpr auto casin1 = kmath::asin(0.5);
  constexpr auto casin2 = kmath::asin(-0.5);
  auto rasin1 = kmath::asin(0.5);
  auto rasin2 = kmath::asin(-0.5);

  REQUIRE_THAT(casin1, Catch::Matchers::WithinAbs(rasin1, eps));
  REQUIRE_THAT(casin2, Catch::Matchers::WithinAbs(rasin2, eps));
}

TEST_CASE("asinh function with integers", "[kmath][asinh]") {

  constexpr auto casinh1 = kmath::asinh(1);
  constexpr auto casinh2 = kmath::asinh(0);
  constexpr auto casinh3 = kmath::asinh(-1);
  auto rasinh1 = kmath::asinh(1);
  auto rasinh2 = kmath::asinh(0);
  auto rasinh3 = kmath::asinh(-1);

  REQUIRE_THAT(casinh1, Catch::Matchers::WithinAbs(rasinh1, eps));
  REQUIRE_THAT(casinh2, Catch::Matchers::WithinAbs(rasinh2, eps));
  REQUIRE_THAT(casinh3, Catch::Matchers::WithinAbs(rasinh3, eps));
}

TEST_CASE("asinh function with floating point numbers", "[kmath][asinh]") {

  constexpr auto casinh1 = kmath::asinh(0.5);
  constexpr auto casinh2 = kmath::asinh(-0.5);
  auto rasinh1 = kmath::asinh(0.5);
  auto rasinh2 = kmath::asinh(-0.5);

  REQUIRE_THAT(casinh1, Catch::Matchers::WithinAbs(rasinh1, eps));
  REQUIRE_THAT(casinh2, Catch::Matchers::WithinAbs(rasinh2, eps));
}

TEST_CASE("atan function with integers", "[kmath][atan]") {

  constexpr auto catan1 = kmath::atan(1);
  constexpr auto catan2 = kmath::atan(0);
  constexpr auto catan3 = kmath::atan(-1);
  auto ratan1 = kmath::atan(1);
  auto ratan2 = kmath::atan(0);
  auto ratan3 = kmath::atan(-1);

  REQUIRE_THAT(catan1, Catch::Matchers::WithinAbs(ratan1, eps));
  REQUIRE_THAT(catan2, Catch::Matchers::WithinAbs(ratan2, eps));
  REQUIRE_THAT(catan3, Catch::Matchers::WithinAbs(ratan3, eps));
}

TEST_CASE("atan function with floating point numbers", "[kmath][atan]") {

  constexpr auto catan1 = kmath::atan(0.5);
  constexpr auto catan2 = kmath::atan(-0.5);
  auto ratan1 = kmath::atan(0.5);
  auto ratan2 = kmath::atan(-0.5);

  REQUIRE_THAT(catan1, Catch::Matchers::WithinAbs(ratan1, eps));
  REQUIRE_THAT(catan2, Catch::Matchers::WithinAbs(ratan2, eps));
}

TEST_CASE("atan2 function with integers", "[kmath][atan2]") {

  constexpr auto catan2_1 = kmath::atan2(1, 1);
  constexpr auto catan2_2 = kmath::atan2(0, 1);
  constexpr auto catan2_3 = kmath::atan2(1, 0);
  auto ratan2_1 = kmath::atan2(1, 1);
  auto ratan2_2 = kmath::atan2(0, 1);
  auto ratan2_3 = kmath::atan2(1, 0);

  REQUIRE_THAT(catan2_1, Catch::Matchers::WithinAbs(ratan2_1, eps));
  REQUIRE_THAT(catan2_2, Catch::Matchers::WithinAbs(ratan2_2, eps));
  REQUIRE_THAT(catan2_3, Catch::Matchers::WithinAbs(ratan2_3, eps));
}

TEST_CASE("atan2 function with floating point numbers", "[kmath][atan2]") {

  constexpr auto catan2_1 = kmath::atan2(0.5, 0.5);
  constexpr auto catan2_2 = kmath::atan2(-0.5, 0.5);
  auto ratan2_1 = kmath::atan2(0.5, 0.5);
  auto ratan2_2 = kmath::atan2(-0.5, 0.5);

  REQUIRE_THAT(catan2_1, Catch::Matchers::WithinAbs(ratan2_1, eps));
  REQUIRE_THAT(catan2_2, Catch::Matchers::WithinAbs(ratan2_2, eps));
}

TEST_CASE("atanh function with integers", "[kmath][atanh]") {

  constexpr auto catanh1 = kmath::atanh(1);
  constexpr auto catanh2 = kmath::atanh(0);
  constexpr auto catanh3 = kmath::atanh(-1);
  auto ratanh1 = kmath::atanh(1);
  auto ratanh2 = kmath::atanh(0);
  auto ratanh3 = kmath::atanh(-1);

  REQUIRE_THAT(catanh1, Catch::Matchers::WithinAbs(ratanh1, eps));
  REQUIRE_THAT(catanh2, Catch::Matchers::WithinAbs(ratanh2, eps));
  REQUIRE_THAT(catanh3, Catch::Matchers::WithinAbs(ratanh3, eps));
}

TEST_CASE("atanh function with floating point numbers", "[kmath][atanh]") {

  constexpr auto catanh1 = kmath::atanh(0.5);
  constexpr auto catanh2 = kmath::atanh(-0.5);
  auto ratanh1 = kmath::atanh(0.5);
  auto ratanh2 = kmath::atanh(-0.5);

  REQUIRE_THAT(catanh1, Catch::Matchers::WithinAbs(ratanh1, eps));
  REQUIRE_THAT(catanh2, Catch::Matchers::WithinAbs(ratanh2, eps));
}

TEST_CASE("beta function with integers", "[kmath][beta]") {

  constexpr auto cbeta1 = kmath::beta(5, 3);
  constexpr auto cbeta2 = kmath::beta(4, 2);
  auto rbeta1 = kmath::beta(5, 3);
  auto rbeta2 = kmath::beta(4, 2);

  REQUIRE_THAT(cbeta1, Catch::Matchers::WithinAbs(rbeta1, eps));
  REQUIRE_THAT(cbeta2, Catch::Matchers::WithinAbs(rbeta2, eps));
}

TEST_CASE("beta function with floating point numbers", "[kmath][beta]") {

  constexpr auto cbeta1 = kmath::beta(5.5, 3.3);
  constexpr auto cbeta2 = kmath::beta(4.4, 2.2);
  auto rbeta1 = kmath::beta(5.5, 3.3);
  auto rbeta2 = kmath::beta(4.4, 2.2);

  REQUIRE_THAT(cbeta1, Catch::Matchers::WithinAbs(rbeta1, eps));
  REQUIRE_THAT(cbeta2, Catch::Matchers::WithinAbs(rbeta2, eps));
}

TEST_CASE("binomial_coef function with integers", "[kmath][binomial_coef]") {

  constexpr auto cbinom1 = kmath::binomial_coef(5, 3);
  constexpr auto cbinom2 = kmath::binomial_coef(4, 2);
  auto rbinom1 = kmath::binomial_coef(5, 3);
  auto rbinom2 = kmath::binomial_coef(4, 2);

  REQUIRE_THAT(cbinom1, Catch::Matchers::WithinAbs(rbinom1, eps));
  REQUIRE_THAT(cbinom2, Catch::Matchers::WithinAbs(rbinom2, eps));
}

TEST_CASE("cbrt function with integers", "[kmath][cbrt]") {

  constexpr auto ccbrt1 = kmath::cbrt(8);
  //  constexpr auto ccbrt2 = kmath::cbrt(-8);
  constexpr auto ccbrt3 = kmath::cbrt(0);
  auto rcbrt1 = kmath::cbrt(8);
  //  auto rcbrt2 = kmath::cbrt(-8);
  auto rcbrt3 = kmath::cbrt(0);

  REQUIRE_THAT(ccbrt1, Catch::Matchers::WithinAbs(rcbrt1, eps));
  //  REQUIRE_THAT(ccbrt2, Catch::Matchers::WithinAbs(rcbrt2, eps));
  REQUIRE_THAT(ccbrt3, Catch::Matchers::WithinAbs(rcbrt3, eps));
}

TEST_CASE("cbrt function with floating point numbers", "[kmath][cbrt]") {

  constexpr auto ccbrt1 = kmath::cbrt(8.0);
  //  constexpr auto ccbrt2 = kmath::cbrt(-8.0);
  constexpr auto ccbrt3 = kmath::cbrt(0.0);
  auto rcbrt1 = kmath::cbrt(8.0);
  //  auto rcbrt2 = kmath::cbrt(-8.0);
  auto rcbrt3 = kmath::cbrt(0.0);

  REQUIRE_THAT(ccbrt1, Catch::Matchers::WithinAbs(rcbrt1, eps));
  //  REQUIRE_THAT(ccbrt2, Catch::Matchers::WithinAbs(rcbrt2, eps));
  REQUIRE_THAT(ccbrt3, Catch::Matchers::WithinAbs(rcbrt3, eps));
}

TEST_CASE("ceil function with integers", "[kmath][ceil]") {

  constexpr auto cceil1 = kmath::ceil(5);
  constexpr auto cceil2 = kmath::ceil(-5);
  auto rceil1 = kmath::ceil(5);
  auto rceil2 = kmath::ceil(-5);

  REQUIRE_THAT(cceil1, Catch::Matchers::WithinAbs(rceil1, eps));
  REQUIRE_THAT(cceil2, Catch::Matchers::WithinAbs(rceil2, eps));
}

TEST_CASE("ceil function with floating point numbers", "[kmath][ceil]") {

  constexpr auto cceil1 = kmath::ceil(5.5);
  constexpr auto cceil2 = kmath::ceil(-5.5);
  auto rceil1 = kmath::ceil(5.5);
  auto rceil2 = kmath::ceil(-5.5);

  REQUIRE_THAT(cceil1, Catch::Matchers::WithinAbs(rceil1, eps));
  REQUIRE_THAT(cceil2, Catch::Matchers::WithinAbs(rceil2, eps));
}

// TEST_CASE("copysign function with integers", "[kmath][copysign]") {
//
//   constexpr auto ccopysign1 = kmath::copysign(5, -1);
//   constexpr auto ccopysign2 = kmath::copysign(-5, 1);
//   auto rcopysign1 = kmath::copysign(5, -1);
//   auto rcopysign2 = kmath::copysign(-5, 1);
//
//   REQUIRE_THAT(ccopysign1, Catch::Matchers::WithinAbs(rcopysign1, eps));
//   REQUIRE_THAT(ccopysign2, Catch::Matchers::WithinAbs(rcopysign2, eps));
// }

// TEST_CASE("copysign function with floating point numbers",
// "[kmath][copysign]") {
//
//   constexpr auto ccopysign1 = kmath::copysign(5.5, -1.0);
//   constexpr auto ccopysign2 = kmath::copysign(-5.5, 1.0);
//   auto rcopysign1 = kmath::copysign(5.5, -1.0);
//   auto rcopysign2 = kmath::copysign(-5.5, 1.0);
//
//   REQUIRE_THAT(ccopysign1, Catch::Matchers::WithinAbs(rcopysign1, eps));
//   REQUIRE_THAT(ccopysign2, Catch::Matchers::WithinAbs(rcopysign2, eps));
// }

TEST_CASE("cos function with integers", "[kmath][cos]") {

  constexpr auto ccos1 = kmath::cos(0);
  constexpr auto ccos2 = kmath::cos(1);
  constexpr auto ccos3 = kmath::cos(-1);
  auto rcos1 = kmath::cos(0);
  auto rcos2 = kmath::cos(1);
  auto rcos3 = kmath::cos(-1);

  REQUIRE_THAT(ccos1, Catch::Matchers::WithinAbs(rcos1, eps));
  REQUIRE_THAT(ccos2, Catch::Matchers::WithinAbs(rcos2, eps));
  REQUIRE_THAT(ccos3, Catch::Matchers::WithinAbs(rcos3, eps));
}

TEST_CASE("cos function with floating point numbers", "[kmath][cos]") {

  constexpr auto ccos1 = kmath::cos(0.5);
  constexpr auto ccos2 = kmath::cos(-0.5);
  auto rcos1 = kmath::cos(0.5);
  auto rcos2 = kmath::cos(-0.5);

  REQUIRE_THAT(ccos1, Catch::Matchers::WithinAbs(rcos1, eps));
  REQUIRE_THAT(ccos2, Catch::Matchers::WithinAbs(rcos2, eps));
}

TEST_CASE("cosh function with integers", "[kmath][cosh]") {

  constexpr auto ccosh1 = kmath::cosh(1);
  constexpr auto ccosh2 = kmath::cosh(0);
  constexpr auto ccosh3 = kmath::cosh(-1);
  auto rcosh1 = kmath::cosh(1);
  auto rcosh2 = kmath::cosh(0);
  auto rcosh3 = kmath::cosh(-1);

  REQUIRE_THAT(ccosh1, Catch::Matchers::WithinAbs(rcosh1, eps));
  REQUIRE_THAT(ccosh2, Catch::Matchers::WithinAbs(rcosh2, eps));
  REQUIRE_THAT(ccosh3, Catch::Matchers::WithinAbs(rcosh3, eps));
}

TEST_CASE("cosh function with floating point numbers", "[kmath][cosh]") {

  constexpr auto ccosh1 = kmath::cosh(0.5);
  constexpr auto ccosh2 = kmath::cosh(-0.5);
  auto rcosh1 = kmath::cosh(0.5);
  auto rcosh2 = kmath::cosh(-0.5);

  REQUIRE_THAT(ccosh1, Catch::Matchers::WithinAbs(rcosh1, eps));
  REQUIRE_THAT(ccosh2, Catch::Matchers::WithinAbs(rcosh2, eps));
}

TEST_CASE("erf function with integers", "[kmath][erf]") {

  constexpr auto cerf1 = kmath::erf(1);
  constexpr auto cerf2 = kmath::erf(0);
  constexpr auto cerf3 = kmath::erf(-1);
  auto rerf1 = kmath::erf(1);
  auto rerf2 = kmath::erf(0);
  auto rerf3 = kmath::erf(-1);

  REQUIRE_THAT(cerf1, Catch::Matchers::WithinAbs(rerf1, eps));
  REQUIRE_THAT(cerf2, Catch::Matchers::WithinAbs(rerf2, eps));
  REQUIRE_THAT(cerf3, Catch::Matchers::WithinAbs(rerf3, eps));
}

TEST_CASE("erf function with floating point numbers", "[kmath][erf]") {

  constexpr auto cerf1 = kmath::erf(0.5);
  constexpr auto cerf2 = kmath::erf(-0.5);
  auto rerf1 = kmath::erf(0.5);
  auto rerf2 = kmath::erf(-0.5);

  REQUIRE_THAT(cerf1, Catch::Matchers::WithinAbs(rerf1, eps));
  REQUIRE_THAT(cerf2, Catch::Matchers::WithinAbs(rerf2, eps));
}

TEST_CASE("erf_inv function with integers", "[kmath][erf_inv]") {

  constexpr auto cerf_inv1 = kmath::erf_inv(1);
  constexpr auto cerf_inv2 = kmath::erf_inv(0);
  constexpr auto cerf_inv3 = kmath::erf_inv(-1);
  auto rerf_inv1 = kmath::erf_inv(1);
  auto rerf_inv2 = kmath::erf_inv(0);
  auto rerf_inv3 = kmath::erf_inv(-1);

  REQUIRE_THAT(cerf_inv1, Catch::Matchers::WithinAbs(rerf_inv1, eps));
  REQUIRE_THAT(cerf_inv2, Catch::Matchers::WithinAbs(rerf_inv2, eps));
  REQUIRE_THAT(cerf_inv3, Catch::Matchers::WithinAbs(rerf_inv3, eps));
}

TEST_CASE("erf_inv function with floating point numbers", "[kmath][erf_inv]") {

  constexpr auto cerf_inv1 = kmath::erf_inv(0.5);
  constexpr auto cerf_inv2 = kmath::erf_inv(-0.5);
  auto rerf_inv1 = kmath::erf_inv(0.5);
  auto rerf_inv2 = kmath::erf_inv(-0.5);

  REQUIRE_THAT(cerf_inv1, Catch::Matchers::WithinAbs(rerf_inv1, eps));
  REQUIRE_THAT(cerf_inv2, Catch::Matchers::WithinAbs(rerf_inv2, eps));
}

TEST_CASE("exp function with integers", "[kmath][exp]") {

  constexpr auto cexp1 = kmath::exp(1);
  constexpr auto cexp2 = kmath::exp(0);
  constexpr auto cexp3 = kmath::exp(-1);
  auto rexp1 = kmath::exp(1);
  auto rexp2 = kmath::exp(0);
  auto rexp3 = kmath::exp(-1);

  REQUIRE_THAT(cexp1, Catch::Matchers::WithinAbs(rexp1, eps));
  REQUIRE_THAT(cexp2, Catch::Matchers::WithinAbs(rexp2, eps));
  REQUIRE_THAT(cexp3, Catch::Matchers::WithinAbs(rexp3, eps));
}

TEST_CASE("exp function with floating point numbers", "[kmath][exp]") {

  constexpr auto cexp1 = kmath::exp(0.5);
  constexpr auto cexp2 = kmath::exp(-0.5);
  auto rexp1 = kmath::exp(0.5);
  auto rexp2 = kmath::exp(-0.5);

  REQUIRE_THAT(cexp1, Catch::Matchers::WithinAbs(rexp1, eps));
  REQUIRE_THAT(cexp2, Catch::Matchers::WithinAbs(rexp2, eps));
}

TEST_CASE("expm1 function with integers", "[kmath][expm1]") {

  constexpr auto cexpm1_1 = kmath::expm1(1);
  constexpr auto cexpm1_2 = kmath::expm1(0);
  constexpr auto cexpm1_3 = kmath::expm1(-1);
  auto rexpm1_1 = kmath::expm1(1);
  auto rexpm1_2 = kmath::expm1(0);
  auto rexpm1_3 = kmath::expm1(-1);

  REQUIRE_THAT(cexpm1_1, Catch::Matchers::WithinAbs(rexpm1_1, eps));
  REQUIRE_THAT(cexpm1_2, Catch::Matchers::WithinAbs(rexpm1_2, eps));
  REQUIRE_THAT(cexpm1_3, Catch::Matchers::WithinAbs(rexpm1_3, eps));
}

TEST_CASE("expm1 function with floating point numbers", "[kmath][expm1]") {

  constexpr auto cexpm1_1 = kmath::expm1(0.5);
  constexpr auto cexpm1_2 = kmath::expm1(-0.5);
  auto rexpm1_1 = kmath::expm1(0.5);
  auto rexpm1_2 = kmath::expm1(-0.5);

  REQUIRE_THAT(cexpm1_1, Catch::Matchers::WithinAbs(rexpm1_1, eps));
  REQUIRE_THAT(cexpm1_2, Catch::Matchers::WithinAbs(rexpm1_2, eps));
}

TEST_CASE("factorial function with integers", "[kmath][factorial]") {

  constexpr auto cfactorial1 = kmath::factorial(5);
  constexpr auto cfactorial2 = kmath::factorial(0);
  constexpr auto cfactorial3 = kmath::factorial(1);
  auto rfactorial1 = kmath::factorial(5);
  auto rfactorial2 = kmath::factorial(0);
  auto rfactorial3 = kmath::factorial(1);

  REQUIRE_THAT(cfactorial1, Catch::Matchers::WithinAbs(rfactorial1, eps));
  REQUIRE_THAT(cfactorial2, Catch::Matchers::WithinAbs(rfactorial2, eps));
  REQUIRE_THAT(cfactorial3, Catch::Matchers::WithinAbs(rfactorial3, eps));
}

TEST_CASE("floor function with integers", "[kmath][floor]") {

  constexpr auto cfloor1 = kmath::floor(5);
  constexpr auto cfloor2 = kmath::floor(-5);
  auto rfloor1 = kmath::floor(5);
  auto rfloor2 = kmath::floor(-5);

  REQUIRE_THAT(cfloor1, Catch::Matchers::WithinAbs(rfloor1, eps));
  REQUIRE_THAT(cfloor2, Catch::Matchers::WithinAbs(rfloor2, eps));
}

TEST_CASE("floor function with floating point numbers", "[kmath][floor]") {

  constexpr auto cfloor1 = kmath::floor(5.5);
  constexpr auto cfloor2 = kmath::floor(-5.5);
  auto rfloor1 = kmath::floor(5.5);
  auto rfloor2 = kmath::floor(-5.5);

  REQUIRE_THAT(cfloor1, Catch::Matchers::WithinAbs(rfloor1, eps));
  REQUIRE_THAT(cfloor2, Catch::Matchers::WithinAbs(rfloor2, eps));
}

TEST_CASE("fmod function with integers", "[kmath][fmod]") {

  constexpr auto cfmod1 = kmath::fmod(5, 3);
  constexpr auto cfmod2 = kmath::fmod(4, 2);
  auto rfmod1 = kmath::fmod(5, 3);
  auto rfmod2 = kmath::fmod(4, 2);

  REQUIRE_THAT(cfmod1, Catch::Matchers::WithinAbs(rfmod1, eps));
  REQUIRE_THAT(cfmod2, Catch::Matchers::WithinAbs(rfmod2, eps));
}

TEST_CASE("fmod function with floating point numbers", "[kmath][fmod]") {

  constexpr auto cfmod1 = kmath::fmod(5.5, 3.3);
  constexpr auto cfmod2 = kmath::fmod(4.4, 2.2);
  auto rfmod1 = kmath::fmod(5.5, 3.3);
  auto rfmod2 = kmath::fmod(4.4, 2.2);

  REQUIRE_THAT(cfmod1, Catch::Matchers::WithinAbs(rfmod1, eps));
  REQUIRE_THAT(cfmod2, Catch::Matchers::WithinAbs(rfmod2, eps));
}

TEST_CASE("gcd function with integers", "[kmath][gcd]") {

  constexpr auto cgcd1 = kmath::gcd(48, 18);
  constexpr auto cgcd2 = kmath::gcd(101, 103);
  auto rgcd1 = kmath::gcd(48, 18);
  auto rgcd2 = kmath::gcd(101, 103);

  REQUIRE_THAT(cgcd1, Catch::Matchers::WithinAbs(rgcd1, eps));
  REQUIRE_THAT(cgcd2, Catch::Matchers::WithinAbs(rgcd2, eps));
}

TEST_CASE("hypot function with integers", "[kmath][hypot]") {

  constexpr auto chypot1 = kmath::hypot(3, 4);
  constexpr auto chypot2 = kmath::hypot(5, 12);
  auto rhypot1 = kmath::hypot(3, 4);
  auto rhypot2 = kmath::hypot(5, 12);

  REQUIRE_THAT(chypot1, Catch::Matchers::WithinAbs(rhypot1, eps));
  REQUIRE_THAT(chypot2, Catch::Matchers::WithinAbs(rhypot2, eps));
}

TEST_CASE("hypot function with floating point numbers", "[kmath][hypot]") {

  constexpr auto chypot1 = kmath::hypot(0.5, 0.5);
  constexpr auto chypot2 = kmath::hypot(-0.5, 0.5);
  auto rhypot1 = kmath::hypot(0.5, 0.5);
  auto rhypot2 = kmath::hypot(-0.5, 0.5);

  REQUIRE_THAT(chypot1, Catch::Matchers::WithinAbs(rhypot1, eps));
  REQUIRE_THAT(chypot2, Catch::Matchers::WithinAbs(rhypot2, eps));
}

TEST_CASE("incomplete_beta function with integers",
          "[kmath][incomplete_beta]") {

  constexpr auto cincomplete_beta1 = kmath::incomplete_beta(5, 3, 0.5);
  constexpr auto cincomplete_beta2 = kmath::incomplete_beta(4, 2, 0.3);
  auto rincomplete_beta1 = kmath::incomplete_beta(5, 3, 0.5);
  auto rincomplete_beta2 = kmath::incomplete_beta(4, 2, 0.3);

  REQUIRE_THAT(cincomplete_beta1,
               Catch::Matchers::WithinAbs(rincomplete_beta1, eps));
  REQUIRE_THAT(cincomplete_beta2,
               Catch::Matchers::WithinAbs(rincomplete_beta2, eps));
}

TEST_CASE("incomplete_beta function with floating point numbers",
          "[kmath][incomplete_beta]") {

  constexpr auto cincomplete_beta1 = kmath::incomplete_beta(5.5, 3.3, 0.5);
  constexpr auto cincomplete_beta2 = kmath::incomplete_beta(4.4, 2.2, 0.3);
  auto rincomplete_beta1 = kmath::incomplete_beta(5.5, 3.3, 0.5);
  auto rincomplete_beta2 = kmath::incomplete_beta(4.4, 2.2, 0.3);

  REQUIRE_THAT(cincomplete_beta1,
               Catch::Matchers::WithinAbs(rincomplete_beta1, eps));
  REQUIRE_THAT(cincomplete_beta2,
               Catch::Matchers::WithinAbs(rincomplete_beta2, eps));
}

TEST_CASE("incomplete_beta_inv function with integers",
          "[kmath][incomplete_beta_inv]") {

  constexpr auto cincomplete_beta_inv1 = kmath::incomplete_beta_inv(5, 3, 0.5);
  constexpr auto cincomplete_beta_inv2 = kmath::incomplete_beta_inv(4, 2, 0.3);
  auto rincomplete_beta_inv1 = kmath::incomplete_beta_inv(5, 3, 0.5);
  auto rincomplete_beta_inv2 = kmath::incomplete_beta_inv(4, 2, 0.3);

  REQUIRE_THAT(cincomplete_beta_inv1,
               Catch::Matchers::WithinAbs(rincomplete_beta_inv1, eps));
  REQUIRE_THAT(cincomplete_beta_inv2,
               Catch::Matchers::WithinAbs(rincomplete_beta_inv2, eps));
}

TEST_CASE("incomplete_beta_inv function with floating point numbers",
          "[kmath][incomplete_beta_inv]") {

  constexpr auto cincomplete_beta_inv1 =
      kmath::incomplete_beta_inv(5.5, 3.3, 0.5);
  constexpr auto cincomplete_beta_inv2 =
      kmath::incomplete_beta_inv(4.4, 2.2, 0.3);
  auto rincomplete_beta_inv1 = kmath::incomplete_beta_inv(5.5, 3.3, 0.5);
  auto rincomplete_beta_inv2 = kmath::incomplete_beta_inv(4.4, 2.2, 0.3);

  REQUIRE_THAT(cincomplete_beta_inv1,
               Catch::Matchers::WithinAbs(rincomplete_beta_inv1, eps));
  REQUIRE_THAT(cincomplete_beta_inv2,
               Catch::Matchers::WithinAbs(rincomplete_beta_inv2, eps));
}

TEST_CASE("incomplete_gamma function with integers",
          "[kmath][incomplete_gamma]") {

  constexpr auto cincomplete_gamma1 = kmath::incomplete_gamma(5, 3);
  constexpr auto cincomplete_gamma2 = kmath::incomplete_gamma(4, 2);
  auto rincomplete_gamma1 = kmath::incomplete_gamma(5, 3);
  auto rincomplete_gamma2 = kmath::incomplete_gamma(4, 2);

  REQUIRE_THAT(cincomplete_gamma1,
               Catch::Matchers::WithinAbs(rincomplete_gamma1, eps));
  REQUIRE_THAT(cincomplete_gamma2,
               Catch::Matchers::WithinAbs(rincomplete_gamma2, eps));
}

TEST_CASE("incomplete_gamma function with floating point numbers",
          "[kmath][incomplete_gamma]") {

  constexpr auto cincomplete_gamma1 = kmath::incomplete_gamma(5.5, 3.3);
  constexpr auto cincomplete_gamma2 = kmath::incomplete_gamma(4.4, 2.2);
  auto rincomplete_gamma1 = kmath::incomplete_gamma(5.5, 3.3);
  auto rincomplete_gamma2 = kmath::incomplete_gamma(4.4, 2.2);

  REQUIRE_THAT(cincomplete_gamma1,
               Catch::Matchers::WithinAbs(rincomplete_gamma1, eps));
  REQUIRE_THAT(cincomplete_gamma2,
               Catch::Matchers::WithinAbs(rincomplete_gamma2, eps));
}

TEST_CASE("incomplete_gamma_inv function with integers",
          "[kmath][incomplete_gamma_inv]") {

  constexpr auto cincomplete_gamma_inv1 = kmath::incomplete_gamma_inv(5, 0.5);
  constexpr auto cincomplete_gamma_inv2 = kmath::incomplete_gamma_inv(4, 0.3);
  auto rincomplete_gamma_inv1 = kmath::incomplete_gamma_inv(5, 0.5);
  auto rincomplete_gamma_inv2 = kmath::incomplete_gamma_inv(4, 0.3);

  REQUIRE_THAT(cincomplete_gamma_inv1,
               Catch::Matchers::WithinAbs(rincomplete_gamma_inv1, eps));
  REQUIRE_THAT(cincomplete_gamma_inv2,
               Catch::Matchers::WithinAbs(rincomplete_gamma_inv2, eps));
}

TEST_CASE("incomplete_gamma_inv function with floating point numbers",
          "[kmath][incomplete_gamma_inv]") {

  constexpr auto cincomplete_gamma_inv1 = kmath::incomplete_gamma_inv(5.5, 0.5);
  constexpr auto cincomplete_gamma_inv2 = kmath::incomplete_gamma_inv(4.4, 0.3);
  auto rincomplete_gamma_inv1 = kmath::incomplete_gamma_inv(5.5, 0.5);
  auto rincomplete_gamma_inv2 = kmath::incomplete_gamma_inv(4.4, 0.3);

  REQUIRE_THAT(cincomplete_gamma_inv1,
               Catch::Matchers::WithinAbs(rincomplete_gamma_inv1, eps));
  REQUIRE_THAT(cincomplete_gamma_inv2,
               Catch::Matchers::WithinAbs(rincomplete_gamma_inv2, eps));
}

TEST_CASE("inv_sqrt function with integers", "[kmath][inv_sqrt]") {

  constexpr auto cinv_sqrt1 = kmath::inv_sqrt(4);
  constexpr auto cinv_sqrt2 = kmath::inv_sqrt(1);
  auto rinv_sqrt1 = kmath::inv_sqrt(4);
  auto rinv_sqrt2 = kmath::inv_sqrt(1);

  REQUIRE_THAT(cinv_sqrt1, Catch::Matchers::WithinAbs(rinv_sqrt1, eps));
  REQUIRE_THAT(cinv_sqrt2, Catch::Matchers::WithinAbs(rinv_sqrt2, eps));
}

TEST_CASE("inv_sqrt function with floating point numbers",
          "[kmath][inv_sqrt]") {

  constexpr auto cinv_sqrt1 = kmath::inv_sqrt(4.0);
  constexpr auto cinv_sqrt2 = kmath::inv_sqrt(1.0);
  auto rinv_sqrt1 = kmath::inv_sqrt(4.0);
  auto rinv_sqrt2 = kmath::inv_sqrt(1.0);

  REQUIRE_THAT(cinv_sqrt1, Catch::Matchers::WithinAbs(rinv_sqrt1, eps));
  REQUIRE_THAT(cinv_sqrt2, Catch::Matchers::WithinAbs(rinv_sqrt2, eps));
}

TEST_CASE("lbeta function with integers", "[kmath][lbeta]") {

  constexpr auto clbeta1 = kmath::lbeta(5, 3);
  constexpr auto clbeta2 = kmath::lbeta(4, 2);
  auto rlbeta1 = kmath::lbeta(5, 3);
  auto rlbeta2 = kmath::lbeta(4, 2);

  REQUIRE_THAT(clbeta1, Catch::Matchers::WithinAbs(rlbeta1, eps));
  REQUIRE_THAT(clbeta2, Catch::Matchers::WithinAbs(rlbeta2, eps));
}

TEST_CASE("lbeta function with floating point numbers", "[kmath][lbeta]") {

  constexpr auto clbeta1 = kmath::lbeta(5.5, 3.3);
  constexpr auto clbeta2 = kmath::lbeta(4.4, 2.2);
  auto rlbeta1 = kmath::lbeta(5.5, 3.3);
  auto rlbeta2 = kmath::lbeta(4.4, 2.2);

  REQUIRE_THAT(clbeta1, Catch::Matchers::WithinAbs(rlbeta1, eps));
  REQUIRE_THAT(clbeta2, Catch::Matchers::WithinAbs(rlbeta2, eps));
}

TEST_CASE("lcm function with integers", "[kmath][lcm]") {

  constexpr auto clcm1 = kmath::lcm(12, 18);
  constexpr auto clcm2 = kmath::lcm(101, 103);
  auto rlcm1 = kmath::lcm(12, 18);
  auto rlcm2 = kmath::lcm(101, 103);

  REQUIRE_THAT(clcm1, Catch::Matchers::WithinAbs(rlcm1, eps));
  REQUIRE_THAT(clcm2, Catch::Matchers::WithinAbs(rlcm2, eps));
}

TEST_CASE("lgamma function with integers", "[kmath][lgamma]") {

  constexpr auto clgamma1 = kmath::lgamma(5);
  constexpr auto clgamma2 = kmath::lgamma(1);
  auto rlgamma1 = kmath::lgamma(5);
  auto rlgamma2 = kmath::lgamma(1);

  REQUIRE_THAT(clgamma1, Catch::Matchers::WithinAbs(rlgamma1, eps));
  REQUIRE_THAT(clgamma2, Catch::Matchers::WithinAbs(rlgamma2, eps));
}

TEST_CASE("lgamma function with floating point numbers", "[kmath][lgamma]") {

  constexpr auto clgamma1 = kmath::lgamma(5.5);
  constexpr auto clgamma2 = kmath::lgamma(1.1);
  auto rlgamma1 = kmath::lgamma(5.5);
  auto rlgamma2 = kmath::lgamma(1.1);

  REQUIRE_THAT(clgamma1, Catch::Matchers::WithinAbs(rlgamma1, eps));
  REQUIRE_THAT(clgamma2, Catch::Matchers::WithinAbs(rlgamma2, eps));
}

TEST_CASE("lmgamma function with integers", "[kmath][lmgamma]") {

  constexpr auto clmgamma1 = kmath::lmgamma(5, 3);
  constexpr auto clmgamma2 = kmath::lmgamma(4, 2);
  auto rlmgamma1 = kmath::lmgamma(5, 3);
  auto rlmgamma2 = kmath::lmgamma(4, 2);

  REQUIRE_THAT(clmgamma1, Catch::Matchers::WithinAbs(rlmgamma1, eps));
  REQUIRE_THAT(clmgamma2, Catch::Matchers::WithinAbs(rlmgamma2, eps));
}

// TEST_CASE("lmgamma function with floating point numbers", "[kmath][lmgamma]")
// {
//
//   constexpr auto clmgamma1 = kmath::lmgamma(5.5, 3.3);
//   constexpr auto clmgamma2 = kmath::lmgamma(4.4, 2.2);
//   auto rlmgamma1 = kmath::lmgamma(5.5, 3.3);
//   auto rlmgamma2 = kmath::lmgamma(4.4, 2.2);
//
//   REQUIRE_THAT(clmgamma1, Catch::Matchers::WithinAbs(rlmgamma1, eps));
//   REQUIRE_THAT(clmgamma2, Catch::Matchers::WithinAbs(rlmgamma2, eps));
// }

TEST_CASE("log function with integers", "[kmath][log]") {

  constexpr auto clog1 = kmath::log(10);
  constexpr auto clog2 = kmath::log(1);
  auto rlog1 = kmath::log(10);
  auto rlog2 = kmath::log(1);

  REQUIRE_THAT(clog1, Catch::Matchers::WithinAbs(rlog1, eps));
  REQUIRE_THAT(clog2, Catch::Matchers::WithinAbs(rlog2, eps));
}

TEST_CASE("log function with floating point numbers", "[kmath][log]") {

  constexpr auto clog1 = kmath::log(10.5);
  constexpr auto clog2 = kmath::log(1.0);
  auto rlog1 = kmath::log(10.5);
  auto rlog2 = kmath::log(1.0);

  REQUIRE_THAT(clog1, Catch::Matchers::WithinAbs(rlog1, eps));
  REQUIRE_THAT(clog2, Catch::Matchers::WithinAbs(rlog2, eps));
}

TEST_CASE("log1p function with integers", "[kmath][log1p]") {

  constexpr auto clog1p1 = kmath::log1p(5);
  constexpr auto clog1p2 = kmath::log1p(0);
  constexpr auto clog1p3 = kmath::log1p(-1);
  auto rlog1p1 = kmath::log1p(5);
  auto rlog1p2 = kmath::log1p(0);
  auto rlog1p3 = kmath::log1p(-1);

  REQUIRE_THAT(clog1p1, Catch::Matchers::WithinAbs(rlog1p1, eps));
  REQUIRE_THAT(clog1p2, Catch::Matchers::WithinAbs(rlog1p2, eps));
  REQUIRE_THAT(clog1p3, Catch::Matchers::WithinAbs(rlog1p3, eps));
}

TEST_CASE("log1p function with floating point numbers", "[kmath][log1p]") {

  constexpr auto clog1p1 = kmath::log1p(0.5);
  constexpr auto clog1p2 = kmath::log1p(-0.5);
  auto rlog1p1 = kmath::log1p(0.5);
  auto rlog1p2 = kmath::log1p(-0.5);

  REQUIRE_THAT(clog1p1, Catch::Matchers::WithinAbs(rlog1p1, eps));
  REQUIRE_THAT(clog1p2, Catch::Matchers::WithinAbs(rlog1p2, eps));
}

TEST_CASE("log2 function with integers", "[kmath][log2]") {

  constexpr auto clog2_1 = kmath::log2(4);
  constexpr auto clog2_2 = kmath::log2(1);
  auto rlog2_1 = kmath::log2(4);
  auto rlog2_2 = kmath::log2(1);

  REQUIRE_THAT(clog2_1, Catch::Matchers::WithinAbs(rlog2_1, eps));
  REQUIRE_THAT(clog2_2, Catch::Matchers::WithinAbs(rlog2_2, eps));
}

TEST_CASE("log2 function with floating point numbers", "[kmath][log2]") {

  constexpr auto clog2_1 = kmath::log2(4.5);
  constexpr auto clog2_2 = kmath::log2(1.0);
  auto rlog2_1 = kmath::log2(4.5);
  auto rlog2_2 = kmath::log2(1.0);

  REQUIRE_THAT(clog2_1, Catch::Matchers::WithinAbs(rlog2_1, eps));
  REQUIRE_THAT(clog2_2, Catch::Matchers::WithinAbs(rlog2_2, eps));
}

TEST_CASE("log10 function with integers", "[kmath][log10]") {

  constexpr auto clog10_1 = kmath::log10(100);
  constexpr auto clog10_2 = kmath::log10(1);
  auto rlog10_1 = kmath::log10(100);
  auto rlog10_2 = kmath::log10(1);

  REQUIRE_THAT(clog10_1, Catch::Matchers::WithinAbs(rlog10_1, eps));
  REQUIRE_THAT(clog10_2, Catch::Matchers::WithinAbs(rlog10_2, eps));
}

TEST_CASE("log10 function with floating point numbers", "[kmath][log10]") {

  constexpr auto clog10_1 = kmath::log10(100.0);
  constexpr auto clog10_2 = kmath::log10(1.0);
  auto rlog10_1 = kmath::log10(100.0);
  auto rlog10_2 = kmath::log10(1.0);

  REQUIRE_THAT(clog10_1, Catch::Matchers::WithinAbs(rlog10_1, eps));
  REQUIRE_THAT(clog10_2, Catch::Matchers::WithinAbs(rlog10_2, eps));
}

TEST_CASE("log_binomial_coef function with integers",
          "[kmath][log_binomial_coef]") {

  constexpr auto clog_binomial_coef1 = kmath::log_binomial_coef(5, 3);
  constexpr auto clog_binomial_coef2 = kmath::log_binomial_coef(4, 2);
  auto rlog_binomial_coef1 = kmath::log_binomial_coef(5, 3);
  auto rlog_binomial_coef2 = kmath::log_binomial_coef(4, 2);

  REQUIRE_THAT(clog_binomial_coef1,
               Catch::Matchers::WithinAbs(rlog_binomial_coef1, eps));
  REQUIRE_THAT(clog_binomial_coef2,
               Catch::Matchers::WithinAbs(rlog_binomial_coef2, eps));
}

TEST_CASE("log_binomial_coef function with floating point numbers",
          "[kmath][log_binomial_coef]") {

  constexpr auto clog_binomial_coef1 = kmath::log_binomial_coef(5.5, 3.3);
  constexpr auto clog_binomial_coef2 = kmath::log_binomial_coef(4.4, 2.2);
  auto rlog_binomial_coef1 = kmath::log_binomial_coef(5.5, 3.3);
  auto rlog_binomial_coef2 = kmath::log_binomial_coef(4.4, 2.2);

  REQUIRE_THAT(clog_binomial_coef1,
               Catch::Matchers::WithinAbs(rlog_binomial_coef1, eps));
  REQUIRE_THAT(clog_binomial_coef2,
               Catch::Matchers::WithinAbs(rlog_binomial_coef2, eps));
}

TEST_CASE("max function with integers", "[kmath][max]") {

  constexpr auto cmax1 = kmath::max(5, 3);
  constexpr auto cmax2 = kmath::max(4, 4);
  constexpr auto cmax3 = kmath::max(-1, 2);
  auto rmax1 = kmath::max(5, 3);
  auto rmax2 = kmath::max(4, 4);
  auto rmax3 = kmath::max(-1, 2);

  REQUIRE(cmax1 == rmax1);
  REQUIRE(cmax2 == rmax2);
  REQUIRE(cmax3 == rmax3);
}

TEST_CASE("max function with floating point numbers", "[kmath][max]") {

  constexpr auto cmax1 = kmath::max(5.5, 3.3);
  constexpr auto cmax2 = kmath::max(4.4, 4.4);
  constexpr auto cmax3 = kmath::max(-1.1, 2.2);
  auto rmax1 = kmath::max(5.5, 3.3);
  auto rmax2 = kmath::max(4.4, 4.4);
  auto rmax3 = kmath::max(-1.1, 2.2);

  REQUIRE_THAT(cmax1, Catch::Matchers::WithinAbs(rmax1, eps));
  REQUIRE_THAT(cmax2, Catch::Matchers::WithinAbs(rmax2, eps));
  REQUIRE_THAT(cmax3, Catch::Matchers::WithinAbs(rmax3, eps));
}

TEST_CASE("min function with integers", "[kmath][min]") {

  constexpr auto cmin1 = kmath::min(5, 3);
  constexpr auto cmin2 = kmath::min(4, 4);
  constexpr auto cmin3 = kmath::min(-1, 2);
  auto rmin1 = kmath::min(5, 3);
  auto rmin2 = kmath::min(4, 4);
  auto rmin3 = kmath::min(-1, 2);

  REQUIRE(cmin1 == rmin1);
  REQUIRE(cmin2 == rmin2);
  REQUIRE(cmin3 == rmin3);
}

TEST_CASE("min function with floating point numbers", "[kmath][min]") {

  constexpr auto cmin1 = kmath::min(5.5, 3.3);
  constexpr auto cmin2 = kmath::min(4.4, 4.4);
  constexpr auto cmin3 = kmath::min(-1.1, 2.2);
  auto rmin1 = kmath::min(5.5, 3.3);
  auto rmin2 = kmath::min(4.4, 4.4);
  auto rmin3 = kmath::min(-1.1, 2.2);

  REQUIRE_THAT(cmin1, Catch::Matchers::WithinAbs(rmin1, eps));
  REQUIRE_THAT(cmin2, Catch::Matchers::WithinAbs(rmin2, eps));
  REQUIRE_THAT(cmin3, Catch::Matchers::WithinAbs(rmin3, eps));
}

TEST_CASE("pow function with integers", "[kmath][pow]") {

  constexpr auto cpow1 = kmath::pow(2, 3);
  constexpr auto cpow2 = kmath::pow(5, 0);
  constexpr auto cpow3 = kmath::pow(7, 1);
  auto rpow1 = kmath::pow(2, 3);
  auto rpow2 = kmath::pow(5, 0);
  auto rpow3 = kmath::pow(7, 1);

  REQUIRE_THAT(cpow1, Catch::Matchers::WithinAbs(rpow1, eps));
  REQUIRE_THAT(cpow2, Catch::Matchers::WithinAbs(rpow2, eps));
  REQUIRE_THAT(cpow3, Catch::Matchers::WithinAbs(rpow3, eps));
}

TEST_CASE("pow function with floating point numbers", "[kmath][pow]") {

  constexpr auto cpow1 = kmath::pow(2.5, 3.3);
  constexpr auto cpow2 = kmath::pow(5.5, 0.0);
  constexpr auto cpow3 = kmath::pow(7.7, 1.1);
  auto rpow1 = kmath::pow(2.5, 3.3);
  auto rpow2 = kmath::pow(5.5, 0.0);
  auto rpow3 = kmath::pow(7.7, 1.1);

  REQUIRE_THAT(cpow1, Catch::Matchers::WithinAbs(rpow1, eps));
  REQUIRE_THAT(cpow2, Catch::Matchers::WithinAbs(rpow2, eps));
  REQUIRE_THAT(cpow3, Catch::Matchers::WithinAbs(rpow3, eps));
}

TEST_CASE("round function with integers", "[kmath][round]") {

  constexpr auto cround1 = kmath::round(5);
  constexpr auto cround2 = kmath::round(-5);
  auto rround1 = kmath::round(5);
  auto rround2 = kmath::round(-5);

  REQUIRE(cround1 == rround1);
  REQUIRE(cround2 == rround2);
}

TEST_CASE("round function with floating point numbers", "[kmath][round]") {

  constexpr auto cround1 = kmath::round(5.5);
  constexpr auto cround2 = kmath::round(-5.5);
  auto rround1 = kmath::round(5.5);
  auto rround2 = kmath::round(-5.5);

  REQUIRE_THAT(cround1, Catch::Matchers::WithinAbs(rround1, eps));
  REQUIRE_THAT(cround2, Catch::Matchers::WithinAbs(rround2, eps));
}

TEST_CASE("sgn function with integers", "[kmath][sgn]") {

  constexpr auto csgn1 = kmath::sgn(5);
  constexpr auto csgn2 = kmath::sgn(0);
  constexpr auto csgn3 = kmath::sgn(-5);
  auto rsgn1 = kmath::sgn(5);
  auto rsgn2 = kmath::sgn(0);
  auto rsgn3 = kmath::sgn(-5);

  REQUIRE(csgn1 == rsgn1);
  REQUIRE(csgn2 == rsgn2);
  REQUIRE(csgn3 == rsgn3);
}

TEST_CASE("sgn function with floating point numbers", "[kmath][sgn]") {

  constexpr auto csgn1 = kmath::sgn(5.5);
  constexpr auto csgn2 = kmath::sgn(0.0);
  constexpr auto csgn3 = kmath::sgn(-5.5);
  auto rsgn1 = kmath::sgn(5.5);
  auto rsgn2 = kmath::sgn(0.0);
  auto rsgn3 = kmath::sgn(-5.5);

  REQUIRE(csgn1 == rsgn1);
  REQUIRE(csgn2 == rsgn2);
  REQUIRE(csgn3 == rsgn3);
}

// TEST_CASE("signbit function with integers", "[kmath][signbit]") {
//
//   constexpr auto csignbit1 = kmath::signbit(-5);
//   constexpr auto csignbit2 = kmath::signbit(0);
//   constexpr auto csignbit3 = kmath::signbit(5);
//   auto rsignbit1 = kmath::signbit(-5);
//   auto rsignbit2 = kmath::signbit(0);
//   auto rsignbit3 = kmath::signbit(5);
//
//   REQUIRE(csignbit1 == rsignbit1);
//   REQUIRE(csignbit2 == rsignbit2);
//   REQUIRE(csignbit3 == rsignbit3);
// }
//
// TEST_CASE("signbit function with floating point numbers", "[kmath][signbit]")
// {
//
//   constexpr auto csignbit1 = kmath::signbit(-5.5);
//   constexpr auto csignbit2 = kmath::signbit(0.0);
//   constexpr auto csignbit3 = kmath::signbit(5.5);
//   auto rsignbit1 = kmath::signbit(-5.5);
//   auto rsignbit2 = kmath::signbit(0.0);
//   auto rsignbit3 = kmath::signbit(5.5);
//
//   REQUIRE(csignbit1 == rsignbit1);
//   REQUIRE(csignbit2 == rsignbit2);
//   REQUIRE(csignbit3 == rsignbit3);
// }

TEST_CASE("sin function with integers", "[kmath][sin]") {

  constexpr auto csin1 = kmath::sin(0);
  constexpr auto csin2 = kmath::sin(1);
  constexpr auto csin3 = kmath::sin(-1);
  auto rsin1 = kmath::sin(0);
  auto rsin2 = kmath::sin(1);
  auto rsin3 = kmath::sin(-1);

  REQUIRE_THAT(csin1, Catch::Matchers::WithinAbs(rsin1, eps));
  REQUIRE_THAT(csin2, Catch::Matchers::WithinAbs(rsin2, eps));
  REQUIRE_THAT(csin3, Catch::Matchers::WithinAbs(rsin3, eps));
}

TEST_CASE("sin function with floating point numbers", "[kmath][sin]") {

  constexpr auto csin1 = kmath::sin(0.5);
  constexpr auto csin2 = kmath::sin(-0.5);
  auto rsin1 = kmath::sin(0.5);
  auto rsin2 = kmath::sin(-0.5);

  REQUIRE_THAT(csin1, Catch::Matchers::WithinAbs(rsin1, eps));
  REQUIRE_THAT(csin2, Catch::Matchers::WithinAbs(rsin2, eps));
}

TEST_CASE("sinh function with integers", "[kmath][sinh]") {

  constexpr auto csinh1 = kmath::sinh(1);
  constexpr auto csinh2 = kmath::sinh(0);
  constexpr auto csinh3 = kmath::sinh(-1);
  auto rsinh1 = kmath::sinh(1);
  auto rsinh2 = kmath::sinh(0);
  auto rsinh3 = kmath::sinh(-1);

  REQUIRE_THAT(csinh1, Catch::Matchers::WithinAbs(rsinh1, eps));
  REQUIRE_THAT(csinh2, Catch::Matchers::WithinAbs(rsinh2, eps));
  REQUIRE_THAT(csinh3, Catch::Matchers::WithinAbs(rsinh3, eps));
}

TEST_CASE("sinh function with floating point numbers", "[kmath][sinh]") {

  constexpr auto csinh1 = kmath::sinh(0.5);
  constexpr auto csinh2 = kmath::sinh(-0.5);
  auto rsinh1 = kmath::sinh(0.5);
  auto rsinh2 = kmath::sinh(-0.5);

  REQUIRE_THAT(csinh1, Catch::Matchers::WithinAbs(rsinh1, eps));
  REQUIRE_THAT(csinh2, Catch::Matchers::WithinAbs(rsinh2, eps));
}

TEST_CASE("sqrt function with integers", "[kmath][sqrt]") {

  constexpr auto csqrt1 = kmath::sqrt(4);
  constexpr auto csqrt2 = kmath::sqrt(1);
  constexpr auto csqrt3 = kmath::sqrt(0);
  auto rsqrt1 = kmath::sqrt(4);
  auto rsqrt2 = kmath::sqrt(1);
  auto rsqrt3 = kmath::sqrt(0);

  REQUIRE_THAT(csqrt1, Catch::Matchers::WithinAbs(rsqrt1, eps));
  REQUIRE_THAT(csqrt2, Catch::Matchers::WithinAbs(rsqrt2, eps));
  REQUIRE_THAT(csqrt3, Catch::Matchers::WithinAbs(rsqrt3, eps));
}

TEST_CASE("sqrt function with floating point numbers", "[kmath][sqrt]") {

  constexpr auto csqrt1 = kmath::sqrt(4.5);
  constexpr auto csqrt2 = kmath::sqrt(1.0);
  constexpr auto csqrt3 = kmath::sqrt(0.0);
  auto rsqrt1 = kmath::sqrt(4.5);
  auto rsqrt2 = kmath::sqrt(1.0);
  auto rsqrt3 = kmath::sqrt(0.0);

  REQUIRE_THAT(csqrt1, Catch::Matchers::WithinAbs(rsqrt1, eps));
  REQUIRE_THAT(csqrt2, Catch::Matchers::WithinAbs(rsqrt2, eps));
  REQUIRE_THAT(csqrt3, Catch::Matchers::WithinAbs(rsqrt3, eps));
}

TEST_CASE("tan function with integers", "[kmath][tan]") {

  constexpr auto ctan1 = kmath::tan(0);
  constexpr auto ctan2 = kmath::tan(1);
  constexpr auto ctan3 = kmath::tan(-1);
  auto rtan1 = kmath::tan(0);
  auto rtan2 = kmath::tan(1);
  auto rtan3 = kmath::tan(-1);

  REQUIRE_THAT(ctan1, Catch::Matchers::WithinAbs(rtan1, eps));
  REQUIRE_THAT(ctan2, Catch::Matchers::WithinAbs(rtan2, eps));
  REQUIRE_THAT(ctan3, Catch::Matchers::WithinAbs(rtan3, eps));
}

TEST_CASE("tan function with floating point numbers", "[kmath][tan]") {

  constexpr auto ctan1 = kmath::tan(0.5);
  constexpr auto ctan2 = kmath::tan(-0.5);
  auto rtan1 = kmath::tan(0.5);
  auto rtan2 = kmath::tan(-0.5);

  REQUIRE_THAT(ctan1, Catch::Matchers::WithinAbs(rtan1, eps));
  REQUIRE_THAT(ctan2, Catch::Matchers::WithinAbs(rtan2, eps));
}

TEST_CASE("tanh function with integers", "[kmath][tanh]") {

  constexpr auto ctanh1 = kmath::tanh(1);
  constexpr auto ctanh2 = kmath::tanh(0);
  constexpr auto ctanh3 = kmath::tanh(-1);
  auto rtanh1 = kmath::tanh(1);
  auto rtanh2 = kmath::tanh(0);
  auto rtanh3 = kmath::tanh(-1);

  REQUIRE_THAT(ctanh1, Catch::Matchers::WithinAbs(rtanh1, eps));
  REQUIRE_THAT(ctanh2, Catch::Matchers::WithinAbs(rtanh2, eps));
  REQUIRE_THAT(ctanh3, Catch::Matchers::WithinAbs(rtanh3, eps));
}

TEST_CASE("tanh function with floating point numbers", "[kmath][tanh]") {

  constexpr auto ctanh1 = kmath::tanh(0.5);
  constexpr auto ctanh2 = kmath::tanh(-0.5);
  auto rtanh1 = kmath::tanh(0.5);
  auto rtanh2 = kmath::tanh(-0.5);

  REQUIRE_THAT(ctanh1, Catch::Matchers::WithinAbs(rtanh1, eps));
  REQUIRE_THAT(ctanh2, Catch::Matchers::WithinAbs(rtanh2, eps));
}

TEST_CASE("tgamma function with integers", "[kmath][tgamma]") {

  constexpr auto ctgamma1 = kmath::tgamma(5);
  constexpr auto ctgamma2 = kmath::tgamma(1);
  constexpr auto ctgamma3 = kmath::tgamma(0);
  auto rtgamma1 = kmath::tgamma(5);
  auto rtgamma2 = kmath::tgamma(1);
  auto rtgamma3 = kmath::tgamma(0);

  REQUIRE_THAT(ctgamma1, Catch::Matchers::WithinAbs(rtgamma1, eps));
  REQUIRE_THAT(ctgamma2, Catch::Matchers::WithinAbs(rtgamma2, eps));
  REQUIRE_THAT(ctgamma3, Catch::Matchers::WithinAbs(rtgamma3, eps));
}

TEST_CASE("tgamma function with floating point numbers", "[kmath][tgamma]") {

  constexpr auto ctgamma1 = kmath::tgamma(5.5);
  constexpr auto ctgamma2 = kmath::tgamma(1.1);
  constexpr auto ctgamma3 = kmath::tgamma(0.0);
  auto rtgamma1 = kmath::tgamma(5.5);
  auto rtgamma2 = kmath::tgamma(1.1);
  auto rtgamma3 = kmath::tgamma(0.0);

  REQUIRE_THAT(ctgamma1, Catch::Matchers::WithinAbs(rtgamma1, eps));
  REQUIRE_THAT(ctgamma2, Catch::Matchers::WithinAbs(rtgamma2, eps));
  REQUIRE_THAT(ctgamma3, Catch::Matchers::WithinAbs(rtgamma3, eps));
}

TEST_CASE("trunc function with integers", "[kmath][trunc]") {

  constexpr auto ctrunc1 = kmath::trunc(5);
  constexpr auto ctrunc2 = kmath::trunc(-5);
  auto rtrunc1 = kmath::trunc(5);
  auto rtrunc2 = kmath::trunc(-5);

  REQUIRE(ctrunc1 == rtrunc1);
  REQUIRE(ctrunc2 == rtrunc2);
}

TEST_CASE("trunc function with floating point numbers", "[kmath][trunc]") {

  constexpr auto ctrunc1 = kmath::trunc(5.5);
  constexpr auto ctrunc2 = kmath::trunc(-5.5);
  auto rtrunc1 = kmath::trunc(5.5);
  auto rtrunc2 = kmath::trunc(-5.5);

  REQUIRE_THAT(ctrunc1, Catch::Matchers::WithinAbs(rtrunc1, eps));
  REQUIRE_THAT(ctrunc2, Catch::Matchers::WithinAbs(rtrunc2, eps));
}
