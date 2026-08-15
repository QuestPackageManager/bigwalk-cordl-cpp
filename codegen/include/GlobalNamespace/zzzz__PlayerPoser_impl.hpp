#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPoser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPoser_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.get_playerHoldingMe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::get_playerHoldingMe)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18035bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_playerHoldingMe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.get_isCrouchBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::get_isCrouchBlocking)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18035bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_isCrouchBlocking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.get_isFootstepBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::get_isFootstepBlocking)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18035bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_isFootstepBlocking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::get_active)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18035be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.get_bottomPlayerInStack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::get_bottomPlayerInStack)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18035be40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_bottomPlayerInStack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.get_propSupportingStack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Prop> (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::get_propSupportingStack)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18035bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_propSupportingStack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPoser::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerPoser::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18035ad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.PoseIsSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerPoser::*)(::GlobalNamespace::PlayerPose*, ::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerPoser::PoseIsSafe)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x18035af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"PoseIsSafe", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.EnterPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPoser::*)(::GlobalNamespace::PlayerPose*)>(&::GlobalNamespace::PlayerPoser::EnterPose)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x180359c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"EnterPose", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.ExitPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPoser::*)(::GlobalNamespace::AudioAsset*)>(&::GlobalNamespace::PlayerPoser::ExitPose)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x18035a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"ExitPose", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.PoseIsNotUpright
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerPoser::*)(::GlobalNamespace::PlayerPose*)>(&::GlobalNamespace::PlayerPoser::PoseIsNotUpright)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18035af20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"PoseIsNotUpright", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.PerformPoseDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPoser::*)(::GlobalNamespace::PlayerPose*)>(&::GlobalNamespace::PlayerPoser::PerformPoseDrop)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18035adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"PerformPoseDrop", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::Update)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x18035b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPoser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPoser::*)()>(&::GlobalNamespace::PlayerPoser::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerPoser::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerPoser::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& GlobalNamespace::PlayerPoser::__cordl_internal_get_currentPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& GlobalNamespace::PlayerPoser::__cordl_internal_get_currentPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPose;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set_currentPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPose = value;
}
constexpr bool& GlobalNamespace::PlayerPoser::__cordl_internal_get_justEnteredFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justEnteredFlag;
}
constexpr bool const& GlobalNamespace::PlayerPoser::__cordl_internal_get_justEnteredFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justEnteredFlag;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set_justEnteredFlag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___justEnteredFlag = value;
}
constexpr bool& GlobalNamespace::PlayerPoser::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerPoser::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerPoser::__cordl_internal_get_localBumOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerPoser::__cordl_internal_get_localBumOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffset;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set_localBumOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localBumOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerPoser::__cordl_internal_get_localBumOffsetVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffsetVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerPoser::__cordl_internal_get_localBumOffsetVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffsetVelocity;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set_localBumOffsetVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localBumOffsetVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerPoser::__cordl_internal_get_localBumOriginalPostion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOriginalPostion;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerPoser::__cordl_internal_get_localBumOriginalPostion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOriginalPostion;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set_localBumOriginalPostion(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localBumOriginalPostion = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerPoser::__cordl_internal_get__legWiggleAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legWiggleAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerPoser::__cordl_internal_get__legWiggleAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legWiggleAudioEvent;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set__legWiggleAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____legWiggleAudioEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerPoser::__cordl_internal_get__idleAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerPoser::__cordl_internal_get__idleAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleAudioEvent;
}
constexpr void GlobalNamespace::PlayerPoser::__cordl_internal_set__idleAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idleAudioEvent = value;
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PlayerPoser::get_playerHoldingMe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_playerHoldingMe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerPoser::get_isCrouchBlocking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_isCrouchBlocking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerPoser::get_isFootstepBlocking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_isFootstepBlocking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerPoser::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PlayerPoser::get_bottomPlayerInStack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_bottomPlayerInStack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Prop> GlobalNamespace::PlayerPoser::get_propSupportingStack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"get_propSupportingStack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Prop>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPoser::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline bool GlobalNamespace::PlayerPoser::PoseIsSafe(::GlobalNamespace::PlayerPose*  pose, ::GlobalNamespace::PlayerCharacter*  initiatingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"PoseIsSafe", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose, initiatingPlayer);
}
inline void GlobalNamespace::PlayerPoser::EnterPose(::GlobalNamespace::PlayerPose*  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"EnterPose", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void GlobalNamespace::PlayerPoser::ExitPose(::GlobalNamespace::AudioAsset*  soundOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"ExitPose", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, soundOverride);
}
inline bool GlobalNamespace::PlayerPoser::PoseIsNotUpright(::GlobalNamespace::PlayerPose*  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"PoseIsNotUpright", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void GlobalNamespace::PlayerPoser::PerformPoseDrop(::GlobalNamespace::PlayerPose*  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"PerformPoseDrop", {}, {::i2c::type_of<::GlobalNamespace::PlayerPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void GlobalNamespace::PlayerPoser::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPoser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPoser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerPoser* GlobalNamespace::PlayerPoser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerPoser*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPoser::PlayerPoser()   {
}
