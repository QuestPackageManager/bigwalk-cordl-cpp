#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCameraReferences.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerCameraReferences)
namespace GlobalNamespace {
class CameraQualityManager;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCameraReferences;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCameraReferences*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCameraReferences*, "", "PlayerCameraReferences");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCameraReferences
class CORDL_TYPE PlayerCameraReferences : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field CameraQualityManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraQualityManager, put=__cordl_internal_set_CameraQualityManager)) ::UnityW<::GlobalNamespace::CameraQualityManager>  CameraQualityManager;

/// @brief Field cameraLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraLight, put=__cordl_internal_set_cameraLight)) ::UnityW<::UnityEngine::Light>  cameraLight;

/// @brief Field playerCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCamera, put=__cordl_internal_set_playerCamera)) ::UnityW<::UnityEngine::Camera>  playerCamera;

/// @brief Field playerUICamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerUICamera, put=__cordl_internal_set_playerUICamera)) ::UnityW<::UnityEngine::Camera>  playerUICamera;

static inline ::GlobalNamespace::PlayerCameraReferences* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::CameraQualityManager> const& __cordl_internal_get_CameraQualityManager() const;

constexpr ::UnityW<::GlobalNamespace::CameraQualityManager>& __cordl_internal_get_CameraQualityManager() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_cameraLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_cameraLight() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_playerCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_playerCamera() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_playerUICamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_playerUICamera() ;

constexpr void __cordl_internal_set_CameraQualityManager(::UnityW<::GlobalNamespace::CameraQualityManager>  value) ;

constexpr void __cordl_internal_set_cameraLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_playerCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_playerUICamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCameraReferences() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCameraReferences", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCameraReferences(PlayerCameraReferences && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCameraReferences", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCameraReferences(PlayerCameraReferences const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5191};

/// @brief Field playerCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___playerCamera;

/// @brief Field playerUICamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___playerUICamera;

/// @brief Field CameraQualityManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CameraQualityManager>  ___CameraQualityManager;

/// @brief Field cameraLight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___cameraLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCameraReferences, ___playerCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraReferences, ___playerUICamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraReferences, ___CameraQualityManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraReferences, ___cameraLight) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCameraReferences) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
