#pragma once
// IWYU pragma private; include "Enviro/EnviroRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(EnviroRenderer)
namespace Enviro {
class EnviroQuality;
}
namespace Enviro {
class EnviroVolumetricCloudRenderer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Enviro {
class EnviroRenderer;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroRenderer*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroRenderer*, "Enviro", "EnviroRenderer");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroRenderer
class CORDL_TYPE EnviroRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field floatingPointOriginMod, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_floatingPointOriginMod, put=__cordl_internal_set_floatingPointOriginMod)) ::UnityEngine::Vector3  floatingPointOriginMod;

/// @brief Field myCam, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCam, put=__cordl_internal_set_myCam)) ::UnityW<::UnityEngine::Camera>  myCam;

/// @brief Field myQuality, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myQuality, put=__cordl_internal_set_myQuality)) ::UnityW<::Enviro::EnviroQuality>  myQuality;

/// @brief Field volumetricCloudsRender, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricCloudsRender, put=__cordl_internal_set_volumetricCloudsRender)) ::Enviro::EnviroVolumetricCloudRenderer*  volumetricCloudsRender;

/// @brief Method CleanupVolumetricRenderer, addr 0x180605820, size 0x1a0, virtual false, abstract: false, final false
inline void CleanupVolumetricRenderer() ;

static inline ::Enviro::EnviroRenderer* New_ctor() ;

/// @brief Method OnDisable, addr 0x1806059c0, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1806059d0, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRenderImage, addr 0x180605a10, size 0xa20, virtual false, abstract: false, final false
inline void OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method SetMatrix, addr 0x180606430, size 0x5c0, virtual false, abstract: false, final false
inline void SetMatrix() ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_floatingPointOriginMod() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_floatingPointOriginMod() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_myCam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_myCam() ;

constexpr ::UnityW<::Enviro::EnviroQuality> const& __cordl_internal_get_myQuality() const;

constexpr ::UnityW<::Enviro::EnviroQuality>& __cordl_internal_get_myQuality() ;

constexpr ::Enviro::EnviroVolumetricCloudRenderer* const& __cordl_internal_get_volumetricCloudsRender() const;

constexpr ::Enviro::EnviroVolumetricCloudRenderer*& __cordl_internal_get_volumetricCloudsRender() ;

constexpr void __cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_myCam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_myQuality(::UnityW<::Enviro::EnviroQuality>  value) ;

constexpr void __cordl_internal_set_volumetricCloudsRender(::Enviro::EnviroVolumetricCloudRenderer*  value) ;

/// @brief Method .ctor, addr 0x1806069f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroRenderer(EnviroRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroRenderer(EnviroRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18424};

/// @brief Field myQuality, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroQuality>  ___myQuality;

/// @brief Field myCam, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___myCam;

/// @brief Field volumetricCloudsRender, offset: 0x30, size: 0x8, def value: None
 ::Enviro::EnviroVolumetricCloudRenderer*  ___volumetricCloudsRender;

/// @brief Field floatingPointOriginMod, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___floatingPointOriginMod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroRenderer, ___myQuality) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroRenderer, ___myCam) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroRenderer, ___volumetricCloudsRender) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroRenderer, ___floatingPointOriginMod) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroRenderer) == 0x48, "Size mismatch!");

} // namespace end def Enviro
