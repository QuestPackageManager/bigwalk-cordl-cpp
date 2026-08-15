#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerActions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerActions_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerActions::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionPickUpProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::Prop*, ::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerActions::ActionPickUpProp)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18045b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPickUpProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionDropPropOrPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::ActionDropPropOrPlayer)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18045ab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionDropPropOrPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionPickUpPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerActions::ActionPickUpPlayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18045afe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPickUpPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionDropPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::ActionDropPlayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18045ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionDropPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionEnterPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::PlayerPose*)>(&::GlobalNamespace::PlayerActions::ActionEnterPose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18045aeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionEnterPose", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionExitPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::ActionExitPose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18045af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionExitPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionPlaceHeldPlayerInPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::PlayerPose*)>(&::GlobalNamespace::PlayerActions::ActionPlaceHeldPlayerInPose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18045b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPlaceHeldPlayerInPose", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionPlaceInHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::PropHome*)>(&::GlobalNamespace::PlayerActions::ActionPlaceInHome)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18045b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPlaceInHome", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionDudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::ActionDudUseHeld)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18045ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionDudUseHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionUseHeldSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::ActionUseHeldSwitch)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18045b3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseHeldSwitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionUseHeldUpSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::ActionUseHeldUpSwitch)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18045b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseHeldUpSwitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionUseWorldSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::PeckSwitch*)>(&::GlobalNamespace::PlayerActions::ActionUseWorldSwitch)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18045b6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseWorldSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionUseHeldAsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::ActionUseHeldAsKey)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18045b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseHeldAsKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions.ActionReleaseWorldSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)(::GlobalNamespace::PeckSwitch*, ::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerActions::ActionReleaseWorldSwitch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18045b230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionReleaseWorldSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActions::*)()>(&::GlobalNamespace::PlayerActions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerActions::__cordl_internal_get_predictivePickup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictivePickup;
}
constexpr bool const& GlobalNamespace::PlayerActions::__cordl_internal_get_predictivePickup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictivePickup;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_predictivePickup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predictivePickup = value;
}
constexpr bool& GlobalNamespace::PlayerActions::__cordl_internal_get_predictiveDrop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictiveDrop;
}
constexpr bool const& GlobalNamespace::PlayerActions::__cordl_internal_get_predictiveDrop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictiveDrop;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_predictiveDrop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predictiveDrop = value;
}
constexpr bool& GlobalNamespace::PlayerActions::__cordl_internal_get_predicitvePoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicitvePoses;
}
constexpr bool const& GlobalNamespace::PlayerActions::__cordl_internal_get_predicitvePoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicitvePoses;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_predicitvePoses(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predicitvePoses = value;
}
constexpr bool& GlobalNamespace::PlayerActions::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerActions::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerActions::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerActions::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr int32_t& GlobalNamespace::PlayerActions::__cordl_internal_get_heldActionNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldActionNumber;
}
constexpr int32_t const& GlobalNamespace::PlayerActions::__cordl_internal_get_heldActionNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldActionNumber;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_heldActionNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldActionNumber = value;
}
constexpr int32_t& GlobalNamespace::PlayerActions::__cordl_internal_get_poseActionNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseActionNumber;
}
constexpr int32_t const& GlobalNamespace::PlayerActions::__cordl_internal_get_poseActionNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseActionNumber;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_poseActionNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseActionNumber = value;
}
constexpr int32_t& GlobalNamespace::PlayerActions::__cordl_internal_get_switchActionNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchActionNumber;
}
constexpr int32_t const& GlobalNamespace::PlayerActions::__cordl_internal_get_switchActionNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchActionNumber;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_switchActionNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchActionNumber = value;
}
constexpr int32_t& GlobalNamespace::PlayerActions::__cordl_internal_get_heldSwitchActionNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldSwitchActionNumber;
}
constexpr int32_t const& GlobalNamespace::PlayerActions::__cordl_internal_get_heldSwitchActionNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldSwitchActionNumber;
}
constexpr void GlobalNamespace::PlayerActions::__cordl_internal_set_heldSwitchActionNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldSwitchActionNumber = value;
}
inline void GlobalNamespace::PlayerActions::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerActions::ActionPickUpProp(::GlobalNamespace::Prop*  prop, ::UnityEngine::Vector3  casterPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPickUpProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, casterPosition);
}
inline void GlobalNamespace::PlayerActions::ActionDropPropOrPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionDropPropOrPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerActions::ActionPickUpPlayer(::GlobalNamespace::PlayerCharacter*  pickedUpCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPickUpPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pickedUpCharacter);
}
inline void GlobalNamespace::PlayerActions::ActionDropPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionDropPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerActions::ActionEnterPose(::GlobalNamespace::PlayerPose*  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionEnterPose", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void GlobalNamespace::PlayerActions::ActionExitPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionExitPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerActions::ActionPlaceHeldPlayerInPose(::GlobalNamespace::PlayerPose*  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPlaceHeldPlayerInPose", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void GlobalNamespace::PlayerActions::ActionPlaceInHome(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionPlaceInHome", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, propHome);
}
inline void GlobalNamespace::PlayerActions::ActionDudUseHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionDudUseHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerActions::ActionUseHeldSwitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseHeldSwitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerActions::ActionUseHeldUpSwitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseHeldUpSwitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerActions::ActionUseWorldSwitch(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::PeckSwitch*  peckSwitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseWorldSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, peckSwitch);
}
inline void GlobalNamespace::PlayerActions::ActionUseHeldAsKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionUseHeldAsKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerActions::ActionReleaseWorldSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch, ::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {"ActionReleaseWorldSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckSwitch, peckContext);
}
inline void GlobalNamespace::PlayerActions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerActions* GlobalNamespace::PlayerActions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerActions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerActions::PlayerActions()   {
}
