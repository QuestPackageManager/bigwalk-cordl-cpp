#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatMessage.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_impl.hpp"
#include "GlobalNamespace/zzzz__TextChatMessage_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "GlobalNamespace/zzzz__TextChatSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextChatMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatMessage::*)(::StringW, ::GlobalNamespace::PlayerCharacter*, ::GlobalNamespace::PlayerLookSet_LookColor, float_t, bool)>(&::GlobalNamespace::TextChatMessage::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180456db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatMessage>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatMessage.RefreshMessageWithTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatMessage::*)(::GlobalNamespace::TextChatSource*)>(&::GlobalNamespace::TextChatMessage::RefreshMessageWithTags)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180456bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatMessage>(),
                        {"RefreshMessageWithTags", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatMessage.WrapInTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::PlayerLookSet_LookColor, ::GlobalNamespace::TextChatSource*)>(&::GlobalNamespace::TextChatMessage::WrapInTags)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180456c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatMessage>(),
                        {"WrapInTags", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>(), ::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextChatMessage::_ctor(::StringW  message, ::GlobalNamespace::PlayerCharacter*  playerCharacter, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor, float_t  timeCreated, bool  isInaudible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatMessage>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, message, playerCharacter, lookColor, timeCreated, isInaudible);
}
inline void GlobalNamespace::TextChatMessage::RefreshMessageWithTags(::GlobalNamespace::TextChatSource*  textChatSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatMessage>(),
                        {"RefreshMessageWithTags", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, textChatSource);
}
inline ::StringW GlobalNamespace::TextChatMessage::WrapInTags(::StringW  message, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor, ::GlobalNamespace::TextChatSource*  outputSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatMessage>(),
                        {"WrapInTags", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>(), ::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message, lookColor, outputSource);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "messageWithTags", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "lookColor", ty: "::GlobalNamespace::PlayerLookSet_LookColor", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeCreated", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasBeenBroadcast", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sendingPlayer", ty: "::UnityW<::GlobalNamespace::PlayerCharacter>", modifiers: "", def_value: Some("{}") }, CppParam { name: "isInaudible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextChatMessage::TextChatMessage(::StringW  message, ::StringW  messageWithTags, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor, float_t  timeCreated, bool  hasBeenBroadcast, ::UnityW<::GlobalNamespace::PlayerCharacter>  sendingPlayer, bool  isInaudible) noexcept  {
this->message = message;
this->messageWithTags = messageWithTags;
this->lookColor = lookColor;
this->timeCreated = timeCreated;
this->hasBeenBroadcast = hasBeenBroadcast;
this->sendingPlayer = sendingPlayer;
this->isInaudible = isInaudible;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatMessage::TextChatMessage()   {
}
