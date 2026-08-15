#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformInitOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformInitOptions_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformConfigVars_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__IHardwareJoystickMapCustomPlatformMapProvider_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInitOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInitOptions::*)()>(&::Rewired::Platforms::Custom::CustomPlatformInitOptions::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18187ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInitOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInitOptions::*)(::Rewired::Platforms::Custom::CustomPlatformInitOptions*)>(&::Rewired::Platforms::Custom::CustomPlatformInitOptions::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18187ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_platformId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformId;
}
constexpr int32_t const& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_platformId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformId;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_set_platformId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformId = value;
}
constexpr ::StringW& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_platformIdentifierString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformIdentifierString;
}
constexpr ::StringW const& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_platformIdentifierString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformIdentifierString;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_set_platformIdentifierString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformIdentifierString = value;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource*& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_inputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSource;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_inputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSource;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_set_inputSource(::Rewired::Platforms::Custom::CustomInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputSource = value;
}
constexpr ::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_hardwareJoystickMapCustomPlatformMapProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareJoystickMapCustomPlatformMapProvider;
}
constexpr ::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider* const& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_hardwareJoystickMapCustomPlatformMapProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareJoystickMapCustomPlatformMapProvider;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_set_hardwareJoystickMapCustomPlatformMapProvider(::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareJoystickMapCustomPlatformMapProvider = value;
}
constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars*& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_configVars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configVars;
}
constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars* const& Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_get_configVars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configVars;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInitOptions::__cordl_internal_set_configVars(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___configVars = value;
}
inline void Rewired::Platforms::Custom::CustomPlatformInitOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformInitOptions::_ctor(::Rewired::Platforms::Custom::CustomPlatformInitOptions*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Platforms::Custom::CustomPlatformInitOptions* Rewired::Platforms::Custom::CustomPlatformInitOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>());
}
inline ::Rewired::Platforms::Custom::CustomPlatformInitOptions* Rewired::Platforms::Custom::CustomPlatformInitOptions::New_ctor(::Rewired::Platforms::Custom::CustomPlatformInitOptions*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformInitOptions*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformInitOptions::CustomPlatformInitOptions()   {
}
