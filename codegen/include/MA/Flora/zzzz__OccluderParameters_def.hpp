#pragma once
// IWYU pragma private; include "MA/Flora/OccluderParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OccluderParameters)
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace MA::Flora {
struct OccluderParameters;
}
// Write type traits
MARK_VAL_T(::MA::Flora::OccluderParameters);
DEFINE_IL2CPP_CLASS(::MA::Flora::OccluderParameters, "MA.Flora", "OccluderParameters");
// Dependencies UnityEngine.EntityId, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2Int
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.OccluderParameters
struct CORDL_TYPE OccluderParameters {
public:
// Declarations
/// @brief Method GetActiveDepthRT, addr 0x1814cf100, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* GetActiveDepthRT() ;

/// @brief Method .ctor, addr 0x1814cf140, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  viewId) ;

// Ctor Parameters []
// @brief default ctor
constexpr OccluderParameters() ;

// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "SubviewCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DepthTextureRT", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "DepthTextureHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "DepthSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "DepthIsArray", ty: "bool", modifiers: "", def_value: None }]
constexpr OccluderParameters(::UnityEngine::EntityId  ViewId, int32_t  SubviewCount, ::UnityEngine::Rendering::RTHandle*  DepthTextureRT, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  DepthTextureHandle, ::UnityEngine::Vector2Int  DepthSize, bool  DepthIsArray) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13225};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field ViewId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  ViewId;

/// @brief Field SubviewCount, offset: 0x4, size: 0x4, def value: None
 int32_t  SubviewCount;

/// @brief Field DepthTextureRT, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  DepthTextureRT;

/// @brief Field DepthTextureHandle, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  DepthTextureHandle;

/// @brief Field DepthSize, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  DepthSize;

/// @brief Field DepthIsArray, offset: 0x28, size: 0x1, def value: None
 bool  DepthIsArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OccluderParameters, ViewId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderParameters, SubviewCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderParameters, DepthTextureRT) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderParameters, DepthTextureHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderParameters, DepthSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderParameters, DepthIsArray) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OccluderParameters) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
