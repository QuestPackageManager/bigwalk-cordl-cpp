#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IAndroidFallbackDS4Helper.hpp"
#include "Rewired/Interfaces/zzzz__IAndroidFallbackDS4Helper_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IAndroidFallbackDS4Helper.IsDS4KeyMapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::IAndroidFallbackDS4Helper::*)(int32_t)>(&::Rewired::Interfaces::IAndroidFallbackDS4Helper::IsDS4KeyMapped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackDS4Helper*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackDS4Helper*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IAndroidFallbackDS4Helper.IsDS4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::IAndroidFallbackDS4Helper::*)(::StringW)>(&::Rewired::Interfaces::IAndroidFallbackDS4Helper::IsDS4)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackDS4Helper*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackDS4Helper*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Interfaces::IAndroidFallbackDS4Helper::IsDS4KeyMapped(int32_t  unityJoystickArrayIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackDS4Helper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unityJoystickArrayIndex);
}
inline bool Rewired::Interfaces::IAndroidFallbackDS4Helper::IsDS4(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackDS4Helper*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
