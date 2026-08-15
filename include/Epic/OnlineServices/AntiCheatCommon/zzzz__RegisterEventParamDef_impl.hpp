#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/RegisterEventParamDef.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventParamDef_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef.get_ParamName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::get_ParamName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"get_ParamName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef.set_ParamName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::set_ParamName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"set_ParamName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef.get_ParamType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType (::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::get_ParamType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"get_ParamType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef.set_ParamType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::set_ParamType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"set_ParamType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::get_ParamName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"get_ParamName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::set_ParamName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"set_ParamName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::get_ParamType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"get_ParamType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::set_ParamType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>(),
                        {"set_ParamType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ParamName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ParamType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::RegisterEventParamDef(::Epic::OnlineServices::Utf8String*  _ParamName_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  _ParamType_k__BackingField) noexcept  {
this->_ParamName_k__BackingField = _ParamName_k__BackingField;
this->_ParamType_k__BackingField = _ParamType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef::RegisterEventParamDef()   {
}
