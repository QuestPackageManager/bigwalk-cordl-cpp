#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/ScatteringSplineLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_def.hpp"
CORDL_MODULE_EXPORT(ScatteringSplineLodInputData)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Splines {
class ScatteringSplinePointData;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class ScatteringSplineLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*, "WaveHarmonic.Crest.Splines", "ScatteringSplineLodInputData");
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.Splines.Internal.SplineLodInputData`1<T>
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.ScatteringSplineLodInputData
class CORDL_TYPE ScatteringSplineLodInputData : public ::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1<::UnityW<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData>> {
public:
// Declarations
 __declspec(property(get=get_DefaultCustomSplineData)) ::UnityEngine::Vector4  DefaultCustomSplineData;

 __declspec(property(get=get_ScatteringColor, put=set_ScatteringColor)) ::UnityEngine::Color  ScatteringColor;

 __declspec(property(get=get_SplineShader)) ::UnityW<::UnityEngine::Shader>  SplineShader;

/// @brief Field _ScatteringColor, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get__ScatteringColor, put=__cordl_internal_set__ScatteringColor)) ::UnityEngine::Color  _ScatteringColor;

static inline ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__ScatteringColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__ScatteringColor() ;

constexpr void __cordl_internal_set__ScatteringColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x18256e2e0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCustomSplineData, addr 0x18256e330, size 0x60, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 get_DefaultCustomSplineData() ;

/// @brief Method get_ScatteringColor, addr 0x1802ec5e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_ScatteringColor() ;

/// @brief Method get_SplineShader, addr 0x18256dd20, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_SplineShader() ;

/// @brief Method set_ScatteringColor, addr 0x18200bc30, size 0x10, virtual false, abstract: false, final false
inline void set_ScatteringColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatteringSplineLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatteringSplineLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatteringSplineLodInputData(ScatteringSplineLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatteringSplineLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatteringSplineLodInputData(ScatteringSplineLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21084};

/// @brief Field _ScatteringColor, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ____ScatteringColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData, ____ScatteringColor) == 0x84, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData) == 0x98, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
