#ifndef STLC_INTERNAL_CHRONO_BASE_HPP
#define STLC_INTERNAL_CHRONO_BASE_HPP
#include <chrono>

namespace STLC::chrono
{
  template <typename Rep, typename Period = std::ratio<1>>
  using duration_t = std::chrono::duration<Rep, Period>;

  template <typename Rep>
  using hours_t = duration_t<Rep, std::chrono::hours::period>;

  template <typename Rep>
  using minutes_t = duration_t<Rep, std::chrono::minutes::period>;

  template <typename Rep>
  using seconds_t = duration_t<Rep, std::chrono::seconds::period>;

  template <typename Rep>
  using milliseconds_t = duration_t<Rep, std::chrono::milliseconds::period>;

  template <typename Rep>
  using microseconds_t = duration_t<Rep, std::chrono::microseconds::period>;

  template <typename Rep>
  using nanoseconds_t = duration_t<Rep, std::chrono::nanoseconds::period>;
} // namespace STLC::chrono
#endif // STLC_INTERNAL_CHRONO_BASE_HPP
