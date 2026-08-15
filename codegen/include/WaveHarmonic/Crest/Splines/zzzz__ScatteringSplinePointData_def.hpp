#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/ScatteringSplinePointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScatteringSplinePointData)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class ScatteringSplinePointData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*, "WaveHarmonic.Crest.Splines", "ScatteringSplinePointData");
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.Splines.SplinePointData
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.ScatteringSplinePointData
class CORDL_TYPE ScatteringSplinePointData : public ::WaveHarmonic::Crest::Splines::SplinePointData {
public:
// Declarations
 __declspec(property(get=get_OverrideScattering, put=set_OverrideScattering)) bool  OverrideScattering;

 __declspec(property(get=get_Scattering, put=set_Scattering)) ::UnityEngine::Color  Scattering;

 __declspec(property(get=get_Weight, put=set_Weight)) float_t  Weight;

/// @brief Field _OverrideScattering, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideScattering, put=__cordl_internal_set__OverrideScattering)) bool  _OverrideScattering;

/// @brief Field _Scattering, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__Scattering, put=__cordl_internal_set__Scattering)) ::UnityEngine::Color  _Scattering;

/// @brief Field _Weight, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

/// @brief Field s_DefaultScattering, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_DefaultScattering, put=setStaticF_s_DefaultScattering)) ::UnityEngine::Color  s_DefaultScattering;

/// @brief Method GetData, addr 0x18256e390, size 0x90, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 GetData(::UnityEngine::Vector4  data) ;

static inline ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData* New_ctor() ;

constexpr bool const& __cordl_internal_get__OverrideScattering() const;

constexpr bool& __cordl_internal_get__OverrideScattering() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__Scattering() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__Scattering() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr void __cordl_internal_set__OverrideScattering(bool  value) ;

constexpr void __cordl_internal_set__Scattering(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

/// @brief Method .ctor, addr 0x18256e470, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_DefaultScattering() ;

/// @brief Method get_OverrideScattering, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideScattering() ;

/// @brief Method get_Scattering, addr 0x18256e030, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Scattering() ;

/// @brief Method get_Weight, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Weight() ;

static inline void setStaticF_s_DefaultScattering(::UnityEngine::Color  value) ;

/// @brief Method set_OverrideScattering, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideScattering(bool  value) ;

/// @brief Method set_Scattering, addr 0x18256e4d0, size 0x10, virtual false, abstract: false, final false
inline void set_Scattering(::UnityEngine::Color  value) ;

/// @brief Method set_Weight, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_Weight(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatteringSplinePointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatteringSplinePointData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatteringSplinePointData(ScatteringSplinePointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatteringSplinePointData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatteringSplinePointData(ScatteringSplinePointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21085};

/// @brief Field _OverrideScattering, offset: 0x50, size: 0x1, def value: None
 bool  ____OverrideScattering;

/// @brief Field _Scattering, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ____Scattering;

/// @brief Field _Weight, offset: 0x64, size: 0x4, def value: None
 float_t  ____Weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::ScatteringSplinePointData, ____OverrideScattering) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::ScatteringSplinePointData, ____Scattering) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::ScatteringSplinePointData, ____Weight) == 0x64, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::ScatteringSplinePointData) == 0x68, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
