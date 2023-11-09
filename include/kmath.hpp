/*

   Copyright (C) 2023 Kenneth Troldal Balslev

   This file is part of the kmath C++ library.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

/**
 * @file kmath.hpp
 * This header file serves as a wrapper around the <cmath> header and the GCEM
 * library for compile-time math computations. The purpose is to use the GCEM
 * functions for compile-time computations and the <cmath> functions for runtime
 * computations.
 */
#ifndef KMATH_HPP
#define KMATH_HPP

#include "gcem/include/gcem.hpp"
#include <cmath>
#include <iostream>
#include <type_traits>

namespace kmath {

/**
 * @brief Compute the absolute value of a number.
 *
 * @param x The number to compute the absolute value of.
 * @return constexpr auto The absolute value of x.
 */
template <typename T> constexpr auto abs(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::abs(x);
  else
    return std::abs(x);
}

/**
 * @brief Computes the arc cosine of a number.
 *
 * @param x The number to compute the arc cosine for, in the range [-1, 1].
 * @return constexpr auto The arc cosine of the input number in radians.
 */
template <typename T> constexpr auto acos(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::acos(x);
  else
    return std::acos(x);
}

/**
 * @brief Computes the inverse hyperbolic cosine of a number.
 *
 * @param x The number to compute the inverse hyperbolic cosine for, x >= 1.
 * @return constexpr auto The inverse hyperbolic cosine of the input number.
 */
template <typename T> constexpr auto acosh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::acosh(x);
  else
    return std::acosh(x);
}

/**
 * @brief Computes the arc sine of a number.
 *
 * @param x The number to compute the arc sine for, in the range [-1, 1].
 * @return constexpr auto The arc sine of the input number in radians.
 */
template <typename T> constexpr auto asin(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::asin(x);
  else
    return std::asin(x);
}

/**
 * @brief Computes the inverse hyperbolic sine of a number.
 *
 * @param x The number to compute the inverse hyperbolic sine for.
 * @return constexpr auto The inverse hyperbolic sine of the input number.
 */
template <typename T> constexpr auto asinh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::asinh(x);
  else
    return std::asinh(x);
}

/**
 * @brief Computes the arc tangent of a number.
 *
 * @param x The number to compute the arc tangent for.
 * @return constexpr auto The arc tangent of the input number in radians.
 */
template <typename T> constexpr auto atan(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::atan(x);
  else
    return std::atan(x);
}

/**
 * @brief Computes the arc tangent of two numbers, y/x.
 *
 * @param y The y-coordinate of the point.
 * @param x The x-coordinate of the point.
 * @return constexpr auto The arc tangent of y/x, taking into account which
 * quadrant the point is in.
 */
template <typename T1, typename T2>
constexpr auto atan2(const T1 y, const T2 x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::atan2(y, x);
  else
    return std::atan2(y, x);
}

/**
 * @brief Computes the inverse hyperbolic tangent of a number.
 *
 * @param x The number to compute the inverse hyperbolic tangent for, in the
 * range (-1, 1).
 * @return constexpr auto The inverse hyperbolic tangent of the input number.
 */
template <typename T> constexpr auto atanh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::atanh(x);
  else
    return std::atanh(x);
}

/**
 * @brief Computes the beta function of two numbers.
 *
 * @param a The first parameter of the beta function.
 * @param b The second parameter of the beta function.
 * @return constexpr auto The beta function of the input numbers.
 */
template <typename T1, typename T2>
constexpr auto beta(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::beta(a, b);
  else
    return std::beta(a, b);
}

/**
 * @brief Computes the binomial coefficient (n choose k).
 *
 * @param n The total number of items.
 * @param k The number of items to choose.
 * @return constexpr auto The binomial coefficient of n and k.
 */
template <typename T1, typename T2>
constexpr auto binomial_coef(const T1 n, const T2 k) noexcept {
  if (std::is_constant_evaluated())
    return gcem::binomial_coef(n, k);
  else
    return gcem::binomial_coef(n, k);
}

/**
 * @brief Computes the smallest integer value not less than x.
 *
 * @param x The number to compute the ceiling of.
 * @return constexpr auto The smallest integer not less than x.
 */
template <typename T> constexpr auto ceil(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::ceil(x);
  else
    return std::ceil(x);
}

/**
 * @brief Returns x with its magnitude copied from y and its sign copied from y.
 *
 * @param x The value with the magnitude to return.
 * @param y The value with the sign to return.
 * @return constexpr auto The value with the magnitude of x and the sign of y.
 */
template <typename T1, typename T2>
constexpr auto copysign(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::copysign(x, y);
  else
    return std::copysign(x, y);
}

/**
 * @brief Computes the cosine of a number.
 *
 * @param x The number to compute the cosine for, in radians.
 * @return constexpr auto The cosine of the input number.
 */
template <typename T> constexpr auto cos(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::cos(x);
  else
    return std::cos(x);
}

/**
 * @brief Computes the hyperbolic cosine of a number.
 *
 * @param x The number to compute the hyperbolic cosine for.
 * @return constexpr auto The hyperbolic cosine of the input number.
 */
template <typename T> constexpr auto cosh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::cosh(x);
  else
    return std::cosh(x);
}

/**
 * @brief Computes the error function of a number.
 *
 * @param x The number to compute the error function for.
 * @return constexpr auto The error function of the input number.
 */
template <typename T> constexpr auto erf(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::erf(x);
  else
    return std::erf(x);
}

/**
 * @brief Computes the inverse error function of a number.
 *
 * @param x The number to compute the inverse error function for.
 * @return constexpr auto The inverse error function of the input number.
 */
template <typename T> constexpr auto erf_inv(const T p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::erf_inv(p);
  else
    return gcem::erf_inv(p);
}

/**
 * @brief Computes the base-e exponential function of x.
 *
 * @param x The exponent value.
 * @return constexpr auto The value of e^x.
 */
template <typename T> constexpr auto exp(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::exp(x);
  else
    return std::exp(x);
}

/**
 * @brief Computes the exponential minus one function of x, i.e., e^x - 1.
 *
 * @param x The exponent value.
 * @return constexpr auto The value of e^x - 1.
 */
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

/**
 * @brief Computes the largest integer value not greater than x.
 *
 * @param x The floating point value.
 * @return constexpr auto The largest integer not greater than x.
 */
template <typename T> constexpr auto floor(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::floor(x);
  else
    return std::floor(x);
}

/**
 * @brief Computes the modulo of the arguments after division.
 *
 * @param x The dividend.
 * @param y The divisor.
 * @return constexpr auto The remainder of x/y.
 */
template <typename T1, typename T2>
constexpr auto fmod(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::fmod(x, y);
  else
    return std::fmod(x, y);
}

/**
 * @brief Calculates the greatest common divisor of two integers.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return constexpr auto The greatest common divisor of a and b.
 */
template <typename T1, typename T2>
constexpr auto gcd(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::gcd(a, b);
  else
    return gcem::gcd(a, b);
}

/**
 * @brief Calculates the hypotenuse of a right-angled triangle.
 *
 * @param x The length of the first side.
 * @param y The length of the second side.
 * @return constexpr auto The hypotenuse of the triangle.
 */
template <typename T1, typename T2>
constexpr auto hypot(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::hypot(x, y);
  else
    return std::hypot(x, y);
}

/**
 * @brief Evaluates the incomplete beta function.
 *
 * @param a The alpha parameter.
 * @param b The beta parameter.
 * @param x The upper limit of integration.
 * @return constexpr auto The value of the incomplete beta function.
 */
template <typename T1, typename T2, typename T3>
constexpr auto incomplete_beta(const T1 a, const T2 b, const T3 z) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_beta(a, b, z);
  else
    return gcem::incomplete_beta(a, b, z);
}

/**
 * @brief Evaluates the inverse of the incomplete beta function.
 *
 * @param a The alpha parameter.
 * @param b The beta parameter.
 * @param p The probability for the inverse calculation.
 * @return constexpr auto The value of x for which the incomplete beta function
 * equals p.
 */
template <typename T1, typename T2, typename T3>
constexpr auto incomplete_beta_inv(const T1 a, const T2 b,
                                   const T3 p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_beta_inv(a, b, p);
  else
    return gcem::incomplete_beta_inv(a, b, p);
}

/**
 * @brief Evaluates the incomplete gamma function.
 *
 * @param a The shape parameter.
 * @param x The upper limit of integration.
 * @return constexpr auto The value of the incomplete gamma function.
 */
template <typename T1, typename T2>
constexpr auto incomplete_gamma(const T1 a, const T2 x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_gamma(a, x);
  else
    return gcem::incomplete_gamma(a, x);
}

/**
 * @brief Evaluates the inverse of the incomplete gamma function.
 *
 * @param a The shape parameter.
 * @param p The probability for the inverse calculation.
 * @return constexpr auto The value of x for which the incomplete gamma function
 * equals p.
 */
template <typename T1, typename T2>
constexpr auto incomplete_gamma_inv(const T1 a, const T2 p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::incomplete_gamma_inv(a, p);
  else
    return gcem::incomplete_gamma_inv(a, p);
}

/**
 * @brief Calculates the inverse square root of a number.
 *
 * @param x The number to calculate the inverse square root of.
 * @return constexpr auto The inverse square root of x.
 */
template <typename T> constexpr auto inv_sqrt(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::inv_sqrt(x);
  else
    return gcem::inv_sqrt(x);
}

/**
 * @brief Evaluates the log beta function.
 *
 * @param a The alpha parameter.
 * @param b The beta parameter.
 * @return constexpr auto The logarithm of the beta function value.
 */
template <typename T1, typename T2>
constexpr auto lbeta(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lbeta(a, b);
  else
    return gcem::lbeta(a, b);
}

/**
 * @brief Calculates the least common multiple of two integers.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return constexpr auto The least common multiple of a and b.
 */
template <typename T1, typename T2>
constexpr auto lcm(const T1 a, const T2 b) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lcm(a, b);
  else
    return gcem::lcm(a, b);
}

/**
 * @brief Evaluates the log gamma function.
 *
 * @param x The input value.
 * @return constexpr auto The value of the logarithm of the gamma function at x.
 */
template <typename T> constexpr auto lgamma(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lgamma(x);
  else
    return std::lgamma(x);
}

/**
 * @brief Evaluates the log modified gamma function.
 *
 * @param n The order of the derivative.
 * @param x The input value.
 * @return constexpr auto The value of the log modified gamma function at x.
 */
template <typename T1, typename T2>
constexpr auto lmgamma(const T1 a, const T2 p) noexcept {
  if (std::is_constant_evaluated())
    return gcem::lmgamma(a, p);
  else
    return gcem::lmgamma(a, p);
}

/**
 * @brief Calculates the natural logarithm of a number.
 *
 * @param x The number to calculate the logarithm of.
 * @return constexpr auto The natural logarithm of x.
 */
template <typename T> constexpr auto log(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log(x);
  else
    return std::log(x);
}

/**
 * @brief Calculates the natural logarithm of 1 plus a number.
 *
 * @param x The number to calculate the logarithm for (x+1).
 * @return constexpr auto The natural logarithm of x+1.
 */
template <typename T> constexpr auto log1p(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log1p(x);
  else
    return std::log1p(x);
}

/**
 * @brief Calculates the base-2 logarithm of a number.
 *
 * @param x The number to calculate the logarithm of.
 * @return constexpr auto The base-2 logarithm of x.
 */
template <typename T> constexpr auto log2(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log2(x);
  else
    return std::log2(x);
}

/**
 * @brief Calculates the base-10 logarithm of a number.
 *
 * @param x The number to calculate the logarithm of.
 * @return constexpr auto The base-10 logarithm of x.
 */
template <typename T> constexpr auto log10(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log10(x);
  else
    return std::log10(x);
}

/**
 * @brief Calculates the logarithm of the binomial coefficient.
 *
 * @param n The number of trials.
 * @param k The number of successes.
 * @return constexpr auto The natural logarithm of the binomial coefficient of n
 * and k.
 */
template <typename T1, typename T2>
constexpr auto log_binomial_coef(const T1 n, const T2 k) noexcept {
  if (std::is_constant_evaluated())
    return gcem::log_binomial_coef(n, k);
  else
    return gcem::log_binomial_coef(n, k);
}

/**
 * @brief Finds the maximum of two values.
 *
 * @param a The first value.
 * @param b The second value.
 * @return constexpr auto The maximum of a and b.
 */
template <typename T1, typename T2>
constexpr auto max(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::max(x, y);
  else
    return std::max(x, y);
}

/**
 * @brief Finds the minimum of two values.
 *
 * @param a The first value.
 * @param b The second value.
 * @return constexpr auto The minimum of a and b.
 */
template <typename T1, typename T2>
constexpr auto min(const T1 x, const T2 y) noexcept {
  if (std::is_constant_evaluated())
    return gcem::min(x, y);
  else
    return std::min(x, y);
}

/**
 * @brief Computes the value of x raised to the power y.
 *
 * @param x The base value.
 * @param y The exponent value.
 * @return constexpr auto The value of x^y.
 */
template <typename T1, typename T2>
constexpr auto pow(const T1 base, const T2 exp_term) noexcept {
  if (std::is_constant_evaluated())
    return gcem::pow(base, exp_term);
  else
    return std::pow(base, exp_term);
}

/**
 * @brief Rounds the given floating-point value to the nearest integer.
 *
 * This function rounds x to an integer value using away-from-zero rounding. For
 * halfway cases, it rounds away from zero.
 *
 * @param x The floating-point value to round.
 * @return constexpr auto The rounded integer value.
 */
template <typename T> constexpr auto round(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::round(x);
  else
    return std::round(x);
}

/**
 * @brief Determines the sign of a number.
 *
 * This function returns 1 if the number is positive, -1 if the number is
 * negative, and 0 if the number is zero.
 *
 * @param x The value to check the sign of.
 * @return constexpr int The sign of x: 1 (positive), 0 (zero), or -1
 * (negative).
 */
template <typename T> constexpr auto sgn(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sgn(x);
  else
    return gcem::sgn(x);
}

/**
 * @brief Determines the sign bit of a floating-point number.
 *
 * This function checks whether the sign bit of x is set. If the sign bit is
 * set, this typically indicates a negative number. However, this is not always
 * the case for NaNs or zeroes.
 *
 * @param x The floating-point value to check.
 * @return constexpr bool True if the sign bit is set, false otherwise.
 */
template <typename T> constexpr bool signbit(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::signbit(x);
  else
    return std::signbit(x);
}

/**
 * @brief Computes the sine of a number.
 *
 * @param x The number to compute the sine for, in radians.
 * @return constexpr auto The sine of the input number.
 */
template <typename T> constexpr auto sin(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sin(x);
  else
    return std::sin(x);
}

/**
 * @brief Computes the hyperbolic sine of a number.
 *
 * @param x The number to compute the hyperbolic sine for.
 * @return constexpr auto The hyperbolic sine of the input number.
 */
template <typename T> constexpr auto sinh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sinh(x);
  else
    return std::sinh(x);
}

/**
 * @brief Computes the square root of a number.
 *
 * @param x The number to compute the square root for.
 * @return constexpr auto The square root of the input number.
 */
template <typename T> constexpr auto sqrt(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::sqrt(x);
  else
    return std::sqrt(x);
}

/**
 * @brief Computes the tangent of a number.
 *
 * @param x The number to compute the tangent for, in radians.
 * @return constexpr auto The tangent of the input number.
 */
template <typename T> constexpr auto tan(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::tan(x);
  else
    return std::tan(x);
}

/**
 * @brief Computes the hyperbolic tangent of a number.
 *
 * @param x The number to compute the hyperbolic tangent for.
 * @return constexpr auto The hyperbolic tangent of the input number.
 */
template <typename T> constexpr auto tanh(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::tanh(x);
  else
    return std::tanh(x);
}

/**
 * @brief Computes the gamma function of x.
 *
 * The gamma function is an extension of the factorial function to real and
 * complex numbers. It is defined by the integral Gamma(z) = integral from 0 to
 * infinity of t^(z-1)e^(-t) dt, for Re(z) > 0 and by analytic continuation
 * elsewhere. For positive integers, gamma(n) = (n-1)!.
 *
 * @param x The input value.
 * @return constexpr auto The gamma function of x.
 */
template <typename T> constexpr auto tgamma(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::tgamma(x);
  else
    return std::tgamma(x);
}

/**
 * @brief Truncates the given floating-point value to an integer.
 *
 * This function discards the fractional part of x, yielding a value that is not
 * larger in magnitude than x.
 *
 * @param x The floating-point value to truncate.
 * @return constexpr auto The truncated integer value.
 */
template <typename T> constexpr auto trunc(const T x) noexcept {
  if (std::is_constant_evaluated())
    return gcem::trunc(x);
  else
    return std::trunc(x);
}
} // namespace kmath

#endif // KMATH_HPP
