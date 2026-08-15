#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/AbsorptionSplineLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_def.hpp"
CORDL_MODULE_EXPORT(AbsorptionSplineLodInputData)
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
class AbsorptionSplinePointData;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class AbsorptionSplineLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*, "WaveHarmonic.Crest.Splines", "AbsorptionSplineLodInputData");
// Dependencies UnityEngine.Color, UnityEngine.Vector4, WaveHarmonic.Crest.Splines.Internal.SplineLodInputData`1<T>
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.AbsorptionSplineLodInputData
class CORDL_TYPE AbsorptionSplineLodInputData : public ::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1<::UnityW<::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData>> {
public:
// Declarations
 __declspec(property(get=get_AbsorptionColor, put=set_AbsorptionColor)) ::UnityEngine::Color  AbsorptionColor;

 __declspec(property(get=get_DefaultCustomSplineData)) ::UnityEngine::Vector4  DefaultCustomSplineData;

 __declspec(property(get=get_SplineShader)) ::UnityW<::UnityEngine::Shader>  SplineShader;

/// @brief Field _Absorption, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get__Absorption, put=__cordl_internal_set__Absorption)) ::UnityEngine::Vector4  _Absorption;

/// @brief Field _AbsorptionColor, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get__AbsorptionColor, put=__cordl_internal_set__AbsorptionColor)) ::UnityEngine::Color  _AbsorptionColor;

static inline ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData* New_ctor() ;

/// @brief Method OnEnable, addr 0x18256dbb0, size 0x50, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetAbsorptionColor, addr 0x18256dc00, size 0xa0, virtual false, abstract: false, final false
inline void SetAbsorptionColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current) ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__Absorption() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__Absorption() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__AbsorptionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__AbsorptionColor() ;

constexpr void __cordl_internal_set__Absorption(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__AbsorptionColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x18256dca0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AbsorptionColor, addr 0x1802ec5e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_AbsorptionColor() ;

/// @brief Method get_DefaultCustomSplineData, addr 0x1804f6770, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 get_DefaultCustomSplineData() ;

/// @brief Method get_SplineShader, addr 0x18256dd20, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_SplineShader() ;

/// @brief Method set_AbsorptionColor, addr 0x18256dd90, size 0xd0, virtual false, abstract: false, final false
inline void set_AbsorptionColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbsorptionSplineLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionSplineLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbsorptionSplineLodInputData(AbsorptionSplineLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionSplineLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbsorptionSplineLodInputData(AbsorptionSplineLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21078};

/// @brief Field _AbsorptionColor, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ____AbsorptionColor;

/// @brief Field _Absorption, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____Absorption;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData, ____AbsorptionColor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData, ____Absorption) == 0x94, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData) == 0xa8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
