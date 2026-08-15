#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Gameplay/PlayerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSettings)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Rowlan::Genesis::Gameplay {
class PlayerSettings;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Gameplay::PlayerSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Gameplay::PlayerSettings*, "Rowlan.Genesis.Gameplay", "PlayerSettings");
// Dependencies UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Gameplay {
// Is value type: false
// CS Name: Rowlan.Genesis.Gameplay.PlayerSettings
class CORDL_TYPE PlayerSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field addCameraTarget, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_addCameraTarget, put=__cordl_internal_set_addCameraTarget)) bool  addCameraTarget;

/// @brief Field camera, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

/// @brief Field cameraDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_cameraDistance, put=__cordl_internal_set_cameraDistance)) float_t  cameraDistance;

/// @brief Field cameraTargetY, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cameraTargetY, put=__cordl_internal_set_cameraTargetY)) float_t  cameraTargetY;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::UnityEngine::GameObject>  player;

static inline ::Rowlan::Genesis::Gameplay::PlayerSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_addCameraTarget() const;

constexpr bool& __cordl_internal_get_addCameraTarget() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr float_t const& __cordl_internal_get_cameraDistance() const;

constexpr float_t& __cordl_internal_get_cameraDistance() ;

constexpr float_t const& __cordl_internal_get_cameraTargetY() const;

constexpr float_t& __cordl_internal_get_cameraTargetY() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set_addCameraTarget(bool  value) ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_cameraDistance(float_t  value) ;

constexpr void __cordl_internal_set_cameraTargetY(float_t  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x181abf790, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSettings(PlayerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSettings(PlayerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20423};

/// @brief Field camera, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___player;

/// @brief Field cameraDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___cameraDistance;

/// @brief Field addCameraTarget, offset: 0x2c, size: 0x1, def value: None
 bool  ___addCameraTarget;

/// @brief Field cameraTargetY, offset: 0x30, size: 0x4, def value: None
 float_t  ___cameraTargetY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Gameplay::PlayerSettings, ___camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Gameplay::PlayerSettings, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Gameplay::PlayerSettings, ___cameraDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Gameplay::PlayerSettings, ___addCameraTarget) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Gameplay::PlayerSettings, ___cameraTargetY) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Gameplay::PlayerSettings) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Gameplay
