#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTelescope.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTelescope_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTelescope_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType::PeckEffectTelescope_MaskType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType::PeckEffectTelescope_MaskType()   {
}
constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType  GlobalNamespace::PeckEffectTelescope_MaskType::Binoculars{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType  GlobalNamespace::PeckEffectTelescope_MaskType::Telescope{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTelescope.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTelescope::*)()>(&::GlobalNamespace::PeckEffectTelescope::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044da10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTelescope.SetMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTelescope::*)(bool)>(&::GlobalNamespace::PeckEffectTelescope::SetMask)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18044e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"SetMask", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTelescope.SetActiveFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTelescope::*)(::GlobalNamespace::PlayerCharacter*, bool)>(&::GlobalNamespace::PeckEffectTelescope::SetActiveFor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18044dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"SetActiveFor", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTelescope.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTelescope::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectTelescope::Peck)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18044ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTelescope.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTelescope::*)()>(&::GlobalNamespace::PeckEffectTelescope::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18044dab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTelescope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTelescope::*)()>(&::GlobalNamespace::PeckEffectTelescope::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr float_t& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_zoomLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoomLevel;
}
constexpr float_t const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_zoomLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoomLevel;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_zoomLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoomLevel = value;
}
constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_maskType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskType;
}
constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_maskType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskType;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_maskType(::GlobalNamespace::PeckEffectTelescope_MaskType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maskType = value;
}
constexpr bool& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_givesNightVision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___givesNightVision;
}
constexpr bool const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_givesNightVision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___givesNightVision;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_givesNightVision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___givesNightVision = value;
}
constexpr bool& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_clearHeldHigh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearHeldHigh;
}
constexpr bool const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_clearHeldHigh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearHeldHigh;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_clearHeldHigh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearHeldHigh = value;
}
constexpr bool& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_giveXrayEyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveXrayEyes;
}
constexpr bool const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_giveXrayEyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveXrayEyes;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_giveXrayEyes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___giveXrayEyes = value;
}
constexpr bool& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_setHeadFixed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setHeadFixed;
}
constexpr bool const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_setHeadFixed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setHeadFixed;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_setHeadFixed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setHeadFixed = value;
}
constexpr float_t& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_fixedYCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedYCenter;
}
constexpr float_t const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_fixedYCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedYCenter;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_fixedYCenter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedYCenter = value;
}
constexpr float_t& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_fixedHeadRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedHeadRange;
}
constexpr float_t const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_fixedHeadRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedHeadRange;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_fixedHeadRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedHeadRange = value;
}
constexpr bool& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_moveLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_moveLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveLoop;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_moveLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveLoop = value;
}
constexpr bool& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_isActiveForLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveForLocalPlayer;
}
constexpr bool const& GlobalNamespace::PeckEffectTelescope::__cordl_internal_get_isActiveForLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveForLocalPlayer;
}
constexpr void GlobalNamespace::PeckEffectTelescope::__cordl_internal_set_isActiveForLocalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActiveForLocalPlayer = value;
}
inline void GlobalNamespace::PeckEffectTelescope::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTelescope::SetMask(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"SetMask", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PeckEffectTelescope::SetActiveFor(::GlobalNamespace::PlayerCharacter*  playerCharacter, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"SetActiveFor", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter, active);
}
inline void GlobalNamespace::PeckEffectTelescope::Peck(::GlobalNamespace::PeckContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::PeckEffectTelescope::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTelescope::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTelescope*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectTelescope* GlobalNamespace::PeckEffectTelescope::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectTelescope*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectTelescope::PeckEffectTelescope()   {
}
