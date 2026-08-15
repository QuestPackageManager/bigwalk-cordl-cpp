#pragma once
// IWYU pragma private; include "Rewired/Interfaces/INativePlatformHelper.hpp"
#include "Rewired/Interfaces/zzzz__INativePlatformHelper_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::INativePlatformHelper.get_isApplicationFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::INativePlatformHelper::*)()>(&::Rewired::Interfaces::INativePlatformHelper::get_isApplicationFocused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::INativePlatformHelper*>(),
                    {::i2c::class_of<::Rewired::Interfaces::INativePlatformHelper*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Interfaces::INativePlatformHelper::get_isApplicationFocused()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::INativePlatformHelper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
