#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RenderPipelineCompatibilityHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPipelineCompatibilityHelper)
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class RenderPipelineCompatibilityHelper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*, "WaveHarmonic.Crest", "RenderPipelineCompatibilityHelper");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.RenderPipelineCompatibilityHelper
class CORDL_TYPE RenderPipelineCompatibilityHelper : public ::System::Object {
public:
// Declarations
/// @brief Method RTHandleNeedsReAlloc, addr 0x18256caa0, size 0x590, virtual false, abstract: false, final false
static inline bool RTHandleNeedsReAlloc(::UnityEngine::Rendering::RTHandle*  handle, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  isShadowMap, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name, bool  scaled) ;

/// @brief Method ReAllocateIfNeeded, addr 0x18256d260, size 0xf0, virtual false, abstract: false, final false
static inline bool ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*>  handle, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  isShadowMap, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name) ;

/// @brief Method ReAllocateIfNeeded, addr 0x18256d030, size 0x230, virtual false, abstract: false, final false
static inline bool ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*>  handle, ::UnityEngine::Vector2  scaleFactor, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  isShadowMap, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderPipelineCompatibilityHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineCompatibilityHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderPipelineCompatibilityHelper(RenderPipelineCompatibilityHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipelineCompatibilityHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderPipelineCompatibilityHelper(RenderPipelineCompatibilityHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
