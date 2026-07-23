#ifndef STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#define STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#include <STLConvenience/type_traits.hpp>
#include <chrono>

namespace STLC::chrono
{
  template <typename Rep,
            typename Period = std::ratio<1>,
            typename = STLC::type_traits::enable_if<std::is_arithmetic_v<Rep>>>
  using duration_t = std::chrono::duration<Rep, Period>;

  template <typename Rep> using hours_t = duration_t<Rep, std::ratio<3600>>;

  template <typename Rep> using minutes_t = duration_t<Rep, std::ratio<60>>;

  template <typename Rep> using seconds_t = duration_t<Rep>;

  template <typename Rep> using milliseconds_t = duration_t<Rep, std::milli>;

  template <typename Rep> using microseconds_t = duration_t<Rep, std::micro>;

  template <typename Rep> using nanoseconds_t = duration_t<Rep, std::nano>;

  template <typename Duration, typename Rep>
  constexpr Duration
  make_duration(Rep count)
  {
    return Duration{count};
  }

  template <typename Rep = std::chrono::hours::rep>
  constexpr decltype(auto)
  make_hours(Rep count)
  {
    return make_duration<hours_t<Rep>>(count);
  }

  template <typename Rep = std::chrono::minutes::rep>
  constexpr decltype(auto)
  make_minutes(Rep count)
  {
    return make_duration<minutes_t<Rep>>(count);
  }

  template <typename Rep = std::chrono::seconds::rep>
  constexpr decltype(auto)
  make_seconds(Rep count)
  {
    return make_duration<seconds_t<Rep>>(count);
  }

  template <typename Rep = std::chrono::milliseconds::rep>
  constexpr decltype(auto)
  make_milliseconds(Rep count)
  {
    return make_duration<milliseconds_t<Rep>>(count);
  }

  template <typename Rep = std::chrono::microseconds::rep>
  constexpr decltype(auto)
  make_microseconds(Rep count)
  {
    return make_duration<microseconds_t<Rep>>(count);
  }

  template <typename Rep = std::chrono::nanoseconds::rep>
  constexpr decltype(auto)
  make_nanoseconds(Rep count)
  {
    return make_duration<nanoseconds_t<Rep>>(count);
  }
} // namespace STLC::chrono
#endif // STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
