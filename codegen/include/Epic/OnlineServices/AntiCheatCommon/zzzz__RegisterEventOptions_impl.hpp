#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/RegisterEventOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventType_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventParamDef_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventType_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventParamDef_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.get_EventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_EventId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_EventId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.set_EventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_EventId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_EventId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.get_EventName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_EventName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_EventName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.set_EventName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_EventName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_EventName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.get_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_EventType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_EventType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.set_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_EventType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_EventType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.get_ParamDefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef> (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_ParamDefs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_ParamDefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions.set_ParamDefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::*)(::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_ParamDefs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_ParamDefs", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_EventId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_EventId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_EventId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_EventId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_EventName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_EventName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_EventName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_EventName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_EventType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_EventType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_EventType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_EventType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef> Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::get_ParamDefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"get_ParamDefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::set_ParamDefs(::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>(),
                        {"set_ParamDefs", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_EventId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EventName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EventType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ParamDefs_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::RegisterEventOptions(uint32_t  _EventId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _EventName_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  _EventType_k__BackingField, ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  _ParamDefs_k__BackingField) noexcept  {
this->_EventId_k__BackingField = _EventId_k__BackingField;
this->_EventName_k__BackingField = _EventName_k__BackingField;
this->_EventType_k__BackingField = _EventType_k__BackingField;
this->_ParamDefs_k__BackingField = _ParamDefs_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions::RegisterEventOptions()   {
}
