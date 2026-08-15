#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GraphicsSettings)
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct BuiltinShaderDefine;
}
namespace UnityEngine::Rendering {
struct BuiltinShaderMode;
}
namespace UnityEngine::Rendering {
struct BuiltinShaderType;
}
namespace UnityEngine::Rendering {
struct DefaultMaterialType;
}
namespace UnityEngine::Rendering {
struct DefaultShaderType;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GraphicsSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
// Dependencies UnityEngine.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GraphicsSettings
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field s_CurrentRenderPipelineGlobalSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CurrentRenderPipelineGlobalSettings, put=setStaticF_s_CurrentRenderPipelineGlobalSettings)) ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>*  s_CurrentRenderPipelineGlobalSettings;

/// @brief Method GetDefaultMaterial, addr 0x1822a0160, size 0x240, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial(::UnityEngine::Rendering::DefaultMaterialType  type) ;

/// @brief Method GetDefaultShader, addr 0x1822a03a0, size 0x260, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> GetDefaultShader(::UnityEngine::Rendering::DefaultShaderType  type) ;

/// @brief Method GetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetRenderPipelineSettings() ;

/// @brief Method GetSettingsForRenderPipeline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> GetSettingsForRenderPipeline() ;

/// @brief Method GetShaderMode, addr 0x1822a0600, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BuiltinShaderMode GetShaderMode(::UnityEngine::Rendering::BuiltinShaderType  type) ;

/// @brief Method HasShaderDefine, addr 0x1822a0620, size 0x30, virtual false, abstract: false, final false
static inline bool HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine  defineHash) ;

/// @brief Method HasShaderDefine, addr 0x1822a0610, size 0x10, virtual false, abstract: false, final false
static inline bool HasShaderDefine(::UnityEngine::Rendering::GraphicsTier  tier, ::UnityEngine::Rendering::BuiltinShaderDefine  defineHash) ;

/// @brief Method Internal_GetCurrentRenderPipelineGlobalSettings, addr 0x1822a0650, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> Internal_GetCurrentRenderPipelineGlobalSettings() ;

/// @brief Method Internal_GetSettingsForRenderPipeline, addr 0x1822a07a0, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_GetSettingsForRenderPipeline(::StringW  renderpipelineName) ;

/// @brief Method Internal_GetSettingsForRenderPipeline_Injected, addr 0x1822a0790, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_GetSettingsForRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  renderpipelineName) ;

/// @brief Method TryGetCurrentRenderPipelineGlobalSettings, addr 0x1822a08e0, size 0x60, virtual false, abstract: false, final false
static inline bool TryGetCurrentRenderPipelineGlobalSettings(::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>  asset) ;

/// @brief Method TryGetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryGetRenderPipelineSettings(::by_ref<T>  settings) ;

static inline ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* getStaticF_s_CurrentRenderPipelineGlobalSettings() ;

/// @brief Method get_INTERNAL_currentRenderPipeline, addr 0x1822a09d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_currentRenderPipeline() ;

/// @brief Method get_INTERNAL_currentRenderPipeline_Injected, addr 0x1822a09c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_INTERNAL_currentRenderPipeline_Injected() ;

/// @brief Method get_INTERNAL_defaultRenderPipeline, addr 0x1822a0a00, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_defaultRenderPipeline() ;

/// @brief Method get_INTERNAL_defaultRenderPipeline_Injected, addr 0x1822a09f0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_INTERNAL_defaultRenderPipeline_Injected() ;

/// @brief Method get_currentRenderPipeline, addr 0x1822a0a80, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_currentRenderPipeline() ;

/// @brief Method get_currentRenderPipelineAssetType, addr 0x1822a0a20, size 0x60, virtual false, abstract: false, final false
static inline ::System::Type* get_currentRenderPipelineAssetType() ;

/// @brief Method get_defaultRenderPipeline, addr 0x1822a0af0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_defaultRenderPipeline() ;

/// @brief Method get_isScriptableRenderPipelineEnabled, addr 0x1822a0b60, size 0x30, virtual false, abstract: false, final false
static inline bool get_isScriptableRenderPipelineEnabled() ;

/// @brief Method get_lightsUseLinearIntensity, addr 0x1822a0b90, size 0x10, virtual false, abstract: false, final false
static inline bool get_lightsUseLinearIntensity() ;

static inline void setStaticF_s_CurrentRenderPipelineGlobalSettings(::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>*  value) ;

/// @brief Method set_lightsUseColorTemperature, addr 0x1822a0ba0, size 0x10, virtual false, abstract: false, final false
static inline void set_lightsUseColorTemperature(bool  value) ;

/// @brief Method set_lightsUseLinearIntensity, addr 0x1822a0bb0, size 0x10, virtual false, abstract: false, final false
static inline void set_lightsUseLinearIntensity(bool  value) ;

/// @brief Method set_useScriptableRenderPipelineBatching, addr 0x1822a0bc0, size 0x10, virtual false, abstract: false, final false
static inline void set_useScriptableRenderPipelineBatching(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsSettings(GraphicsSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsSettings(GraphicsSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GraphicsSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
