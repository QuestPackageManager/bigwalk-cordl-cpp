#pragma once
// IWYU pragma private; include "MA/Flora/CullingViewShaderVariables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingViewShaderVariables)
namespace MA::Flora {
struct CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct CullingViewShaderVariables;
}
namespace MA::Flora {
struct CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CullingViewShaderVariables);
MARK_VAL_T(::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingViewShaderVariables, "MA.Flora", "CullingViewShaderVariables");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer, "MA.Flora", "CullingViewShaderVariables/<_ViewFrustumPlanes>e__FixedBuffer");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingViewShaderVariables/<_ViewFrustumPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1e0};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x1e0 - 0x4 = 0x1dc, packed as 0x1dc
 uint8_t  _cordl_size_padding[0x1dc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer) == 0x1e0, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingViewShaderVariables::<_ViewFrustumPlanes>e__FixedBuffer, UnityEngine.Vector4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingViewShaderVariables
struct CORDL_TYPE CullingViewShaderVariables {
public:
// Declarations
using __ViewFrustumPlanes_e__FixedBuffer = ::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr CullingViewShaderVariables() ;

// Ctor Parameters [CppParam { name: "_ViewFrustumPlanes", ty: "::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_ViewCameraPosition_ScreenMetric", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewAnimLodPositionPrev", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewAnimLodPositionCurr", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewCullingParams0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewCullingParams1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewVolumeParams0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewVolumeParams1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewVolumeParams2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ViewVolumeParams3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr CullingViewShaderVariables(::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer  _ViewFrustumPlanes, ::UnityEngine::Vector4  _ViewCameraPosition_ScreenMetric, ::UnityEngine::Vector4  _ViewAnimLodPositionPrev, ::UnityEngine::Vector4  _ViewAnimLodPositionCurr, ::UnityEngine::Vector4  _ViewCullingParams0, ::UnityEngine::Vector4  _ViewCullingParams1, ::UnityEngine::Vector4  _ViewVolumeParams0, ::UnityEngine::Vector4  _ViewVolumeParams1, ::UnityEngine::Vector4  _ViewVolumeParams2, ::UnityEngine::Vector4  _ViewVolumeParams3) noexcept;

/// @brief Field MaxPlanesPerSplit offset 0xffffffff size 0x4
static constexpr int32_t  MaxPlanesPerSplit{static_cast<int32_t>(0x5)};

/// @brief Field MaxPlanesPerView offset 0xffffffff size 0x4
static constexpr int32_t  MaxPlanesPerView{static_cast<int32_t>(0x1e)};

/// @brief Field MaxSplitsPerView offset 0xffffffff size 0x4
static constexpr int32_t  MaxSplitsPerView{static_cast<int32_t>(0x6)};

/// @brief Field ViewtypeCamera offset 0xffffffff size 0x4
static constexpr int32_t  ViewtypeCamera{static_cast<int32_t>(0x1)};

/// @brief Field ViewtypeFiltering offset 0xffffffff size 0x4
static constexpr int32_t  ViewtypeFiltering{static_cast<int32_t>(0x5)};

/// @brief Field ViewtypeLight offset 0xffffffff size 0x4
static constexpr int32_t  ViewtypeLight{static_cast<int32_t>(0x2)};

/// @brief Field ViewtypePicking offset 0xffffffff size 0x4
static constexpr int32_t  ViewtypePicking{static_cast<int32_t>(0x3)};

/// @brief Field ViewtypeSelectionOutline offset 0xffffffff size 0x4
static constexpr int32_t  ViewtypeSelectionOutline{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x270};

/// @brief Field _ViewFrustumPlanes, offset: 0x0, size: 0x1e0, def value: None
 ::MA::Flora::CullingViewShaderVariables___ViewFrustumPlanes_e__FixedBuffer  _ViewFrustumPlanes;

/// @brief Field _ViewCameraPosition_ScreenMetric, offset: 0x1e0, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewCameraPosition_ScreenMetric;

/// @brief Field _ViewAnimLodPositionPrev, offset: 0x1f0, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewAnimLodPositionPrev;

/// @brief Field _ViewAnimLodPositionCurr, offset: 0x200, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewAnimLodPositionCurr;

/// @brief Field _ViewCullingParams0, offset: 0x210, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewCullingParams0;

/// @brief Field _ViewCullingParams1, offset: 0x220, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewCullingParams1;

/// @brief Field _ViewVolumeParams0, offset: 0x230, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewVolumeParams0;

/// @brief Field _ViewVolumeParams1, offset: 0x240, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewVolumeParams1;

/// @brief Field _ViewVolumeParams2, offset: 0x250, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewVolumeParams2;

/// @brief Field _ViewVolumeParams3, offset: 0x260, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ViewVolumeParams3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewFrustumPlanes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewCameraPosition_ScreenMetric) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewAnimLodPositionPrev) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewAnimLodPositionCurr) == 0x200, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewCullingParams0) == 0x210, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewCullingParams1) == 0x220, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewVolumeParams0) == 0x230, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewVolumeParams1) == 0x240, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewVolumeParams2) == 0x250, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingViewShaderVariables, _ViewVolumeParams3) == 0x260, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingViewShaderVariables) == 0x270, "Size mismatch!");

} // namespace end def MA::Flora
