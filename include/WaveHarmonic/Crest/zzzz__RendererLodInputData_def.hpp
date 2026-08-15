#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RendererLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__LodInputData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RendererLodInputData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace WaveHarmonic::Crest {
class LodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class RendererLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::RendererLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RendererLodInputData*, "WaveHarmonic.Crest", "RendererLodInputData");
// Dependencies WaveHarmonic.Crest.LodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.RendererLodInputData
class CORDL_TYPE RendererLodInputData : public ::WaveHarmonic::Crest::LodInputData {
public:
// Declarations
 __declspec(property(get=get_CheckShaderName, put=set_CheckShaderName)) bool  CheckShaderName;

 __declspec(property(get=get_CheckShaderPasses, put=set_CheckShaderPasses)) bool  CheckShaderPasses;

 __declspec(property(get=get_DisableRenderer, put=set_DisableRenderer)) bool  DisableRenderer;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_OverrideShaderPass, put=set_OverrideShaderPass)) bool  OverrideShaderPass;

 __declspec(property(get=get_Renderer, put=set_Renderer)) ::UnityW<::UnityEngine::Renderer>  Renderer;

 __declspec(property(get=get_ShaderPassIndex, put=set_ShaderPassIndex)) int32_t  ShaderPassIndex;

 __declspec(property(get=get_ShaderPrefix)) ::StringW  ShaderPrefix;

/// @brief Field _CheckShaderName, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__CheckShaderName, put=__cordl_internal_set__CheckShaderName)) bool  _CheckShaderName;

/// @brief Field _CheckShaderPasses, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__CheckShaderPasses, put=__cordl_internal_set__CheckShaderPasses)) bool  _CheckShaderPasses;

/// @brief Field _DisableRenderer, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableRenderer, put=__cordl_internal_set__DisableRenderer)) bool  _DisableRenderer;

/// @brief Field _MaterialPropertyBlock, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__MaterialPropertyBlock, put=__cordl_internal_set__MaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _MaterialPropertyBlock;

/// @brief Field _Materials, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Materials, put=__cordl_internal_set__Materials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  _Materials;

/// @brief Field _OverrideShaderPass, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideShaderPass, put=__cordl_internal_set__OverrideShaderPass)) bool  _OverrideShaderPass;

/// @brief Field _Renderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::UnityW<::UnityEngine::Renderer>  _Renderer;

/// @brief Field _ShaderPassIndex, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShaderPassIndex, put=__cordl_internal_set__ShaderPassIndex)) int32_t  _ShaderPassIndex;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*  s_Inputs;

/// @brief Method AnyOtherInputsControllingRenderer, addr 0x18255b050, size 0x280, virtual false, abstract: false, final false
inline bool AnyOtherInputsControllingRenderer(::UnityEngine::Renderer*  renderer) ;

/// @brief Method Draw, addr 0x18255b2d0, size 0x220, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Component*  component, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::RendererLodInputData* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18255b4f0, size 0x90, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18255b580, size 0xa0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdate, addr 0x18255b620, size 0x130, virtual true, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method RecalculateBounds, addr 0x18255b750, size 0x40, virtual true, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateRect, addr 0x18255b790, size 0x120, virtual true, abstract: false, final false
inline void RecalculateRect() ;

/// @brief Method SetDisableRenderer, addr 0x18255b8b0, size 0x80, virtual false, abstract: false, final false
inline void SetDisableRenderer(bool  previous, bool  current) ;

/// @brief Method SetRenderer, addr 0x18255b930, size 0xd0, virtual false, abstract: false, final false
inline void SetRenderer(::UnityEngine::Renderer*  previous, ::UnityEngine::Renderer*  current) ;

constexpr bool const& __cordl_internal_get__CheckShaderName() const;

constexpr bool& __cordl_internal_get__CheckShaderName() ;

constexpr bool const& __cordl_internal_get__CheckShaderPasses() const;

constexpr bool& __cordl_internal_get__CheckShaderPasses() ;

constexpr bool const& __cordl_internal_get__DisableRenderer() const;

constexpr bool& __cordl_internal_get__DisableRenderer() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__MaterialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__MaterialPropertyBlock() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get__Materials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get__Materials() ;

constexpr bool const& __cordl_internal_get__OverrideShaderPass() const;

constexpr bool& __cordl_internal_get__OverrideShaderPass() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__Renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__Renderer() ;

constexpr int32_t const& __cordl_internal_get__ShaderPassIndex() const;

constexpr int32_t& __cordl_internal_get__ShaderPassIndex() ;

constexpr void __cordl_internal_set__CheckShaderName(bool  value) ;

constexpr void __cordl_internal_set__CheckShaderPasses(bool  value) ;

constexpr void __cordl_internal_set__DisableRenderer(bool  value) ;

constexpr void __cordl_internal_set__MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__Materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set__OverrideShaderPass(bool  value) ;

constexpr void __cordl_internal_set__Renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__ShaderPassIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x182550150, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>* getStaticF_s_Inputs() ;

/// @brief Method get_CheckShaderName, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_CheckShaderName() ;

/// @brief Method get_CheckShaderPasses, addr 0x1815f5410, size 0x10, virtual false, abstract: false, final false
inline bool get_CheckShaderPasses() ;

/// @brief Method get_DisableRenderer, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableRenderer() ;

/// @brief Method get_IsEnabled, addr 0x18255ba60, size 0x30, virtual true, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_OverrideShaderPass, addr 0x18165d5a0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideShaderPass() ;

/// @brief Method get_Renderer, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Renderer() ;

/// @brief Method get_ShaderPassIndex, addr 0x180503b40, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ShaderPassIndex() ;

/// @brief Method get_ShaderPrefix, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_ShaderPrefix() ;

static inline void setStaticF_s_Inputs(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*  value) ;

/// @brief Method set_CheckShaderName, addr 0x1803ac420, size 0x10, virtual false, abstract: false, final false
inline void set_CheckShaderName(bool  value) ;

/// @brief Method set_CheckShaderPasses, addr 0x1816ddb50, size 0x10, virtual false, abstract: false, final false
inline void set_CheckShaderPasses(bool  value) ;

/// @brief Method set_DisableRenderer, addr 0x18255ba90, size 0x90, virtual false, abstract: false, final false
inline void set_DisableRenderer(bool  value) ;

/// @brief Method set_OverrideShaderPass, addr 0x1817eed40, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideShaderPass(bool  value) ;

/// @brief Method set_Renderer, addr 0x18255bb20, size 0xe0, virtual false, abstract: false, final false
inline void set_Renderer(::UnityEngine::Renderer*  value) ;

/// @brief Method set_ShaderPassIndex, addr 0x180503ba0, size 0x10, virtual false, abstract: false, final false
inline void set_ShaderPassIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendererLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendererLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RendererLodInputData(RendererLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendererLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendererLodInputData(RendererLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16562};

/// @brief Field _Renderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____Renderer;

/// @brief Field _DisableRenderer, offset: 0x58, size: 0x1, def value: None
 bool  ____DisableRenderer;

/// @brief Field _OverrideShaderPass, offset: 0x59, size: 0x1, def value: None
 bool  ____OverrideShaderPass;

/// @brief Field _ShaderPassIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____ShaderPassIndex;

/// @brief Field _CheckShaderName, offset: 0x60, size: 0x1, def value: None
 bool  ____CheckShaderName;

/// @brief Field _CheckShaderPasses, offset: 0x61, size: 0x1, def value: None
 bool  ____CheckShaderPasses;

/// @brief Field _Materials, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ____Materials;

/// @brief Field _MaterialPropertyBlock, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____MaterialPropertyBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____Renderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____DisableRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____OverrideShaderPass) == 0x59, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____ShaderPassIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____CheckShaderName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____CheckShaderPasses) == 0x61, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____Materials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RendererLodInputData, ____MaterialPropertyBlock) == 0x70, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::RendererLodInputData) == 0x78, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
