#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyDoor.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyDoor_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "GlobalNamespace/zzzz__AnimancerFrameHelper_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__LobbyDoor_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAudio_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LobbyDoor_ClipDirection::LobbyDoor_ClipDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyDoor_ClipDirection::LobbyDoor_ClipDirection()   {
}
constexpr ::GlobalNamespace::LobbyDoor_ClipDirection  GlobalNamespace::LobbyDoor_ClipDirection::Backwards{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LobbyDoor_ClipDirection  GlobalNamespace::LobbyDoor_ClipDirection::Fowards{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803fff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804018b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::Initialize)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804000b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.OnFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::OnFinish)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180400360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"OnFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.PauseState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)(bool)>(&::GlobalNamespace::LobbyDoor::PauseState)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180400690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PauseState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::LobbyDoor::Peck)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1804007f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.GetClipDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LobbyDoor_ClipDirection (::GlobalNamespace::LobbyDoor::*)(int32_t)>(&::GlobalNamespace::LobbyDoor::GetClipDirection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180400070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"GetClipDirection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.TestPeck0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::TestPeck0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"TestPeck0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.TestPeck1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::TestPeck1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"TestPeck1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.PlayOpenSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::PlayOpenSound)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x180401490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayOpenSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.PlayCloseSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::PlayCloseSound)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x180400dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayCloseSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.PlayOpenEndSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::PlayOpenEndSound)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804011e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayOpenEndSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.PlayCloseEndSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::PlayCloseEndSound)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x180400b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayCloseEndSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor.SwitchLoopSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::SwitchLoopSound)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x1804018c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"SwitchLoopSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyDoor::*)()>(&::GlobalNamespace::LobbyDoor::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180402210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._PlayOpenSound_g___clearRef_42_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_PlayOpenSound_g___clearRef_42_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804021b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayOpenSound>g___clearRef|42_1", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._PlayOpenSound_g___clearRef_42_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_PlayOpenSound_g___clearRef_42_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayOpenSound>g___clearRef|42_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._PlayCloseSound_g___clearRef_43_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_PlayCloseSound_g___clearRef_43_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804021b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayCloseSound>g___clearRef|43_1", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._PlayCloseSound_g___clearRef_43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_PlayCloseSound_g___clearRef_43_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayCloseSound>g___clearRef|43_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._PlayOpenEndSound_g___clearRef_44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_PlayOpenEndSound_g___clearRef_44_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804020f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayOpenEndSound>g___clearRef|44_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._PlayCloseEndSound_g___clearRef_45_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_PlayCloseEndSound_g___clearRef_45_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804020f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayCloseEndSound>g___clearRef|45_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._SwitchLoopSound_g___clearRef_46_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_SwitchLoopSound_g___clearRef_46_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<SwitchLoopSound>g___clearRef|46_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyDoor._SwitchLoopSound_g___clearRef_46_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LobbyDoor*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LobbyDoor::_SwitchLoopSound_g___clearRef_46_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<SwitchLoopSound>g___clearRef|46_1", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::LobbyDoor::__cordl_internal_get_peckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::LobbyDoor::__cordl_internal_get_peckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::LobbyDoor::__cordl_internal_get_onFullyOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullyOpen;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_onFullyOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullyOpen;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_onFullyOpen(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFullyOpen = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::LobbyDoor::__cordl_internal_get_onFullyClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullyClose;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_onFullyClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullyClose;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_onFullyClose(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFullyClose = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::LobbyDoor::__cordl_internal_get_isFullyOpenSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFullyOpenSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_isFullyOpenSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFullyOpenSystem;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_isFullyOpenSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFullyOpenSystem = value;
}
constexpr bool& GlobalNamespace::LobbyDoor::__cordl_internal_get_peckAndDoorStatesAreInverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckAndDoorStatesAreInverse;
}
constexpr bool const& GlobalNamespace::LobbyDoor::__cordl_internal_get_peckAndDoorStatesAreInverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckAndDoorStatesAreInverse;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_peckAndDoorStatesAreInverse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckAndDoorStatesAreInverse = value;
}
constexpr ::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection>& GlobalNamespace::LobbyDoor::__cordl_internal_get_customDirections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customDirections;
}
constexpr ::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_customDirections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customDirections;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_customDirections(::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customDirections = value;
}
constexpr ::UnityW<::Animancer::AnimancerComponent>& GlobalNamespace::LobbyDoor::__cordl_internal_get_animancerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_animancerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerComponent = value;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& GlobalNamespace::LobbyDoor::__cordl_internal_get_animancerFrameHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_animancerFrameHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerFrameHelper = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::LobbyDoor::__cordl_internal_get_openingClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_openingClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingClip;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_openingClip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openingClip = value;
}
constexpr bool& GlobalNamespace::LobbyDoor::__cordl_internal_get_skipReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipReturn;
}
constexpr bool const& GlobalNamespace::LobbyDoor::__cordl_internal_get_skipReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipReturn;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_skipReturn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipReturn = value;
}
constexpr int32_t& GlobalNamespace::LobbyDoor::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr int32_t const& GlobalNamespace::LobbyDoor::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr float_t& GlobalNamespace::LobbyDoor::__cordl_internal_get_animationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr float_t const& GlobalNamespace::LobbyDoor::__cordl_internal_get_animationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_animationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSpeed = value;
}
constexpr bool& GlobalNamespace::LobbyDoor::__cordl_internal_get_hasUniqueClosingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUniqueClosingSpeed;
}
constexpr bool const& GlobalNamespace::LobbyDoor::__cordl_internal_get_hasUniqueClosingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUniqueClosingSpeed;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_hasUniqueClosingSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasUniqueClosingSpeed = value;
}
constexpr float_t& GlobalNamespace::LobbyDoor::__cordl_internal_get_uniqueClosingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueClosingSpeed;
}
constexpr float_t const& GlobalNamespace::LobbyDoor::__cordl_internal_get_uniqueClosingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueClosingSpeed;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_uniqueClosingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniqueClosingSpeed = value;
}
constexpr bool& GlobalNamespace::LobbyDoor::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::LobbyDoor::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio>& GlobalNamespace::LobbyDoor::__cordl_internal_get_peckAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckAudio;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_peckAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckAudio;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_peckAudio(::UnityW<::GlobalNamespace::PeckEffectAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::LobbyDoor::__cordl_internal_get_openSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_openSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_openSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_closeSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::LobbyDoor::__cordl_internal_get_openEndSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEndSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_openEndSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEndSound;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_openEndSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openEndSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeEndSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEndSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeEndSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEndSound;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_closeEndSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeEndSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::LobbyDoor::__cordl_internal_get_openLoopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openLoopSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_openLoopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openLoopSound;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_openLoopSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openLoopSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeLoopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeLoopSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeLoopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeLoopSound;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_closeLoopSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeLoopSound = value;
}
constexpr float_t& GlobalNamespace::LobbyDoor::__cordl_internal_get_openEndSoundOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEndSoundOffset;
}
constexpr float_t const& GlobalNamespace::LobbyDoor::__cordl_internal_get_openEndSoundOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEndSoundOffset;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_openEndSoundOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openEndSoundOffset = value;
}
constexpr float_t& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeEndSoundOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEndSoundOffset;
}
constexpr float_t const& GlobalNamespace::LobbyDoor::__cordl_internal_get_closeEndSoundOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEndSoundOffset;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_closeEndSoundOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeEndSoundOffset = value;
}
constexpr float_t& GlobalNamespace::LobbyDoor::__cordl_internal_get_loopFadeoutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopFadeoutTime;
}
constexpr float_t const& GlobalNamespace::LobbyDoor::__cordl_internal_get_loopFadeoutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopFadeoutTime;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_loopFadeoutTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopFadeoutTime = value;
}
constexpr bool& GlobalNamespace::LobbyDoor::__cordl_internal_get_loopSeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSeek;
}
constexpr bool const& GlobalNamespace::LobbyDoor::__cordl_internal_get_loopSeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSeek;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_loopSeek(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSeek = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LobbyDoor::__cordl_internal_get_audioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LobbyDoor::__cordl_internal_get_audioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioTransform = value;
}
constexpr float_t& GlobalNamespace::LobbyDoor::__cordl_internal_get_randomDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDelay;
}
constexpr float_t const& GlobalNamespace::LobbyDoor::__cordl_internal_get_randomDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDelay;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_randomDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomDelay = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::LobbyDoor::__cordl_internal_get__ascOpenClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascOpenClose;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::LobbyDoor::__cordl_internal_get__ascOpenClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascOpenClose;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set__ascOpenClose(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ascOpenClose = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::LobbyDoor::__cordl_internal_get__ascOpenCloseEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascOpenCloseEnd;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::LobbyDoor::__cordl_internal_get__ascOpenCloseEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascOpenCloseEnd;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set__ascOpenCloseEnd(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ascOpenCloseEnd = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::LobbyDoor::__cordl_internal_get__ascLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::LobbyDoor::__cordl_internal_get__ascLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascLoop;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set__ascLoop(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ascLoop = value;
}
constexpr bool& GlobalNamespace::LobbyDoor::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::LobbyDoor::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::LobbyDoor::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GlobalNamespace::LobbyDoor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::OnFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"OnFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::PauseState(bool  useHelper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PauseState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useHelper);
}
inline void GlobalNamespace::LobbyDoor::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline ::GlobalNamespace::LobbyDoor_ClipDirection GlobalNamespace::LobbyDoor::GetClipDirection(int32_t  peckState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"GetClipDirection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LobbyDoor_ClipDirection>(this, ___internal_method, peckState);
}
inline void GlobalNamespace::LobbyDoor::TestPeck0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"TestPeck0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::TestPeck1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"TestPeck1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::PlayOpenSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayOpenSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::PlayCloseSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayCloseSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::PlayOpenEndSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayOpenEndSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::PlayCloseEndSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"PlayCloseEndSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::SwitchLoopSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"SwitchLoopSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyDoor::_PlayOpenSound_g___clearRef_42_1(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayOpenSound>g___clearRef|42_1", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::LobbyDoor::_PlayOpenSound_g___clearRef_42_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayOpenSound>g___clearRef|42_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::LobbyDoor::_PlayCloseSound_g___clearRef_43_1(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayCloseSound>g___clearRef|43_1", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::LobbyDoor::_PlayCloseSound_g___clearRef_43_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayCloseSound>g___clearRef|43_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::LobbyDoor::_PlayOpenEndSound_g___clearRef_44_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayOpenEndSound>g___clearRef|44_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::LobbyDoor::_PlayCloseEndSound_g___clearRef_45_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<PlayCloseEndSound>g___clearRef|45_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::LobbyDoor::_SwitchLoopSound_g___clearRef_46_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<SwitchLoopSound>g___clearRef|46_0", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::LobbyDoor::_SwitchLoopSound_g___clearRef_46_1(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyDoor*>(),
                        {"<SwitchLoopSound>g___clearRef|46_1", {}, {::i2c::type_of<::GlobalNamespace::LobbyDoor*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::LobbyDoor* GlobalNamespace::LobbyDoor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyDoor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyDoor::LobbyDoor()   {
}
