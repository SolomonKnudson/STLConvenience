#ifndef STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#define STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#include <chrono>

namespace STLC::chrono
{
  using hours_d = std::chrono::duration<double, std::ratio<3600>>;
  using minutes_d = std::chrono::duration<double, std::ratio<60>>;

  using seconds_d = std::chrono::duration<double, std::ratio<1>>;
  using milliseconds_d = std::chrono::duration<double, std::milli>;

  using microseconds_d = std::chrono::duration<double, std::micro>;
  using nanoseconds_d = std::chrono::duration<double, std::nano>;

  template <typename Duration, typename Rep>
  constexpr Duration
  make_duration(const Rep count)
  {
    return Duration{count};
  }

  static constexpr std::chrono::hours
  make_hours(const std::chrono::hours::rep count)
  {
    return make_duration<std::chrono::hours>(count);
  }

  static constexpr std::chrono::minutes
  make_minutes(const std::chrono::minutes::rep count)
  {
    return make_duration<std::chrono::minutes>(count);
  }

  static constexpr std::chrono::seconds
  make_seconds(const std::chrono::seconds::rep count)
  {
    return make_duration<std::chrono::seconds>(count);
  }

  static constexpr std::chrono::milliseconds
  make_milliseconds(const std::chrono::milliseconds::rep count)
  {
    return make_duration<std::chrono::milliseconds>(count);
  }

  static constexpr std::chrono::microseconds
  make_microseconds(const std::chrono::microseconds::rep count)
  {
    return make_duration<std::chrono::microseconds>(count);
  }

  static constexpr std::chrono::nanoseconds
  make_nanoseconds(const std::chrono::nanoseconds::rep count)
  {
    return make_duration<std::chrono::nanoseconds>(count);
  }

  static constexpr hours_d
  make_hours(const double count)
  {
    return make_duration<hours_d>(count);
  }

  static constexpr minutes_d
  make_minutes(const double count)
  {
    return make_duration<minutes_d>(count);
  }

  static constexpr seconds_d
  make_seconds(const double count)
  {
    return make_duration<seconds_d>(count);
  }

  static constexpr milliseconds_d
  make_milliseconds(const double count)
  {
    return make_duration<milliseconds_d>(count);
  }

  static constexpr microseconds_d
  make_microseconds(const double count)
  {
    return make_duration<microseconds_d>(count);
  }

  static constexpr nanoseconds_d
  make_nanoseconds(const double count)
  {
    return make_duration<nanoseconds_d>(count);
  }
} // namespace STLC::chrono
#endif // STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
