#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineChildSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SplineChildSync)
namespace GlobalNamespace {
struct SplineChildSync_DataPoint;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SplineChildSync;
}
namespace GlobalNamespace {
struct SplineChildSync_DataPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SplineChildSync*);
MARK_VAL_T(::GlobalNamespace::SplineChildSync_DataPoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineChildSync*, "", "SplineChildSync");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineChildSync_DataPoint, "", "SplineChildSync/DataPoint");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: SplineChildSync/DataPoint
struct CORDL_TYPE SplineChildSync_DataPoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SplineChildSync_DataPoint() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: None }]
constexpr SplineChildSync_DataPoint(::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  offset, float_t  t) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4918};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field transform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field offset, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  offset;

/// @brief Field t, offset: 0x14, size: 0x4, def value: None
 float_t  t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineChildSync_DataPoint, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineChildSync_DataPoint, offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineChildSync_DataPoint, t) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineChildSync_DataPoint) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies SplineChildSync::DataPoint, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplineChildSync
class CORDL_TYPE SplineChildSync : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DataPoint = ::GlobalNamespace::SplineChildSync_DataPoint;

/// @brief Field dataPoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataPoints, put=__cordl_internal_set_dataPoints)) ::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint>  dataPoints;

/// @brief Field splineContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineContainer, put=__cordl_internal_set_splineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer;

static inline ::GlobalNamespace::SplineChildSync* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint> const& __cordl_internal_get_dataPoints() const;

constexpr ::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint>& __cordl_internal_get_dataPoints() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_splineContainer() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_splineContainer() ;

constexpr void __cordl_internal_set_dataPoints(::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint>  value) ;

constexpr void __cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineChildSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineChildSync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineChildSync(SplineChildSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineChildSync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineChildSync(SplineChildSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4919};

/// @brief Field splineContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___splineContainer;

/// @brief Field dataPoints, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint>  ___dataPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineChildSync, ___splineContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineChildSync, ___dataPoints) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineChildSync) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
