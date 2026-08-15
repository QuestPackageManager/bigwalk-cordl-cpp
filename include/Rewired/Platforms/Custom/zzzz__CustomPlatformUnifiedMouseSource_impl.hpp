#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformUnifiedMouseSource.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedControllerSource_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedMouseSource_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18187fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource.get_mousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::get_mousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::get_mousePosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource* Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource::CustomPlatformUnifiedMouseSource()   {
}
