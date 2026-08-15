#pragma once
// IWYU pragma private; include "MA/Flora/OccluderDerivedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OccluderDerivedData)
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
// Forward declare root types
namespace MA::Flora {
struct OccluderDerivedData;
}
// Write type traits
MARK_VAL_T(::MA::Flora::OccluderDerivedData);
DEFINE_IL2CPP_CLASS(::MA::Flora::OccluderDerivedData, "MA.Flora", "OccluderDerivedData");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Vector4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.OccluderDerivedData
struct CORDL_TYPE OccluderDerivedData {
public:
// Declarations
/// @brief Method FromParameters, addr 0x1814ce810, size 0x460, virtual false, abstract: false, final false
static inline ::MA::Flora::OccluderDerivedData FromParameters(::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>  occluderSubviewUpdate) ;

// Ctor Parameters []
// @brief default ctor
constexpr OccluderDerivedData() ;

// Ctor Parameters [CppParam { name: "viewProjMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "viewOriginWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "radialDirWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "facingDirWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr OccluderDerivedData(::UnityEngine::Matrix4x4  viewProjMatrix, ::UnityEngine::Vector4  viewOriginWorldSpace, ::UnityEngine::Vector4  radialDirWorldSpace, ::UnityEngine::Vector4  facingDirWorldSpace) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field viewProjMatrix, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  viewProjMatrix;

/// @brief Field viewOriginWorldSpace, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Vector4  viewOriginWorldSpace;

/// @brief Field radialDirWorldSpace, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Vector4  radialDirWorldSpace;

/// @brief Field facingDirWorldSpace, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Vector4  facingDirWorldSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OccluderDerivedData, viewProjMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderDerivedData, viewOriginWorldSpace) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderDerivedData, radialDirWorldSpace) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderDerivedData, facingDirWorldSpace) == 0x60, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OccluderDerivedData) == 0x70, "Size mismatch!");

} // namespace end def MA::Flora
