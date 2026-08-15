#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnClientAuthStatusChangedCallbackInfo.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAuthStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientAuthStatusChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAuthStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.get_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::get_ClientHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"get_ClientHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.set_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::set_ClientHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.get_ClientAuthStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::get_ClientAuthStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"get_ClientAuthStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.set_ClientAuthStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus)>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::set_ClientAuthStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"set_ClientAuthStatus", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::get_ClientHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"get_ClientHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::set_ClientHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::get_ClientAuthStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"get_ClientAuthStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::set_ClientAuthStatus(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"set_ClientAuthStatus", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientAuthStatus_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::OnClientAuthStatusChangedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::System::IntPtr  _ClientHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  _ClientAuthStatus_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_ClientHandle_k__BackingField = _ClientHandle_k__BackingField;
this->_ClientAuthStatus_k__BackingField = _ClientAuthStatus_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo::OnClientAuthStatusChangedCallbackInfo()   {
}
