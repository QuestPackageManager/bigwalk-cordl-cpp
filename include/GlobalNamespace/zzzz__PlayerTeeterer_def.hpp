#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTeeterer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerTeeterer)
namespace GlobalNamespace {
class PlayerCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerTeeterer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerTeeterer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTeeterer*, "", "PlayerTeeterer");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerTeeterer
class CORDL_TYPE PlayerTeeterer : public ::System::Object {
public:
// Declarations
/// @brief Field defaultSmoothTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultSmoothTime, put=setStaticF_defaultSmoothTime)) float_t  defaultSmoothTime;

/// @brief Field grabPoseCachedPos, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_grabPoseCachedPos, put=__cordl_internal_set_grabPoseCachedPos)) ::UnityEngine::Vector3  grabPoseCachedPos;

/// @brief Field grabPoseDefaultLocalPosition, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_grabPoseDefaultLocalPosition, put=__cordl_internal_set_grabPoseDefaultLocalPosition)) ::UnityEngine::Vector3  grabPoseDefaultLocalPosition;

/// @brief Field grabPoseRotationVelocity, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_grabPoseRotationVelocity, put=__cordl_internal_set_grabPoseRotationVelocity)) ::UnityEngine::Vector3  grabPoseRotationVelocity;

/// @brief Field grabPoseSmoothedRotation, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_grabPoseSmoothedRotation, put=__cordl_internal_set_grabPoseSmoothedRotation)) ::UnityEngine::Quaternion  grabPoseSmoothedRotation;

/// @brief Field grabPoseVelocity, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_grabPoseVelocity, put=__cordl_internal_set_grabPoseVelocity)) ::UnityEngine::Vector3  grabPoseVelocity;

/// @brief Field ignoreRotationDamp, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreRotationDamp, put=__cordl_internal_set_ignoreRotationDamp)) bool  ignoreRotationDamp;

/// @brief Field ignoreTeeter, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreTeeter, put=__cordl_internal_set_ignoreTeeter)) bool  ignoreTeeter;

/// @brief Field logVerbose, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field poseLocalVel, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_poseLocalVel, put=__cordl_internal_set_poseLocalVel)) ::UnityEngine::Vector3  poseLocalVel;

/// @brief Field poseSmoothLocalPos, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_poseSmoothLocalPos, put=__cordl_internal_set_poseSmoothLocalPos)) ::UnityEngine::Vector3  poseSmoothLocalPos;

/// @brief Field rotationSmoothTime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSmoothTime, put=__cordl_internal_set_rotationSmoothTime)) float_t  rotationSmoothTime;

/// @brief Method Initialize, addr 0x180376900, size 0x80, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerTeeterer* New_ctor() ;

/// @brief Method Update, addr 0x180376b90, size 0x230, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRotationDamp, addr 0x180376980, size 0x210, virtual false, abstract: false, final false
inline void UpdateRotationDamp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_grabPoseCachedPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_grabPoseCachedPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_grabPoseDefaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_grabPoseDefaultLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_grabPoseRotationVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_grabPoseRotationVelocity() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_grabPoseSmoothedRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_grabPoseSmoothedRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_grabPoseVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_grabPoseVelocity() ;

constexpr bool const& __cordl_internal_get_ignoreRotationDamp() const;

constexpr bool& __cordl_internal_get_ignoreRotationDamp() ;

constexpr bool const& __cordl_internal_get_ignoreTeeter() const;

constexpr bool& __cordl_internal_get_ignoreTeeter() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_poseLocalVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_poseLocalVel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_poseSmoothLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_poseSmoothLocalPos() ;

constexpr float_t const& __cordl_internal_get_rotationSmoothTime() const;

constexpr float_t& __cordl_internal_get_rotationSmoothTime() ;

constexpr void __cordl_internal_set_grabPoseCachedPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_grabPoseDefaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_grabPoseRotationVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_grabPoseSmoothedRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_grabPoseVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ignoreRotationDamp(bool  value) ;

constexpr void __cordl_internal_set_ignoreTeeter(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_poseLocalVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_poseSmoothLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotationSmoothTime(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_defaultSmoothTime() ;

static inline void setStaticF_defaultSmoothTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTeeterer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTeeterer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTeeterer(PlayerTeeterer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTeeterer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTeeterer(PlayerTeeterer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5487};

/// @brief Field rotationSmoothTime, offset: 0x10, size: 0x4, def value: None
 float_t  ___rotationSmoothTime;

/// @brief Field ignoreTeeter, offset: 0x14, size: 0x1, def value: None
 bool  ___ignoreTeeter;

/// @brief Field ignoreRotationDamp, offset: 0x15, size: 0x1, def value: None
 bool  ___ignoreRotationDamp;

/// @brief Field logVerbose, offset: 0x16, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field grabPoseDefaultLocalPosition, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___grabPoseDefaultLocalPosition;

/// @brief Field grabPoseVelocity, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___grabPoseVelocity;

/// @brief Field grabPoseCachedPos, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___grabPoseCachedPos;

/// @brief Field poseSmoothLocalPos, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___poseSmoothLocalPos;

/// @brief Field poseLocalVel, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___poseLocalVel;

/// @brief Field grabPoseSmoothedRotation, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___grabPoseSmoothedRotation;

/// @brief Field grabPoseRotationVelocity, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___grabPoseRotationVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___rotationSmoothTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___ignoreTeeter) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___ignoreRotationDamp) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___logVerbose) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___playerCharacter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___grabPoseDefaultLocalPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___grabPoseVelocity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___grabPoseCachedPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___poseSmoothLocalPos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___poseLocalVel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___grabPoseSmoothedRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTeeterer, ___grabPoseRotationVelocity) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTeeterer) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
