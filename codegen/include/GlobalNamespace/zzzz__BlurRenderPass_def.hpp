#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BlurRenderPass)
namespace GlobalNamespace {
class BlurSettings;
}
namespace GlobalNamespace {
class BlurVolumeComponent;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BlurRenderPass;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BlurRenderPass*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlurRenderPass*, "", "BlurRenderPass");
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureDesc, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlurRenderPass
class CORDL_TYPE BlurRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
/// @brief Field blurTextureDescriptor, offset 0x70, size 0x80 
 __declspec(property(get=__cordl_internal_get_blurTextureDescriptor, put=__cordl_internal_set_blurTextureDescriptor)) ::UnityEngine::Rendering::RenderGraphModule::TextureDesc  blurTextureDescriptor;

/// @brief Field defaultSettings, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSettings, put=__cordl_internal_set_defaultSettings)) ::GlobalNamespace::BlurSettings*  defaultSettings;

/// @brief Field horizontalBlurId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_horizontalBlurId, put=setStaticF_horizontalBlurId)) int32_t  horizontalBlurId;

/// @brief Field material, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field verticalBlurId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_verticalBlurId, put=setStaticF_verticalBlurId)) int32_t  verticalBlurId;

/// @brief Method GetHorizontalBlur, addr 0x1803239a0, size 0x80, virtual false, abstract: false, final false
inline float_t GetHorizontalBlur(::GlobalNamespace::BlurVolumeComponent*  volumeComponent) ;

/// @brief Method GetVerticalBlur, addr 0x180323a20, size 0x80, virtual false, abstract: false, final false
inline float_t GetVerticalBlur(::GlobalNamespace::BlurVolumeComponent*  volumeComponent) ;

/// @brief Method GetVolumeComponent, addr 0x180323aa0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BlurVolumeComponent> GetVolumeComponent() ;

static inline ::GlobalNamespace::BlurRenderPass* New_ctor(::UnityEngine::Material*  material, ::GlobalNamespace::BlurSettings*  defaultSettings) ;

/// @brief Method RecordRenderGraph, addr 0x180323ad0, size 0x3c0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method ShouldBeActive, addr 0x180323e90, size 0x140, virtual false, abstract: false, final false
inline bool ShouldBeActive() ;

/// @brief Method UpdateBlurSettings, addr 0x180323fd0, size 0x180, virtual false, abstract: false, final false
inline void UpdateBlurSettings() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc const& __cordl_internal_get_blurTextureDescriptor() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc& __cordl_internal_get_blurTextureDescriptor() ;

constexpr ::GlobalNamespace::BlurSettings* const& __cordl_internal_get_defaultSettings() const;

constexpr ::GlobalNamespace::BlurSettings*& __cordl_internal_get_defaultSettings() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr void __cordl_internal_set_blurTextureDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc  value) ;

constexpr void __cordl_internal_set_defaultSettings(::GlobalNamespace::BlurSettings*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x1803241a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  material, ::GlobalNamespace::BlurSettings*  defaultSettings) ;

static inline int32_t getStaticF_horizontalBlurId() ;

static inline int32_t getStaticF_verticalBlurId() ;

static inline void setStaticF_horizontalBlurId(int32_t  value) ;

static inline void setStaticF_verticalBlurId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlurRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlurRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlurRenderPass(BlurRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlurRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlurRenderPass(BlurRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4767};

/// @brief Field k_BlurTextureName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_BlurTextureName{u"_BlurTexture"};

/// @brief Field k_HorizontalPassName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HorizontalPassName{u"HorizontalBlurRenderPass"};

/// @brief Field k_VerticalPassName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_VerticalPassName{u"VerticalBlurRenderPass"};

/// @brief Field defaultSettings, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::BlurSettings*  ___defaultSettings;

/// @brief Field material, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field blurTextureDescriptor, offset: 0x70, size: 0x80, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureDesc  ___blurTextureDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlurRenderPass, ___defaultSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurRenderPass, ___material) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurRenderPass, ___blurTextureDescriptor) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlurRenderPass) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
