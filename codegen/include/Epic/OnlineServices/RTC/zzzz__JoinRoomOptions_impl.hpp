#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/JoinRoomOptions.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomFlags_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomFlags_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_RoomName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_RoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_RoomName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_RoomName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_ClientBaseUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_ClientBaseUrl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ClientBaseUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_ClientBaseUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_ClientBaseUrl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ClientBaseUrl", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_ParticipantToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_ParticipantToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ParticipantToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_ParticipantToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_ParticipantToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ParticipantToken", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_ParticipantId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_ParticipantId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ParticipantId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_ParticipantId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_ParticipantId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ParticipantId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::JoinRoomFlags (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_Flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(::Epic::OnlineServices::RTC::JoinRoomFlags)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_Flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_Flags", {}, {::i2c::type_of<::Epic::OnlineServices::RTC::JoinRoomFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_ManualAudioInputEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_ManualAudioInputEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ManualAudioInputEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_ManualAudioInputEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(bool)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_ManualAudioInputEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ManualAudioInputEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.get_ManualAudioOutputEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::RTC::JoinRoomOptions::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptions::get_ManualAudioOutputEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ManualAudioOutputEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptions.set_ManualAudioOutputEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptions::*)(bool)>(&::Epic::OnlineServices::RTC::JoinRoomOptions::set_ManualAudioOutputEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ManualAudioOutputEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::RTC::JoinRoomOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::RTC::JoinRoomOptions::get_RoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_RoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_RoomName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_RoomName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::RTC::JoinRoomOptions::get_ClientBaseUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ClientBaseUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_ClientBaseUrl(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ClientBaseUrl", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::RTC::JoinRoomOptions::get_ParticipantToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ParticipantToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_ParticipantToken(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ParticipantToken", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::RTC::JoinRoomOptions::get_ParticipantId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ParticipantId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_ParticipantId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ParticipantId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::RTC::JoinRoomFlags Epic::OnlineServices::RTC::JoinRoomOptions::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::JoinRoomFlags>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_Flags(::Epic::OnlineServices::RTC::JoinRoomFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_Flags", {}, {::i2c::type_of<::Epic::OnlineServices::RTC::JoinRoomFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::RTC::JoinRoomOptions::get_ManualAudioInputEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ManualAudioInputEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_ManualAudioInputEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ManualAudioInputEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::RTC::JoinRoomOptions::get_ManualAudioOutputEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"get_ManualAudioOutputEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptions::set_ManualAudioOutputEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptions>(),
                        {"set_ManualAudioOutputEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientBaseUrl_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ParticipantToken_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ParticipantId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Flags_k__BackingField", ty: "::Epic::OnlineServices::RTC::JoinRoomFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ManualAudioInputEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ManualAudioOutputEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::JoinRoomOptions::JoinRoomOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ClientBaseUrl_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ParticipantToken_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField, ::Epic::OnlineServices::RTC::JoinRoomFlags  _Flags_k__BackingField, bool  _ManualAudioInputEnabled_k__BackingField, bool  _ManualAudioOutputEnabled_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_RoomName_k__BackingField = _RoomName_k__BackingField;
this->_ClientBaseUrl_k__BackingField = _ClientBaseUrl_k__BackingField;
this->_ParticipantToken_k__BackingField = _ParticipantToken_k__BackingField;
this->_ParticipantId_k__BackingField = _ParticipantId_k__BackingField;
this->_Flags_k__BackingField = _Flags_k__BackingField;
this->_ManualAudioInputEnabled_k__BackingField = _ManualAudioInputEnabled_k__BackingField;
this->_ManualAudioOutputEnabled_k__BackingField = _ManualAudioOutputEnabled_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::JoinRoomOptions::JoinRoomOptions()   {
}
