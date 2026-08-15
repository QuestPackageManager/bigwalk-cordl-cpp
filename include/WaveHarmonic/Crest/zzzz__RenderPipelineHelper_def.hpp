#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RenderPipelineHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderPipeline_def.hpp"
CORDL_MODULE_EXPORT(RenderPipelineHelper)
namespace WaveHarmonic::Crest {
struct RenderPipeline;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class RenderPipelineHelper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::RenderPipelineHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RenderPipelineHelper*, "WaveHarmonic.Crest", "RenderPipelineHelper");
// Dependencies System.Object, WaveHarmonic.Crest.RenderPipeline
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.RenderPipelineHelper
class CORDL_TYPE RenderPipelineHelper : public ::System::Object {
public:
// Declarations
/// @brief Field <RenderPipeline>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RenderPipeline_k__BackingField, put=setStaticF__RenderPipeline_k__BackingField)) ::WaveHarmonic::Crest::RenderPipeline  _RenderPipeline_k__BackingField;

/// @brief Field s_SkipRenderPipelineChange, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_SkipRenderPipelineChange, put=setStaticF_s_SkipRenderPipelineChange)) bool  s_SkipRenderPipelineChange;

static inline ::WaveHarmonic::Crest::RenderPipelineHelper* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::RenderPipeline getStaticF__RenderPipeline_k__BackingField() ;

static inline bool getStaticF_s_SkipRenderPipelineChange() ;

/// @brief Method get_IsHighDefinition, addr 0x18256d3c0, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsHighDefinition() ;

/// @brief Method get_IsLegacy, addr 0x18256d400, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsLegacy() ;

/// @brief Method get_IsUniversal, addr 0x18256d440, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsUniversal() ;

/// @brief Method get_RenderPipeline, addr 0x18255e470, size 0x40, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::RenderPipeline get_RenderPipeline() ;

/// @brief Method get_RenderPipelineAsset, addr 0x18256d480, size 0x60, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::RenderPipeline get_RenderPipelineAsset() ;

static inline void setStaticF__RenderPipeline_k__BackingField(::WaveHarmonic::Crest::RenderPipeline  value) ;

static inline void setStaticF_s_SkipRenderPipelineChange(bool  value) ;

/// @brief Method set_RenderPipeline, addr 0x18256d4e0, size 0x50, virtual false, abstract: false, final false
static inline void set_RenderPipeline(::WaveHarmonic::Crest::RenderPipeline  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderPipelineHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderPipelineHelper(RenderPipelineHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderPipelineHelper(RenderPipelineHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::RenderPipelineHelper) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
