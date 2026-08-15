#pragma once
// IWYU pragma private; include "Enviro/EnviroURPRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroURPRenderPass)
namespace Enviro {
class EnviroVolumetricCloudRenderer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
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
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace Enviro {
class EnviroURPRenderPass;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroURPRenderPass*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroURPRenderPass*, "Enviro", "EnviroURPRenderPass");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroURPRenderPass
class CORDL_TYPE EnviroURPRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
/// @brief Field <scriptableRenderer>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__scriptableRenderer_k__BackingField, put=__cordl_internal_set__scriptableRenderer_k__BackingField)) ::UnityEngine::Rendering::Universal::ScriptableRenderer*  _scriptableRenderer_k__BackingField;

/// @brief Field blitThroughMat, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitThroughMat, put=__cordl_internal_set_blitThroughMat)) ::UnityW<::UnityEngine::Material>  blitThroughMat;

/// @brief Field floatingPointOriginMod, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_floatingPointOriginMod, put=__cordl_internal_set_floatingPointOriginMod)) ::UnityEngine::Vector3  floatingPointOriginMod;

/// @brief Field pName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_pName, put=__cordl_internal_set_pName)) ::StringW  pName;

 __declspec(property(get=get_scriptableRenderer, put=set_scriptableRenderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer*  scriptableRenderer;

/// @brief Field volumetricCloudsRender, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricCloudsRender, put=__cordl_internal_set_volumetricCloudsRender)) ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  volumetricCloudsRender;

/// @brief Method Configure, addr 0x180608e00, size 0x30, virtual true, abstract: false, final false
inline void Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor) ;

/// @brief Method CreateCloudsRenderer, addr 0x180608e30, size 0xc0, virtual false, abstract: false, final false
inline ::Enviro::EnviroVolumetricCloudRenderer* CreateCloudsRenderer(::UnityEngine::Camera*  cam) ;

/// @brief Method CustomBlit, addr 0x180609180, size 0x170, virtual false, abstract: false, final false
inline void CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target) ;

/// @brief Method CustomBlit, addr 0x180608f20, size 0x110, virtual false, abstract: false, final false
inline void CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target, ::UnityEngine::Material*  mat) ;

/// @brief Method CustomBlit, addr 0x180609030, size 0x120, virtual false, abstract: false, final false
inline void CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method CustomBlit, addr 0x180608ef0, size 0x30, virtual false, abstract: false, final false
inline void CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  target) ;

/// @brief Method CustomBlit, addr 0x180609150, size 0x30, virtual false, abstract: false, final false
inline void CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  target, ::UnityEngine::Material*  mat) ;

/// @brief Method CustomBlit, addr 0x1806092f0, size 0x30, virtual false, abstract: false, final false
inline void CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  target, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method Execute, addr 0x180609320, size 0x1030, virtual true, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method GetCloudsRenderer, addr 0x18060a350, size 0xc0, virtual false, abstract: false, final false
inline ::Enviro::EnviroVolumetricCloudRenderer* GetCloudsRenderer(::UnityEngine::Camera*  cam) ;

static inline ::Enviro::EnviroURPRenderPass* New_ctor(::StringW  name) ;

/// @brief Method OnCameraSetup, addr 0x18060a410, size 0x60, virtual true, abstract: false, final false
inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method SetMatrix, addr 0x1806087d0, size 0x5b0, virtual false, abstract: false, final false
inline void SetMatrix(::UnityEngine::Camera*  myCam) ;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& __cordl_internal_get__scriptableRenderer_k__BackingField() const;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& __cordl_internal_get__scriptableRenderer_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blitThroughMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blitThroughMat() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_floatingPointOriginMod() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_floatingPointOriginMod() ;

constexpr ::StringW const& __cordl_internal_get_pName() const;

constexpr ::StringW& __cordl_internal_get_pName() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>* const& __cordl_internal_get_volumetricCloudsRender() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*& __cordl_internal_get_volumetricCloudsRender() ;

constexpr void __cordl_internal_set__scriptableRenderer_k__BackingField(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value) ;

constexpr void __cordl_internal_set_blitThroughMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pName(::StringW  value) ;

constexpr void __cordl_internal_set_volumetricCloudsRender(::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  value) ;

/// @brief Method .ctor, addr 0x18060a470, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_scriptableRenderer, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* get_scriptableRenderer() ;

/// @brief Method set_scriptableRenderer, addr 0x1803d49a0, size 0x10, virtual false, abstract: false, final false
inline void set_scriptableRenderer(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroURPRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroURPRenderPass(EnviroURPRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroURPRenderPass(EnviroURPRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18429};

/// @brief Field <scriptableRenderer>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::ScriptableRenderer*  ____scriptableRenderer_k__BackingField;

/// @brief Field blitThroughMat, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blitThroughMat;

/// @brief Field pName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___pName;

/// @brief Field volumetricCloudsRender, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  ___volumetricCloudsRender;

/// @brief Field floatingPointOriginMod, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___floatingPointOriginMod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroURPRenderPass, ____scriptableRenderer_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderPass, ___blitThroughMat) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderPass, ___pName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderPass, ___volumetricCloudsRender) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderPass, ___floatingPointOriginMod) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroURPRenderPass) == 0x90, "Size mismatch!");

} // namespace end def Enviro
