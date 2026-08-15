#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHead.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerHead)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHead;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerHead*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerHead*, "", "PlayerHead");
// Dependencies System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerHead
class CORDL_TYPE PlayerHead : public ::System::Object {
public:
// Declarations
/// @brief Field applyPlatformRotationToLookSpin, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyPlatformRotationToLookSpin, put=__cordl_internal_set_applyPlatformRotationToLookSpin)) bool  applyPlatformRotationToLookSpin;

/// @brief Field bypassUpdate, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassUpdate, put=__cordl_internal_set_bypassUpdate)) bool  bypassUpdate;

/// @brief Field cameraUprighter, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraUprighter, put=__cordl_internal_set_cameraUprighter)) ::UnityW<::UnityEngine::Transform>  cameraUprighter;

/// @brief Field headState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_headState, put=__cordl_internal_set_headState)) ::UnityEngine::Vector2  headState;

/// @brief Field increasedNetworkAccuracy, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_increasedNetworkAccuracy, put=__cordl_internal_set_increasedNetworkAccuracy)) bool  increasedNetworkAccuracy;

/// @brief Field lastSentHeadState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSentHeadState, put=__cordl_internal_set_lastSentHeadState)) ::UnityEngine::Vector2  lastSentHeadState;

/// @brief Field limitLowerCorners, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_limitLowerCorners, put=__cordl_internal_set_limitLowerCorners)) bool  limitLowerCorners;

/// @brief Field logRawMouseInput, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_logRawMouseInput, put=__cordl_internal_set_logRawMouseInput)) bool  logRawMouseInput;

/// @brief Field logVerbose, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field mouseSmoothingFrames, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_mouseSmoothingFrames, put=__cordl_internal_set_mouseSmoothingFrames)) int32_t  mouseSmoothingFrames;

/// @brief Field mouseSpinBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mouseSpinBuffer, put=__cordl_internal_set_mouseSpinBuffer)) ::ArrayW<::UnityEngine::Vector2>  mouseSpinBuffer;

/// @brief Field mouseSpinBufferIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_mouseSpinBufferIndex, put=__cordl_internal_set_mouseSpinBufferIndex)) int32_t  mouseSpinBufferIndex;

/// @brief Field pc, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc, put=__cordl_internal_set_pc)) ::UnityW<::GlobalNamespace::PlayerCharacter>  pc;

/// @brief Field runningTotalLookSpin, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_runningTotalLookSpin, put=__cordl_internal_set_runningTotalLookSpin)) float_t  runningTotalLookSpin;

/// @brief Field smoothMouseMovement, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_smoothMouseMovement, put=__cordl_internal_set_smoothMouseMovement)) bool  smoothMouseMovement;

/// @brief Field smoothStickMovement, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_smoothStickMovement, put=__cordl_internal_set_smoothStickMovement)) bool  smoothStickMovement;

/// @brief Field stickSmoothingFrames, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_stickSmoothingFrames, put=__cordl_internal_set_stickSmoothingFrames)) int32_t  stickSmoothingFrames;

/// @brief Field stickSpinBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickSpinBuffer, put=__cordl_internal_set_stickSpinBuffer)) ::ArrayW<::UnityEngine::Vector2>  stickSpinBuffer;

/// @brief Field stickSpinBufferIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_stickSpinBufferIndex, put=__cordl_internal_set_stickSpinBufferIndex)) int32_t  stickSpinBufferIndex;

/// @brief Field telescopeMoveSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_telescopeMoveSound, put=__cordl_internal_set_telescopeMoveSound)) ::GlobalNamespace::AudioEvent*  telescopeMoveSound;

/// @brief Field telescopeMoveSoundSpeed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_telescopeMoveSoundSpeed, put=__cordl_internal_set_telescopeMoveSoundSpeed)) float_t  telescopeMoveSoundSpeed;

/// @brief Field timeAtLastHeadSync, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtLastHeadSync, put=__cordl_internal_set_timeAtLastHeadSync)) float_t  timeAtLastHeadSync;

/// @brief Method Initialize, addr 0x18034ea30, size 0x60, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerHead* New_ctor() ;

/// @brief Method PlayTelescopeMoveSound, addr 0x18034ea90, size 0x150, virtual false, abstract: false, final false
inline void PlayTelescopeMoveSound(::GlobalNamespace::AudioAsset*  sound) ;

/// @brief Method SetHeadStateLocal, addr 0x18034ebe0, size 0xd80, virtual false, abstract: false, final false
inline void SetHeadStateLocal() ;

/// @brief Method StopTelescopeMoveSound, addr 0x18034f960, size 0x70, virtual false, abstract: false, final false
inline void StopTelescopeMoveSound() ;

/// @brief Method Update, addr 0x18034f9e0, size 0x3e0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <PlayTelescopeMoveSound>b__25_0, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t _PlayTelescopeMoveSound_b__25_0() ;

constexpr bool const& __cordl_internal_get_applyPlatformRotationToLookSpin() const;

constexpr bool& __cordl_internal_get_applyPlatformRotationToLookSpin() ;

constexpr bool const& __cordl_internal_get_bypassUpdate() const;

constexpr bool& __cordl_internal_get_bypassUpdate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cameraUprighter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cameraUprighter() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_headState() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_headState() ;

constexpr bool const& __cordl_internal_get_increasedNetworkAccuracy() const;

constexpr bool& __cordl_internal_get_increasedNetworkAccuracy() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_lastSentHeadState() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_lastSentHeadState() ;

constexpr bool const& __cordl_internal_get_limitLowerCorners() const;

constexpr bool& __cordl_internal_get_limitLowerCorners() ;

constexpr bool const& __cordl_internal_get_logRawMouseInput() const;

constexpr bool& __cordl_internal_get_logRawMouseInput() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr int32_t const& __cordl_internal_get_mouseSmoothingFrames() const;

constexpr int32_t& __cordl_internal_get_mouseSmoothingFrames() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_mouseSpinBuffer() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_mouseSpinBuffer() ;

constexpr int32_t const& __cordl_internal_get_mouseSpinBufferIndex() const;

constexpr int32_t& __cordl_internal_get_mouseSpinBufferIndex() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_pc() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_pc() ;

constexpr float_t const& __cordl_internal_get_runningTotalLookSpin() const;

constexpr float_t& __cordl_internal_get_runningTotalLookSpin() ;

constexpr bool const& __cordl_internal_get_smoothMouseMovement() const;

constexpr bool& __cordl_internal_get_smoothMouseMovement() ;

constexpr bool const& __cordl_internal_get_smoothStickMovement() const;

constexpr bool& __cordl_internal_get_smoothStickMovement() ;

constexpr int32_t const& __cordl_internal_get_stickSmoothingFrames() const;

constexpr int32_t& __cordl_internal_get_stickSmoothingFrames() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_stickSpinBuffer() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_stickSpinBuffer() ;

constexpr int32_t const& __cordl_internal_get_stickSpinBufferIndex() const;

constexpr int32_t& __cordl_internal_get_stickSpinBufferIndex() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get_telescopeMoveSound() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get_telescopeMoveSound() ;

constexpr float_t const& __cordl_internal_get_telescopeMoveSoundSpeed() const;

constexpr float_t& __cordl_internal_get_telescopeMoveSoundSpeed() ;

constexpr float_t const& __cordl_internal_get_timeAtLastHeadSync() const;

constexpr float_t& __cordl_internal_get_timeAtLastHeadSync() ;

constexpr void __cordl_internal_set_applyPlatformRotationToLookSpin(bool  value) ;

constexpr void __cordl_internal_set_bypassUpdate(bool  value) ;

constexpr void __cordl_internal_set_cameraUprighter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_headState(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_increasedNetworkAccuracy(bool  value) ;

constexpr void __cordl_internal_set_lastSentHeadState(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_limitLowerCorners(bool  value) ;

constexpr void __cordl_internal_set_logRawMouseInput(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_mouseSmoothingFrames(int32_t  value) ;

constexpr void __cordl_internal_set_mouseSpinBuffer(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_mouseSpinBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_runningTotalLookSpin(float_t  value) ;

constexpr void __cordl_internal_set_smoothMouseMovement(bool  value) ;

constexpr void __cordl_internal_set_smoothStickMovement(bool  value) ;

constexpr void __cordl_internal_set_stickSmoothingFrames(int32_t  value) ;

constexpr void __cordl_internal_set_stickSpinBuffer(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_stickSpinBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set_telescopeMoveSound(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_telescopeMoveSoundSpeed(float_t  value) ;

constexpr void __cordl_internal_set_timeAtLastHeadSync(float_t  value) ;

/// @brief Method .ctor, addr 0x18034fdc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerHead() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerHead", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerHead(PlayerHead && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHead", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerHead(PlayerHead const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5462};

/// @brief Field limitLowerCorners, offset: 0x10, size: 0x1, def value: None
 bool  ___limitLowerCorners;

/// @brief Field smoothMouseMovement, offset: 0x11, size: 0x1, def value: None
 bool  ___smoothMouseMovement;

/// @brief Field smoothStickMovement, offset: 0x12, size: 0x1, def value: None
 bool  ___smoothStickMovement;

/// @brief Field mouseSmoothingFrames, offset: 0x14, size: 0x4, def value: None
 int32_t  ___mouseSmoothingFrames;

/// @brief Field stickSmoothingFrames, offset: 0x18, size: 0x4, def value: None
 int32_t  ___stickSmoothingFrames;

/// @brief Field logVerbose, offset: 0x1c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logRawMouseInput, offset: 0x1d, size: 0x1, def value: None
 bool  ___logRawMouseInput;

/// @brief Field bypassUpdate, offset: 0x1e, size: 0x1, def value: None
 bool  ___bypassUpdate;

/// @brief Field pc, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___pc;

/// @brief Field headState, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___headState;

/// @brief Field lastSentHeadState, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___lastSentHeadState;

/// @brief Field timeAtLastHeadSync, offset: 0x38, size: 0x4, def value: None
 float_t  ___timeAtLastHeadSync;

/// @brief Field runningTotalLookSpin, offset: 0x3c, size: 0x4, def value: None
 float_t  ___runningTotalLookSpin;

/// @brief Field mouseSpinBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___mouseSpinBuffer;

/// @brief Field mouseSpinBufferIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___mouseSpinBufferIndex;

/// @brief Field stickSpinBuffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___stickSpinBuffer;

/// @brief Field stickSpinBufferIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___stickSpinBufferIndex;

/// @brief Field increasedNetworkAccuracy, offset: 0x5c, size: 0x1, def value: None
 bool  ___increasedNetworkAccuracy;

/// @brief Field telescopeMoveSound, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ___telescopeMoveSound;

/// @brief Field telescopeMoveSoundSpeed, offset: 0x68, size: 0x4, def value: None
 float_t  ___telescopeMoveSoundSpeed;

/// @brief Field cameraUprighter, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cameraUprighter;

/// @brief Field applyPlatformRotationToLookSpin, offset: 0x78, size: 0x1, def value: None
 bool  ___applyPlatformRotationToLookSpin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHead, ___limitLowerCorners) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___smoothMouseMovement) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___smoothStickMovement) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___mouseSmoothingFrames) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___stickSmoothingFrames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___logVerbose) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___logRawMouseInput) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___bypassUpdate) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___pc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___headState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___lastSentHeadState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___timeAtLastHeadSync) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___runningTotalLookSpin) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___mouseSpinBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___mouseSpinBufferIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___stickSpinBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___stickSpinBufferIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___increasedNetworkAccuracy) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___telescopeMoveSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___telescopeMoveSoundSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___cameraUprighter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHead, ___applyPlatformRotationToLookSpin) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerHead) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
