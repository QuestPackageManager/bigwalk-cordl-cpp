#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerMover)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerNetworking;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerMover;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerMover*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerMover*, "", "PlayerMover");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerMover
class CORDL_TYPE PlayerMover : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LocalKernalSpeed)) float_t  LocalKernalSpeed;

 __declspec(property(get=get_VelYUsedForAnimation)) float_t  VelYUsedForAnimation;

/// @brief Field <cachedKernalPos>k__BackingField, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__cachedKernalPos_k__BackingField, put=__cordl_internal_set__cachedKernalPos_k__BackingField)) ::UnityEngine::Vector3  _cachedKernalPos_k__BackingField;

/// @brief Field <localKernalVelocityMinusPlatform>k__BackingField, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__localKernalVelocityMinusPlatform_k__BackingField, put=__cordl_internal_set__localKernalVelocityMinusPlatform_k__BackingField)) ::UnityEngine::Vector3  _localKernalVelocityMinusPlatform_k__BackingField;

/// @brief Field _runningPerFrameRotation, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__runningPerFrameRotation, put=__cordl_internal_set__runningPerFrameRotation)) float_t  _runningPerFrameRotation;

/// @brief Field airbourneVelocity, offset 0x8c, size 0xc 
 __declspec(property(get=__cordl_internal_get_airbourneVelocity, put=__cordl_internal_set_airbourneVelocity)) ::UnityEngine::Vector3  airbourneVelocity;

/// @brief Field applySittingSpin, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_applySittingSpin, put=__cordl_internal_set_applySittingSpin)) bool  applySittingSpin;

/// @brief Field applyVelocityForRemotePlayers, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyVelocityForRemotePlayers, put=__cordl_internal_set_applyVelocityForRemotePlayers)) bool  applyVelocityForRemotePlayers;

/// @brief Field bypassFixedUpdate, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassFixedUpdate, put=__cordl_internal_set_bypassFixedUpdate)) bool  bypassFixedUpdate;

/// @brief Field bypassUpdate, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassUpdate, put=__cordl_internal_set_bypassUpdate)) bool  bypassUpdate;

 __declspec(property(get=get_cachedKernalPos, put=set_cachedKernalPos)) ::UnityEngine::Vector3  cachedKernalPos;

 __declspec(property(get=get_correctedControlsVelocity)) ::UnityEngine::Vector3  correctedControlsVelocity;

/// @brief Field defaultSmoothTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultSmoothTime, put=setStaticF_defaultSmoothTime)) float_t  defaultSmoothTime;

/// @brief Field ignoreAirbourneVelocity, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreAirbourneVelocity, put=__cordl_internal_set_ignoreAirbourneVelocity)) bool  ignoreAirbourneVelocity;

/// @brief Field ignorePlatform, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignorePlatform, put=__cordl_internal_set_ignorePlatform)) bool  ignorePlatform;

/// @brief Field localControlsVelocity, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_localControlsVelocity, put=__cordl_internal_set_localControlsVelocity)) ::UnityEngine::Vector3  localControlsVelocity;

/// @brief Field localKernalVelocity, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_localKernalVelocity, put=__cordl_internal_set_localKernalVelocity)) ::UnityEngine::Vector3  localKernalVelocity;

 __declspec(property(get=get_localKernalVelocityMinusPlatform, put=set_localKernalVelocityMinusPlatform)) ::UnityEngine::Vector3  localKernalVelocityMinusPlatform;

/// @brief Field logGrip, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get_logGrip, put=__cordl_internal_set_logGrip)) bool  logGrip;

/// @brief Field logSittingSpin, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_logSittingSpin, put=__cordl_internal_set_logSittingSpin)) bool  logSittingSpin;

/// @brief Field logStandingSpin, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_logStandingSpin, put=__cordl_internal_set_logStandingSpin)) bool  logStandingSpin;

/// @brief Field logVerbose, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field minimumPushGrip, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumPushGrip, put=__cordl_internal_set_minimumPushGrip)) float_t  minimumPushGrip;

/// @brief Field noGripVelocity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_noGripVelocity, put=__cordl_internal_set_noGripVelocity)) float_t  noGripVelocity;

/// @brief Field noUpwardsPlatformMovement, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_noUpwardsPlatformMovement, put=__cordl_internal_set_noUpwardsPlatformMovement)) bool  noUpwardsPlatformMovement;

/// @brief Field pc, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc, put=__cordl_internal_set_pc)) ::UnityW<::GlobalNamespace::PlayerCharacter>  pc;

 __declspec(property(get=get_playerNetworking)) ::UnityW<::GlobalNamespace::PlayerNetworking>  playerNetworking;

/// @brief Field poseVelocity, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_poseVelocity, put=__cordl_internal_set_poseVelocity)) ::UnityEngine::Vector3  poseVelocity;

/// @brief Field potentialAirbourneVelocity, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get_potentialAirbourneVelocity, put=__cordl_internal_set_potentialAirbourneVelocity)) ::UnityEngine::Vector3  potentialAirbourneVelocity;

/// @brief Field remotePlayerWorldVelocityDamped, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_remotePlayerWorldVelocityDamped, put=__cordl_internal_set_remotePlayerWorldVelocityDamped)) ::UnityEngine::Vector3  remotePlayerWorldVelocityDamped;

/// @brief Field remotePlayerWorldVelocityVelocity, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get_remotePlayerWorldVelocityVelocity, put=__cordl_internal_set_remotePlayerWorldVelocityVelocity)) ::UnityEngine::Vector3  remotePlayerWorldVelocityVelocity;

/// @brief Field sittingSpinSpeed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sittingSpinSpeed, put=__cordl_internal_set_sittingSpinSpeed)) float_t  sittingSpinSpeed;

/// @brief Field spinBuffer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinBuffer, put=__cordl_internal_set_spinBuffer)) ::ArrayW<float_t>  spinBuffer;

/// @brief Field spinBufferIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinBufferIndex, put=__cordl_internal_set_spinBufferIndex)) int32_t  spinBufferIndex;

/// @brief Field timeAtLastSync, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtLastSync, put=__cordl_internal_set_timeAtLastSync)) float_t  timeAtLastSync;

/// @brief Field trueSpeedDeadZoneThreshold, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_trueSpeedDeadZoneThreshold, put=__cordl_internal_set_trueSpeedDeadZoneThreshold)) float_t  trueSpeedDeadZoneThreshold;

/// @brief Field useGripTest, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGripTest, put=__cordl_internal_set_useGripTest)) bool  useGripTest;

/// @brief Field velYUsedForAnimation, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_velYUsedForAnimation, put=__cordl_internal_set_velYUsedForAnimation)) float_t  velYUsedForAnimation;

/// @brief Field wasGrounded, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasGrounded, put=__cordl_internal_set_wasGrounded)) bool  wasGrounded;

/// @brief Method FixedUpdate, addr 0x1803561d0, size 0xec0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetForwardSpeed, addr 0x180357090, size 0x2b0, virtual false, abstract: false, final false
inline float_t GetForwardSpeed() ;

/// @brief Method Initialize, addr 0x180357340, size 0x80, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method IsStandingStillForSliding, addr 0x1803573c0, size 0x60, virtual false, abstract: false, final false
inline bool IsStandingStillForSliding() ;

/// @brief Method LocalFixedUpdate, addr 0x180357420, size 0xdf0, virtual false, abstract: false, final false
inline void LocalFixedUpdate(::by_ref<float_t>  velY) ;

static inline ::GlobalNamespace::PlayerMover* New_ctor() ;

/// @brief Method ResetPosition, addr 0x180358210, size 0xb0, virtual false, abstract: false, final false
inline void ResetPosition() ;

/// @brief Method StickMovementIsClose, addr 0x1803582c0, size 0xa0, virtual false, abstract: false, final false
inline bool StickMovementIsClose(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Update, addr 0x1803589f0, size 0xba0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePerFrameRotation, addr 0x180358360, size 0x690, virtual false, abstract: false, final false
inline void UpdatePerFrameRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cachedKernalPos_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cachedKernalPos_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localKernalVelocityMinusPlatform_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localKernalVelocityMinusPlatform_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__runningPerFrameRotation() const;

constexpr float_t& __cordl_internal_get__runningPerFrameRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_airbourneVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_airbourneVelocity() ;

constexpr bool const& __cordl_internal_get_applySittingSpin() const;

constexpr bool& __cordl_internal_get_applySittingSpin() ;

constexpr bool const& __cordl_internal_get_applyVelocityForRemotePlayers() const;

constexpr bool& __cordl_internal_get_applyVelocityForRemotePlayers() ;

constexpr bool const& __cordl_internal_get_bypassFixedUpdate() const;

constexpr bool& __cordl_internal_get_bypassFixedUpdate() ;

constexpr bool const& __cordl_internal_get_bypassUpdate() const;

constexpr bool& __cordl_internal_get_bypassUpdate() ;

constexpr bool const& __cordl_internal_get_ignoreAirbourneVelocity() const;

constexpr bool& __cordl_internal_get_ignoreAirbourneVelocity() ;

constexpr bool const& __cordl_internal_get_ignorePlatform() const;

constexpr bool& __cordl_internal_get_ignorePlatform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localControlsVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localControlsVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localKernalVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localKernalVelocity() ;

constexpr bool const& __cordl_internal_get_logGrip() const;

constexpr bool& __cordl_internal_get_logGrip() ;

constexpr bool const& __cordl_internal_get_logSittingSpin() const;

constexpr bool& __cordl_internal_get_logSittingSpin() ;

constexpr bool const& __cordl_internal_get_logStandingSpin() const;

constexpr bool& __cordl_internal_get_logStandingSpin() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_minimumPushGrip() const;

constexpr float_t& __cordl_internal_get_minimumPushGrip() ;

constexpr float_t const& __cordl_internal_get_noGripVelocity() const;

constexpr float_t& __cordl_internal_get_noGripVelocity() ;

constexpr bool const& __cordl_internal_get_noUpwardsPlatformMovement() const;

constexpr bool& __cordl_internal_get_noUpwardsPlatformMovement() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_pc() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_pc() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_poseVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_poseVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_potentialAirbourneVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_potentialAirbourneVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_remotePlayerWorldVelocityDamped() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_remotePlayerWorldVelocityDamped() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_remotePlayerWorldVelocityVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_remotePlayerWorldVelocityVelocity() ;

constexpr float_t const& __cordl_internal_get_sittingSpinSpeed() const;

constexpr float_t& __cordl_internal_get_sittingSpinSpeed() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_spinBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_spinBuffer() ;

constexpr int32_t const& __cordl_internal_get_spinBufferIndex() const;

constexpr int32_t& __cordl_internal_get_spinBufferIndex() ;

constexpr float_t const& __cordl_internal_get_timeAtLastSync() const;

constexpr float_t& __cordl_internal_get_timeAtLastSync() ;

constexpr float_t const& __cordl_internal_get_trueSpeedDeadZoneThreshold() const;

constexpr float_t& __cordl_internal_get_trueSpeedDeadZoneThreshold() ;

constexpr bool const& __cordl_internal_get_useGripTest() const;

constexpr bool& __cordl_internal_get_useGripTest() ;

constexpr float_t const& __cordl_internal_get_velYUsedForAnimation() const;

constexpr float_t& __cordl_internal_get_velYUsedForAnimation() ;

constexpr bool const& __cordl_internal_get_wasGrounded() const;

constexpr bool& __cordl_internal_get_wasGrounded() ;

constexpr void __cordl_internal_set__cachedKernalPos_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localKernalVelocityMinusPlatform_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__runningPerFrameRotation(float_t  value) ;

constexpr void __cordl_internal_set_airbourneVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_applySittingSpin(bool  value) ;

constexpr void __cordl_internal_set_applyVelocityForRemotePlayers(bool  value) ;

constexpr void __cordl_internal_set_bypassFixedUpdate(bool  value) ;

constexpr void __cordl_internal_set_bypassUpdate(bool  value) ;

constexpr void __cordl_internal_set_ignoreAirbourneVelocity(bool  value) ;

constexpr void __cordl_internal_set_ignorePlatform(bool  value) ;

constexpr void __cordl_internal_set_localControlsVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localKernalVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_logGrip(bool  value) ;

constexpr void __cordl_internal_set_logSittingSpin(bool  value) ;

constexpr void __cordl_internal_set_logStandingSpin(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_minimumPushGrip(float_t  value) ;

constexpr void __cordl_internal_set_noGripVelocity(float_t  value) ;

constexpr void __cordl_internal_set_noUpwardsPlatformMovement(bool  value) ;

constexpr void __cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_poseVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_potentialAirbourneVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_remotePlayerWorldVelocityDamped(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_remotePlayerWorldVelocityVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sittingSpinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_spinBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_spinBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set_timeAtLastSync(float_t  value) ;

constexpr void __cordl_internal_set_trueSpeedDeadZoneThreshold(float_t  value) ;

constexpr void __cordl_internal_set_useGripTest(bool  value) ;

constexpr void __cordl_internal_set_velYUsedForAnimation(float_t  value) ;

constexpr void __cordl_internal_set_wasGrounded(bool  value) ;

/// @brief Method .ctor, addr 0x1803595c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_defaultSmoothTime() ;

/// @brief Method get_LocalKernalSpeed, addr 0x1803595d0, size 0x30, virtual false, abstract: false, final false
inline float_t get_LocalKernalSpeed() ;

/// @brief Method get_VelYUsedForAnimation, addr 0x180312eb0, size 0x10, virtual false, abstract: false, final false
inline float_t get_VelYUsedForAnimation() ;

/// @brief Method get_cachedKernalPos, addr 0x180359600, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_cachedKernalPos() ;

/// @brief Method get_correctedControlsVelocity, addr 0x180359620, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_correctedControlsVelocity() ;

/// @brief Method get_localKernalVelocityMinusPlatform, addr 0x1803596e0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localKernalVelocityMinusPlatform() ;

/// @brief Method get_playerNetworking, addr 0x180359700, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerNetworking> get_playerNetworking() ;

static inline void setStaticF_defaultSmoothTime(float_t  value) ;

/// @brief Method set_cachedKernalPos, addr 0x180359720, size 0x10, virtual false, abstract: false, final false
inline void set_cachedKernalPos(::UnityEngine::Vector3  value) ;

/// @brief Method set_localKernalVelocityMinusPlatform, addr 0x180359730, size 0x10, virtual false, abstract: false, final false
inline void set_localKernalVelocityMinusPlatform(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMover(PlayerMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMover(PlayerMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5473};

/// @brief Field spinBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  spinBufferLength{static_cast<int32_t>(0x3)};

/// @brief Field syncWait offset 0xffffffff size 0x4
static constexpr float_t  syncWait{static_cast<float_t>(0.02f)};

/// @brief Field pc, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___pc;

/// @brief Field applyVelocityForRemotePlayers, offset: 0x18, size: 0x1, def value: None
 bool  ___applyVelocityForRemotePlayers;

/// @brief Field applySittingSpin, offset: 0x19, size: 0x1, def value: None
 bool  ___applySittingSpin;

/// @brief Field sittingSpinSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___sittingSpinSpeed;

/// @brief Field noUpwardsPlatformMovement, offset: 0x20, size: 0x1, def value: None
 bool  ___noUpwardsPlatformMovement;

/// @brief Field trueSpeedDeadZoneThreshold, offset: 0x24, size: 0x4, def value: None
 float_t  ___trueSpeedDeadZoneThreshold;

/// @brief Field useGripTest, offset: 0x28, size: 0x1, def value: None
 bool  ___useGripTest;

/// @brief Field minimumPushGrip, offset: 0x2c, size: 0x4, def value: None
 float_t  ___minimumPushGrip;

/// @brief Field noGripVelocity, offset: 0x30, size: 0x4, def value: None
 float_t  ___noGripVelocity;

/// @brief Field logVerbose, offset: 0x34, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logSittingSpin, offset: 0x35, size: 0x1, def value: None
 bool  ___logSittingSpin;

/// @brief Field logStandingSpin, offset: 0x36, size: 0x1, def value: None
 bool  ___logStandingSpin;

/// @brief Field logGrip, offset: 0x37, size: 0x1, def value: None
 bool  ___logGrip;

/// @brief Field ignorePlatform, offset: 0x38, size: 0x1, def value: None
 bool  ___ignorePlatform;

/// @brief Field ignoreAirbourneVelocity, offset: 0x39, size: 0x1, def value: None
 bool  ___ignoreAirbourneVelocity;

/// @brief Field bypassFixedUpdate, offset: 0x3a, size: 0x1, def value: None
 bool  ___bypassFixedUpdate;

/// @brief Field bypassUpdate, offset: 0x3b, size: 0x1, def value: None
 bool  ___bypassUpdate;

/// @brief Field timeAtLastSync, offset: 0x3c, size: 0x4, def value: None
 float_t  ___timeAtLastSync;

/// @brief Field <cachedKernalPos>k__BackingField, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cachedKernalPos_k__BackingField;

/// @brief Field poseVelocity, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___poseVelocity;

/// @brief Field spinBuffer, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t>  ___spinBuffer;

/// @brief Field spinBufferIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___spinBufferIndex;

/// @brief Field localKernalVelocity, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localKernalVelocity;

/// @brief Field <localKernalVelocityMinusPlatform>k__BackingField, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localKernalVelocityMinusPlatform_k__BackingField;

/// @brief Field localControlsVelocity, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localControlsVelocity;

/// @brief Field velYUsedForAnimation, offset: 0x88, size: 0x4, def value: None
 float_t  ___velYUsedForAnimation;

/// @brief Field airbourneVelocity, offset: 0x8c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___airbourneVelocity;

/// @brief Field potentialAirbourneVelocity, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___potentialAirbourneVelocity;

/// @brief Field wasGrounded, offset: 0xa4, size: 0x1, def value: None
 bool  ___wasGrounded;

/// @brief Field remotePlayerWorldVelocityDamped, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___remotePlayerWorldVelocityDamped;

/// @brief Field remotePlayerWorldVelocityVelocity, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___remotePlayerWorldVelocityVelocity;

/// @brief Field _runningPerFrameRotation, offset: 0xc0, size: 0x4, def value: None
 float_t  ____runningPerFrameRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerMover, ___pc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___applyVelocityForRemotePlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___applySittingSpin) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___sittingSpinSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___noUpwardsPlatformMovement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___trueSpeedDeadZoneThreshold) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___useGripTest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___minimumPushGrip) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___noGripVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___logVerbose) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___logSittingSpin) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___logStandingSpin) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___logGrip) == 0x37, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___ignorePlatform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___ignoreAirbourneVelocity) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___bypassFixedUpdate) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___bypassUpdate) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___timeAtLastSync) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ____cachedKernalPos_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___poseVelocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___spinBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___spinBufferIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___localKernalVelocity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ____localKernalVelocityMinusPlatform_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___localControlsVelocity) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___velYUsedForAnimation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___airbourneVelocity) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___potentialAirbourneVelocity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___wasGrounded) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___remotePlayerWorldVelocityDamped) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ___remotePlayerWorldVelocityVelocity) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMover, ____runningPerFrameRotation) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerMover) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
