#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/ICustomPlatformInitializer.hpp"
#include "Rewired/Platforms/Custom/zzzz__ICustomPlatformInitializer_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformInitOptions_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::ICustomPlatformInitializer.GetCustomPlatformInitOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Custom::CustomPlatformInitOptions* (::Rewired::Platforms::Custom::ICustomPlatformInitializer::*)()>(&::Rewired::Platforms::Custom::ICustomPlatformInitializer::GetCustomPlatformInitOptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::ICustomPlatformInitializer*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::ICustomPlatformInitializer*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::Platforms::Custom::CustomPlatformInitOptions* Rewired::Platforms::Custom::ICustomPlatformInitializer::GetCustomPlatformInitOptions()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::ICustomPlatformInitializer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>(this, ___internal_method);
}
