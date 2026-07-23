#ifndef STLC_INTERNAL_CHRONO_TO_DURATION_HPP
#define STLC_INTERNAL_CHRONO_TO_DURATION_HPP
#include <STLConvenience/internal/chrono/base.hpp>

namespace STLC::chrono
{
  template <typename ReturnDuration, typename Rep, typename Period>
  constexpr ReturnDuration
  to_duration(const std::chrono::duration<Rep, Period>& duration)
  {
    return std::chrono::duration_cast<ReturnDuration>(duration);
  }

  template <typename Duration>
  constexpr decltype(auto)
  to_hours(const Duration& duration)
  {
    return to_duration<hours_t<typename Duration::rep>>(duration);
  }

  template <typename Duration>
  constexpr decltype(auto)
  to_minutes(const Duration& duration)
  {
    return to_duration<minutes_t<typename Duration::rep>>(duration);
  }

  template <typename Duration>
  constexpr decltype(auto)
  to_seconds(const Duration& duration)
  {
    return to_duration<seconds_t<typename Duration::rep>>(duration);
  }

  template <typename Duration>
  constexpr decltype(auto)
  to_milliseconds(const Duration& duration)
  {
    return to_duration<milliseconds_t<typename Duration::rep>>(duration);
  }

  template <typename Duration>
  constexpr decltype(auto)
  to_microseconds(const Duration& duration)
  {
    return to_duration<microseconds_t<typename Duration::rep>>(duration);
  }

  template <typename Duration>
  constexpr decltype(auto)
  to_nanoseconds(const Duration& duration)
  {
    return to_duration<nanoseconds_t<typename Duration::rep>>(duration);
  }
} // namespace STLC::chrono
#endif // STLC_INTERNAL_CHRONO_TO_DURATION_HPP
