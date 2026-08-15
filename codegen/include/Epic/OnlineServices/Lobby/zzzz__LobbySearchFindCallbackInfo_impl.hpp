#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchFindCallbackInfo.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchFindCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo.get_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::*)()>(&::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::get_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo.set_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::set_ResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::*)()>(&::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::*)()>(&::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::*)()>(&::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804d84b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::get_ResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"get_ResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::set_ResultCode(::Epic::OnlineServices::Result  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"set_ResultCode", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::LobbySearchFindCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField) noexcept  {
this->_ResultCode_k__BackingField = _ResultCode_k__BackingField;
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo::LobbySearchFindCallbackInfo()   {
}
