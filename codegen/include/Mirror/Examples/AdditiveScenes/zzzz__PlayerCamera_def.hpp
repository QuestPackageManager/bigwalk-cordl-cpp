#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/PlayerCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerCamera)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Mirror::Examples::AdditiveScenes {
class PlayerCamera;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveScenes::PlayerCamera*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::PlayerCamera*, "Mirror.Examples.AdditiveScenes", "PlayerCamera");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::AdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveScenes.PlayerCamera
class CORDL_TYPE PlayerCamera : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field mainCam, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCam, put=__cordl_internal_set_mainCam)) ::UnityW<::UnityEngine::Camera>  mainCam;

/// @brief Method Awake, addr 0x18155ea00, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::AdditiveScenes::PlayerCamera* New_ctor() ;

/// @brief Method OnStartLocalPlayer, addr 0x18155ea30, size 0x130, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method OnStopLocalPlayer, addr 0x18155eb60, size 0x150, virtual true, abstract: false, final false
inline void OnStopLocalPlayer() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCam() ;

constexpr void __cordl_internal_set_mainCam(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCamera(PlayerCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCamera(PlayerCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19352};

/// @brief Field mainCam, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mainCam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerCamera, ___mainCam) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::PlayerCamera) == 0x70, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
