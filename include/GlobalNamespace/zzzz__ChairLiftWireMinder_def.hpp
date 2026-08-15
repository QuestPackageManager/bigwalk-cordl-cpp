#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairLiftWireMinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ChairLiftPole_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChairLiftWireMinder)
namespace GlobalNamespace {
struct ChairLiftWireMinder_TravelDirection;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
// Forward declare root types
namespace GlobalNamespace {
struct ChairLiftWireMinder_TravelDirection;
}
namespace GlobalNamespace {
class ChairLiftWireMinder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ChairLiftWireMinder_TravelDirection);
MARK_REF_T(::GlobalNamespace::ChairLiftWireMinder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChairLiftWireMinder_TravelDirection, "", "ChairLiftWireMinder/TravelDirection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChairLiftWireMinder*, "", "ChairLiftWireMinder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ChairLiftWireMinder/TravelDirection
struct CORDL_TYPE ChairLiftWireMinder_TravelDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChairLiftWireMinder_TravelDirection_Unwrapped
enum struct __ChairLiftWireMinder_TravelDirection_Unwrapped : int32_t {
__E_To = static_cast<int32_t>(0x0),
__E_Fro = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChairLiftWireMinder_TravelDirection_Unwrapped () const noexcept {
return static_cast<__ChairLiftWireMinder_TravelDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChairLiftWireMinder_TravelDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChairLiftWireMinder_TravelDirection(int32_t  value__) noexcept;

/// @brief Field Fro value: I32(1)
static ::GlobalNamespace::ChairLiftWireMinder_TravelDirection const Fro;

/// @brief Field To value: I32(0)
static ::GlobalNamespace::ChairLiftWireMinder_TravelDirection const To;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChairLiftWireMinder_TravelDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChairLiftWireMinder_TravelDirection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ChairLiftPole, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChairLiftWireMinder
class CORDL_TYPE ChairLiftWireMinder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TravelDirection = ::GlobalNamespace::ChairLiftWireMinder_TravelDirection;

/// @brief Field froSpline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_froSpline, put=__cordl_internal_set_froSpline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  froSpline;

/// @brief Field maxDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field minDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistance, put=__cordl_internal_set_minDistance)) float_t  minDistance;

/// @brief Field poles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_poles, put=__cordl_internal_set_poles)) ::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>>  poles;

/// @brief Field sagAmount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_sagAmount, put=__cordl_internal_set_sagAmount)) float_t  sagAmount;

/// @brief Field toSpline, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_toSpline, put=__cordl_internal_set_toSpline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  toSpline;

/// @brief Method CreateCatenaryKnot, addr 0x1804093c0, size 0x300, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::BezierKnot CreateCatenaryKnot(::Unity::Mathematics::float3  thisPoint, ::Unity::Mathematics::float3  previousPoint, ::Unity::Mathematics::float3  nextPoint) ;

static inline ::GlobalNamespace::ChairLiftWireMinder* New_ctor() ;

/// @brief Method SetSplines, addr 0x1804096c0, size 0x550, virtual false, abstract: false, final false
inline void SetSplines() ;

/// @brief Method SpinTowers, addr 0x180409c10, size 0x360, virtual false, abstract: false, final false
inline void SpinTowers() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_froSpline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_froSpline() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr float_t const& __cordl_internal_get_minDistance() const;

constexpr float_t& __cordl_internal_get_minDistance() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>> const& __cordl_internal_get_poles() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>>& __cordl_internal_get_poles() ;

constexpr float_t const& __cordl_internal_get_sagAmount() const;

constexpr float_t& __cordl_internal_get_sagAmount() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_toSpline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_toSpline() ;

constexpr void __cordl_internal_set_froSpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_minDistance(float_t  value) ;

constexpr void __cordl_internal_set_poles(::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>>  value) ;

constexpr void __cordl_internal_set_sagAmount(float_t  value) ;

constexpr void __cordl_internal_set_toSpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChairLiftWireMinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChairLiftWireMinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChairLiftWireMinder(ChairLiftWireMinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChairLiftWireMinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChairLiftWireMinder(ChairLiftWireMinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5135};

/// @brief Field poles, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>>  ___poles;

/// @brief Field toSpline, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___toSpline;

/// @brief Field froSpline, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___froSpline;

/// @brief Field minDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___minDistance;

/// @brief Field maxDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxDistance;

/// @brief Field sagAmount, offset: 0x40, size: 0x4, def value: None
 float_t  ___sagAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChairLiftWireMinder, ___poles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairLiftWireMinder, ___toSpline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairLiftWireMinder, ___froSpline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairLiftWireMinder, ___minDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairLiftWireMinder, ___maxDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairLiftWireMinder, ___sagAmount) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChairLiftWireMinder) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
