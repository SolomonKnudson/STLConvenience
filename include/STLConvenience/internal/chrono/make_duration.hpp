#ifndef STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#define STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#include <STLConvenience/type_traits.hpp>
#include <chrono>

namespace STLC::chrono
{
  template <typename ReturnDuration,
            typename Rep,
            typename = STLC::type_traits::enable_if<std::is_aritmetic_v<Rep>>>
  constexpr ReturnDuration
  make_duration(const Rep count)
  {
    return ReturnDuration{count};
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
} // namespace STLC::chrono
#endif // STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
