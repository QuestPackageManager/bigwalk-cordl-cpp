#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/FlowSplineLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlowSplineLodInputData)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Splines {
class FlowSplinePointData;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class FlowSplineLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*, "WaveHarmonic.Crest.Splines", "FlowSplineLodInputData");
// Dependencies WaveHarmonic.Crest.Splines.Internal.SplineLodInputData`1<T>
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.FlowSplineLodInputData
class CORDL_TYPE FlowSplineLodInputData : public ::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1<::UnityW<::WaveHarmonic::Crest::Splines::FlowSplinePointData>> {
public:
// Declarations
 __declspec(property(get=get_DefaultCustomSplineData)) ::UnityEngine::Vector4  DefaultCustomSplineData;

 __declspec(property(get=get_FlowVelocity, put=set_FlowVelocity)) float_t  FlowVelocity;

 __declspec(property(get=get_SplineShader)) ::UnityW<::UnityEngine::Shader>  SplineShader;

/// @brief Field _FlowVelocity, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__FlowVelocity, put=__cordl_internal_set__FlowVelocity)) float_t  _FlowVelocity;

static inline ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__FlowVelocity() const;

constexpr float_t& __cordl_internal_get__FlowVelocity() ;

constexpr void __cordl_internal_set__FlowVelocity(float_t  value) ;

/// @brief Method .ctor, addr 0x18256e100, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCustomSplineData, addr 0x18256e120, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 get_DefaultCustomSplineData() ;

/// @brief Method get_FlowVelocity, addr 0x180312eb0, size 0x10, virtual false, abstract: false, final false
inline float_t get_FlowVelocity() ;

/// @brief Method get_SplineShader, addr 0x18256e140, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_SplineShader() ;

/// @brief Method set_FlowVelocity, addr 0x18256e1b0, size 0x10, virtual false, abstract: false, final false
inline void set_FlowVelocity(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowSplineLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowSplineLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowSplineLodInputData(FlowSplineLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowSplineLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowSplineLodInputData(FlowSplineLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21080};

/// @brief Field _FlowVelocity, offset: 0x84, size: 0x4, def value: None
 float_t  ____FlowVelocity;

/// @brief Size padding 0x90 - 0x88 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::FlowSplineLodInputData, ____FlowVelocity) == 0x84, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::FlowSplineLodInputData) == 0x90, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
