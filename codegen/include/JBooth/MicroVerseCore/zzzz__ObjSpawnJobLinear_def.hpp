#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjSpawnJobLinear.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ObjSpawnJobLinear)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct ObjSpawnJobLinear;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::ObjSpawnJobLinear);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjSpawnJobLinear, "JBooth.MicroVerseCore", "ObjSpawnJobLinear");
// Dependencies Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3, Unity.Mathematics.quaternion, UnityEngine.Splines.NativeSpline
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.ObjSpawnJobLinear
struct CORDL_TYPE ObjSpawnJobLinear {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Evaluate, addr 0x181408a20, size 0x2a0, virtual false, abstract: false, final false
inline void Evaluate(float_t  t, ::by_ref<::Unity::Mathematics::float3>  pos, ::by_ref<::Unity::Mathematics::quaternion>  quat) ;

/// @brief Method Execute, addr 0x181408cc0, size 0x130, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method GetPointAtLinearDistance, addr 0x181408df0, size 0xf50, virtual false, abstract: false, final false
inline void GetPointAtLinearDistance(float_t  fromT, float_t  relativeDistance, ::by_ref<float_t>  resultPointT, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::quaternion>  quat) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjSpawnJobLinear() ;

// Ctor Parameters [CppParam { name: "linearDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beginOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "spline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "positions", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "quaternions", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::quaternion>", modifiers: "", def_value: None }]
constexpr ObjSpawnJobLinear(float_t  linearDistance, float_t  beginOffset, ::UnityEngine::Splines::NativeSpline  spline, ::Unity::Mathematics::float3  offset, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeList_1<::Unity::Mathematics::quaternion>  quaternions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field linearDistance, offset: 0x0, size: 0x4, def value: None
 float_t  linearDistance;

/// @brief Field beginOffset, offset: 0x4, size: 0x4, def value: None
 float_t  beginOffset;

/// @brief Field spline, offset: 0x8, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  spline;

/// @brief Field offset, offset: 0x50, size: 0xc, def value: None
 ::Unity::Mathematics::float3  offset;

/// @brief Field positions, offset: 0x60, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  positions;

/// @brief Field quaternions, offset: 0x68, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::quaternion>  quaternions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjSpawnJobLinear, linearDistance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjSpawnJobLinear, beginOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjSpawnJobLinear, spline) == 0x8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjSpawnJobLinear, offset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjSpawnJobLinear, positions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjSpawnJobLinear, quaternions) == 0x68, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjSpawnJobLinear) == 0x70, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
