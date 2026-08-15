#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/FoamSplineLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FoamSplineLodInputData)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Splines {
class FoamSplinePointData;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class FoamSplineLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::FoamSplineLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::FoamSplineLodInputData*, "WaveHarmonic.Crest.Splines", "FoamSplineLodInputData");
// Dependencies WaveHarmonic.Crest.Splines.Internal.SplineLodInputData`1<T>
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.FoamSplineLodInputData
class CORDL_TYPE FoamSplineLodInputData : public ::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1<::UnityW<::WaveHarmonic::Crest::Splines::FoamSplinePointData>> {
public:
// Declarations
 __declspec(property(get=get_DefaultCustomSplineData)) ::UnityEngine::Vector4  DefaultCustomSplineData;

 __declspec(property(get=get_FoamAmount, put=set_FoamAmount)) float_t  FoamAmount;

 __declspec(property(get=get_SplineShader)) ::UnityW<::UnityEngine::Shader>  SplineShader;

/// @brief Field _FoamAmount, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__FoamAmount, put=__cordl_internal_set__FoamAmount)) float_t  _FoamAmount;

static inline ::WaveHarmonic::Crest::Splines::FoamSplineLodInputData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__FoamAmount() const;

constexpr float_t& __cordl_internal_get__FoamAmount() ;

constexpr void __cordl_internal_set__FoamAmount(float_t  value) ;

/// @brief Method .ctor, addr 0x18256e200, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCustomSplineData, addr 0x18256e120, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 get_DefaultCustomSplineData() ;

/// @brief Method get_FoamAmount, addr 0x180312eb0, size 0x10, virtual false, abstract: false, final false
inline float_t get_FoamAmount() ;

/// @brief Method get_SplineShader, addr 0x18256e220, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_SplineShader() ;

/// @brief Method set_FoamAmount, addr 0x18256e1b0, size 0x10, virtual false, abstract: false, final false
inline void set_FoamAmount(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamSplineLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamSplineLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamSplineLodInputData(FoamSplineLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamSplineLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamSplineLodInputData(FoamSplineLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21082};

/// @brief Field _FoamAmount, offset: 0x84, size: 0x4, def value: None
 float_t  ____FoamAmount;

/// @brief Size padding 0x90 - 0x88 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::FoamSplineLodInputData, ____FoamAmount) == 0x84, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::FoamSplineLodInputData) == 0x90, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
