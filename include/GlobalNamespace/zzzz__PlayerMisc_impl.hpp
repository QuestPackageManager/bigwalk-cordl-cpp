#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMisc.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerMisc_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__SpecialCorpseZone_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.get_movementIsBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::get_movementIsBlocked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"get_movementIsBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.get_DistanceToLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::get_DistanceToLocalPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"get_DistanceToLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.set_DistanceToLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)(float_t)>(&::GlobalNamespace::PlayerMisc::set_DistanceToLocalPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"set_DistanceToLocalPlayer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerMisc::Initialize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803550c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.HoslterOnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerMisc::HoslterOnChange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180355030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"HoslterOnChange", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.DudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::DudUseHeld)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180354a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"DudUseHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.get_isInPoseOrSitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::get_isInPoseOrSitting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180356150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"get_isInPoseOrSitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::Update)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x180355a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.SetTapSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)(::GlobalNamespace::PeckSwitch*)>(&::GlobalNamespace::PlayerMisc::SetTapSwitch)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803551d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"SetTapSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.EmptyAllPockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::EmptyAllPockets)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180354c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"EmptyAllPockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.EmptyNonBlindfoldPockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::EmptyNonBlindfoldPockets)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180354d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"EmptyNonBlindfoldPockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.HasPocketWithPropGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMisc::*)(::GlobalNamespace::PropGroup)>(&::GlobalNamespace::PlayerMisc::HasPocketWithPropGroup)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180354f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"HasPocketWithPropGroup", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.EmptyPocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)(::GlobalNamespace::PropHome*)>(&::GlobalNamespace::PlayerMisc::EmptyPocket)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180354e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"EmptyPocket", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.ActionTextInputStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::ActionTextInputStroke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803549f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ActionTextInputStroke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.ShowTextInputStrokeEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::ShowTextInputStrokeEffect)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1803554c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ShowTextInputStrokeEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.ActionTextInputErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::ActionTextInputErase)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180354990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ActionTextInputErase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.ShowTextInputEraseEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::ShowTextInputEraseEffect)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180355230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ShowTextInputEraseEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.GetNumberOfPlayersAboveMe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::GetNumberOfPlayersAboveMe)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180354f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"GetNumberOfPlayersAboveMe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.TooHeavyAudioGetXCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMisc::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerMisc::TooHeavyAudioGetXCallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180355750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"TooHeavyAudioGetXCallback", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc.UpdateCalmness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::UpdateCalmness)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803558a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"UpdateCalmness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMisc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMisc::*)()>(&::GlobalNamespace::PlayerMisc::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerMisc::__cordl_internal_get_calmRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmRate;
}
constexpr float_t const& GlobalNamespace::PlayerMisc::__cordl_internal_get_calmRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmRate;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_calmRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calmRate = value;
}
constexpr float_t& GlobalNamespace::PlayerMisc::__cordl_internal_get_unCalmRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unCalmRate;
}
constexpr float_t const& GlobalNamespace::PlayerMisc::__cordl_internal_get_unCalmRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unCalmRate;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_unCalmRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unCalmRate = value;
}
constexpr float_t& GlobalNamespace::PlayerMisc::__cordl_internal_get_calmVelocityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmVelocityThreshold;
}
constexpr float_t const& GlobalNamespace::PlayerMisc::__cordl_internal_get_calmVelocityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmVelocityThreshold;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_calmVelocityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calmVelocityThreshold = value;
}
constexpr bool& GlobalNamespace::PlayerMisc::__cordl_internal_get_logCalmness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logCalmness;
}
constexpr bool const& GlobalNamespace::PlayerMisc::__cordl_internal_get_logCalmness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logCalmness;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_logCalmness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logCalmness = value;
}
constexpr float_t& GlobalNamespace::PlayerMisc::__cordl_internal_get__calmness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calmness;
}
constexpr float_t const& GlobalNamespace::PlayerMisc::__cordl_internal_get__calmness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calmness;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set__calmness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calmness = value;
}
constexpr bool& GlobalNamespace::PlayerMisc::__cordl_internal_get_blockCorpse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCorpse;
}
constexpr bool const& GlobalNamespace::PlayerMisc::__cordl_internal_get_blockCorpse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCorpse;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_blockCorpse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockCorpse = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerMisc::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerMisc::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr bool& GlobalNamespace::PlayerMisc::__cordl_internal_get_isEditingSign()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEditingSign;
}
constexpr bool const& GlobalNamespace::PlayerMisc::__cordl_internal_get_isEditingSign() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEditingSign;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_isEditingSign(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEditingSign = value;
}
constexpr ::UnityW<::GlobalNamespace::SpecialCorpseZone>& GlobalNamespace::PlayerMisc::__cordl_internal_get_specialCorpseZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialCorpseZone;
}
constexpr ::UnityW<::GlobalNamespace::SpecialCorpseZone> const& GlobalNamespace::PlayerMisc::__cordl_internal_get_specialCorpseZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialCorpseZone;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_specialCorpseZone(::UnityW<::GlobalNamespace::SpecialCorpseZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specialCorpseZone = value;
}
constexpr bool& GlobalNamespace::PlayerMisc::__cordl_internal_get_tunnelLightingStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunnelLightingStrength;
}
constexpr bool const& GlobalNamespace::PlayerMisc::__cordl_internal_get_tunnelLightingStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunnelLightingStrength;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_tunnelLightingStrength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tunnelLightingStrength = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerMisc::__cordl_internal_get__tooHeavyAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooHeavyAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerMisc::__cordl_internal_get__tooHeavyAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooHeavyAudioEvent;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set__tooHeavyAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tooHeavyAudioEvent = value;
}
constexpr float_t& GlobalNamespace::PlayerMisc::__cordl_internal_get__DistanceToLocalPlayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceToLocalPlayer_k__BackingField;
}
constexpr float_t const& GlobalNamespace::PlayerMisc::__cordl_internal_get__DistanceToLocalPlayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceToLocalPlayer_k__BackingField;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set__DistanceToLocalPlayer_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceToLocalPlayer_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerMisc::__cordl_internal_get_tapSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerMisc::__cordl_internal_get_tapSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapSwitch;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_tapSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapSwitch = value;
}
constexpr float_t& GlobalNamespace::PlayerMisc::__cordl_internal_get_timeAtTapSwitchStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtTapSwitchStart;
}
constexpr float_t const& GlobalNamespace::PlayerMisc::__cordl_internal_get_timeAtTapSwitchStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtTapSwitchStart;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_timeAtTapSwitchStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtTapSwitchStart = value;
}
constexpr float_t& GlobalNamespace::PlayerMisc::__cordl_internal_get_idleSoundKneeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSoundKneeThreshold;
}
constexpr float_t const& GlobalNamespace::PlayerMisc::__cordl_internal_get_idleSoundKneeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSoundKneeThreshold;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set_idleSoundKneeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleSoundKneeThreshold = value;
}
constexpr bool& GlobalNamespace::PlayerMisc::__cordl_internal_get__idleSoundToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleSoundToggle;
}
constexpr bool const& GlobalNamespace::PlayerMisc::__cordl_internal_get__idleSoundToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleSoundToggle;
}
constexpr void GlobalNamespace::PlayerMisc::__cordl_internal_set__idleSoundToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idleSoundToggle = value;
}
inline bool GlobalNamespace::PlayerMisc::get_movementIsBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"get_movementIsBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerMisc::get_DistanceToLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"get_DistanceToLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::set_DistanceToLocalPlayer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"set_DistanceToLocalPlayer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerMisc::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerMisc::HoslterOnChange(::GlobalNamespace::PropHome*  holsterHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"HoslterOnChange", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holsterHome, propBefore, propAfter);
}
inline void GlobalNamespace::PlayerMisc::DudUseHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"DudUseHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMisc::get_isInPoseOrSitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"get_isInPoseOrSitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::SetTapSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"SetTapSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckSwitch);
}
inline void GlobalNamespace::PlayerMisc::EmptyAllPockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"EmptyAllPockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::EmptyNonBlindfoldPockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"EmptyNonBlindfoldPockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMisc::HasPocketWithPropGroup(::GlobalNamespace::PropGroup  propGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"HasPocketWithPropGroup", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propGroup);
}
inline void GlobalNamespace::PlayerMisc::EmptyPocket(::GlobalNamespace::PropHome*  pocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"EmptyPocket", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pocket);
}
inline void GlobalNamespace::PlayerMisc::ActionTextInputStroke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ActionTextInputStroke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::ShowTextInputStrokeEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ShowTextInputStrokeEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::ActionTextInputErase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ActionTextInputErase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::ShowTextInputEraseEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"ShowTextInputEraseEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerMisc::GetNumberOfPlayersAboveMe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"GetNumberOfPlayersAboveMe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMisc::TooHeavyAudioGetXCallback(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"TooHeavyAudioGetXCallback", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::PlayerMisc::UpdateCalmness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {"UpdateCalmness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMisc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMisc*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerMisc* GlobalNamespace::PlayerMisc::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerMisc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerMisc::PlayerMisc()   {
}
