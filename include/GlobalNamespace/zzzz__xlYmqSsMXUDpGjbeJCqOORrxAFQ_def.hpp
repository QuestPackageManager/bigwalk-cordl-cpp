#pragma once
// IWYU pragma private; include "GlobalNamespace/xlYmqSsMXUDpGjbeJCqOORrxAFQ.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(xlYmqSsMXUDpGjbeJCqOORrxAFQ)
// Forward declare root types
namespace GlobalNamespace {
struct xlYmqSsMXUDpGjbeJCqOORrxAFQ;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ, "", "xlYmqSsMXUDpGjbeJCqOORrxAFQ");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: xlYmqSsMXUDpGjbeJCqOORrxAFQ
struct CORDL_TYPE xlYmqSsMXUDpGjbeJCqOORrxAFQ {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __xlYmqSsMXUDpGjbeJCqOORrxAFQ_Unwrapped
enum struct __xlYmqSsMXUDpGjbeJCqOORrxAFQ_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Position = static_cast<int32_t>(0x1),
__E_ClipDistance = static_cast<int32_t>(0x2),
__E_CullDistance = static_cast<int32_t>(0x3),
__E_RenderTargetArrayIndex = static_cast<int32_t>(0x4),
__E_ViewportArrayIndex = static_cast<int32_t>(0x5),
__E_VertexId = static_cast<int32_t>(0x6),
__E_PrimitiveId = static_cast<int32_t>(0x7),
__E_InstanceId = static_cast<int32_t>(0x8),
__E_IsFrontFace = static_cast<int32_t>(0x9),
__E_SampleIndex = static_cast<int32_t>(0xa),
__E_FinalQuadEdgeTessfactor = static_cast<int32_t>(0xb),
__E_FinalQuadInsideTessfactor = static_cast<int32_t>(0xc),
__E_FinalTriEdgeTessfactor = static_cast<int32_t>(0xd),
__E_FinalTriInsideTessfactor = static_cast<int32_t>(0xe),
__E_FinalLineDetailTessfactor = static_cast<int32_t>(0xf),
__E_FinalLineDensityTessfactor = static_cast<int32_t>(0x10),
__E_Target = static_cast<int32_t>(0x40),
__E_Depth = static_cast<int32_t>(0x41),
__E_Coverage = static_cast<int32_t>(0x42),
__E_DepthGreaterEqual = static_cast<int32_t>(0x43),
__E_DepthLessEqual = static_cast<int32_t>(0x44),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __xlYmqSsMXUDpGjbeJCqOORrxAFQ_Unwrapped () const noexcept {
return static_cast<__xlYmqSsMXUDpGjbeJCqOORrxAFQ_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr xlYmqSsMXUDpGjbeJCqOORrxAFQ() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr xlYmqSsMXUDpGjbeJCqOORrxAFQ(int32_t  value__) noexcept;

/// @brief Field ClipDistance value: I32(2)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const ClipDistance;

/// @brief Field Coverage value: I32(66)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const Coverage;

/// @brief Field CullDistance value: I32(3)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const CullDistance;

/// @brief Field Depth value: I32(65)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const Depth;

/// @brief Field DepthGreaterEqual value: I32(67)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const DepthGreaterEqual;

/// @brief Field DepthLessEqual value: I32(68)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const DepthLessEqual;

/// @brief Field FinalLineDensityTessfactor value: I32(16)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const FinalLineDensityTessfactor;

/// @brief Field FinalLineDetailTessfactor value: I32(15)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const FinalLineDetailTessfactor;

/// @brief Field FinalQuadEdgeTessfactor value: I32(11)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const FinalQuadEdgeTessfactor;

/// @brief Field FinalQuadInsideTessfactor value: I32(12)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const FinalQuadInsideTessfactor;

/// @brief Field FinalTriEdgeTessfactor value: I32(13)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const FinalTriEdgeTessfactor;

/// @brief Field FinalTriInsideTessfactor value: I32(14)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const FinalTriInsideTessfactor;

/// @brief Field InstanceId value: I32(8)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const InstanceId;

/// @brief Field IsFrontFace value: I32(9)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const IsFrontFace;

/// @brief Field Position value: I32(1)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const Position;

/// @brief Field PrimitiveId value: I32(7)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const PrimitiveId;

/// @brief Field RenderTargetArrayIndex value: I32(4)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const RenderTargetArrayIndex;

/// @brief Field SampleIndex value: I32(10)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const SampleIndex;

/// @brief Field Target value: I32(64)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const Target;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const Undefined;

/// @brief Field VertexId value: I32(6)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const VertexId;

/// @brief Field ViewportArrayIndex value: I32(5)
static ::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ const ViewportArrayIndex;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::xlYmqSsMXUDpGjbeJCqOORrxAFQ) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
