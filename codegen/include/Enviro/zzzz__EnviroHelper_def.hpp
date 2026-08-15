#pragma once
// IWYU pragma private; include "Enviro/EnviroHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroHelper)
namespace Enviro {
class EnviroConfiguration;
}
namespace Enviro {
class EnviroQuality;
}
namespace GlobalNamespace {
class EnviroModule;
}
namespace UnityEngine {
struct Camera_StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Enviro {
class EnviroHelper;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroHelper*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroHelper*, "Enviro", "EnviroHelper");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroHelper
class CORDL_TYPE EnviroHelper : public ::System::Object {
public:
// Declarations
/// @brief Field assetPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_assetPath, put=setStaticF_assetPath)) ::StringW  assetPath;

/// @brief Method CanRenderOnCamera, addr 0x1805fe900, size 0x1a0, virtual false, abstract: false, final false
static inline bool CanRenderOnCamera(::UnityEngine::Camera*  cam) ;

/// @brief Method CreateBuffer, addr 0x1805feaa0, size 0xa0, virtual false, abstract: false, final false
static inline void CreateBuffer(::by_ref<::UnityEngine::ComputeBuffer*>  buffer, int32_t  count, int32_t  stride) ;

/// @brief Method DestroyExtended, addr 0x1805feb40, size 0x30, virtual false, abstract: false, final false
static inline void DestroyExtended(::UnityEngine::Object*  obj) ;

/// @brief Method GetConfig, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::Enviro::EnviroConfiguration> GetConfig(::StringW  name) ;

/// @brief Method GetDefaultPreset, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::EnviroModule> GetDefaultPreset(::StringW  name) ;

/// @brief Method GetDirectionalLight, addr 0x1805feb70, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Light> GetDirectionalLight() ;

/// @brief Method GetProjectionExtents, addr 0x1805ff1a0, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetProjectionExtents(::UnityEngine::Camera*  camera) ;

/// @brief Method GetProjectionExtents, addr 0x1805fee90, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetProjectionExtents(::UnityEngine::Camera*  camera, ::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method GetProjectionExtents, addr 0x1805feec0, size 0x2e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetProjectionExtents(::UnityEngine::Camera*  camera, ::UnityEngine::Camera_StereoscopicEye  eye, float_t  texelOffsetX, float_t  texelOffsetY) ;

/// @brief Method GetProjectionExtents, addr 0x1805fed50, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetProjectionExtents(::UnityEngine::Camera*  camera, float_t  texelOffsetX, float_t  texelOffsetY) ;

/// @brief Method GetQualityForCamera, addr 0x1805ff2c0, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityW<::Enviro::EnviroQuality> GetQualityForCamera(::UnityEngine::Camera*  cam) ;

/// @brief Method PingPong, addr 0x1805ff520, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 PingPong(::UnityEngine::Vector2  value) ;

/// @brief Method PingPong, addr 0x1805ff4a0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 PingPong(::UnityEngine::Vector3  value) ;

/// @brief Method ReleaseComputeBuffer, addr 0x1805ff5a0, size 0x30, virtual false, abstract: false, final false
static inline void ReleaseComputeBuffer(::by_ref<::UnityEngine::ComputeBuffer*>  buffer) ;

/// @brief Method Remap, addr 0x1805ff5d0, size 0x20, virtual false, abstract: false, final false
static inline float_t Remap(float_t  value, float_t  from1, float_t  to1, float_t  from2, float_t  to2) ;

/// @brief Method ResetMatrix, addr 0x1805ff5f0, size 0x140, virtual false, abstract: false, final false
static inline bool ResetMatrix(::UnityEngine::Camera*  cam) ;

static inline ::StringW getStaticF_assetPath() ;

static inline void setStaticF_assetPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroHelper(EnviroHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroHelper(EnviroHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18408};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroHelper) == 0x10, "Size mismatch!");

} // namespace end def Enviro
