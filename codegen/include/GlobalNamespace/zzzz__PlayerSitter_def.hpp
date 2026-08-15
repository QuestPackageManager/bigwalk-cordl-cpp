#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSitter)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSitter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSitter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSitter*, "", "PlayerSitter");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSitter
class CORDL_TYPE PlayerSitter : public ::System::Object {
public:
// Declarations
/// @brief Field _movingVelocity, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__movingVelocity, put=__cordl_internal_set__movingVelocity)) float_t  _movingVelocity;

/// @brief Field _prevSittingness, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevSittingness, put=__cordl_internal_set__prevSittingness)) float_t  _prevSittingness;

/// @brief Field banExpiredTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_banExpiredTime, put=__cordl_internal_set_banExpiredTime)) float_t  banExpiredTime;

/// @brief Field cachedKernalPosition, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_cachedKernalPosition, put=__cordl_internal_set_cachedKernalPosition)) ::UnityEngine::Vector3  cachedKernalPosition;

/// @brief Field cameraOffset, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_cameraOffset, put=__cordl_internal_set_cameraOffset)) ::UnityEngine::Vector3  cameraOffset;

/// @brief Field dangleCastOriginLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dangleCastOriginLeft, put=__cordl_internal_set_dangleCastOriginLeft)) ::UnityW<::UnityEngine::Transform>  dangleCastOriginLeft;

/// @brief Field dangleCastOriginRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dangleCastOriginRight, put=__cordl_internal_set_dangleCastOriginRight)) ::UnityW<::UnityEngine::Transform>  dangleCastOriginRight;

/// @brief Field dangleFullDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_dangleFullDistance, put=__cordl_internal_set_dangleFullDistance)) float_t  dangleFullDistance;

/// @brief Field dangleZeroDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_dangleZeroDistance, put=__cordl_internal_set_dangleZeroDistance)) float_t  dangleZeroDistance;

/// @brief Field drawDangleRays, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawDangleRays, put=__cordl_internal_set_drawDangleRays)) bool  drawDangleRays;

 __declspec(property(get=get_isSittingCorrected)) bool  isSittingCorrected;

/// @brief Field isSittingLocal, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSittingLocal, put=__cordl_internal_set_isSittingLocal)) bool  isSittingLocal;

/// @brief Field localVelocity, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_localVelocity, put=__cordl_internal_set_localVelocity)) ::UnityEngine::Vector3  localVelocity;

/// @brief Field logVerbose, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field sittingLocalBumOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_sittingLocalBumOffset, put=__cordl_internal_set_sittingLocalBumOffset)) ::UnityEngine::Vector3  sittingLocalBumOffset;

/// @brief Field sittingnessVel, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_sittingnessVel, put=__cordl_internal_set_sittingnessVel)) float_t  sittingnessVel;

/// @brief Field slidingUpdateTimer, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_slidingUpdateTimer, put=__cordl_internal_set_slidingUpdateTimer)) float_t  slidingUpdateTimer;

/// @brief Field smoothSittingness, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothSittingness, put=__cordl_internal_set_smoothSittingness)) float_t  smoothSittingness;

/// @brief Field waitTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitTime, put=__cordl_internal_set_waitTime)) float_t  waitTime;

/// @brief Field worldVelocity, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_worldVelocity, put=__cordl_internal_set_worldVelocity)) ::UnityEngine::Vector3  worldVelocity;

/// @brief Method FixedUpdate, addr 0x180374430, size 0x60, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialize, addr 0x180374490, size 0x20, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerSitter* New_ctor() ;

/// @brief Method SetDangleness, addr 0x1803744b0, size 0x140, virtual false, abstract: false, final false
inline void SetDangleness(::StringW  param, ::UnityEngine::Transform*  origin) ;

/// @brief Method SetNoSitActionTime, addr 0x1803745f0, size 0x40, virtual false, abstract: false, final false
inline void SetNoSitActionTime(float_t  duration) ;

/// @brief Method SetSittingLocal, addr 0x180374630, size 0x110, virtual false, abstract: false, final false
inline void SetSittingLocal(bool  isSitting) ;

/// @brief Method Update, addr 0x180374dc0, size 0x4c0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAudio, addr 0x180374740, size 0x680, virtual false, abstract: false, final false
inline void UpdateAudio(float_t  newSittingness, float_t  deltaTime) ;

/// @brief Method UpdateDangleness, addr 0x180374430, size 0x60, virtual false, abstract: false, final false
inline void UpdateDangleness() ;

constexpr float_t const& __cordl_internal_get__movingVelocity() const;

constexpr float_t& __cordl_internal_get__movingVelocity() ;

constexpr float_t const& __cordl_internal_get__prevSittingness() const;

constexpr float_t& __cordl_internal_get__prevSittingness() ;

constexpr float_t const& __cordl_internal_get_banExpiredTime() const;

constexpr float_t& __cordl_internal_get_banExpiredTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cachedKernalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cachedKernalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cameraOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cameraOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dangleCastOriginLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dangleCastOriginLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dangleCastOriginRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dangleCastOriginRight() ;

constexpr float_t const& __cordl_internal_get_dangleFullDistance() const;

constexpr float_t& __cordl_internal_get_dangleFullDistance() ;

constexpr float_t const& __cordl_internal_get_dangleZeroDistance() const;

constexpr float_t& __cordl_internal_get_dangleZeroDistance() ;

constexpr bool const& __cordl_internal_get_drawDangleRays() const;

constexpr bool& __cordl_internal_get_drawDangleRays() ;

constexpr bool const& __cordl_internal_get_isSittingLocal() const;

constexpr bool& __cordl_internal_get_isSittingLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localVelocity() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sittingLocalBumOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sittingLocalBumOffset() ;

constexpr float_t const& __cordl_internal_get_sittingnessVel() const;

constexpr float_t& __cordl_internal_get_sittingnessVel() ;

constexpr float_t const& __cordl_internal_get_slidingUpdateTimer() const;

constexpr float_t& __cordl_internal_get_slidingUpdateTimer() ;

constexpr float_t const& __cordl_internal_get_smoothSittingness() const;

constexpr float_t& __cordl_internal_get_smoothSittingness() ;

constexpr float_t const& __cordl_internal_get_waitTime() const;

constexpr float_t& __cordl_internal_get_waitTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldVelocity() ;

constexpr void __cordl_internal_set__movingVelocity(float_t  value) ;

constexpr void __cordl_internal_set__prevSittingness(float_t  value) ;

constexpr void __cordl_internal_set_banExpiredTime(float_t  value) ;

constexpr void __cordl_internal_set_cachedKernalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cameraOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_dangleCastOriginLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_dangleCastOriginRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_dangleFullDistance(float_t  value) ;

constexpr void __cordl_internal_set_dangleZeroDistance(float_t  value) ;

constexpr void __cordl_internal_set_drawDangleRays(bool  value) ;

constexpr void __cordl_internal_set_isSittingLocal(bool  value) ;

constexpr void __cordl_internal_set_localVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_sittingLocalBumOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sittingnessVel(float_t  value) ;

constexpr void __cordl_internal_set_slidingUpdateTimer(float_t  value) ;

constexpr void __cordl_internal_set_smoothSittingness(float_t  value) ;

constexpr void __cordl_internal_set_waitTime(float_t  value) ;

constexpr void __cordl_internal_set_worldVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x180375280, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isSittingCorrected, addr 0x1803752a0, size 0x60, virtual false, abstract: false, final false
inline bool get_isSittingCorrected() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSitter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSitter(PlayerSitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSitter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSitter(PlayerSitter const& ) = delete;

/// @brief Field SLIDING_UPDATE_INTERVAL offset 0xffffffff size 0x4
static constexpr float_t  SLIDING_UPDATE_INTERVAL{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5480};

/// @brief Field cameraOffset, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cameraOffset;

/// @brief Field dangleCastOriginLeft, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dangleCastOriginLeft;

/// @brief Field dangleCastOriginRight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dangleCastOriginRight;

/// @brief Field dangleZeroDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___dangleZeroDistance;

/// @brief Field dangleFullDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___dangleFullDistance;

/// @brief Field sittingLocalBumOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sittingLocalBumOffset;

/// @brief Field logVerbose, offset: 0x44, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field drawDangleRays, offset: 0x45, size: 0x1, def value: None
 bool  ___drawDangleRays;

/// @brief Field _prevSittingness, offset: 0x48, size: 0x4, def value: None
 float_t  ____prevSittingness;

/// @brief Field isSittingLocal, offset: 0x4c, size: 0x1, def value: None
 bool  ___isSittingLocal;

/// @brief Field smoothSittingness, offset: 0x50, size: 0x4, def value: None
 float_t  ___smoothSittingness;

/// @brief Field sittingnessVel, offset: 0x54, size: 0x4, def value: None
 float_t  ___sittingnessVel;

/// @brief Field worldVelocity, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___worldVelocity;

/// @brief Field localVelocity, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localVelocity;

/// @brief Field cachedKernalPosition, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cachedKernalPosition;

/// @brief Field waitTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ___waitTime;

/// @brief Field banExpiredTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___banExpiredTime;

/// @brief Field playerCharacter, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field slidingUpdateTimer, offset: 0x90, size: 0x4, def value: None
 float_t  ___slidingUpdateTimer;

/// @brief Field _movingVelocity, offset: 0x94, size: 0x4, def value: None
 float_t  ____movingVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___cameraOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___dangleCastOriginLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___dangleCastOriginRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___dangleZeroDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___dangleFullDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___sittingLocalBumOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___logVerbose) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___drawDangleRays) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ____prevSittingness) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___isSittingLocal) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___smoothSittingness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___sittingnessVel) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___worldVelocity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___localVelocity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___cachedKernalPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___waitTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___banExpiredTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___playerCharacter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ___slidingUpdateTimer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSitter, ____movingVelocity) == 0x94, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSitter) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
