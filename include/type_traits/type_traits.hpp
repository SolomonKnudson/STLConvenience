#ifndef TYPE_TRAITS_WRAPPER_HPP
#define TYPE_TRAITS_WRAPPER_HPP
#include <type_traits>

namespace type_traits
{

  template <typename, typename = void> struct can_deref : std::false_type
  {
  };
  template <typename T>
  struct can_deref<T, std::void_t<decltype(*std::declval<T>())>>
    : std::true_type
  {
  };

  template <typename T> constexpr bool can_deref_v{can_deref<T>::value};

  template <typename Function, typename... Args>
  constexpr bool separate_args_invocable_v{
      (std::is_invocable_v<Function, Args> && ...)};

  template <bool Condition> using enable_if = std::enable_if_t<Condition>;

  template <typename Invoker, typename... Args>
  using enable_if_arg_pack_invocable =
      enable_if<std::is_invocable_v<Invoker, Args...>>;

  template <typename Invoker, typename... Args>
  using enable_if_separate_args_invocable =
      enable_if<separate_args_invocable_v<Invoker, Args...>>;

  template <typename T> using remove_reference = std::remove_reference_t<T>;

  template <typename T>
  using remove_cv_reference = std::remove_cv_t<remove_reference<T>>;

  template <typename T> using remove_pointer = std::remove_pointer_t<T>;
} // namespace type_traits
#endif // TYPE_TRAITS_WRAPPER_HPP

