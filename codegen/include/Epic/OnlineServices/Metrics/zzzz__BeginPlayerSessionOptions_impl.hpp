#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptions.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountId_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__UserControllerType_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptions_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountId_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__UserControllerType_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.get_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_AccountId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_AccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.set_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_AccountId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.get_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_DisplayName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_DisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.set_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_DisplayName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.get_ControllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::UserControllerType (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_ControllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_ControllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.set_ControllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)(::Epic::OnlineServices::Metrics::UserControllerType)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_ControllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_ControllerType", {}, {::i2c::type_of<::Epic::OnlineServices::Metrics::UserControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.get_ServerIp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_ServerIp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_ServerIp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.set_ServerIp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_ServerIp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_ServerIp", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.get_GameSessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_GameSessionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_GameSessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions.set_GameSessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_GameSessionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_GameSessionId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_AccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_AccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_AccountId(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_DisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_DisplayName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Metrics::UserControllerType Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_ControllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_ControllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::UserControllerType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_ControllerType(::Epic::OnlineServices::Metrics::UserControllerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_ControllerType", {}, {::i2c::type_of<::Epic::OnlineServices::Metrics::UserControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_ServerIp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_ServerIp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_ServerIp(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_ServerIp", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::get_GameSessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"get_GameSessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::set_GameSessionId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>(),
                        {"set_GameSessionId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ControllerType_k__BackingField", ty: "::Epic::OnlineServices::Metrics::UserControllerType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ServerIp_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_GameSessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::BeginPlayerSessionOptions(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId  _AccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Metrics::UserControllerType  _ControllerType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ServerIp_k__BackingField, ::Epic::OnlineServices::Utf8String*  _GameSessionId_k__BackingField) noexcept  {
this->_AccountId_k__BackingField = _AccountId_k__BackingField;
this->_DisplayName_k__BackingField = _DisplayName_k__BackingField;
this->_ControllerType_k__BackingField = _ControllerType_k__BackingField;
this->_ServerIp_k__BackingField = _ServerIp_k__BackingField;
this->_GameSessionId_k__BackingField = _GameSessionId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions::BeginPlayerSessionOptions()   {
}
