#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/WavesSplinePointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WavesSplinePointData)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class WavesSplinePointData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::WavesSplinePointData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::WavesSplinePointData*, "WaveHarmonic.Crest.Splines", "WavesSplinePointData");
// Dependencies WaveHarmonic.Crest.Splines.SplinePointData
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.WavesSplinePointData
class CORDL_TYPE WavesSplinePointData : public ::WaveHarmonic::Crest::Splines::SplinePointData {
public:
// Declarations
 __declspec(property(get=get_Weight, put=set_Weight)) float_t  Weight;

/// @brief Field _Weight, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

/// @brief Method GetData, addr 0x18256e1c0, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 GetData(::UnityEngine::Vector4  _) ;

static inline ::WaveHarmonic::Crest::Splines::WavesSplinePointData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

/// @brief Method .ctor, addr 0x18256e290, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Weight, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_Weight() ;

/// @brief Method set_Weight, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_Weight(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WavesSplinePointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WavesSplinePointData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WavesSplinePointData(WavesSplinePointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WavesSplinePointData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WavesSplinePointData(WavesSplinePointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21092};

/// @brief Field k_DefaultWeight offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultWeight{static_cast<float_t>(1.0f)};

/// @brief Field _Weight, offset: 0x50, size: 0x4, def value: None
 float_t  ____Weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::WavesSplinePointData, ____Weight) == 0x50, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::WavesSplinePointData) == 0x58, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
