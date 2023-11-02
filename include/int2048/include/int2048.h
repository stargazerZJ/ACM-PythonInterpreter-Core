//
// Created by zj on 10/24/2023.
//

#ifndef ACM_INT2048_INT2048_H
#define ACM_INT2048_INT2048_H

#include <complex>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

namespace high_precision {
using num_t = unsigned long long;
static constexpr unsigned kBaseN = 18;
static constexpr std::array<num_t, kBaseN + 1> kBaseArray = []() {
  std::array<num_t, kBaseN + 1> res{};
  res[0] = 1;
  for (int i = 1; i < kBaseN + 1; i++) {
    res[i] = res[i - 1] * 10;
  }
  return res;
}();
static constexpr num_t kBase = kBaseArray[kBaseN];

class NTTBase {
 private:
  static inline std::vector<unsigned> rev_{};
  static constexpr unsigned kMod = 2013265921;
  static constexpr unsigned kG = 31;
  static constexpr unsigned kInvG = 64944062;
  static constexpr unsigned kExtraDigits = 15;

  struct Int {
    unsigned x{};
    constexpr inline Int() = default;
    constexpr inline Int(unsigned x) : x(x) {}
  };
  friend inline Int operator+(Int a, Int b);
  friend inline Int operator-(Int a, Int b);
  friend inline Int operator*(Int a, Int b);

  static inline constexpr void swap(Int &a, Int &b);
  static inline constexpr Int powerMod(high_precision::NTTBase::Int a, unsigned b);
  static inline constexpr Int getInverse(high_precision::NTTBase::Int a);
  static inline void calculateRev(size_t n);
  static inline void change(std::vector<Int> &x);
  static inline void ntt(std::vector<Int> &x, bool positive);
  static inline size_t getLength(size_t l1, size_t l2);
  static inline std::vector<Int> unpack(const std::vector<num_t> &num);
  static inline std::vector<num_t> pack(const std::vector<Int> &num);
  static inline std::vector<Int> multiply(std::vector<Int> &a, std::vector<Int> &b);
 protected:
  static inline std::vector<num_t> multiply(const std::vector<num_t> &a,
                                            const std::vector<num_t> &b);
};
class int2048 : public NTTBase {
 public:
  int2048();
  explicit int2048(long long);
  explicit int2048(const std::string &);
  int2048(const int2048 &);

  [[nodiscard]] bool isZero() const;
  inline void standardize();

  void read(const std::string &);
  [[nodiscard]] std::string toString() const;
  void print() const;

  int2048 operator+() const;
  int2048 operator-() const;

  int2048 &operator=(const int2048 &);

  int2048 &operator+=(const int2048 &);
  friend int2048 operator+(int2048, const int2048 &);
  int2048 &add(const int2048 &);
  friend int2048 add(int2048, const int2048 &);

  int2048 &operator-=(const int2048 &);
  friend int2048 operator-(int2048, const int2048 &);
  int2048 &minus(const int2048 &);
  friend int2048 minus(int2048, const int2048 &);

  int2048 &operator*=(const int2048 &);
  friend int2048 operator*(const int2048 &, const int2048 &);
  friend int2048 multiplyInt(int2048, int);

  int2048 &operator/=(const int2048 &);
  friend int2048 operator/(const int2048 &, const int2048 &);

  int2048 &operator%=(const int2048 &);
  friend int2048 operator%(int2048, const int2048 &);

  friend std::istream &operator>>(std::istream &, int2048 &);
  friend std::ostream &operator<<(std::ostream &, const int2048 &);

  friend bool operator==(const int2048 &, const int2048 &);
  friend bool operator!=(const int2048 &, const int2048 &);
  friend bool operator<(const int2048 &, const int2048 &);
  friend bool operator>(const int2048 &, const int2048 &);
  friend bool operator<=(const int2048 &, const int2048 &);
  friend bool operator>=(const int2048 &, const int2048 &);

  friend int2048 multiplyExp10(const int2048 &x, int exp);
  [[nodiscard]] int length() const;
  int2048 &flipSign();
 private:

  int sign_;
  std::vector<num_t> num_;

  [[nodiscard]] inline size_t size() const;
  static inline void advancePlus(std::vector<num_t>::iterator it);
  static inline void advanceMinus(std::vector<num_t>::iterator it);
  inline int2048 &plusOrMinus(const int2048 &other, bool minus);
  friend inline void binarySearch(const int2048 &dividend,
                                  const int2048 &divisor,
                                  int2048 &quotient_approx,
                                  int left,
                                  int right);
  // returns $\left\lfloor \frac{10^{2n}}{x} \right\rfloor$
  friend int2048 inverse(const int2048 &x, int n);
  friend inline int2048 divide(int2048 dividend, int2048 divisor);

};
}

#endif //ACM_INT2048_INT2048_H
