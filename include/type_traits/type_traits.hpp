#ifndef TYPE_TRAITS_WRAPPER_HPP
#define TYPE_TRAITS_WRAPPER_HPP
#include <type_traits>

namespace type_traits
{
  template <typename Invoker, typename... Args>
  using EnableIfInvocable =
      std::enable_if_t<std::is_invocable_v<Invoker, Args...>>;

  template <typename T> using remove_reference = std::remove_reference_t<T>;

  template <typename T>
  using remove_cv_reference = std::remove_cv_t<remove_reference<T>>;

  template <typename T> using remove_pointer = std::remove_pointer_t<T>;

  template <typename, typename = void> struct can_deref : std::false_type
  {
  };

  template <typename T>
  struct can_deref<T, std::void_t<decltype(*std::declval<T>())>>
    : std::true_type
  {
  };

  template <typename T> constexpr bool can_deref_v{can_deref<T>::value};
} // namespace type_traits
#endif // TYPE_TRAITS_WRAPPER_HPP

