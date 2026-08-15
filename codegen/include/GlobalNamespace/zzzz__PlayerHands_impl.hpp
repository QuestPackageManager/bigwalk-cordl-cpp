#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHands.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHands_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHands_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__ConfigurableJoint_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHands___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands___c__DisplayClass18_0::*)()>(&::GlobalNamespace::PlayerHands___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands___c__DisplayClass18_0._Drop_g__GetX_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerHands___c__DisplayClass18_0::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerHands___c__DisplayClass18_0::_Drop_g__GetX_0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18035c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands___c__DisplayClass18_0*>(),
                        {"<Drop>g__GetX|0", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerHeldInformation& GlobalNamespace::PlayerHands___c__DisplayClass18_0::__cordl_internal_get_heldInformation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInformation;
}
constexpr ::GlobalNamespace::PlayerHeldInformation const& GlobalNamespace::PlayerHands___c__DisplayClass18_0::__cordl_internal_get_heldInformation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInformation;
}
constexpr void GlobalNamespace::PlayerHands___c__DisplayClass18_0::__cordl_internal_set_heldInformation(::GlobalNamespace::PlayerHeldInformation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldInformation = value;
}
constexpr ::GlobalNamespace::PlayerHands*& GlobalNamespace::PlayerHands___c__DisplayClass18_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GlobalNamespace::PlayerHands* const& GlobalNamespace::PlayerHands___c__DisplayClass18_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PlayerHands___c__DisplayClass18_0::__cordl_internal_set___4__this(::GlobalNamespace::PlayerHands*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::PlayerHands___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerHands___c__DisplayClass18_0::_Drop_g__GetX_0(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands___c__DisplayClass18_0*>(),
                        {"<Drop>g__GetX|0", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline ::GlobalNamespace::PlayerHands___c__DisplayClass18_0* GlobalNamespace::PlayerHands___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerHands___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHands___c__DisplayClass18_0::PlayerHands___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.get_heldCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::get_heldCharacter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18034e7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_heldCharacter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.get_isHoldingSomething
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::get_isHoldingSomething)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18034e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_isHoldingSomething", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.get_isCarryingTooHeavy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::get_isCarryingTooHeavy)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18034e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_isCarryingTooHeavy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.get_carriedMoveScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::get_carriedMoveScalar)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18034e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_carriedMoveScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerHands::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18034da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.IsSafeToPickUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerHands::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerHands::IsSafeToPickUp)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18034dad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"IsSafeToPickUp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.PickUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)(::GlobalNamespace::Prop*, bool)>(&::GlobalNamespace::PlayerHands::PickUp)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x18034dcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"PickUp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.Drop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)(::GlobalNamespace::PlayerHeldInformation)>(&::GlobalNamespace::PlayerHands::Drop)> {
  constexpr static std::size_t size = 0xd60;
  constexpr static std::size_t addrs = 0x18034cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"Drop", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.ProcessDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::ProcessDrop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18034e450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"ProcessDrop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.ReactSnatched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::ReactSnatched)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18034e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"ReactSnatched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.PlayGrabPlayerSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerHands::PlayGrabPlayerSound)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18034e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"PlayGrabPlayerSound", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands.ProcessChangedCarrying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::ProcessChangedCarrying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18034e3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"ProcessChangedCarrying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHands._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHands::*)()>(&::GlobalNamespace::PlayerHands::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerHands::__cordl_internal_get_grasperGuide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasperGuide;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerHands::__cordl_internal_get_grasperGuide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasperGuide;
}
constexpr void GlobalNamespace::PlayerHands::__cordl_internal_set_grasperGuide(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grasperGuide = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerHands::__cordl_internal_get_grasper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasper;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerHands::__cordl_internal_get_grasper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grasper;
}
constexpr void GlobalNamespace::PlayerHands::__cordl_internal_set_grasper(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grasper = value;
}
constexpr bool& GlobalNamespace::PlayerHands::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerHands::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerHands::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerHands::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerHands::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerHands::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityW<::UnityEngine::ConfigurableJoint>& GlobalNamespace::PlayerHands::__cordl_internal_get_dragJoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragJoint;
}
constexpr ::UnityW<::UnityEngine::ConfigurableJoint> const& GlobalNamespace::PlayerHands::__cordl_internal_get_dragJoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragJoint;
}
constexpr void GlobalNamespace::PlayerHands::__cordl_internal_set_dragJoint(::UnityW<::UnityEngine::ConfigurableJoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragJoint = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PlayerHands::__cordl_internal_get_heldProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PlayerHands::__cordl_internal_get_heldProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldProp;
}
constexpr void GlobalNamespace::PlayerHands::__cordl_internal_set_heldProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldProp = value;
}
constexpr float_t& GlobalNamespace::PlayerHands::__cordl_internal_get_lastKickTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKickTime;
}
constexpr float_t const& GlobalNamespace::PlayerHands::__cordl_internal_get_lastKickTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKickTime;
}
constexpr void GlobalNamespace::PlayerHands::__cordl_internal_set_lastKickTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastKickTime = value;
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PlayerHands::get_heldCharacter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_heldCharacter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerHands::get_isHoldingSomething()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_isHoldingSomething", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerHands::get_isCarryingTooHeavy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_isCarryingTooHeavy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerHands::get_carriedMoveScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"get_carriedMoveScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHands::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline bool GlobalNamespace::PlayerHands::IsSafeToPickUp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"IsSafeToPickUp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerHands::PickUp(::GlobalNamespace::Prop*  prop, bool  isSnatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"PickUp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, isSnatch);
}
inline void GlobalNamespace::PlayerHands::Drop(::GlobalNamespace::PlayerHeldInformation  heldInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"Drop", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, heldInformation);
}
inline void GlobalNamespace::PlayerHands::ProcessDrop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"ProcessDrop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHands::ReactSnatched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"ReactSnatched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHands::PlayGrabPlayerSound(::GlobalNamespace::PlayerCharacter*  playerBeingGrabbed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"PlayGrabPlayerSound", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerBeingGrabbed);
}
inline void GlobalNamespace::PlayerHands::ProcessChangedCarrying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {"ProcessChangedCarrying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHands::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHands*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHands* GlobalNamespace::PlayerHands::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerHands*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHands::PlayerHands()   {
}
