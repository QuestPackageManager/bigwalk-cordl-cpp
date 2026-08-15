#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCheater.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Ray_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCheater_def.hpp"
#include "GlobalNamespace/zzzz__CameraCheatMover_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.get_noMuteEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCheater::*)()>(&::GlobalNamespace::PlayerCheater::get_noMuteEffects)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180462440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"get_noMuteEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCheater::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerCheater::Initialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCheater::*)()>(&::GlobalNamespace::PlayerCheater::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.ProjectOntoRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerCheater::*)(::UnityEngine::Vector3, ::UnityEngine::Ray)>(&::GlobalNamespace::PlayerCheater::ProjectOntoRay)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180462390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ProjectOntoRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.ApplyCameraDampening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCheater::*)()>(&::GlobalNamespace::PlayerCheater::ApplyCameraDampening)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180462010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ApplyCameraDampening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.ClearCameraDampening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCheater::*)()>(&::GlobalNamespace::PlayerCheater::ClearCameraDampening)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804622e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ClearCameraDampening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.ClearTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCheater::*)()>(&::GlobalNamespace::PlayerCheater::ClearTrack)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180462330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ClearTrack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater.CheckForCheat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCheater::*)(::StringW)>(&::GlobalNamespace::PlayerCheater::CheckForCheat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"CheckForCheat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCheater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCheater::*)()>(&::GlobalNamespace::PlayerCheater::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180462430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerCheater::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerCheater::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get_cheatTextIsPrimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatTextIsPrimed;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get_cheatTextIsPrimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatTextIsPrimed;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_cheatTextIsPrimed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cheatTextIsPrimed = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get_cheatButtonsIsPrimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatButtonsIsPrimed;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get_cheatButtonsIsPrimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatButtonsIsPrimed;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_cheatButtonsIsPrimed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cheatButtonsIsPrimed = value;
}
constexpr ::UnityW<::GlobalNamespace::CameraCheatMover>& GlobalNamespace::PlayerCheater::__cordl_internal_get_cameraCheatMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraCheatMover;
}
constexpr ::UnityW<::GlobalNamespace::CameraCheatMover> const& GlobalNamespace::PlayerCheater::__cordl_internal_get_cameraCheatMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraCheatMover;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_cameraCheatMover(::UnityW<::GlobalNamespace::CameraCheatMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraCheatMover = value;
}
constexpr int32_t& GlobalNamespace::PlayerCheater::__cordl_internal_get_nextPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPoint;
}
constexpr int32_t const& GlobalNamespace::PlayerCheater::__cordl_internal_get_nextPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPoint;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_nextPoint(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPoint = value;
}
constexpr float_t& GlobalNamespace::PlayerCheater::__cordl_internal_get_ghostMovementScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostMovementScalar;
}
constexpr float_t const& GlobalNamespace::PlayerCheater::__cordl_internal_get_ghostMovementScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostMovementScalar;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_ghostMovementScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostMovementScalar = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Ray>& GlobalNamespace::PlayerCheater::__cordl_internal_get_LockedRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockedRay;
}
constexpr ::System::Nullable_1<::UnityEngine::Ray> const& GlobalNamespace::PlayerCheater::__cordl_internal_get_LockedRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockedRay;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_LockedRay(::System::Nullable_1<::UnityEngine::Ray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockedRay = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get__trailerAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trailerAudio;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get__trailerAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trailerAudio;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__trailerAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trailerAudio = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get__musicToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____musicToggle;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get__musicToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____musicToggle;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__musicToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____musicToggle = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get__noMuteEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noMuteEffects;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get__noMuteEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noMuteEffects;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__noMuteEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noMuteEffects = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get__voiceToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceToggle;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get__voiceToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceToggle;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__voiceToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceToggle = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get__voice2DToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice2DToggle;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get__voice2DToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice2DToggle;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__voice2DToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voice2DToggle = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get__voice2DSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice2DSet;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get__voice2DSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice2DSet;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__voice2DSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voice2DSet = value;
}
constexpr bool& GlobalNamespace::PlayerCheater::__cordl_internal_get_starsDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsDisabled;
}
constexpr bool const& GlobalNamespace::PlayerCheater::__cordl_internal_get_starsDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsDisabled;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_starsDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___starsDisabled = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerCheater::__cordl_internal_get__cameraDampPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraDampPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerCheater::__cordl_internal_get__cameraDampPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraDampPosition;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__cameraDampPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraDampPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerCheater::__cordl_internal_get__cameraDampVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraDampVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerCheater::__cordl_internal_get__cameraDampVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraDampVelocity;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set__cameraDampVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraDampVelocity = value;
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::PlayerCheater::__cordl_internal_get_cameraDampSmoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraDampSmoothTime;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::PlayerCheater::__cordl_internal_get_cameraDampSmoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraDampSmoothTime;
}
constexpr void GlobalNamespace::PlayerCheater::__cordl_internal_set_cameraDampSmoothTime(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraDampSmoothTime = value;
}
inline bool GlobalNamespace::PlayerCheater::get_noMuteEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"get_noMuteEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCheater::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerCheater::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerCheater::ProjectOntoRay(::UnityEngine::Vector3  point, ::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ProjectOntoRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, ray);
}
inline void GlobalNamespace::PlayerCheater::ApplyCameraDampening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ApplyCameraDampening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCheater::ClearCameraDampening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ClearCameraDampening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCheater::ClearTrack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"ClearTrack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerCheater::CheckForCheat(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {"CheckForCheat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text);
}
inline void GlobalNamespace::PlayerCheater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCheater*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCheater* GlobalNamespace::PlayerCheater::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCheater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCheater::PlayerCheater()   {
}
