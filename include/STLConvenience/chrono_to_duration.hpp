#ifndef CHRONO_DURATION_HPP
#define CHRONO_DURATION_HPP
#include <chrono>

namespace STLC::chrono
{
  template <typename ReturnDuration, typename Rep, typename Period>
  constexpr ReturnDuration
  to_duration(const std::chrono::duration<Rep, Period>& duration)
  {
    return std::chrono::duration_cast<ReturnDuration>(duration);
  }

  template <typename Duration>
  constexpr std::chrono::hours
  to_hours(const Duration& duration)
  {
    return to_duration<std::chrono::hours>(duration);
  }

  template <typename Duration>
  constexpr std::chrono::minutes
  to_minutes(const Duration& duration)
  {
    return to_duration<std::chrono::minutes>(duration);
  }

  template <typename Duration>
  constexpr std::chrono::seconds
  to_seconds(const Duration& duration)
  {
    return to_duration<std::chrono::seconds>(duration);
  }

  template <typename Duration>
  constexpr std::chrono::milliseconds
  to_milliseconds(const Duration& duration)
  {
    return to_duration<std::chrono::milliseconds>(duration);
  }

  template <typename Duration>
  constexpr std::chrono::microseconds
  to_microseconds(const Duration& duration)
  {
    return to_duration<std::chrono::microseconds>(duration);
  }

  template <typename Duration>
  constexpr std::chrono::nanoseconds
  to_nanoseconds(const Duration& duration)
  {
    return to_duration<std::chrono::nanoseconds>(duration);
  }
} // namespace STLC::chrono
#endif // CHRONO_WRAPPER_HPP
