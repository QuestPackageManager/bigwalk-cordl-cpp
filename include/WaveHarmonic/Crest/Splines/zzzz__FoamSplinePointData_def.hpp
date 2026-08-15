#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/FoamSplinePointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FoamSplinePointData)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class FoamSplinePointData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::FoamSplinePointData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::FoamSplinePointData*, "WaveHarmonic.Crest.Splines", "FoamSplinePointData");
// Dependencies WaveHarmonic.Crest.Splines.SplinePointData
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.FoamSplinePointData
class CORDL_TYPE FoamSplinePointData : public ::WaveHarmonic::Crest::Splines::SplinePointData {
public:
// Declarations
 __declspec(property(get=get_FoamAmount, put=set_FoamAmount)) float_t  FoamAmount;

/// @brief Field _FoamAmount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__FoamAmount, put=__cordl_internal_set__FoamAmount)) float_t  _FoamAmount;

/// @brief Method GetData, addr 0x18256e1c0, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 GetData(::UnityEngine::Vector4  _) ;

static inline ::WaveHarmonic::Crest::Splines::FoamSplinePointData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__FoamAmount() const;

constexpr float_t& __cordl_internal_get__FoamAmount() ;

constexpr void __cordl_internal_set__FoamAmount(float_t  value) ;

/// @brief Method .ctor, addr 0x18256e290, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FoamAmount, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_FoamAmount() ;

/// @brief Method set_FoamAmount, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_FoamAmount(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamSplinePointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamSplinePointData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamSplinePointData(FoamSplinePointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamSplinePointData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamSplinePointData(FoamSplinePointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21083};

/// @brief Field k_DefaultAmount offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultAmount{static_cast<float_t>(1.0f)};

/// @brief Field _FoamAmount, offset: 0x50, size: 0x4, def value: None
 float_t  ____FoamAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::FoamSplinePointData, ____FoamAmount) == 0x50, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::FoamSplinePointData) == 0x58, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
