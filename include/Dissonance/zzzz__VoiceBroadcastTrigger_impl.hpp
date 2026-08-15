#pragma once
// IWYU pragma private; include "Dissonance/VoiceBroadcastTrigger.hpp"
#include "Dissonance/Audio/zzzz__Fader_impl.hpp"
#include "Dissonance/zzzz__BaseCommsTrigger_impl.hpp"
#include "Dissonance/zzzz__ChannelPriority_impl.hpp"
#include "Dissonance/zzzz__CommActivationMode_impl.hpp"
#include "Dissonance/zzzz__CommTriggerTarget_impl.hpp"
#include "Dissonance/zzzz__PlayerChannel_impl.hpp"
#include "Dissonance/zzzz__RoomChannel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Dissonance/zzzz__VoiceBroadcastTrigger_def.hpp"
#include "Dissonance/VAD/zzzz__IVoiceActivationListener_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__CommActivationMode_def.hpp"
#include "Dissonance/zzzz__CommTriggerTarget_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__IVoiceBroadcastTrigger_def.hpp"
#include "Dissonance/zzzz__VolumeFaderSettings_def.hpp"
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_ActivationFader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::VolumeFaderSettings* (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_ActivationFader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_ActivationFader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_ColliderTriggerFader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::VolumeFaderSettings* (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_ColliderTriggerFader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_ColliderTriggerFader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_CurrentFaderVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_CurrentFaderVolume)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805d3760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_CurrentFaderVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_BroadcastPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_BroadcastPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c9dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_BroadcastPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_BroadcastPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(bool)>(&::Dissonance::VoiceBroadcastTrigger::set_BroadcastPosition)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805d3810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_BroadcastPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_ChannelType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CommTriggerTarget (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_ChannelType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_ChannelType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_ChannelType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(::Dissonance::CommTriggerTarget)>(&::Dissonance::VoiceBroadcastTrigger::set_ChannelType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d3920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_ChannelType", {}, {::i2c::type_of<::Dissonance::CommTriggerTarget>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_InputName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_InputName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_InputName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_InputName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(::StringW)>(&::Dissonance::VoiceBroadcastTrigger::set_InputName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_InputName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CommActivationMode (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d37f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(::Dissonance::CommActivationMode)>(&::Dissonance::VoiceBroadcastTrigger::set_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d3980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_Mode", {}, {::i2c::type_of<::Dissonance::CommActivationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_IsMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d37d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_IsMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(bool)>(&::Dissonance::VoiceBroadcastTrigger::set_IsMuted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d3940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_PlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_PlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(::StringW)>(&::Dissonance::VoiceBroadcastTrigger::set_PlayerId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d3990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_UseColliderTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_UseColliderTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_UseColliderTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(bool)>(&::Dissonance::VoiceBroadcastTrigger::set_UseColliderTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_RoomName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_RoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(::StringW)>(&::Dissonance::VoiceBroadcastTrigger::set_RoomName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_RoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(::Dissonance::ChannelPriority)>(&::Dissonance::VoiceBroadcastTrigger::set_Priority)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805d39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_IsTransmitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_IsTransmitting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d37e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_IsTransmitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.get_CanTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::get_CanTrigger)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805d3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805d2eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d2840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::Update)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x1805d3070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.ColliderTriggerChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::ColliderTriggerChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805d26c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.SwitchMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::SwitchMode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805d2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"SwitchMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.ShouldActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceBroadcastTrigger::*)(bool)>(&::Dissonance::VoiceBroadcastTrigger::ShouldActivate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805d2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"ShouldActivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.ToggleMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::ToggleMute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d3030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"ToggleMute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.IsUserActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::IsUserActivated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.SetChannelVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)(float_t)>(&::Dissonance::VoiceBroadcastTrigger::SetChannelVolume)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805d2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"SetChannelVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.OpenChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::OpenChannel)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1805d28b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"OpenChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.CloseChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::CloseChannel)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805d25c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"CloseChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger.Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d27b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceBroadcastTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceBroadcastTrigger::*)()>(&::Dissonance::VoiceBroadcastTrigger::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805d3590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__channelTypeExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelTypeExpanded;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__channelTypeExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelTypeExpanded;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__channelTypeExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelTypeExpanded = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__metadataExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataExpanded;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__metadataExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataExpanded;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__metadataExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metadataExpanded = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__activationModeExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationModeExpanded;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__activationModeExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationModeExpanded;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__activationModeExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationModeExpanded = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__tokensExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__tokensExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__tokensExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokensExpanded = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__ampExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ampExpanded;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__ampExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ampExpanded;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__ampExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ampExpanded = value;
}
constexpr ::System::Nullable_1<::Dissonance::PlayerChannel>& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__playerChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannel;
}
constexpr ::System::Nullable_1<::Dissonance::PlayerChannel> const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__playerChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannel;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__playerChannel(::System::Nullable_1<::Dissonance::PlayerChannel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerChannel = value;
}
constexpr ::System::Nullable_1<::Dissonance::RoomChannel>& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__roomChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannel;
}
constexpr ::System::Nullable_1<::Dissonance::RoomChannel> const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__roomChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannel;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__roomChannel(::System::Nullable_1<::Dissonance::RoomChannel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomChannel = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__isVadSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVadSpeaking;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__isVadSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVadSpeaking;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__isVadSpeaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVadSpeaking = value;
}
constexpr ::System::Nullable_1<::Dissonance::CommActivationMode>& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__previousMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMode;
}
constexpr ::System::Nullable_1<::Dissonance::CommActivationMode> const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__previousMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMode;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__previousMode(::System::Nullable_1<::Dissonance::CommActivationMode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousMode = value;
}
constexpr ::Dissonance::IDissonancePlayer*& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__self()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr ::Dissonance::IDissonancePlayer* const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__self() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__self(::Dissonance::IDissonancePlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____self = value;
}
constexpr ::Dissonance::Audio::Fader& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__activationFader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationFader;
}
constexpr ::Dissonance::Audio::Fader const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__activationFader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationFader;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__activationFader(::Dissonance::Audio::Fader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationFader = value;
}
constexpr ::Dissonance::VolumeFaderSettings*& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__activationFaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationFaderSettings;
}
constexpr ::Dissonance::VolumeFaderSettings* const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__activationFaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationFaderSettings;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__activationFaderSettings(::Dissonance::VolumeFaderSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationFaderSettings = value;
}
constexpr ::Dissonance::Audio::Fader& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__triggerFader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerFader;
}
constexpr ::Dissonance::Audio::Fader const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__triggerFader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerFader;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__triggerFader(::Dissonance::Audio::Fader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerFader = value;
}
constexpr ::Dissonance::VolumeFaderSettings*& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__triggerFaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerFaderSettings;
}
constexpr ::Dissonance::VolumeFaderSettings* const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__triggerFaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerFaderSettings;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__triggerFaderSettings(::Dissonance::VolumeFaderSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerFaderSettings = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__broadcastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcastPosition;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__broadcastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcastPosition;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__broadcastPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broadcastPosition = value;
}
constexpr ::Dissonance::CommTriggerTarget& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__channelType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelType;
}
constexpr ::Dissonance::CommTriggerTarget const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__channelType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelType;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__channelType(::Dissonance::CommTriggerTarget  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelType = value;
}
constexpr ::StringW& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__inputName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputName;
}
constexpr ::StringW const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__inputName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputName;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__inputName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputName = value;
}
constexpr ::Dissonance::CommActivationMode& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::Dissonance::CommActivationMode const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__mode(::Dissonance::CommActivationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__muted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muted;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__muted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muted;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__muted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____muted = value;
}
constexpr ::StringW& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr ::StringW const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__playerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerId = value;
}
constexpr bool& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__useTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTrigger;
}
constexpr bool const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__useTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTrigger;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__useTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTrigger = value;
}
constexpr ::StringW& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__roomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomName;
}
constexpr ::StringW const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__roomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomName;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__roomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomName = value;
}
constexpr ::Dissonance::ChannelPriority& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priority;
}
constexpr ::Dissonance::ChannelPriority const& Dissonance::VoiceBroadcastTrigger::__cordl_internal_get__priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priority;
}
constexpr void Dissonance::VoiceBroadcastTrigger::__cordl_internal_set__priority(::Dissonance::ChannelPriority  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____priority = value;
}
inline ::Dissonance::VolumeFaderSettings* Dissonance::VoiceBroadcastTrigger::get_ActivationFader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_ActivationFader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::VolumeFaderSettings*>(this, ___internal_method);
}
inline ::Dissonance::VolumeFaderSettings* Dissonance::VoiceBroadcastTrigger::get_ColliderTriggerFader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_ColliderTriggerFader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::VolumeFaderSettings*>(this, ___internal_method);
}
inline float_t Dissonance::VoiceBroadcastTrigger::get_CurrentFaderVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_CurrentFaderVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Dissonance::VoiceBroadcastTrigger::get_BroadcastPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_BroadcastPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_BroadcastPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_BroadcastPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::CommTriggerTarget Dissonance::VoiceBroadcastTrigger::get_ChannelType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_ChannelType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CommTriggerTarget>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_ChannelType(::Dissonance::CommTriggerTarget  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_ChannelType", {}, {::i2c::type_of<::Dissonance::CommTriggerTarget>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Dissonance::VoiceBroadcastTrigger::get_InputName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_InputName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_InputName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_InputName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::CommActivationMode Dissonance::VoiceBroadcastTrigger::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CommActivationMode>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_Mode(::Dissonance::CommActivationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_Mode", {}, {::i2c::type_of<::Dissonance::CommActivationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceBroadcastTrigger::get_IsMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_IsMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_IsMuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Dissonance::VoiceBroadcastTrigger::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_PlayerId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceBroadcastTrigger::get_UseColliderTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_UseColliderTrigger(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Dissonance::VoiceBroadcastTrigger::get_RoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_RoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_RoomName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_RoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::ChannelPriority Dissonance::VoiceBroadcastTrigger::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::set_Priority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceBroadcastTrigger::get_IsTransmitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"get_IsTransmitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::VoiceBroadcastTrigger::get_CanTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::ColliderTriggerChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::SwitchMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"SwitchMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::VoiceBroadcastTrigger::ShouldActivate(bool  intent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"ShouldActivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, intent);
}
inline void Dissonance::VoiceBroadcastTrigger::ToggleMute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"ToggleMute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::VoiceBroadcastTrigger::IsUserActivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::SetChannelVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"SetChannelVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoiceBroadcastTrigger::OpenChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"OpenChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::CloseChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"CloseChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceBroadcastTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceBroadcastTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::VoiceBroadcastTrigger* Dissonance::VoiceBroadcastTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VoiceBroadcastTrigger*>());
}
/// @brief Convert operator to "::Dissonance::VAD::IVoiceActivationListener"
constexpr  Dissonance::VoiceBroadcastTrigger::operator ::Dissonance::VAD::IVoiceActivationListener*() noexcept {
return static_cast<::Dissonance::VAD::IVoiceActivationListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::VAD::IVoiceActivationListener"
constexpr ::Dissonance::VAD::IVoiceActivationListener* Dissonance::VoiceBroadcastTrigger::i___Dissonance__VAD__IVoiceActivationListener() noexcept {
return static_cast<::Dissonance::VAD::IVoiceActivationListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::IVoiceBroadcastTrigger"
constexpr  Dissonance::VoiceBroadcastTrigger::operator ::Dissonance::IVoiceBroadcastTrigger*() noexcept {
return static_cast<::Dissonance::IVoiceBroadcastTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IVoiceBroadcastTrigger"
constexpr ::Dissonance::IVoiceBroadcastTrigger* Dissonance::VoiceBroadcastTrigger::i___Dissonance__IVoiceBroadcastTrigger() noexcept {
return static_cast<::Dissonance::IVoiceBroadcastTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::VoiceBroadcastTrigger::VoiceBroadcastTrigger()   {
}
