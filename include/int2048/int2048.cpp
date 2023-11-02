//
// Created by zj on 10/24/2023.
//

#include "include/int2048.h"

sjtu::int2048::int2048() : sign_(0), num_(1, 0) {}

sjtu::int2048::int2048(long long x) {
  if (x < 0) {
    sign_ = 1;
    x = -x;
  } else {
    sign_ = 0;
  }
  num_.clear();
  if (x == 0) {
    num_.push_back(0);
    return;
  }
  while (x) {
    num_.push_back(x % kBase);
    x /= kBase;
  }
}

sjtu::int2048::int2048(const std::string &s) {
  if (s[0] == '-') {
    sign_ = 1;
  } else {
    sign_ = 0;
  }
  num_.clear();
  int len = s.length();
  num_.resize((len - sign_ + kBaseN - 1) / kBaseN, 0);
  auto it = num_.begin();
//  num_t base = 1;
  unsigned digit = 0;
  for (int i = len - 1; i >= sign_; i--) {
    *it += (s[i] & 0xF) * kBaseArray[digit];
    if (++digit == kBaseN) {
      digit = 0;
      it++;
    }
  }
  standardize();
}
void sjtu::int2048::read(const std::string &s) {
  *this = int2048(s);
}
void sjtu::int2048::standardize() {
  while (!num_.empty() && num_.back() == 0) { // can be optimized
    num_.pop_back();
  }
  if (num_.empty()) {
    num_.push_back(0);
  }
//  num_.shrink_to_fit();
  if (isZero()) {
    sign_ = 0;
  }
}
bool sjtu::int2048::isZero() const {
  return num_.size() == 1 && num_[0] == 0;
}
std::string sjtu::int2048::toString() const {
  std::string s;
  if (isZero()) {
    s.push_back('0');
    return s;
  }
  s.reserve(num_.size() * kBaseN + sign_);
  if (sign_) {
    s.push_back('-');
  }
  s += std::to_string(num_.back());
  for (auto num = num_.rbegin() + 1; num != num_.rend(); num++) {
    std::string tmp = std::to_string(*num);
    s += std::string(kBaseN - tmp.length(), '0') + tmp;
  }
  return s;
}
void sjtu::int2048::print() const {
  std::cout << toString();
}
sjtu::int2048 sjtu::int2048::operator+() const {
  return *this;
}
sjtu::int2048 sjtu::int2048::operator-() const {
  int2048 tmp = *this;
  tmp.sign_ ^= 1;
  tmp.standardize();
  return tmp;
}
sjtu::int2048 &sjtu::int2048::operator=(const sjtu::int2048 &) = default;
sjtu::int2048::int2048(const sjtu::int2048 &) = default;

sjtu::int2048 &sjtu::int2048::plusOrMinus(const int2048 &other, bool minus) {
  if (this == &other) {
    if (minus) {
      *this = 0;
    } else {
      num_.push_back(0);
      num_t advance = 0;
      for (num_t &num : num_) {
        num += num + advance;
        if (num >= kBase) {
          num -= kBase;
          advance = 1;
        } else {
          advance = 0;
        }
      }
      standardize();
    }
    return *this;
  }
  if (sign_ == (other.sign_ ^ minus)) {
    num_.resize(std::max(size(), other.size()) + 1, 0);
    auto lhs = num_.begin();
    auto rhs = other.num_.begin();
    for (; rhs != other.num_.end(); lhs++, rhs++) {
      *lhs += *rhs;
      advancePlus(lhs);
    }
    while (lhs != num_.end() && *lhs >= kBase) {
      *lhs -= kBase;
      lhs++;
      *lhs += 1;
    }
  } else {
    bool lhs_is_bigger = false;
    if (size() != other.size()) {
      lhs_is_bigger = size() > other.size();
      if (!lhs_is_bigger) {
        num_.resize(other.size(), 0);
      }
    } else {
      auto lhs = num_.rbegin();
      auto rhs = other.num_.rbegin();
      for (; lhs != num_.rend(); lhs++, rhs++) {
        if (*lhs != *rhs) {
          lhs_is_bigger = *lhs > *rhs;
          num_.resize(num_.rend() - lhs, 0);
          break;
        }
        *lhs = 0;
      }
      if (lhs == num_.rend()) {
        num_.clear();
      }
    }
    auto lhs = num_.begin();
    auto rhs = other.num_.begin();
    if (lhs_is_bigger) {
      for (; lhs != num_.end() && rhs != other.num_.end(); lhs++, rhs++) {
        *lhs -= *rhs;
        advanceMinus(lhs);
      }
      while (lhs != num_.end() && *lhs >= kBase) {
        *lhs += kBase;
        lhs++;
        *lhs -= 1;
      }
    } else {
      for (; lhs != num_.end(); lhs++, rhs++) {
        *lhs = *rhs - *lhs;
        if (*lhs >= kBase) {
          *lhs += kBase;
          *(lhs + 1) += 1;
        }
      }
      sign_ ^= 1;
    }
  }
  standardize();
  return *this;
}

sjtu::int2048 &sjtu::int2048::operator+=(const sjtu::int2048 &other) {
  return plusOrMinus(other, false);
}
sjtu::int2048 sjtu::operator+(sjtu::int2048 lhs, const sjtu::int2048 &rhs) {
  return lhs.plusOrMinus(rhs, false);
}
sjtu::int2048 &sjtu::int2048::add(const sjtu::int2048 &other) {
  return plusOrMinus(other, false);
}
sjtu::int2048 sjtu::add(sjtu::int2048 lhs, const sjtu::int2048 &rhs) {
  return lhs.plusOrMinus(rhs, false);
}

sjtu::int2048 &sjtu::int2048::operator-=(const sjtu::int2048 &rhs) {
  return plusOrMinus(rhs, true);
}
sjtu::int2048 sjtu::operator-(sjtu::int2048 lhs, const sjtu::int2048 &rhs) {
  return lhs.plusOrMinus(rhs, true);
}
sjtu::int2048 &sjtu::int2048::minus(const sjtu::int2048 &other) {
  return plusOrMinus(other, true);
}
sjtu::int2048 sjtu::minus(sjtu::int2048 lhs, const sjtu::int2048 &rhs) {
  return lhs.plusOrMinus(rhs, true);
}

size_t sjtu::int2048::size() const {
  return num_.size();
}
void sjtu::int2048::advancePlus(std::vector<sjtu::num_t>::iterator it) {
  if (*it >= kBase) {
    *it -= kBase;
    *(it + 1) += 1;
  }
}
void sjtu::int2048::advanceMinus(std::vector<sjtu::num_t>::iterator it) {
  if (*it >= kBase) {
    *it += kBase;
    *(it + 1) -= 1;
  }
}
std::istream &sjtu::operator>>(std::istream &is, sjtu::int2048 &x) {
  std::string s;
  is >> s;
  x.read(s);
  return is;
}
std::ostream &sjtu::operator<<(std::ostream &os, const sjtu::int2048 &x) {
  os << x.toString();
  return os;
}
bool sjtu::operator==(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  return lhs.sign_ == rhs.sign_ && lhs.num_ == rhs.num_;
}
bool sjtu::operator!=(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  return !(lhs == rhs);
}
bool sjtu::operator<(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  if (lhs.sign_ != rhs.sign_) {
    return lhs.sign_ > rhs.sign_;
  }
  int flag = lhs.sign_;
  if (lhs.size() != rhs.size()) {
    return (lhs.size() < rhs.size()) ^ flag;
  }
  auto lhs_it = lhs.num_.rbegin();
  auto rhs_it = rhs.num_.rbegin();
  for (; lhs_it != lhs.num_.rend(); lhs_it++, rhs_it++) {
    if (*lhs_it != *rhs_it) {
      return (*lhs_it < *rhs_it) ^ flag;
    }
  }
  return false;
}
bool sjtu::operator>(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  return rhs < lhs;
}
bool sjtu::operator<=(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  return !(lhs > rhs);
}
bool sjtu::operator>=(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  return !(lhs < rhs);
}
sjtu::int2048 sjtu::operator*(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  if (lhs.isZero() || rhs.isZero()) {
    return {0};
  }
  int2048 res;
  res.sign_ = lhs.sign_ ^ rhs.sign_;
  res.num_ = int2048::multiply(lhs.num_, rhs.num_);
  res.standardize();
  return res;
}
sjtu::int2048 &sjtu::int2048::operator*=(const sjtu::int2048 &other) {
  return *this = *this * other;
}

void sjtu::binarySearch(const sjtu::int2048 &dividend,
                        const sjtu::int2048 &divisor,
                        sjtu::int2048 &quotient_approx,
                        int left,
                        int right) {
  if (left > right) {
    return;
  }
  quotient_approx += left;
  int2048 tmp = quotient_approx * divisor;
  int max_range = right - left;
  int attempt = 1;
  int ans = 0;
  while (attempt <= max_range) {
    attempt <<= 1;
  }
  for (; attempt; attempt >>= 1) {
    if (multiplyInt(divisor, ans + attempt) + tmp <= dividend) {
      ans += attempt;
    }
  }
  quotient_approx += ans;
}
sjtu::int2048 sjtu::multiplyExp10(const sjtu::int2048 &x, int exp) {
  if (exp == 0) {
    return x;
  }
  sjtu::int2048 res;
  res.sign_ = x.sign_;
  if (exp > 0) {
    int shift = exp / kBaseN;
    size_t rem = exp % kBaseN;
    num_t last = 0;
    res.num_.resize(x.size() + shift, 0);
    auto lhs = res.num_.begin() + shift;
    auto rhs = x.num_.begin();
    for (; lhs != res.num_.end(); lhs++, rhs++) {
      *lhs = last + *rhs % kBaseArray[kBaseN - rem] * kBaseArray[rem];
      last = *rhs / kBaseArray[kBaseN - rem];
    }
    if (last) {
      res.num_.push_back(last);
    }
  } else {
    exp = -exp;
    int shift = exp / kBaseN;
    size_t rem = exp % kBaseN;
    if (shift >= x.size()) {
      return 0;
    }
    res.num_.resize(x.size() - shift, 0);
    auto lhs = res.num_.rbegin();
    auto rhs = x.num_.rbegin();
    num_t last = 0;
    for (; lhs != res.num_.rend(); lhs++, rhs++) {
      *lhs = last + *rhs / kBaseArray[rem];
      last = *rhs % kBaseArray[rem] * kBaseArray[kBaseN - rem];
    }
  }
  res.standardize();
  return res;
}
sjtu::int2048 sjtu::inverse(const sjtu::int2048 &x, int n) {
  static_assert(kBaseN >= 4 && kBaseN <= 18, "Not implemented for this kBaseN");
  if (n + n <= kBaseN) {
    return static_cast<long long>(kBaseArray[n + n] / x.num_[0]);
  }
  int k = (n + 2) >> 1;
  int2048 a_k = inverse(multiplyExp10(x, k - n), k);
  int2048 a =
      multiplyInt(multiplyExp10(a_k, n - k), 2) - multiplyExp10(x * a_k * a_k, -2 * k);
  binarySearch(multiplyExp10(1, 2 * n), x, a, -100, 100);
  return a;
}
int sjtu::int2048::length() const {
  size_t leading_zeros =
      std::upper_bound(kBaseArray.begin(), kBaseArray.end(), num_.back()) - kBaseArray.begin();
  leading_zeros = kBaseN - leading_zeros;
  return size() * kBaseN - leading_zeros;
}
sjtu::int2048 sjtu::divide(sjtu::int2048 dividend, sjtu::int2048 divisor) {
  if (divisor.isZero()) {
    throw std::runtime_error("Divide by zero");
  }
  if (divisor.sign_) {
    dividend.sign_ ^= 1;
    divisor.sign_ ^= 1;
  }
  int extra_length = dividend.length() - 2 * divisor.length();
  if (extra_length >= 0) {
    dividend = multiplyExp10(dividend, extra_length);
    divisor = multiplyExp10(divisor, extra_length);
  }
  int n = divisor.length();
  int2048 divisor_inverse = inverse(divisor, n);
  int2048 quotient = multiplyExp10(dividend * divisor_inverse, -2 * n);
  binarySearch(dividend, divisor, quotient, -10, 10);
  return quotient;
}
sjtu::int2048 &sjtu::int2048::flipSign() {
  sign_ ^= 1;
  return *this;
}
sjtu::int2048 &sjtu::int2048::operator/=(const sjtu::int2048 &rhs) {
  return *this = divide(*this, rhs);
}
sjtu::int2048 sjtu::operator/(const sjtu::int2048 &lhs, const sjtu::int2048 &rhs) {
  return divide(lhs, rhs);
}
sjtu::int2048 &sjtu::int2048::operator%=(const sjtu::int2048 &rhs) {
  return *this -= *this / rhs * rhs;
}
sjtu::int2048 sjtu::operator%(sjtu::int2048 lhs, const sjtu::int2048 &rhs) {
  return lhs %= rhs;
}
sjtu::int2048 sjtu::multiplyInt(sjtu::int2048 lhs, int rhs) {
  static_assert(kBaseN <= 25, "Not implemented for this kBaseN");
  if (rhs == 0) {
    return 0;
  }
  if (rhs < 0) {
    lhs.sign_ ^= 1;
    rhs = -rhs;
  }
  num_t last = 0;
  for (num_t &num : lhs.num_) {
    unsigned __int128 tmp = (__int128) num * rhs + last;
    num = tmp % kBase;
    last = tmp / kBase;
  }
  if (last) {
    lhs.num_.push_back(last);
  }
  return lhs;
}

sjtu::NTTBase::Int sjtu::operator+(sjtu::NTTBase::Int a, sjtu::NTTBase::Int b) {
  unsigned c = a.x + b.x;
  return c >= sjtu::NTTBase::kMod ? c - sjtu::NTTBase::kMod : c;
}
sjtu::NTTBase::Int sjtu::operator-(sjtu::NTTBase::Int a, sjtu::NTTBase::Int b) {
  return a + sjtu::NTTBase::Int(sjtu::NTTBase::kMod - b.x);
}
sjtu::NTTBase::Int sjtu::operator*(sjtu::NTTBase::Int a, sjtu::NTTBase::Int b) {
  return (unsigned long long) a.x * b.x % sjtu::NTTBase::kMod;
}
constexpr sjtu::NTTBase::Int sjtu::NTTBase::powerMod(sjtu::NTTBase::Int a, unsigned int b) {
  sjtu::NTTBase::Int res = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      res = res * a;
    }
    a = a * a;
  }
  return res;
}
constexpr sjtu::NTTBase::Int sjtu::NTTBase::getInverse(sjtu::NTTBase::Int a) {
  return powerMod(a, kMod - 2).x;
}
void sjtu::NTTBase::calculateRev(size_t n) {
  if (rev_.size() == n) {
    return;
  }
  size_t n2 = n >> 1;
  rev_.resize(n);
  for (size_t i = 0; i < n; i++) {
    rev_[i] = (rev_[i >> 1] >> 1) | ((i & 1) * n2);
  }
}
void sjtu::NTTBase::change(std::vector<Int> &x) {
  for (size_t i = 0; i < x.size(); i++) {
    if (rev_[i] < i) {
      swap(x[i], x[rev_[i]]);
    }
  }
}
constexpr void sjtu::NTTBase::swap(sjtu::NTTBase::Int &a, sjtu::NTTBase::Int &b) {
  a.x ^= b.x ^= a.x ^= b.x;
}
size_t sjtu::NTTBase::getLength(size_t l1, size_t l2) {
  return 1 << (sizeof(size_t) * 8 - __builtin_clzll(l1 + l2 - 1));
}
void sjtu::NTTBase::ntt(std::vector<Int> &x, bool positive) {
  change(x);
  for (size_t h = 2; h <= x.size(); h <<= 1) {
    Int w0 = powerMod(positive ? kG : kInvG, (kMod - 1) / h);
    for (size_t j = 0; j < x.size(); j += h) {
      Int w = 1;
      for (size_t k = j; k < j + (h >> 1); k++) {
        Int tmp = w * x[k + (h >> 1)];
        x[k + (h >> 1)] = x[k] - tmp;
        x[k] = x[k] + tmp;
        w = w * w0;
      }
    }
  }
  if (!positive) {
    Int u = getInverse(x.size());
    for (auto &num : x) {
      num = num * u;
    }
  }
}
std::vector<sjtu::NTTBase::Int> sjtu::NTTBase::unpack(const std::vector<num_t> &num) {
  std::vector<Int> res;
  res.reserve(num.size() * kBaseN);
  for (auto i : num) {
    for (int j = 0; j < kBaseN; j++) {
      res.emplace_back(i % 10);
      i /= 10;
    }
  }
  while (!res.empty() && res.back().x == 0) {
    res.pop_back();
  }
  return res;
}
std::vector<sjtu::num_t> sjtu::NTTBase::pack(const std::vector<Int> &num) {
  std::vector<num_t> res;
  res.reserve((num.size() + kBaseN - 1) / kBaseN);
  unsigned digit = 0;
  num_t tmp = 0;
  for (auto i : num) {
    tmp += i.x * kBaseArray[digit];
    if (++digit == kBaseN) {
      digit = 0;
      res.push_back(tmp);
      tmp = 0;
    }
  }
  if (tmp) {
    res.push_back(tmp);
  }
  return res;
}
std::vector<sjtu::NTTBase::Int> sjtu::NTTBase::multiply(std::vector<Int> &a, std::vector<Int> &b) {
  size_t n = getLength(a.size(), b.size());
  calculateRev(n);
  a.resize(n, 0);
  b.resize(n, 0);
  ntt(a, true);
  ntt(b, true);
  for (size_t i = 0; i < n; i++) {
    a[i] = a[i] * b[i];
  }
  ntt(a, false);
  a.resize(n + kExtraDigits, 0);
  for (size_t i = 0; i < a.size() - 1; i++) {
    a[i + 1] = a[i + 1] + (a[i].x / 10);
    a[i].x %= 10;
  }
  return a;
}
std::vector<sjtu::num_t> sjtu::NTTBase::multiply(const std::vector<num_t> &a,
                                                 const std::vector<num_t> &b) {
  auto a_unpacked = unpack(a);
  auto b_unpacked = unpack(b);
  return pack(multiply(a_unpacked, b_unpacked));
}
