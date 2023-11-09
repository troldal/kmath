//
// Created by I22696 on 09-11-2023.
//

#ifndef GCEM_KMATH_HPP
#define GCEM_KMATH_HPP

#include "gcem/include/gcem.hpp"
#include <cmath>
#include <iostream>
#include <type_traits>

namespace kmath {

template <typename T> constexpr auto abs(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::abs(x);
  else
    return std::abs(x);
}

template <typename T> constexpr auto acos(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::acos(x);
  else
    return std::acos(x);
}

template <typename T> constexpr auto acosh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::acosh(x);
  else
    return std::acosh(x);
}

template <typename T> constexpr auto asin(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::asin(x);
  else
    return std::asin(x);
}

template <typename T> constexpr auto asinh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::asinh(x);
  else
    return std::asinh(x);
}

template <typename T> constexpr auto atan(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::atan(x);
  else
    return std::atan(x);
}

template <typename T1, typename T2>
constexpr auto atan2(const T1 y, const T2 x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::atan2(y, x);
  else
    return std::atan2(y, x);
}

template <typename T> constexpr auto atanh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::atanh(x);
  else
    return std::atanh(x);
}

template <typename T1, typename T2>
constexpr auto beta(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::beta(a, b);
  else
    return std::beta(a, b);
}

template <typename T1, typename T2>
constexpr auto binomial_coef(const T1 n, const T2 k) noexcept {
  if (std::is_constant_evaluated())
    return gcem::binomial_coef(n, k);
  else
    return gcem::binomial_coef(n, k);
}

template <typename T> constexpr auto ceil(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::ceil(x);
  else
    return std::ceil(x);
}

template <typename T1, typename T2>
constexpr auto copysign(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::copysign(x, y);
  else
    return std::copysign(x, y);
}

template <typename T> constexpr auto cos(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::cos(x);
  else
    return std::cos(x);
}

template <typename T> constexpr auto cosh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::cosh(x);
  else
    return std::cosh(x);
}

template <typename T> constexpr auto erf(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::erf(x);
  else
    return std::erf(x);
}

template <typename T> constexpr auto erf_inv(const T p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::erf_inv(p);
  else
    return gcem::erf_inv(p);
}

template <typename T> constexpr auto exp(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::exp(x);
  else
    return std::exp(x);
}

template <typename T> constexpr auto expm1(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::expm1(x);
  else
    return std::expm1(x);
}

template <typename T> constexpr auto factorial(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::factorial(x);
  else
    return gcem::factorial(x);
}

template <typename T> constexpr auto floor(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::floor(x);
  else
    return std::floor(x);
}

template <typename T1, typename T2>
constexpr auto fmod(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::fmod(x, y);
  else
    return std::fmod(x, y);
}

template <typename T1, typename T2>
constexpr auto gcd(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::gcd(a, b);
  else
    return gcem::gcd(a, b);
}

template <typename T1, typename T2>
constexpr auto hypot(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::hypot(x, y);
  else
    return std::hypot(x, y);
}

template <typename T1, typename T2, typename T3>
constexpr auto incomplete_beta(const T1 a, const T2 b, const T3 z) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_beta(a, b, z);
  else
    return gcem::incomplete_beta(a, b, z);
}

template <typename T1, typename T2, typename T3>
constexpr auto incomplete_beta_inv(const T1 a, const T2 b,
                                   const T3 p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_beta_inv(a, b, p);
  else
    return gcem::incomplete_beta_inv(a, b, p);
}

template <typename T1, typename T2>
constexpr auto incomplete_gamma(const T1 a, const T2 x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_gamma(a, x);
  else
    return gcem::incomplete_gamma(a, x);
}

template <typename T1, typename T2>
constexpr auto incomplete_gamma_inv(const T1 a, const T2 p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_gamma_inv(a, p);
  else
    return gcem::incomplete_gamma_inv(a, p);
}

template <typename T> constexpr auto inv_sqrt(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::inv_sqrt(x);
  else
    return gcem::inv_sqrt(x);
}

template <typename T1, typename T2>
constexpr auto lbeta(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lbeta(a, b);
  else
    return gcem::lbeta(a, b);
}

template <typename T1, typename T2>
constexpr auto lcm(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lcm(a, b);
  else
    return gcem::lcm(a, b);
}

template <typename T> constexpr auto lgamma(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lgamma(x);
  else
    return std::lgamma(x);
}

template <typename T1, typename T2>
constexpr auto lmgamma(const T1 a, const T2 p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lmgamma(a, p);
  else
    return gcem::lmgamma(a, p);
}

template <typename T> constexpr auto log(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log(x);
  else
    return std::log(x);
}

template <typename T> constexpr auto log1p(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log1p(x);
  else
    return std::log1p(x);
}

template <typename T> constexpr auto log2(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log2(x);
  else
    return std::log2(x);
}

template <typename T> constexpr auto log10(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log10(x);
  else
    return std::log10(x);
}

template <typename T1, typename T2>
constexpr auto log_binomial_coef(const T1 n, const T2 k) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log_binomial_coef(n, k);
  else
    return gcem::log_binomial_coef(n, k);
}

template <typename T1, typename T2>
constexpr auto max(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::max(x, y);
  else
    return std::max(x, y);
}

template <typename T1, typename T2>
constexpr auto min(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::min(x, y);
  else
    return std::min(x, y);
}

template <typename T1, typename T2>
constexpr auto pow(const T1 base, const T2 exp_term) noexcept {
  if (std::is_constant_evaluated())
    return gcem::pow(base, exp_term);
  else
    return std::pow(base, exp_term);
}

template <typename T> constexpr auto round(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::round(x);
  else
    return std::round(x);
}

template <typename T> constexpr auto sgn(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sgn(x);
  else
    return gcem::sgn(x);
}

template <typename T> constexpr bool signbit(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::signbit(x);
  else
    return std::signbit(x);
}

template <typename T> constexpr auto sin(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sin(x);
  else
    return std::sin(x);
}

template <typename T> constexpr auto sinh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sinh(x);
  else
    return std::sinh(x);
}

template <typename T> constexpr auto sqrt(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sqrt(x);
  else
    return std::sqrt(x);
}

template <typename T> constexpr auto tan(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::tan(x);
  else
    return std::tan(x);
}

template <typename T> constexpr auto tanh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::tanh(x);
  else
    return std::tanh(x);
}

template <typename T> constexpr auto tgamma(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::tgamma(x);
  else
    return std::tgamma(x);
}

template <typename T> constexpr auto trunc(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::trunc(x);
  else
    return std::trunc(x);
}
} // namespace kmath

#endif // GCEM_KMATH_HPP
