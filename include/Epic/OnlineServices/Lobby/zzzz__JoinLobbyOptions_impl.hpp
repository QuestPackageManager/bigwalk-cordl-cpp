#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/JoinLobbyOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetails_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.get_LobbyDetailsHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyDetails* (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::get_LobbyDetailsHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_LobbyDetailsHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.set_LobbyDetailsHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)(::Epic::OnlineServices::Lobby::LobbyDetails*)>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::set_LobbyDetailsHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_LobbyDetailsHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.get_PresenceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::get_PresenceEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_PresenceEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.set_PresenceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::set_PresenceEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_PresenceEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.get_LocalRTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::get_LocalRTCOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_LocalRTCOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.set_LocalRTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>)>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::set_LocalRTCOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_LocalRTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.get_CrossplayOptOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::get_CrossplayOptOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_CrossplayOptOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.set_CrossplayOptOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::set_CrossplayOptOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180499eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_CrossplayOptOut", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.get_RTCRoomJoinActionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::get_RTCRoomJoinActionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_RTCRoomJoinActionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinLobbyOptions.set_RTCRoomJoinActionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinLobbyOptions::*)(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType)>(&::Epic::OnlineServices::Lobby::JoinLobbyOptions::set_RTCRoomJoinActionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_RTCRoomJoinActionType", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Lobby::LobbyDetails* Epic::OnlineServices::Lobby::JoinLobbyOptions::get_LobbyDetailsHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_LobbyDetailsHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyDetails*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinLobbyOptions::set_LobbyDetailsHandle(::Epic::OnlineServices::Lobby::LobbyDetails*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_LobbyDetailsHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Lobby::JoinLobbyOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinLobbyOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::JoinLobbyOptions::get_PresenceEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_PresenceEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinLobbyOptions::set_PresenceEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_PresenceEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> Epic::OnlineServices::Lobby::JoinLobbyOptions::get_LocalRTCOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_LocalRTCOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinLobbyOptions::set_LocalRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_LocalRTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Lobby::JoinLobbyOptions::get_CrossplayOptOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_CrossplayOptOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinLobbyOptions::set_CrossplayOptOut(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_CrossplayOptOut", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType Epic::OnlineServices::Lobby::JoinLobbyOptions::get_RTCRoomJoinActionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"get_RTCRoomJoinActionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinLobbyOptions::set_RTCRoomJoinActionType(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinLobbyOptions>(),
                        {"set_RTCRoomJoinActionType", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LobbyDetailsHandle_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyDetails*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PresenceEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalRTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CrossplayOptOut_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RTCRoomJoinActionType_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::JoinLobbyOptions::JoinLobbyOptions(::Epic::OnlineServices::Lobby::LobbyDetails*  _LobbyDetailsHandle_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, bool  _PresenceEnabled_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField, bool  _CrossplayOptOut_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  _RTCRoomJoinActionType_k__BackingField) noexcept  {
this->_LobbyDetailsHandle_k__BackingField = _LobbyDetailsHandle_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_PresenceEnabled_k__BackingField = _PresenceEnabled_k__BackingField;
this->_LocalRTCOptions_k__BackingField = _LocalRTCOptions_k__BackingField;
this->_CrossplayOptOut_k__BackingField = _CrossplayOptOut_k__BackingField;
this->_RTCRoomJoinActionType_k__BackingField = _RTCRoomJoinActionType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::JoinLobbyOptions::JoinLobbyOptions()   {
}
