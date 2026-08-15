#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/SetParticipantHardMuteOptions.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__SetParticipantHardMuteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::*)()>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::get_RoomName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"get_RoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions.set_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::set_RoomName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"set_RoomName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::*)()>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions.get_Mute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::*)()>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::get_Mute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"get_Mute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions.set_Mute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::*)(bool)>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::set_Mute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"set_Mute", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::get_RoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"get_RoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::set_RoomName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"set_RoomName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::get_Mute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"get_Mute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::set_Mute(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>(),
                        {"set_Mute", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Mute_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::SetParticipantHardMuteOptions(::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, bool  _Mute_k__BackingField) noexcept  {
this->_RoomName_k__BackingField = _RoomName_k__BackingField;
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
this->_Mute_k__BackingField = _Mute_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions::SetParticipantHardMuteOptions()   {
}
