#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUnregisterPlatformUserCallbackInfo.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUnregisterPlatformUserCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.get_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)()>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::get_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.set_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::set_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)()>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.get_PlatformUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)()>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::get_PlatformUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"get_PlatformUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.set_PlatformUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::set_PlatformUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"set_PlatformUserId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)()>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::*)()>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804d84b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::get_ResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::set_ResultCode(::Epic::OnlineServices::Result  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::get_PlatformUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"get_PlatformUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::set_PlatformUserId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"set_PlatformUserId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlatformUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::OnUnregisterPlatformUserCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _PlatformUserId_k__BackingField) noexcept  {
this->_ResultCode_k__BackingField = _ResultCode_k__BackingField;
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_PlatformUserId_k__BackingField = _PlatformUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfo::OnUnregisterPlatformUserCallbackInfo()   {
}
