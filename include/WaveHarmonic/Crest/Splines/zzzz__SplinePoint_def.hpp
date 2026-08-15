#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplinePoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplinePoint)
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class SplinePoint;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::SplinePoint*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::SplinePoint*, "WaveHarmonic.Crest.Splines", "SplinePoint");
// Dependencies UnityEngine.Vector3, WaveHarmonic.Crest.Internal.CustomBehaviour
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.SplinePoint
class CORDL_TYPE SplinePoint : public ::WaveHarmonic::Crest::Internal::CustomBehaviour {
public:
// Declarations
 __declspec(property(get=get_RadiusMultiplier, put=set_RadiusMultiplier)) float_t  RadiusMultiplier;

/// @brief Field _LocalPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__LocalPosition, put=__cordl_internal_set__LocalPosition)) ::UnityEngine::Vector3  _LocalPosition;

/// @brief Field _RadiusMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__RadiusMultiplier, put=__cordl_internal_set__RadiusMultiplier)) float_t  _RadiusMultiplier;

static inline ::WaveHarmonic::Crest::Splines::SplinePoint* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__LocalPosition() ;

constexpr float_t const& __cordl_internal_get__RadiusMultiplier() const;

constexpr float_t& __cordl_internal_get__RadiusMultiplier() ;

constexpr void __cordl_internal_set__LocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__RadiusMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x18256fee0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RadiusMultiplier, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RadiusMultiplier() ;

/// @brief Method set_RadiusMultiplier, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_RadiusMultiplier(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePoint(SplinePoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePoint(SplinePoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21091};

/// @brief Field _RadiusMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ____RadiusMultiplier;

/// @brief Field _LocalPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____LocalPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplinePoint, ____RadiusMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplinePoint, ____LocalPosition) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::SplinePoint) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
