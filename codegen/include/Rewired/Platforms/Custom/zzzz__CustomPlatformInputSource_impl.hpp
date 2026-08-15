#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformInputSource.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformInputSource_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformConfigVars_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformInputSource_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedKeyboardSource_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedMouseSource_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick::*)(::StringW, int64_t, int32_t, int32_t)>(&::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181881a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick* Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformInputSource_Joystick::CustomPlatformInputSource_Joystick()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::*)()>(&::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*& Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::__cordl_internal_get_unifiedKeyboardSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unifiedKeyboardSource;
}
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource* const& Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::__cordl_internal_get_unifiedKeyboardSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unifiedKeyboardSource;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::__cordl_internal_set_unifiedKeyboardSource(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unifiedKeyboardSource = value;
}
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*& Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::__cordl_internal_get_unifiedMouseSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unifiedMouseSource;
}
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource* const& Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::__cordl_internal_get_unifiedMouseSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unifiedMouseSource;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::__cordl_internal_set_unifiedMouseSource(::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unifiedMouseSource = value;
}
inline void Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions* Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions::CustomPlatformInputSource_InitOptions()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInputSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInputSource::*)(::Rewired::Platforms::Custom::CustomPlatformConfigVars*, ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*)>(&::Rewired::Platforms::Custom::CustomPlatformInputSource::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18187eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformConfigVars*>(), ::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInputSource.BRnVzxQzgxNsXZwMjqXOThpNFkvo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInputSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformInputSource::BRnVzxQzgxNsXZwMjqXOThpNFkvo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18187ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInputSource.zlqMMABDOdfGqSDWPSdXrmMEwhpP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInputSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformInputSource::zlqMMABDOdfGqSDWPSdXrmMEwhpP)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18187f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformInputSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformInputSource::*)(bool)>(&::Rewired::Platforms::Custom::CustomPlatformInputSource::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187eed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars*& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_WEZdNSduhACIrErYeuNoButCowVLc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WEZdNSduhACIrErYeuNoButCowVLc;
}
constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars* const& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_WEZdNSduhACIrErYeuNoButCowVLc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WEZdNSduhACIrErYeuNoButCowVLc;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_set_WEZdNSduhACIrErYeuNoButCowVLc(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WEZdNSduhACIrErYeuNoButCowVLc = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_loiBVggetCxNtbRjeSAMhGkXKFcVA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loiBVggetCxNtbRjeSAMhGkXKFcVA;
}
constexpr bool const& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_loiBVggetCxNtbRjeSAMhGkXKFcVA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loiBVggetCxNtbRjeSAMhGkXKFcVA;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_set_loiBVggetCxNtbRjeSAMhGkXKFcVA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loiBVggetCxNtbRjeSAMhGkXKFcVA = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_XbWKjxUnegYhZOPbxAlyXmSWtqgD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XbWKjxUnegYhZOPbxAlyXmSWtqgD;
}
constexpr bool const& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_XbWKjxUnegYhZOPbxAlyXmSWtqgD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XbWKjxUnegYhZOPbxAlyXmSWtqgD;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_set_XbWKjxUnegYhZOPbxAlyXmSWtqgD(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XbWKjxUnegYhZOPbxAlyXmSWtqgD = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_miuiKMglAapTIMqnapGNYlwJyRcr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miuiKMglAapTIMqnapGNYlwJyRcr;
}
constexpr bool const& Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_get_miuiKMglAapTIMqnapGNYlwJyRcr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miuiKMglAapTIMqnapGNYlwJyRcr;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformInputSource::__cordl_internal_set_miuiKMglAapTIMqnapGNYlwJyRcr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___miuiKMglAapTIMqnapGNYlwJyRcr = value;
}
inline void Rewired::Platforms::Custom::CustomPlatformInputSource::_ctor(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformConfigVars*>(), ::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Platforms::Custom::CustomPlatformInputSource::BRnVzxQzgxNsXZwMjqXOThpNFkvo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformInputSource::zlqMMABDOdfGqSDWPSdXrmMEwhpP()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformInputSource::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::Platforms::Custom::CustomPlatformInputSource* Rewired::Platforms::Custom::CustomPlatformInputSource::New_ctor(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::Custom::CustomPlatformInputSource_InitOptions*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformInputSource*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformInputSource::CustomPlatformInputSource()   {
}
