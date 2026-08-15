#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/FlowSplinePointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlowSplinePointData)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class FlowSplinePointData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::FlowSplinePointData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::FlowSplinePointData*, "WaveHarmonic.Crest.Splines", "FlowSplinePointData");
// Dependencies WaveHarmonic.Crest.Splines.SplinePointData
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.FlowSplinePointData
class CORDL_TYPE FlowSplinePointData : public ::WaveHarmonic::Crest::Splines::SplinePointData {
public:
// Declarations
 __declspec(property(get=get_FlowVelocity, put=set_FlowVelocity)) float_t  FlowVelocity;

/// @brief Field _FlowVelocity, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__FlowVelocity, put=__cordl_internal_set__FlowVelocity)) float_t  _FlowVelocity;

/// @brief Method GetData, addr 0x18256e1c0, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 GetData(::UnityEngine::Vector4  _) ;

static inline ::WaveHarmonic::Crest::Splines::FlowSplinePointData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__FlowVelocity() const;

constexpr float_t& __cordl_internal_get__FlowVelocity() ;

constexpr void __cordl_internal_set__FlowVelocity(float_t  value) ;

/// @brief Method .ctor, addr 0x18256e1e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FlowVelocity, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_FlowVelocity() ;

/// @brief Method set_FlowVelocity, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_FlowVelocity(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowSplinePointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowSplinePointData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowSplinePointData(FlowSplinePointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowSplinePointData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowSplinePointData(FlowSplinePointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21081};

/// @brief Field k_DefaultSpeed offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultSpeed{static_cast<float_t>(2.0f)};

/// @brief Field _FlowVelocity, offset: 0x50, size: 0x4, def value: None
 float_t  ____FlowVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::FlowSplinePointData, ____FlowVelocity) == 0x50, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::FlowSplinePointData) == 0x58, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
