#ifndef STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#define STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
#include <STLConvenience/type_traits.hpp>
#include <chrono>

namespace STLC::chrono
{
  template <typename ReturnDuration,
            typename Rep,
            typename = STLC::type_traits::enable_if<std::is_arithmetic_v<Rep>>>
  constexpr ReturnDuration
  make_duration(const Rep count)
  {
    return ReturnDuration{count};
  }

  template <typename Rep = std::chrono::hours::rep>
  static constexpr std::chrono::hours
  make_hours(const Rep count)
  {
    return make_duration<std::chrono::hours>(count);
  }

  template <typename Rep = std::chrono::minutes::rep>
  static constexpr std::chrono::minutes
  make_minutes(const Rep count)
  {
    return make_duration<std::chrono::minutes>(count);
  }

  template <typename Rep = std::chrono::seconds::rep>
  static constexpr std::chrono::seconds
  make_seconds(const Rep count)
  {
    return make_duration<std::chrono::seconds>(count);
  }

  template <typename Rep = std::chrono::milliseconds::rep>
  static constexpr std::chrono::milliseconds
  make_milliseconds(const Rep count)
  {
    return make_duration<std::chrono::milliseconds>(count);
  }

  template <typename Rep = std::chrono::milliseconds::rep>
  static constexpr std::chrono::microseconds
  make_microseconds(const Rep count)
  {
    return make_duration<std::chrono::microseconds>(count);
  }

  template <typename Rep = std::chrono::nanoseconds::rep>
  static constexpr std::chrono::nanoseconds
  make_nanoseconds(const Rep count)
  {
    return make_duration<std::chrono::nanoseconds>(count);
  }
} // namespace STLC::chrono
#endif // STLC_INTERNAL_CHRONO_MAKE_DURATION_HPP
