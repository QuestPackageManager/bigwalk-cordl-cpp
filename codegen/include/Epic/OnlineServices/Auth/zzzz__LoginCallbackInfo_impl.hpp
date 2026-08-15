#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginCallbackInfo.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AccountFeatureRestrictedInfo_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__PinGrantInfo_impl.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AccountFeatureRestrictedInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__PinGrantInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ContinuanceToken_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.get_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::get_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.set_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::set_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::set_LocalUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.get_PinGrantInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo> (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::get_PinGrantInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_PinGrantInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.set_PinGrantInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)(::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>)>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::set_PinGrantInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_PinGrantInfo", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.get_ContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ContinuanceToken* (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::get_ContinuanceToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_ContinuanceToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.set_ContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)(::Epic::OnlineServices::ContinuanceToken*)>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::set_ContinuanceToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_ContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.get_AccountFeatureRestrictedInfo_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo> (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::get_AccountFeatureRestrictedInfo_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_AccountFeatureRestrictedInfo_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.set_AccountFeatureRestrictedInfo_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)(::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>)>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::set_AccountFeatureRestrictedInfo_DEPRECATED)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051ea40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_AccountFeatureRestrictedInfo_DEPRECATED", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.get_SelectedAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::get_SelectedAccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_SelectedAccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.set_SelectedAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::set_SelectedAccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_SelectedAccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::Auth::LoginCallbackInfo::*)()>(&::Epic::OnlineServices::Auth::LoginCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804d84b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Auth::LoginCallbackInfo::get_ResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginCallbackInfo::set_ResultCode(::Epic::OnlineServices::Result  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::Auth::LoginCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Auth::LoginCallbackInfo::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginCallbackInfo::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo> Epic::OnlineServices::Auth::LoginCallbackInfo::get_PinGrantInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_PinGrantInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginCallbackInfo::set_PinGrantInfo(::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_PinGrantInfo", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ContinuanceToken* Epic::OnlineServices::Auth::LoginCallbackInfo::get_ContinuanceToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_ContinuanceToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ContinuanceToken*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginCallbackInfo::set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_ContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo> Epic::OnlineServices::Auth::LoginCallbackInfo::get_AccountFeatureRestrictedInfo_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_AccountFeatureRestrictedInfo_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginCallbackInfo::set_AccountFeatureRestrictedInfo_DEPRECATED(::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_AccountFeatureRestrictedInfo_DEPRECATED", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Auth::LoginCallbackInfo::get_SelectedAccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"get_SelectedAccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginCallbackInfo::set_SelectedAccountId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"set_SelectedAccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::Auth::LoginCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::Auth::LoginCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::Auth::LoginCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::Auth::LoginCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PinGrantInfo_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ContinuanceToken_k__BackingField", ty: "::Epic::OnlineServices::ContinuanceToken*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SelectedAccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LoginCallbackInfo::LoginCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>  _PinGrantInfo_k__BackingField, ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  _AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _SelectedAccountId_k__BackingField) noexcept  {
this->_ResultCode_k__BackingField = _ResultCode_k__BackingField;
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_PinGrantInfo_k__BackingField = _PinGrantInfo_k__BackingField;
this->_ContinuanceToken_k__BackingField = _ContinuanceToken_k__BackingField;
this->_AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField = _AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField;
this->_SelectedAccountId_k__BackingField = _SelectedAccountId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LoginCallbackInfo::LoginCallbackInfo()   {
}
