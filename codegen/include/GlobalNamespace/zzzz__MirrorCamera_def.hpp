#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerLooks_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorCamera)
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorCamera*, "", "MirrorCamera");
// Dependencies PlayerLooks::LookType, UnityEngine.MonoBehaviour, UnityEngine.Plane
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorCamera
class CORDL_TYPE MirrorCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _frustumPlanes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__frustumPlanes, put=__cordl_internal_set__frustumPlanes)) ::ArrayW<::UnityEngine::Plane>  _frustumPlanes;

/// @brief Field _materialInstance, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field cameraObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraObject, put=__cordl_internal_set_cameraObject)) ::UnityW<::UnityEngine::Camera>  cameraObject;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field savedLookType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedLookType, put=__cordl_internal_set_savedLookType)) ::GlobalNamespace::PlayerLooks_LookType  savedLookType;

/// @brief Field targetMaterialProperty, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetMaterialProperty, put=__cordl_internal_set_targetMaterialProperty)) ::StringW  targetMaterialProperty;

/// @brief Field targetRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::Renderer>  targetRenderer;

/// @brief Field targetSubmesh, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSubmesh, put=__cordl_internal_set_targetSubmesh)) int32_t  targetSubmesh;

/// @brief Method Awake, addr 0x1804039d0, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CustomPostRender, addr 0x180403ac0, size 0x90, virtual false, abstract: false, final false
inline void CustomPostRender(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  eventCamera) ;

/// @brief Method CustomPreCull, addr 0x180403b50, size 0x90, virtual false, abstract: false, final false
inline void CustomPreCull() ;

/// @brief Method CustomPreRender, addr 0x180403be0, size 0x2d0, virtual false, abstract: false, final false
inline void CustomPreRender(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  eventCamera) ;

/// @brief Method LateUpdate, addr 0x180403eb0, size 0x290, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MirrorCamera* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180404140, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x180404180, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180404200, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::UnityEngine::Plane> const& __cordl_internal_get__frustumPlanes() const;

constexpr ::ArrayW<::UnityEngine::Plane>& __cordl_internal_get__frustumPlanes() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cameraObject() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cameraObject() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PlayerLooks_LookType const& __cordl_internal_get_savedLookType() const;

constexpr ::GlobalNamespace::PlayerLooks_LookType& __cordl_internal_get_savedLookType() ;

constexpr ::StringW const& __cordl_internal_get_targetMaterialProperty() const;

constexpr ::StringW& __cordl_internal_get_targetMaterialProperty() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_targetRenderer() ;

constexpr int32_t const& __cordl_internal_get_targetSubmesh() const;

constexpr int32_t& __cordl_internal_get_targetSubmesh() ;

constexpr void __cordl_internal_set__frustumPlanes(::ArrayW<::UnityEngine::Plane>  value) ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_cameraObject(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_savedLookType(::GlobalNamespace::PlayerLooks_LookType  value) ;

constexpr void __cordl_internal_set_targetMaterialProperty(::StringW  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_targetSubmesh(int32_t  value) ;

/// @brief Method .ctor, addr 0x180404280, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorCamera(MirrorCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorCamera(MirrorCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5079};

/// @brief Field cameraObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cameraObject;

/// @brief Field savedLookType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PlayerLooks_LookType  ___savedLookType;

/// @brief Field targetRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___targetRenderer;

/// @brief Field targetSubmesh, offset: 0x38, size: 0x4, def value: None
 int32_t  ___targetSubmesh;

/// @brief Field _materialInstance, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

/// @brief Field targetMaterialProperty, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___targetMaterialProperty;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _frustumPlanes, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Plane>  ____frustumPlanes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorCamera, ___cameraObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ___savedLookType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ___targetRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ___targetSubmesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ____materialInstance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ___targetMaterialProperty) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ____frustumPlanes) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorCamera) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
