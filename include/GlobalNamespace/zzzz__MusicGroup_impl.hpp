#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicGroup.hpp"
#include "GlobalNamespace/zzzz__BPMData_impl.hpp"
#include "GlobalNamespace/zzzz__SoundCue_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.get_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::get_Duration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_Duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.set_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(float_t)>(&::GlobalNamespace::MusicGroup::set_Duration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.add_OnBeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*)>(&::GlobalNamespace::MusicGroup::add_OnBeat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d7270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"add_OnBeat", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.remove_OnBeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*)>(&::GlobalNamespace::MusicGroup::remove_OnBeat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d7420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"remove_OnBeat", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.add_OnNoBeatAudible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*)>(&::GlobalNamespace::MusicGroup::add_OnNoBeatAudible)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"add_OnNoBeatAudible", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.remove_OnNoBeatAudible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*)>(&::GlobalNamespace::MusicGroup::remove_OnNoBeatAudible)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"remove_OnNoBeatAudible", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.get_CurrentBeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::get_CurrentBeat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_CurrentBeat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.set_CurrentBeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(int32_t)>(&::GlobalNamespace::MusicGroup::set_CurrentBeat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_CurrentBeat", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.get_SyncPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::get_SyncPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_SyncPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.set_SyncPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*)>(&::GlobalNamespace::MusicGroup::set_SyncPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_SyncPlayers", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.get_TransitionVol_music
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::get_TransitionVol_music)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_TransitionVol_music", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.set_TransitionVol_music
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::MusicGroup::set_TransitionVol_music)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d49a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_TransitionVol_music", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.get_AllMusicGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* (*)()>(&::GlobalNamespace::MusicGroup::get_AllMusicGroups)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803d73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_AllMusicGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.set_AllMusicGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*)>(&::GlobalNamespace::MusicGroup::set_AllMusicGroups)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d75a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_AllMusicGroups", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.get_AllBeatsGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* (*)()>(&::GlobalNamespace::MusicGroup::get_AllBeatsGroups)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803d7390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_AllBeatsGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.set_AllBeatsGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*)>(&::GlobalNamespace::MusicGroup::set_AllBeatsGroups)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803d7540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_AllBeatsGroups", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::OnEnable)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1803d6310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d6280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.GetStem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::MusicGroup::*)(int32_t)>(&::GlobalNamespace::MusicGroup::GetStem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"GetStem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.SyncGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::SyncGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803d6b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"SyncGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.GetPlayingPlayerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::GetPlayingPlayerTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803d60c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"GetPlayingPlayerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::Update)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1803d6cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.SteerGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::SteerGroup)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1803d6660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"SteerGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.StopSteering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::StopSteering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803d6990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"StopSteering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.GetSyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::GetSyncTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803d61c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"GetSyncTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.SubscribeToOnBeatEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*, ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*)>(&::GlobalNamespace::MusicGroup::SubscribeToOnBeatEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803d6a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"SubscribeToOnBeatEvent", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.UnsubscribeFromOnBeatEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*, ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*)>(&::GlobalNamespace::MusicGroup::UnsubscribeFromOnBeatEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d6cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"UnsubscribeFromOnBeatEvent", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.BeatsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::BeatsUpdate)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1803d5d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"BeatsUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup.TransitionVolReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::TransitionVolReset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"TransitionVolReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicGroup::*)()>(&::GlobalNamespace::MusicGroup::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d71e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MusicGroup::__cordl_internal_get_SyncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncTime;
}
constexpr float_t const& GlobalNamespace::MusicGroup::__cordl_internal_get_SyncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncTime;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_SyncTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncTime = value;
}
constexpr bool& GlobalNamespace::MusicGroup::__cordl_internal_get_SyncToTimeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncToTimeOfDay;
}
constexpr bool const& GlobalNamespace::MusicGroup::__cordl_internal_get_SyncToTimeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncToTimeOfDay;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_SyncToTimeOfDay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncToTimeOfDay = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::MusicGroup::__cordl_internal_get_MonoMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MonoMix;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::MusicGroup::__cordl_internal_get_MonoMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MonoMix;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_MonoMix(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MonoMix = value;
}
constexpr ::ArrayW<::GlobalNamespace::BPMData>& GlobalNamespace::MusicGroup::__cordl_internal_get_BPM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BPM;
}
constexpr ::ArrayW<::GlobalNamespace::BPMData> const& GlobalNamespace::MusicGroup::__cordl_internal_get_BPM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BPM;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_BPM(::ArrayW<::GlobalNamespace::BPMData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BPM = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::MusicGroup::__cordl_internal_get_SpeakerStems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerStems;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::MusicGroup::__cordl_internal_get_SpeakerStems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerStems;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_SpeakerStems(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeakerStems = value;
}
constexpr float_t& GlobalNamespace::MusicGroup::__cordl_internal_get_DiscoIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DiscoIntensity;
}
constexpr float_t const& GlobalNamespace::MusicGroup::__cordl_internal_get_DiscoIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DiscoIntensity;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_DiscoIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DiscoIntensity = value;
}
constexpr float_t& GlobalNamespace::MusicGroup::__cordl_internal_get__Duration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Duration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MusicGroup::__cordl_internal_get__Duration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Duration_k__BackingField;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set__Duration_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Duration_k__BackingField = value;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*& GlobalNamespace::MusicGroup::__cordl_internal_get_OnBeat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBeat;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>* const& GlobalNamespace::MusicGroup::__cordl_internal_get_OnBeat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBeat;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_OnBeat(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBeat = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*& GlobalNamespace::MusicGroup::__cordl_internal_get_OnNoBeatAudible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoBeatAudible;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>* const& GlobalNamespace::MusicGroup::__cordl_internal_get_OnNoBeatAudible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoBeatAudible;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set_OnNoBeatAudible(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnNoBeatAudible = value;
}
constexpr int32_t& GlobalNamespace::MusicGroup::__cordl_internal_get__CurrentBeat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentBeat_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MusicGroup::__cordl_internal_get__CurrentBeat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentBeat_k__BackingField;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set__CurrentBeat_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentBeat_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*& GlobalNamespace::MusicGroup::__cordl_internal_get__SyncPlayers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyncPlayers_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* const& GlobalNamespace::MusicGroup::__cordl_internal_get__SyncPlayers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyncPlayers_k__BackingField;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set__SyncPlayers_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SyncPlayers_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::MusicGroup::__cordl_internal_get__TransitionVol_music_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransitionVol_music_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::MusicGroup::__cordl_internal_get__TransitionVol_music_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransitionVol_music_k__BackingField;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set__TransitionVol_music_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TransitionVol_music_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MusicGroup::__cordl_internal_get__anyAudible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyAudible;
}
constexpr bool const& GlobalNamespace::MusicGroup::__cordl_internal_get__anyAudible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyAudible;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set__anyAudible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anyAudible = value;
}
constexpr bool& GlobalNamespace::MusicGroup::__cordl_internal_get__steering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steering;
}
constexpr bool const& GlobalNamespace::MusicGroup::__cordl_internal_get__steering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steering;
}
constexpr void GlobalNamespace::MusicGroup::__cordl_internal_set__steering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____steering = value;
}
inline void GlobalNamespace::MusicGroup::setStaticF__AllMusicGroups_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*, "<AllMusicGroups>k__BackingField", ::GlobalNamespace::MusicGroup*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* GlobalNamespace::MusicGroup::getStaticF__AllMusicGroups_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*, "<AllMusicGroups>k__BackingField", ::GlobalNamespace::MusicGroup*>();
}
inline void GlobalNamespace::MusicGroup::setStaticF__AllBeatsGroups_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*, "<AllBeatsGroups>k__BackingField", ::GlobalNamespace::MusicGroup*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* GlobalNamespace::MusicGroup::getStaticF__AllBeatsGroups_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*, "<AllBeatsGroups>k__BackingField", ::GlobalNamespace::MusicGroup*>();
}
inline float_t GlobalNamespace::MusicGroup::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::set_Duration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MusicGroup::add_OnBeat(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"add_OnBeat", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MusicGroup::remove_OnBeat(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"remove_OnBeat", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MusicGroup::add_OnNoBeatAudible(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"add_OnNoBeatAudible", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MusicGroup::remove_OnNoBeatAudible(::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"remove_OnNoBeatAudible", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MusicGroup::get_CurrentBeat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_CurrentBeat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::set_CurrentBeat(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_CurrentBeat", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* GlobalNamespace::MusicGroup::get_SyncPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_SyncPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::set_SyncPlayers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_SyncPlayers", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::MusicGroup::get_TransitionVol_music()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_TransitionVol_music", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::set_TransitionVol_music(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_TransitionVol_music", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* GlobalNamespace::MusicGroup::get_AllMusicGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_AllMusicGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::set_AllMusicGroups(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_AllMusicGroups", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* GlobalNamespace::MusicGroup::get_AllBeatsGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"get_AllBeatsGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::set_AllBeatsGroups(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"set_AllBeatsGroups", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MusicGroup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::MusicGroup::GetStem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"GetStem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method, index);
}
inline void GlobalNamespace::MusicGroup::SyncGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"SyncGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::MusicGroup::GetPlayingPlayerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"GetPlayingPlayerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MusicGroup::SteerGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"SteerGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::StopSteering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"StopSteering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::MusicGroup::GetSyncTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"GetSyncTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::SubscribeToOnBeatEvent(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  onBeat, ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  onNoBeat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"SubscribeToOnBeatEvent", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onBeat, onNoBeat);
}
inline void GlobalNamespace::MusicGroup::UnsubscribeFromOnBeatEvent(::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*  onBeat, ::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*  onNoBeat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"UnsubscribeFromOnBeatEvent", {}, {::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::MusicGroup>,int32_t,float_t>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MusicGroup>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onBeat, onNoBeat);
}
inline void GlobalNamespace::MusicGroup::BeatsUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"BeatsUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::TransitionVolReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {"TransitionVolReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicGroup* GlobalNamespace::MusicGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicGroup::MusicGroup()   {
}
