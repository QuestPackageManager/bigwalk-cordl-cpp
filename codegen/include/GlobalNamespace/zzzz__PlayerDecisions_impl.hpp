#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDecisions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDecisions_def.hpp"
#include "GlobalNamespace/zzzz__CastableTarget_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCaster_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerNetworking_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.get_playerNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerNetworking> (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::get_playerNetworking)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180467010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"get_playerNetworking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.get_caster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerCaster* (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::get_caster)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180466f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"get_caster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.get_combinedWindUpStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::get_combinedWindUpStartTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180466fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"get_combinedWindUpStartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.SetWindUpStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)(double_t)>(&::GlobalNamespace::PlayerDecisions::SetWindUpStartTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180465650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"SetWindUpStartTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.ClearWindUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::ClearWindUp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180465210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"ClearWindUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerDecisions::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180465280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::Update)> {
  constexpr static std::size_t size = 0x10a0;
  constexpr static std::size_t addrs = 0x180465730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.UpdateCrosshair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::UpdateCrosshair)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804656c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UpdateCrosshair", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.UpdateDropping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::UpdateDropping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UpdateDropping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.IsHoldingCharacterRecurive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlayerCharacter*, ::GlobalNamespace::PlayerCharacter*, int32_t)>(&::GlobalNamespace::PlayerDecisions::IsHoldingCharacterRecurive)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804652d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"IsHoldingCharacterRecurive", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.IsSafeToUseCastableTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerDecisions::*)(::GlobalNamespace::CastableTarget*, bool)>(&::GlobalNamespace::PlayerDecisions::IsSafeToUseCastableTarget)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804653a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"IsSafeToUseCastableTarget", {}, {::i2c::type_of<::GlobalNamespace::CastableTarget*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.IsSafeToUseSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerDecisions::*)(::GlobalNamespace::PeckSwitch*)>(&::GlobalNamespace::PlayerDecisions::IsSafeToUseSwitch)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180465590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"IsSafeToUseSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.UseCastableTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)(::GlobalNamespace::CastableTarget*)>(&::GlobalNamespace::PlayerDecisions::UseCastableTarget)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x180466970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UseCastableTarget", {}, {::i2c::type_of<::GlobalNamespace::CastableTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions.UseCastSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)(::GlobalNamespace::PeckSwitch*)>(&::GlobalNamespace::PlayerDecisions::UseCastSwitch)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1804667d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UseCastSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDecisions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDecisions::*)()>(&::GlobalNamespace::PlayerDecisions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerDecisions::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerDecisions::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::Rewired::Player*& GlobalNamespace::PlayerDecisions::__cordl_internal_get_inputPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPlayer;
}
constexpr ::Rewired::Player* const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_inputPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPlayer;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_inputPlayer(::Rewired::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputPlayer = value;
}
constexpr bool& GlobalNamespace::PlayerDecisions::__cordl_internal_get_leftHandIsPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIsPointing;
}
constexpr bool const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_leftHandIsPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIsPointing;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_leftHandIsPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandIsPointing = value;
}
constexpr bool& GlobalNamespace::PlayerDecisions::__cordl_internal_get_rightHandIsPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIsPointing;
}
constexpr bool const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_rightHandIsPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIsPointing;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_rightHandIsPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandIsPointing = value;
}
constexpr bool& GlobalNamespace::PlayerDecisions::__cordl_internal_get_willDropOnNextUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___willDropOnNextUp;
}
constexpr bool const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_willDropOnNextUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___willDropOnNextUp;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_willDropOnNextUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___willDropOnNextUp = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerDecisions::__cordl_internal_get_heldDownSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldDownSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_heldDownSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldDownSwitch;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_heldDownSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldDownSwitch = value;
}
constexpr bool& GlobalNamespace::PlayerDecisions::__cordl_internal_get_isHoldingPropSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHoldingPropSwitch;
}
constexpr bool const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_isHoldingPropSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHoldingPropSwitch;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_isHoldingPropSwitch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHoldingPropSwitch = value;
}
constexpr double_t& GlobalNamespace::PlayerDecisions::__cordl_internal_get_localWindUpStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localWindUpStartTime;
}
constexpr double_t const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_localWindUpStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localWindUpStartTime;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_localWindUpStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localWindUpStartTime = value;
}
constexpr bool& GlobalNamespace::PlayerDecisions::__cordl_internal_get_isInGoggles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInGoggles;
}
constexpr bool const& GlobalNamespace::PlayerDecisions::__cordl_internal_get_isInGoggles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInGoggles;
}
constexpr void GlobalNamespace::PlayerDecisions::__cordl_internal_set_isInGoggles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInGoggles = value;
}
inline ::UnityW<::GlobalNamespace::PlayerNetworking> GlobalNamespace::PlayerDecisions::get_playerNetworking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"get_playerNetworking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerNetworking>>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCaster* GlobalNamespace::PlayerDecisions::get_caster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"get_caster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerCaster*>(this, ___internal_method);
}
inline double_t GlobalNamespace::PlayerDecisions::get_combinedWindUpStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"get_combinedWindUpStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDecisions::SetWindUpStartTime(double_t  windUpStartTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"SetWindUpStartTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windUpStartTime);
}
inline void GlobalNamespace::PlayerDecisions::ClearWindUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"ClearWindUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDecisions::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerDecisions::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDecisions::UpdateCrosshair()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UpdateCrosshair", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDecisions::UpdateDropping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UpdateDropping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerDecisions::IsHoldingCharacterRecurive(::GlobalNamespace::PlayerCharacter*  held, ::GlobalNamespace::PlayerCharacter*  holder, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"IsHoldingCharacterRecurive", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, held, holder, depth);
}
inline bool GlobalNamespace::PlayerDecisions::IsSafeToUseCastableTarget(::GlobalNamespace::CastableTarget*  castableTarget, bool  playerCastingIsBlocked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"IsSafeToUseCastableTarget", {}, {::i2c::type_of<::GlobalNamespace::CastableTarget*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, castableTarget, playerCastingIsBlocked);
}
inline bool GlobalNamespace::PlayerDecisions::IsSafeToUseSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"IsSafeToUseSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, peckSwitch);
}
inline void GlobalNamespace::PlayerDecisions::UseCastableTarget(::GlobalNamespace::CastableTarget*  castableTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UseCastableTarget", {}, {::i2c::type_of<::GlobalNamespace::CastableTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, castableTarget);
}
inline void GlobalNamespace::PlayerDecisions::UseCastSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {"UseCastSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckSwitch);
}
inline void GlobalNamespace::PlayerDecisions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDecisions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerDecisions* GlobalNamespace::PlayerDecisions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerDecisions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDecisions::PlayerDecisions()   {
}
