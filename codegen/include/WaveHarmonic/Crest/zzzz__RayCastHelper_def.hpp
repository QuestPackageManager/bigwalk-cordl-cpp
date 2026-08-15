#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RayCastHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RayCastHelper)
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class RayCastHelper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::RayCastHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RayCastHelper*, "WaveHarmonic.Crest", "RayCastHelper");
// Dependencies WaveHarmonic.Crest.Internal.SampleHelper
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.RayCastHelper
class CORDL_TYPE RayCastHelper : public ::WaveHarmonic::Crest::Internal::SampleHelper {
public:
// Declarations
/// @brief Field _MinimumLength, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinimumLength, put=__cordl_internal_set__MinimumLength)) float_t  _MinimumLength;

/// @brief Field _RayStepSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__RayStepSize, put=__cordl_internal_set__RayStepSize)) float_t  _RayStepSize;

/// @brief Method ComputeQueryCount, addr 0x18257c190, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ComputeQueryCount(float_t  rayLength, ::by_ref<float_t>  rayStepSize) ;

static inline ::WaveHarmonic::Crest::RayCastHelper* New_ctor(float_t  rayLength, float_t  rayStepSize) ;

/// @brief Method RayCast, addr 0x18257c240, size 0x320, virtual false, abstract: false, final false
inline bool RayCast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<float_t>  distance, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

constexpr float_t const& __cordl_internal_get__MinimumLength() const;

constexpr float_t& __cordl_internal_get__MinimumLength() ;

constexpr float_t const& __cordl_internal_get__RayStepSize() const;

constexpr float_t& __cordl_internal_get__RayStepSize() ;

constexpr void __cordl_internal_set__MinimumLength(float_t  value) ;

constexpr void __cordl_internal_set__RayStepSize(float_t  value) ;

/// @brief Method .ctor, addr 0x18257c560, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(float_t  rayLength, float_t  rayStepSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayCastHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayCastHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RayCastHelper(RayCastHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayCastHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayCastHelper(RayCastHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16597};

/// @brief Field _RayStepSize, offset: 0x28, size: 0x4, def value: None
 float_t  ____RayStepSize;

/// @brief Field _MinimumLength, offset: 0x2c, size: 0x4, def value: None
 float_t  ____MinimumLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::RayCastHelper, ____RayStepSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RayCastHelper, ____MinimumLength) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::RayCastHelper) == 0x30, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
