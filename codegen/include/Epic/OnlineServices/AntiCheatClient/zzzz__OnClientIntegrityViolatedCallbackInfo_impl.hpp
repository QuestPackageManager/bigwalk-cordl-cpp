#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnClientIntegrityViolatedCallbackInfo.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientViolationType_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientViolationType_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.get_ViolationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::get_ViolationType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"get_ViolationType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.set_ViolationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::set_ViolationType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"set_ViolationType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.get_ViolationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::get_ViolationMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"get_ViolationMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.set_ViolationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::set_ViolationMessage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"set_ViolationMessage", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::get_ViolationType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"get_ViolationType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::set_ViolationType(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"set_ViolationType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::get_ViolationMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"get_ViolationMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::set_ViolationMessage(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"set_ViolationMessage", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ViolationType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ViolationMessage_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::OnClientIntegrityViolatedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  _ViolationType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ViolationMessage_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_ViolationType_k__BackingField = _ViolationType_k__BackingField;
this->_ViolationMessage_k__BackingField = _ViolationMessage_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo::OnClientIntegrityViolatedCallbackInfo()   {
}
