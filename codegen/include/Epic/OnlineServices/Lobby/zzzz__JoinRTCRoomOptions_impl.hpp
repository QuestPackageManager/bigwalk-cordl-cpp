#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/JoinRTCRoomOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinRTCRoomOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions.get_LobbyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::get_LobbyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"get_LobbyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions.set_LobbyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::set_LobbyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"set_LobbyId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions.get_LocalRTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> (::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::*)()>(&::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::get_LocalRTCOptions)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180347870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"get_LocalRTCOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions.set_LocalRTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>)>(&::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::set_LocalRTCOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"set_LocalRTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Lobby::JoinRTCRoomOptions::get_LobbyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"get_LobbyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinRTCRoomOptions::set_LobbyId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"set_LobbyId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Lobby::JoinRTCRoomOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinRTCRoomOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> Epic::OnlineServices::Lobby::JoinRTCRoomOptions::get_LocalRTCOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"get_LocalRTCOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::JoinRTCRoomOptions::set_LocalRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>(),
                        {"set_LocalRTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalRTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::JoinRTCRoomOptions(::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField) noexcept  {
this->_LobbyId_k__BackingField = _LobbyId_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_LocalRTCOptions_k__BackingField = _LocalRTCOptions_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::JoinRTCRoomOptions::JoinRTCRoomOptions()   {
}
