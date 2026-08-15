#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnShowReportPlayerCallbackInfo.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowReportPlayerCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.get_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.set_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_LocalUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804d84b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_ResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_ResultCode(::Epic::OnlineServices::Result  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::set_TargetUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::OnShowReportPlayerCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _TargetUserId_k__BackingField) noexcept  {
this->_ResultCode_k__BackingField = _ResultCode_k__BackingField;
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfo::OnShowReportPlayerCallbackInfo()   {
}
