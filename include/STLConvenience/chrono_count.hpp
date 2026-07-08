#ifndef CHRONO_COUNT_HPP
#define CHRONO_COUNT_HPP
#include <chrono>

namespace STLC::chrono
{
  template <typename Duration>
  Duration
  to_duration(const int64_t count)
  {
    return Duration(count);
  }

  static std::chrono::hours
  to_hours(const int64_t count)
  {
    return to_duration<std::chrono::hours>(count);
  }

  static std::chrono::minutes
  to_minutes(const int64_t count)
  {
    return to_duration<std::chrono::minutes>(count);
  }

  static std::chrono::seconds
  to_seconds(const int64_t count)
  {
    return to_duration<std::chrono::seconds>(count);
  }

  static std::chrono::milliseconds
  to_milliseconds(const int64_t count)
  {
    return to_duration<std::chrono::milliseconds>(count);
  }

  static std::chrono::microseconds
  to_microseconds(const int64_t count)
  {
    return to_duration<std::chrono::microseconds>(count);
  }

  static std::chrono::nanoseconds
  to_nanoseconds(const int64_t count)
  {
    return to_duration<std::chrono::nanoseconds>(count);
  }
} // namespace STLC::chrono
#endif // CHRONO_WRAPPER_HPP
