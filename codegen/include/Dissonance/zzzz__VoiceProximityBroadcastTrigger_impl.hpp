#pragma once
// IWYU pragma private; include "Dissonance/VoiceProximityBroadcastTrigger.hpp"
#include "Dissonance/zzzz__BaseProximityTrigger_1_impl.hpp"
#include "Dissonance/zzzz__ChannelPriority_impl.hpp"
#include "Dissonance/zzzz__CommActivationMode_impl.hpp"
#include "Dissonance/zzzz__RoomChannel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Dissonance/zzzz__VoiceProximityBroadcastTrigger_def.hpp"
#include "Dissonance/VAD/zzzz__IVoiceActivationListener_def.hpp"
#include "Dissonance/zzzz__BaseProximityTrigger_1_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__CommActivationMode_def.hpp"
#include "Dissonance/zzzz__IVoiceBroadcastTrigger_def.hpp"
#include "Dissonance/zzzz__RoomChannel_def.hpp"
#include "Dissonance/zzzz__VoiceProximityBroadcastTrigger_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::*)(::Dissonance::VoiceProximityBroadcastTrigger*)>(&::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c5510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::VoiceProximityBroadcastTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid.CreateHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomChannel (::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::*)(::UnityEngine::Vector3Int, ::StringW)>(&::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::CreateHandle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805c5430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid.CloseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::*)(::Dissonance::RoomChannel)>(&::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::CloseHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c53e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::VoiceProximityBroadcastTrigger>& Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::UnityW<::Dissonance::VoiceProximityBroadcastTrigger> const& Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::__cordl_internal_set__parent(::UnityW<::Dissonance::VoiceProximityBroadcastTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
inline void Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::_ctor(::Dissonance::VoiceProximityBroadcastTrigger*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::VoiceProximityBroadcastTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::Dissonance::RoomChannel Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::CreateHandle(::UnityEngine::Vector3Int  id, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomChannel>(this, ___internal_method, id, name);
}
inline void Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::CloseHandle(::Dissonance::RoomChannel  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid* Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::New_ctor(::Dissonance::VoiceProximityBroadcastTrigger*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*>(parent));
}
// Ctor Parameters []
constexpr ::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid::VoiceProximityBroadcastTrigger_BroadcastGrid()   {
}
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.get_InputName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::get_InputName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_InputName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.set_InputName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)(::StringW)>(&::Dissonance::VoiceProximityBroadcastTrigger::set_InputName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180374490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_InputName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CommActivationMode (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::get_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.set_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)(::Dissonance::CommActivationMode)>(&::Dissonance::VoiceProximityBroadcastTrigger::set_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_Mode", {}, {::i2c::type_of<::Dissonance::CommActivationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::get_IsMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180430b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_IsMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)(bool)>(&::Dissonance::VoiceProximityBroadcastTrigger::set_IsMuted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d4750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.get_IsTransmitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::get_IsTransmitting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d4710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_IsTransmitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)(::Dissonance::ChannelPriority)>(&::Dissonance::VoiceProximityBroadcastTrigger::set_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d47a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.get_CanTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::get_CanTrigger)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d46f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.ToggleMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::ToggleMute)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d4610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"ToggleMute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.IsUserActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::IsUserActivated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d4440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805d4560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d4510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d44c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805d4660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.CreateGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomChannel>* (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::CreateGrid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger.Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityBroadcastTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityBroadcastTrigger::*)()>(&::Dissonance::VoiceProximityBroadcastTrigger::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d46d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__roomExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomExpanded;
}
constexpr bool const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__roomExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomExpanded;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__roomExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomExpanded = value;
}
constexpr bool& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__metadataExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataExpanded;
}
constexpr bool const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__metadataExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataExpanded;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__metadataExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metadataExpanded = value;
}
constexpr bool& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__activationModeExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationModeExpanded;
}
constexpr bool const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__activationModeExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationModeExpanded;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__activationModeExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationModeExpanded = value;
}
constexpr bool& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__tokensExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr bool const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__tokensExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__tokensExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokensExpanded = value;
}
constexpr bool& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__isVadSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVadSpeaking;
}
constexpr bool const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__isVadSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVadSpeaking;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__isVadSpeaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVadSpeaking = value;
}
constexpr ::System::Nullable_1<::Dissonance::CommActivationMode>& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__previousMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMode;
}
constexpr ::System::Nullable_1<::Dissonance::CommActivationMode> const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__previousMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousMode;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__previousMode(::System::Nullable_1<::Dissonance::CommActivationMode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousMode = value;
}
constexpr ::StringW& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__inputName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputName;
}
constexpr ::StringW const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__inputName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputName;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__inputName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputName = value;
}
constexpr ::Dissonance::CommActivationMode& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::Dissonance::CommActivationMode const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__mode(::Dissonance::CommActivationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr bool& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__muted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muted;
}
constexpr bool const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__muted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muted;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__muted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____muted = value;
}
constexpr ::Dissonance::ChannelPriority& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__prority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prority;
}
constexpr ::Dissonance::ChannelPriority const& Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_get__prority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prority;
}
constexpr void Dissonance::VoiceProximityBroadcastTrigger::__cordl_internal_set__prority(::Dissonance::ChannelPriority  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prority = value;
}
inline ::StringW Dissonance::VoiceProximityBroadcastTrigger::get_InputName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_InputName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::set_InputName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_InputName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::CommActivationMode Dissonance::VoiceProximityBroadcastTrigger::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CommActivationMode>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::set_Mode(::Dissonance::CommActivationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_Mode", {}, {::i2c::type_of<::Dissonance::CommActivationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceProximityBroadcastTrigger::get_IsMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_IsMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::set_IsMuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceProximityBroadcastTrigger::get_IsTransmitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_IsTransmitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::VoiceProximityBroadcastTrigger::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::set_Priority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceProximityBroadcastTrigger::get_CanTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::ToggleMute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"ToggleMute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::VoiceProximityBroadcastTrigger::IsUserActivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomChannel>* Dissonance::VoiceProximityBroadcastTrigger::CreateGrid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomChannel>*>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {"Dissonance.VAD.IVoiceActivationListener.VoiceActivationStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityBroadcastTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityBroadcastTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::VoiceProximityBroadcastTrigger* Dissonance::VoiceProximityBroadcastTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VoiceProximityBroadcastTrigger*>());
}
/// @brief Convert operator to "::Dissonance::VAD::IVoiceActivationListener"
constexpr  Dissonance::VoiceProximityBroadcastTrigger::operator ::Dissonance::VAD::IVoiceActivationListener*() noexcept {
return static_cast<::Dissonance::VAD::IVoiceActivationListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::VAD::IVoiceActivationListener"
constexpr ::Dissonance::VAD::IVoiceActivationListener* Dissonance::VoiceProximityBroadcastTrigger::i___Dissonance__VAD__IVoiceActivationListener() noexcept {
return static_cast<::Dissonance::VAD::IVoiceActivationListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::IVoiceBroadcastTrigger"
constexpr  Dissonance::VoiceProximityBroadcastTrigger::operator ::Dissonance::IVoiceBroadcastTrigger*() noexcept {
return static_cast<::Dissonance::IVoiceBroadcastTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IVoiceBroadcastTrigger"
constexpr ::Dissonance::IVoiceBroadcastTrigger* Dissonance::VoiceProximityBroadcastTrigger::i___Dissonance__IVoiceBroadcastTrigger() noexcept {
return static_cast<::Dissonance::IVoiceBroadcastTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::VoiceProximityBroadcastTrigger::VoiceProximityBroadcastTrigger()   {
}
