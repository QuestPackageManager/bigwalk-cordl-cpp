#pragma once
// IWYU pragma private; include "MA/Flora/AnimatedCrossFadeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedCrossFadeData)
namespace UnityEngine::Rendering {
struct LODParameters;
}
// Forward declare root types
namespace MA::Flora {
struct AnimatedCrossFadeData;
}
// Write type traits
MARK_VAL_T(::MA::Flora::AnimatedCrossFadeData);
DEFINE_IL2CPP_CLASS(::MA::Flora::AnimatedCrossFadeData, "MA.Flora", "AnimatedCrossFadeData");
// Dependencies Unity.Mathematics.float3, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.AnimatedCrossFadeData
struct CORDL_TYPE AnimatedCrossFadeData {
public:
// Declarations
/// @brief Method ComputeAlpha, addr 0x1814af180, size 0xa0, virtual false, abstract: false, final false
inline float_t ComputeAlpha() ;

/// @brief Method Reset, addr 0x1814af220, size 0xb0, virtual false, abstract: false, final false
inline void Reset(::by_ref<::UnityEngine::Rendering::LODParameters>  lodParameters, float_t  screenRelativeMetric) ;

/// @brief Method Update, addr 0x1814af2d0, size 0x120, virtual false, abstract: false, final false
inline void Update(::by_ref<::UnityEngine::Rendering::LODParameters>  lodParameters, float_t  screenRelativeMetric) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatedCrossFadeData() ;

// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "LastUpdateFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "AnimatedLODCameraPosition0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "AnimatedLODCameraScreenRelativeMetric0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "AnimatedLODCameraPosition1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "AnimatedLODCameraScreenRelativeMetric1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnimatedLODTime0", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_AnimatedLODTime1", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_AnimatedLODDuration", ty: "double_t", modifiers: "", def_value: None }]
constexpr AnimatedCrossFadeData(::UnityEngine::EntityId  ViewId, int32_t  LastUpdateFrameIndex, ::Unity::Mathematics::float3  AnimatedLODCameraPosition0, float_t  AnimatedLODCameraScreenRelativeMetric0, ::Unity::Mathematics::float3  AnimatedLODCameraPosition1, float_t  AnimatedLODCameraScreenRelativeMetric1, double_t  m_AnimatedLODTime0, double_t  m_AnimatedLODTime1, double_t  m_AnimatedLODDuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13167};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field ViewId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  ViewId;

/// @brief Field LastUpdateFrameIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  LastUpdateFrameIndex;

/// @brief Field AnimatedLODCameraPosition0, offset: 0x8, size: 0xc, def value: None
 ::Unity::Mathematics::float3  AnimatedLODCameraPosition0;

/// @brief Field AnimatedLODCameraScreenRelativeMetric0, offset: 0x14, size: 0x4, def value: None
 float_t  AnimatedLODCameraScreenRelativeMetric0;

/// @brief Field AnimatedLODCameraPosition1, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  AnimatedLODCameraPosition1;

/// @brief Field AnimatedLODCameraScreenRelativeMetric1, offset: 0x24, size: 0x4, def value: None
 float_t  AnimatedLODCameraScreenRelativeMetric1;

/// @brief Field m_AnimatedLODTime0, offset: 0x28, size: 0x8, def value: None
 double_t  m_AnimatedLODTime0;

/// @brief Field m_AnimatedLODTime1, offset: 0x30, size: 0x8, def value: None
 double_t  m_AnimatedLODTime1;

/// @brief Field m_AnimatedLODDuration, offset: 0x38, size: 0x8, def value: None
 double_t  m_AnimatedLODDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, ViewId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, LastUpdateFrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, AnimatedLODCameraPosition0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, AnimatedLODCameraScreenRelativeMetric0) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, AnimatedLODCameraPosition1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, AnimatedLODCameraScreenRelativeMetric1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, m_AnimatedLODTime0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, m_AnimatedLODTime1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AnimatedCrossFadeData, m_AnimatedLODDuration) == 0x38, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::AnimatedCrossFadeData) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
