#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/AbsorptionSplinePointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AbsorptionSplinePointData)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class AbsorptionSplinePointData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData*, "WaveHarmonic.Crest.Splines", "AbsorptionSplinePointData");
// Dependencies UnityEngine.Color, UnityEngine.Vector4, WaveHarmonic.Crest.Splines.SplinePointData
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.AbsorptionSplinePointData
class CORDL_TYPE AbsorptionSplinePointData : public ::WaveHarmonic::Crest::Splines::SplinePointData {
public:
// Declarations
 __declspec(property(get=get_AbsorptionColor, put=set_AbsorptionColor)) ::UnityEngine::Color  AbsorptionColor;

 __declspec(property(get=get_OverrideAbsorption, put=set_OverrideAbsorption)) bool  OverrideAbsorption;

 __declspec(property(get=get_Weight, put=set_Weight)) float_t  Weight;

/// @brief Field _Absorption, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__Absorption, put=__cordl_internal_set__Absorption)) ::UnityEngine::Vector4  _Absorption;

/// @brief Field _AbsorptionColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__AbsorptionColor, put=__cordl_internal_set__AbsorptionColor)) ::UnityEngine::Color  _AbsorptionColor;

/// @brief Field _OverrideAbsorption, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideAbsorption, put=__cordl_internal_set__OverrideAbsorption)) bool  _OverrideAbsorption;

/// @brief Field _Weight, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

/// @brief Field s_DefaultAbsorption, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_DefaultAbsorption, put=setStaticF_s_DefaultAbsorption)) ::UnityEngine::Color  s_DefaultAbsorption;

/// @brief Method GetData, addr 0x18256de60, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 GetData(::UnityEngine::Vector4  data) ;

/// @brief Method Initialize, addr 0x18256de80, size 0x40, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData* New_ctor() ;

/// @brief Method SetAbsorptionColor, addr 0x18256dec0, size 0xa0, virtual false, abstract: false, final false
inline void SetAbsorptionColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current) ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__Absorption() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__Absorption() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__AbsorptionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__AbsorptionColor() ;

constexpr bool const& __cordl_internal_get__OverrideAbsorption() const;

constexpr bool& __cordl_internal_get__OverrideAbsorption() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr void __cordl_internal_set__Absorption(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__AbsorptionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__OverrideAbsorption(bool  value) ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

/// @brief Method .ctor, addr 0x18256dfb0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_DefaultAbsorption() ;

/// @brief Method get_AbsorptionColor, addr 0x18256e030, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_AbsorptionColor() ;

/// @brief Method get_OverrideAbsorption, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideAbsorption() ;

/// @brief Method get_Weight, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Weight() ;

static inline void setStaticF_s_DefaultAbsorption(::UnityEngine::Color  value) ;

/// @brief Method set_AbsorptionColor, addr 0x18256e040, size 0xc0, virtual false, abstract: false, final false
inline void set_AbsorptionColor(::UnityEngine::Color  value) ;

/// @brief Method set_OverrideAbsorption, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideAbsorption(bool  value) ;

/// @brief Method set_Weight, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_Weight(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbsorptionSplinePointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionSplinePointData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbsorptionSplinePointData(AbsorptionSplinePointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionSplinePointData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbsorptionSplinePointData(AbsorptionSplinePointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21079};

/// @brief Field _OverrideAbsorption, offset: 0x50, size: 0x1, def value: None
 bool  ____OverrideAbsorption;

/// @brief Field _AbsorptionColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ____AbsorptionColor;

/// @brief Field _Weight, offset: 0x64, size: 0x4, def value: None
 float_t  ____Weight;

/// @brief Field _Absorption, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____Absorption;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData, ____OverrideAbsorption) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData, ____AbsorptionColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData, ____Weight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData, ____Absorption) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::AbsorptionSplinePointData) == 0x78, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
