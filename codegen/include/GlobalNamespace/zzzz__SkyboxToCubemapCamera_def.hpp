#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyboxToCubemapCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkyboxToCubemapCamera)
namespace GlobalNamespace {
class SkyboxToCubemapCamera_FaceElement;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class ReflectionProbe;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SkyboxToCubemapCamera;
}
namespace GlobalNamespace {
class SkyboxToCubemapCamera_FaceElement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkyboxToCubemapCamera*);
MARK_REF_T(::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyboxToCubemapCamera*, "", "SkyboxToCubemapCamera");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*, "", "SkyboxToCubemapCamera/FaceElement");
// Dependencies System.Object, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyboxToCubemapCamera/FaceElement
class CORDL_TYPE SkyboxToCubemapCamera_FaceElement : public ::System::Object {
public:
// Declarations
/// @brief Field Rotation, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Rotation, put=__cordl_internal_set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Method GetViewMatrix, addr 0x180325730, size 0x150, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetViewMatrix() ;

static inline ::GlobalNamespace::SkyboxToCubemapCamera_FaceElement* New_ctor(::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  up) ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_Rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_Rotation() ;

constexpr void __cordl_internal_set_Rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x180325880, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  up) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyboxToCubemapCamera_FaceElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyboxToCubemapCamera_FaceElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyboxToCubemapCamera_FaceElement(SkyboxToCubemapCamera_FaceElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyboxToCubemapCamera_FaceElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyboxToCubemapCamera_FaceElement(SkyboxToCubemapCamera_FaceElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4772};

/// @brief Field Rotation, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___Rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapCamera_FaceElement, ___Rotation) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyboxToCubemapCamera_FaceElement) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies SkyboxToCubemapCamera::FaceElement, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyboxToCubemapCamera
class CORDL_TYPE SkyboxToCubemapCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FaceElement = ::GlobalNamespace::SkyboxToCubemapCamera_FaceElement;

 __declspec(property(get=get_Camera, put=set_Camera)) ::UnityW<::UnityEngine::Camera>  Camera;

/// @brief Field <Camera>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Camera_k__BackingField, put=__cordl_internal_set__Camera_k__BackingField)) ::UnityW<::UnityEngine::Camera>  _Camera_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::SkyboxToCubemapCamera>  _Instance_k__BackingField;

/// @brief Field cubemapTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cubemapTexture, put=__cordl_internal_set_cubemapTexture)) ::UnityW<::UnityEngine::RenderTexture>  cubemapTexture;

/// @brief Field faceIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_faceIndex, put=__cordl_internal_set_faceIndex)) int32_t  faceIndex;

/// @brief Field faceTexture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceTexture, put=__cordl_internal_set_faceTexture)) ::UnityW<::UnityEngine::RenderTexture>  faceTexture;

/// @brief Field faces, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_faces, put=__cordl_internal_set_faces)) ::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>  faces;

/// @brief Field reflectionProbe, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reflectionProbe, put=__cordl_internal_set_reflectionProbe)) ::UnityW<::UnityEngine::ReflectionProbe>  reflectionProbe;

static inline ::GlobalNamespace::SkyboxToCubemapCamera* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180328fc0, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x180329020, size 0x380, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803293a0, size 0x130, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__Camera_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__Camera_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_cubemapTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_cubemapTexture() ;

constexpr int32_t const& __cordl_internal_get_faceIndex() const;

constexpr int32_t& __cordl_internal_get_faceIndex() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_faceTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_faceTexture() ;

constexpr ::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*> const& __cordl_internal_get_faces() const;

constexpr ::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>& __cordl_internal_get_faces() ;

constexpr ::UnityW<::UnityEngine::ReflectionProbe> const& __cordl_internal_get_reflectionProbe() const;

constexpr ::UnityW<::UnityEngine::ReflectionProbe>& __cordl_internal_get_reflectionProbe() ;

constexpr void __cordl_internal_set__Camera_k__BackingField(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_cubemapTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_faceIndex(int32_t  value) ;

constexpr void __cordl_internal_set_faceTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_faces(::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>  value) ;

constexpr void __cordl_internal_set_reflectionProbe(::UnityW<::UnityEngine::ReflectionProbe>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::SkyboxToCubemapCamera> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Camera, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_Camera() ;

/// @brief Method get_Instance, addr 0x1803294d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SkyboxToCubemapCamera> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::SkyboxToCubemapCamera>  value) ;

/// @brief Method set_Camera, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_Camera(::UnityEngine::Camera*  value) ;

/// @brief Method set_Instance, addr 0x1803294f0, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::SkyboxToCubemapCamera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyboxToCubemapCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyboxToCubemapCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyboxToCubemapCamera(SkyboxToCubemapCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyboxToCubemapCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyboxToCubemapCamera(SkyboxToCubemapCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4773};

/// @brief Field faceTexture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___faceTexture;

/// @brief Field cubemapTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___cubemapTexture;

/// @brief Field reflectionProbe, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ReflectionProbe>  ___reflectionProbe;

/// @brief Field faceIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___faceIndex;

/// @brief Field faces, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>  ___faces;

/// @brief Field <Camera>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____Camera_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapCamera, ___faceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapCamera, ___cubemapTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapCamera, ___reflectionProbe) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapCamera, ___faceIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapCamera, ___faces) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapCamera, ____Camera_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyboxToCubemapCamera) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
