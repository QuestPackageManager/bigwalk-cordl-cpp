#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/FilterSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilterSet)
namespace JBooth::MicroVerseCore {
class FalloffFilter;
}
namespace JBooth::MicroVerseCore {
class FilterSet_Filter;
}
namespace JBooth::MicroVerseCore {
struct FilterSet_NoiseOp;
}
namespace JBooth::MicroVerseCore {
class FilterSet_TextureFilter;
}
namespace JBooth::MicroVerseCore {
struct Filter_FilterSet_FilterType;
}
namespace JBooth::MicroVerseCore {
class Noise;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
class Stamp_KeywordBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct FilterSet_NoiseOp;
}
namespace JBooth::MicroVerseCore {
struct Filter_FilterSet_FilterType;
}
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class FilterSet_Filter;
}
namespace JBooth::MicroVerseCore {
class FilterSet_TextureFilter;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::FilterSet_NoiseOp);
MARK_VAL_T(::JBooth::MicroVerseCore::Filter_FilterSet_FilterType);
MARK_REF_T(::JBooth::MicroVerseCore::FilterSet*);
MARK_REF_T(::JBooth::MicroVerseCore::FilterSet_Filter*);
MARK_REF_T(::JBooth::MicroVerseCore::FilterSet_TextureFilter*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FilterSet_NoiseOp, "JBooth.MicroVerseCore", "FilterSet/NoiseOp");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Filter_FilterSet_FilterType, "JBooth.MicroVerseCore", "FilterSet/Filter/FilterType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FilterSet*, "JBooth.MicroVerseCore", "FilterSet");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FilterSet_Filter*, "JBooth.MicroVerseCore", "FilterSet/Filter");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FilterSet_TextureFilter*, "JBooth.MicroVerseCore", "FilterSet/TextureFilter");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FilterSet/NoiseOp
struct CORDL_TYPE FilterSet_NoiseOp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FilterSet_NoiseOp_Unwrapped
enum struct __FilterSet_NoiseOp_Unwrapped : int32_t {
__E_Add = static_cast<int32_t>(0x0),
__E_Subtract = static_cast<int32_t>(0x1),
__E_Multiply = static_cast<int32_t>(0x2),
__E_Overlay = static_cast<int32_t>(0x3),
__E_Min = static_cast<int32_t>(0x4),
__E_Max = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FilterSet_NoiseOp_Unwrapped () const noexcept {
return static_cast<__FilterSet_NoiseOp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FilterSet_NoiseOp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FilterSet_NoiseOp(int32_t  value__) noexcept;

/// @brief Field Add value: I32(0)
static ::JBooth::MicroVerseCore::FilterSet_NoiseOp const Add;

/// @brief Field Max value: I32(5)
static ::JBooth::MicroVerseCore::FilterSet_NoiseOp const Max;

/// @brief Field Min value: I32(4)
static ::JBooth::MicroVerseCore::FilterSet_NoiseOp const Min;

/// @brief Field Multiply value: I32(2)
static ::JBooth::MicroVerseCore::FilterSet_NoiseOp const Multiply;

/// @brief Field Overlay value: I32(3)
static ::JBooth::MicroVerseCore::FilterSet_NoiseOp const Overlay;

/// @brief Field Subtract value: I32(1)
static ::JBooth::MicroVerseCore::FilterSet_NoiseOp const Subtract;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_NoiseOp, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FilterSet_NoiseOp) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.FilterSet/Filter/FilterType
struct CORDL_TYPE Filter_FilterSet_FilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Filter_FilterSet_FilterType_Unwrapped
enum struct __Filter_FilterSet_FilterType_Unwrapped : int32_t {
__E_Simple = static_cast<int32_t>(0x0),
__E_Curve = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Filter_FilterSet_FilterType_Unwrapped () const noexcept {
return static_cast<__Filter_FilterSet_FilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Filter_FilterSet_FilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Filter_FilterSet_FilterType(int32_t  value__) noexcept;

/// @brief Field Curve value: I32(1)
static ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType const Curve;

/// @brief Field Simple value: I32(0)
static ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType const Simple;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Filter_FilterSet_FilterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Filter_FilterSet_FilterType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.FilterSet::Filter::FilterType, System.Object, UnityEngine.Vector2
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.FilterSet/Filter
class CORDL_TYPE FilterSet_Filter : public ::System::Object {
public:
// Declarations
using FilterType = ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType;

/// @brief Field _curveTexture, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__curveTexture, put=__cordl_internal_set__curveTexture)) ::UnityW<::UnityEngine::Texture2D>  _curveTexture;

/// @brief Field curve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_curve, put=__cordl_internal_set_curve)) ::UnityEngine::AnimationCurve*  curve;

 __declspec(property(get=get_curveTexture)) ::UnityW<::UnityEngine::Texture2D>  curveTexture;

/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field filterType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_filterType, put=__cordl_internal_set_filterType)) ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType  filterType;

/// @brief Field mipBias, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_mipBias, put=__cordl_internal_set_mipBias)) float_t  mipBias;

/// @brief Field noise, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_noise, put=__cordl_internal_set_noise)) ::JBooth::MicroVerseCore::Noise*  noise;

/// @brief Field range, offset 0x1c, size 0x8 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) ::UnityEngine::Vector2  range;

/// @brief Field smoothness, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_smoothness, put=__cordl_internal_set_smoothness)) ::UnityEngine::Vector2  smoothness;

/// @brief Field weight, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) float_t  weight;

static inline ::JBooth::MicroVerseCore::FilterSet_Filter* New_ctor(::UnityEngine::Vector2  range, ::UnityEngine::Vector2  smoothness) ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__curveTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__curveTexture() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve() ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType const& __cordl_internal_get_filterType() const;

constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType& __cordl_internal_get_filterType() ;

constexpr float_t const& __cordl_internal_get_mipBias() const;

constexpr float_t& __cordl_internal_get_mipBias() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_noise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_noise() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_range() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_range() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_smoothness() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_smoothness() ;

constexpr float_t const& __cordl_internal_get_weight() const;

constexpr float_t& __cordl_internal_get_weight() ;

constexpr void __cordl_internal_set__curveTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_filterType(::JBooth::MicroVerseCore::Filter_FilterSet_FilterType  value) ;

constexpr void __cordl_internal_set_mipBias(float_t  value) ;

constexpr void __cordl_internal_set_noise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_range(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_smoothness(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_weight(float_t  value) ;

/// @brief Method .ctor, addr 0x181430270, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  range, ::UnityEngine::Vector2  smoothness) ;

/// @brief Method get_curveTexture, addr 0x181430490, size 0x120, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_curveTexture() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilterSet_Filter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilterSet_Filter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FilterSet_Filter(FilterSet_Filter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilterSet_Filter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilterSet_Filter(FilterSet_Filter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18012};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

/// @brief Field filterType, offset: 0x14, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType  ___filterType;

/// @brief Field weight, offset: 0x18, size: 0x4, def value: None
 float_t  ___weight;

/// @brief Field range, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___range;

/// @brief Field smoothness, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___smoothness;

/// @brief Field noise, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___noise;

/// @brief Field mipBias, offset: 0x38, size: 0x4, def value: None
 float_t  ___mipBias;

/// @brief Field curve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___curve;

/// @brief Field _curveTexture, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____curveTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___filterType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___range) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___smoothness) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___noise) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___mipBias) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ___curve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_Filter, ____curveTexture) == 0x48, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FilterSet_Filter) == 0x50, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.FilterSet/TextureFilter
class CORDL_TYPE FilterSet_TextureFilter : public ::System::Object {
public:
// Declarations
/// @brief Field amplitude, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_amplitude, put=__cordl_internal_set_amplitude)) float_t  amplitude;

/// @brief Field balance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_balance, put=__cordl_internal_set_balance)) float_t  balance;

/// @brief Field layer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::UnityW<::UnityEngine::TerrainLayer>  layer;

/// @brief Field weight, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) float_t  weight;

static inline ::JBooth::MicroVerseCore::FilterSet_TextureFilter* New_ctor() ;

constexpr float_t const& __cordl_internal_get_amplitude() const;

constexpr float_t& __cordl_internal_get_amplitude() ;

constexpr float_t const& __cordl_internal_get_balance() const;

constexpr float_t& __cordl_internal_get_balance() ;

constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_layer() const;

constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_layer() ;

constexpr float_t const& __cordl_internal_get_weight() const;

constexpr float_t& __cordl_internal_get_weight() ;

constexpr void __cordl_internal_set_amplitude(float_t  value) ;

constexpr void __cordl_internal_set_balance(float_t  value) ;

constexpr void __cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value) ;

constexpr void __cordl_internal_set_weight(float_t  value) ;

/// @brief Method .ctor, addr 0x18143d020, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilterSet_TextureFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilterSet_TextureFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FilterSet_TextureFilter(FilterSet_TextureFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilterSet_TextureFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilterSet_TextureFilter(FilterSet_TextureFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18013};

/// @brief Field layer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  ___layer;

/// @brief Field weight, offset: 0x18, size: 0x4, def value: None
 float_t  ___weight;

/// @brief Field amplitude, offset: 0x1c, size: 0x4, def value: None
 float_t  ___amplitude;

/// @brief Field balance, offset: 0x20, size: 0x4, def value: None
 float_t  ___balance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_TextureFilter, ___layer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_TextureFilter, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_TextureFilter, ___amplitude) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet_TextureFilter, ___balance) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FilterSet_TextureFilter) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.FilterSet::NoiseOp, System.Object, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.FilterSet
class CORDL_TYPE FilterSet : public ::System::Object {
public:
// Declarations
using Filter = ::JBooth::MicroVerseCore::FilterSet_Filter;

using NoiseOp = ::JBooth::MicroVerseCore::FilterSet_NoiseOp;

using TextureFilter = ::JBooth::MicroVerseCore::FilterSet_TextureFilter;

/// @brief Field _AngleCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleCurve, put=setStaticF__AngleCurve)) int32_t  _AngleCurve;

/// @brief Field _AngleNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleNoise, put=setStaticF__AngleNoise)) int32_t  _AngleNoise;

/// @brief Field _AngleNoise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleNoise2, put=setStaticF__AngleNoise2)) int32_t  _AngleNoise2;

/// @brief Field _AngleNoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleNoiseChannel, put=setStaticF__AngleNoiseChannel)) int32_t  _AngleNoiseChannel;

/// @brief Field _AngleNoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleNoiseTexture, put=setStaticF__AngleNoiseTexture)) int32_t  _AngleNoiseTexture;

/// @brief Field _AngleRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleRange, put=setStaticF__AngleRange)) int32_t  _AngleRange;

/// @brief Field _AngleSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleSmoothness, put=setStaticF__AngleSmoothness)) int32_t  _AngleSmoothness;

/// @brief Field _AngleWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AngleWeight, put=setStaticF__AngleWeight)) int32_t  _AngleWeight;

/// @brief Field _CurvatureCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureCurve, put=setStaticF__CurvatureCurve)) int32_t  _CurvatureCurve;

/// @brief Field _CurvatureMipBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureMipBias, put=setStaticF__CurvatureMipBias)) int32_t  _CurvatureMipBias;

/// @brief Field _CurvatureNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureNoise, put=setStaticF__CurvatureNoise)) int32_t  _CurvatureNoise;

/// @brief Field _CurvatureNoise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureNoise2, put=setStaticF__CurvatureNoise2)) int32_t  _CurvatureNoise2;

/// @brief Field _CurvatureNoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureNoiseChannel, put=setStaticF__CurvatureNoiseChannel)) int32_t  _CurvatureNoiseChannel;

/// @brief Field _CurvatureNoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureNoiseTexture, put=setStaticF__CurvatureNoiseTexture)) int32_t  _CurvatureNoiseTexture;

/// @brief Field _CurvatureRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureRange, put=setStaticF__CurvatureRange)) int32_t  _CurvatureRange;

/// @brief Field _CurvatureSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureSmoothness, put=setStaticF__CurvatureSmoothness)) int32_t  _CurvatureSmoothness;

/// @brief Field _CurvatureWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurvatureWeight, put=setStaticF__CurvatureWeight)) int32_t  _CurvatureWeight;

/// @brief Field _DistancesFromObject, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistancesFromObject, put=setStaticF__DistancesFromObject)) int32_t  _DistancesFromObject;

/// @brief Field _DistancesFromParent, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistancesFromParent, put=setStaticF__DistancesFromParent)) int32_t  _DistancesFromParent;

/// @brief Field _DistancesFromTrees, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistancesFromTrees, put=setStaticF__DistancesFromTrees)) int32_t  _DistancesFromTrees;

/// @brief Field _FlowCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowCurve, put=setStaticF__FlowCurve)) int32_t  _FlowCurve;

/// @brief Field _FlowNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowNoise, put=setStaticF__FlowNoise)) int32_t  _FlowNoise;

/// @brief Field _FlowNoise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowNoise2, put=setStaticF__FlowNoise2)) int32_t  _FlowNoise2;

/// @brief Field _FlowNoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowNoiseChannel, put=setStaticF__FlowNoiseChannel)) int32_t  _FlowNoiseChannel;

/// @brief Field _FlowNoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowNoiseTexture, put=setStaticF__FlowNoiseTexture)) int32_t  _FlowNoiseTexture;

/// @brief Field _FlowRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowRange, put=setStaticF__FlowRange)) int32_t  _FlowRange;

/// @brief Field _FlowSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowSmoothness, put=setStaticF__FlowSmoothness)) int32_t  _FlowSmoothness;

/// @brief Field _FlowWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowWeight, put=setStaticF__FlowWeight)) int32_t  _FlowWeight;

/// @brief Field _GlobalOriginMTX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlobalOriginMTX, put=setStaticF__GlobalOriginMTX)) int32_t  _GlobalOriginMTX;

/// @brief Field _HeightCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightCurve, put=setStaticF__HeightCurve)) int32_t  _HeightCurve;

/// @brief Field _HeightNoise1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightNoise1, put=setStaticF__HeightNoise1)) int32_t  _HeightNoise1;

/// @brief Field _HeightNoise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightNoise2, put=setStaticF__HeightNoise2)) int32_t  _HeightNoise2;

/// @brief Field _HeightNoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightNoiseChannel, put=setStaticF__HeightNoiseChannel)) int32_t  _HeightNoiseChannel;

/// @brief Field _HeightNoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightNoiseTexture, put=setStaticF__HeightNoiseTexture)) int32_t  _HeightNoiseTexture;

/// @brief Field _HeightRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightRange, put=setStaticF__HeightRange)) int32_t  _HeightRange;

/// @brief Field _HeightSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightSmoothness, put=setStaticF__HeightSmoothness)) int32_t  _HeightSmoothness;

/// @brief Field _HeightWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightWeight, put=setStaticF__HeightWeight)) int32_t  _HeightWeight;

/// @brief Field _NoiseUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseUV, put=setStaticF__NoiseUV)) int32_t  _NoiseUV;

/// @brief Field _PlacementSDF, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementSDF, put=setStaticF__PlacementSDF)) int32_t  _PlacementSDF;

/// @brief Field _PlacementSDF2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementSDF2, put=setStaticF__PlacementSDF2)) int32_t  _PlacementSDF2;

/// @brief Field _PlacementSDF3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementSDF3, put=setStaticF__PlacementSDF3)) int32_t  _PlacementSDF3;

/// @brief Field _RealSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealSize, put=setStaticF__RealSize)) int32_t  _RealSize;

/// @brief Field _SDFClamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SDFClamp, put=setStaticF__SDFClamp)) int32_t  _SDFClamp;

/// @brief Field _SlopeCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeCurve, put=setStaticF__SlopeCurve)) int32_t  _SlopeCurve;

/// @brief Field _SlopeNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeNoise, put=setStaticF__SlopeNoise)) int32_t  _SlopeNoise;

/// @brief Field _SlopeNoise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeNoise2, put=setStaticF__SlopeNoise2)) int32_t  _SlopeNoise2;

/// @brief Field _SlopeNoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeNoiseChannel, put=setStaticF__SlopeNoiseChannel)) int32_t  _SlopeNoiseChannel;

/// @brief Field _SlopeNoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeNoiseTexture, put=setStaticF__SlopeNoiseTexture)) int32_t  _SlopeNoiseTexture;

/// @brief Field _SlopeRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeRange, put=setStaticF__SlopeRange)) int32_t  _SlopeRange;

/// @brief Field _SlopeSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeSmoothness, put=setStaticF__SlopeSmoothness)) int32_t  _SlopeSmoothness;

/// @brief Field _SlopeWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SlopeWeight, put=setStaticF__SlopeWeight)) int32_t  _SlopeWeight;

/// @brief Field _TerrainSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainSize, put=setStaticF__TerrainSize)) int32_t  _TerrainSize;

/// @brief Field _Transform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Transform, put=setStaticF__Transform)) int32_t  _Transform;

/// @brief Field _Weight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight, put=setStaticF__Weight)) int32_t  _Weight;

/// @brief Field _Weight2Noise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight2Noise, put=setStaticF__Weight2Noise)) int32_t  _Weight2Noise;

/// @brief Field _Weight2Noise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight2Noise2, put=setStaticF__Weight2Noise2)) int32_t  _Weight2Noise2;

/// @brief Field _Weight2NoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight2NoiseChannel, put=setStaticF__Weight2NoiseChannel)) int32_t  _Weight2NoiseChannel;

/// @brief Field _Weight2NoiseOp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight2NoiseOp, put=setStaticF__Weight2NoiseOp)) int32_t  _Weight2NoiseOp;

/// @brief Field _Weight2NoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight2NoiseTexture, put=setStaticF__Weight2NoiseTexture)) int32_t  _Weight2NoiseTexture;

/// @brief Field _Weight3Noise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight3Noise, put=setStaticF__Weight3Noise)) int32_t  _Weight3Noise;

/// @brief Field _Weight3Noise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight3Noise2, put=setStaticF__Weight3Noise2)) int32_t  _Weight3Noise2;

/// @brief Field _Weight3NoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight3NoiseChannel, put=setStaticF__Weight3NoiseChannel)) int32_t  _Weight3NoiseChannel;

/// @brief Field _Weight3NoiseOp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight3NoiseOp, put=setStaticF__Weight3NoiseOp)) int32_t  _Weight3NoiseOp;

/// @brief Field _Weight3NoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Weight3NoiseTexture, put=setStaticF__Weight3NoiseTexture)) int32_t  _Weight3NoiseTexture;

/// @brief Field _WeightNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightNoise, put=setStaticF__WeightNoise)) int32_t  _WeightNoise;

/// @brief Field _WeightNoise2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightNoise2, put=setStaticF__WeightNoise2)) int32_t  _WeightNoise2;

/// @brief Field _WeightNoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightNoiseChannel, put=setStaticF__WeightNoiseChannel)) int32_t  _WeightNoiseChannel;

/// @brief Field _WeightNoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightNoiseTexture, put=setStaticF__WeightNoiseTexture)) int32_t  _WeightNoiseTexture;

/// @brief Field angleFilter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_angleFilter, put=__cordl_internal_set_angleFilter)) ::JBooth::MicroVerseCore::FilterSet_Filter*  angleFilter;

/// @brief Field curvatureFilter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_curvatureFilter, put=__cordl_internal_set_curvatureFilter)) ::JBooth::MicroVerseCore::FilterSet_Filter*  curvatureFilter;

/// @brief Field falloffFilter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_falloffFilter, put=__cordl_internal_set_falloffFilter)) ::JBooth::MicroVerseCore::FalloffFilter*  falloffFilter;

/// @brief Field flowFilter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowFilter, put=__cordl_internal_set_flowFilter)) ::JBooth::MicroVerseCore::FilterSet_Filter*  flowFilter;

/// @brief Field heightFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightFilter, put=__cordl_internal_set_heightFilter)) ::JBooth::MicroVerseCore::FilterSet_Filter*  heightFilter;

/// @brief Field otherTextureWeight, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_otherTextureWeight, put=__cordl_internal_set_otherTextureWeight)) float_t  otherTextureWeight;

/// @brief Field slopeFilter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_slopeFilter, put=__cordl_internal_set_slopeFilter)) ::JBooth::MicroVerseCore::FilterSet_Filter*  slopeFilter;

/// @brief Field terrainLayerWeights, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_terrainLayerWeights, put=setStaticF_terrainLayerWeights)) ::ArrayW<::UnityEngine::Vector4>  terrainLayerWeights;

/// @brief Field textureFilterEnabled, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_textureFilterEnabled, put=__cordl_internal_set_textureFilterEnabled)) bool  textureFilterEnabled;

/// @brief Field textureFilters, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureFilters, put=__cordl_internal_set_textureFilters)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>*  textureFilters;

/// @brief Field version, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Field weight, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) float_t  weight;

/// @brief Field weight2Noise, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_weight2Noise, put=__cordl_internal_set_weight2Noise)) ::JBooth::MicroVerseCore::Noise*  weight2Noise;

/// @brief Field weight2NoiseOp, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight2NoiseOp, put=__cordl_internal_set_weight2NoiseOp)) ::JBooth::MicroVerseCore::FilterSet_NoiseOp  weight2NoiseOp;

/// @brief Field weight3Noise, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_weight3Noise, put=__cordl_internal_set_weight3Noise)) ::JBooth::MicroVerseCore::Noise*  weight3Noise;

/// @brief Field weight3NoiseOp, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight3NoiseOp, put=__cordl_internal_set_weight3NoiseOp)) ::JBooth::MicroVerseCore::FilterSet_NoiseOp  weight3NoiseOp;

/// @brief Field weightNoise, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_weightNoise, put=__cordl_internal_set_weightNoise)) ::JBooth::MicroVerseCore::Noise*  weightNoise;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method GetTextureWeights, addr 0x18142cf10, size 0x210, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> GetTextureWeights(::ArrayW<::UnityEngine::TerrainLayer*>  layers) ;

/// @brief Method NeedCurvatureMap, addr 0x18142d120, size 0x20, virtual false, abstract: false, final false
inline bool NeedCurvatureMap() ;

/// @brief Method NeedFlowMap, addr 0x18142d140, size 0x20, virtual false, abstract: false, final false
inline bool NeedFlowMap() ;

static inline ::JBooth::MicroVerseCore::FilterSet* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x18142d160, size 0x190, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method PrepareMaterial, addr 0x18142d2f0, size 0x1920, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Transform*  transform, ::UnityEngine::Material*  material, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

/// @brief Method PrepareSDFFilter, addr 0x18142ec10, size 0x460, virtual false, abstract: false, final false
static inline void PrepareSDFFilter(::JBooth::MicroVerseCore::Stamp_KeywordBuilder*  keywords, ::UnityEngine::Material*  material, ::UnityEngine::Transform*  transform, ::JBooth::MicroVerseCore::OcclusionData*  od, float_t  ratio, bool  sdfClamp, float_t  minTree, float_t  maxTree, float_t  minObj, float_t  maxObj, float_t  minParent, float_t  maxParent) ;

/// @brief Method PrepareTransform, addr 0x18142f070, size 0x480, virtual false, abstract: false, final false
inline void PrepareTransform(::UnityEngine::Transform*  transform, ::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material, ::System::Collections::Generic::List_1<::StringW>*  keywords, float_t  densityScale) ;

/// @brief Method ScaleAllNoises, addr 0x18142f4f0, size 0x130, virtual false, abstract: false, final false
inline void ScaleAllNoises(float_t  factor) ;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& __cordl_internal_get_angleFilter() const;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& __cordl_internal_get_angleFilter() ;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& __cordl_internal_get_curvatureFilter() const;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& __cordl_internal_get_curvatureFilter() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& __cordl_internal_get_falloffFilter() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter*& __cordl_internal_get_falloffFilter() ;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& __cordl_internal_get_flowFilter() const;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& __cordl_internal_get_flowFilter() ;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& __cordl_internal_get_heightFilter() const;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& __cordl_internal_get_heightFilter() ;

constexpr float_t const& __cordl_internal_get_otherTextureWeight() const;

constexpr float_t& __cordl_internal_get_otherTextureWeight() ;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& __cordl_internal_get_slopeFilter() const;

constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& __cordl_internal_get_slopeFilter() ;

constexpr bool const& __cordl_internal_get_textureFilterEnabled() const;

constexpr bool& __cordl_internal_get_textureFilterEnabled() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>* const& __cordl_internal_get_textureFilters() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>*& __cordl_internal_get_textureFilters() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr float_t const& __cordl_internal_get_weight() const;

constexpr float_t& __cordl_internal_get_weight() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_weight2Noise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_weight2Noise() ;

constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp const& __cordl_internal_get_weight2NoiseOp() const;

constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp& __cordl_internal_get_weight2NoiseOp() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_weight3Noise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_weight3Noise() ;

constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp const& __cordl_internal_get_weight3NoiseOp() const;

constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp& __cordl_internal_get_weight3NoiseOp() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_weightNoise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_weightNoise() ;

constexpr void __cordl_internal_set_angleFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value) ;

constexpr void __cordl_internal_set_curvatureFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value) ;

constexpr void __cordl_internal_set_falloffFilter(::JBooth::MicroVerseCore::FalloffFilter*  value) ;

constexpr void __cordl_internal_set_flowFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value) ;

constexpr void __cordl_internal_set_heightFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value) ;

constexpr void __cordl_internal_set_otherTextureWeight(float_t  value) ;

constexpr void __cordl_internal_set_slopeFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value) ;

constexpr void __cordl_internal_set_textureFilterEnabled(bool  value) ;

constexpr void __cordl_internal_set_textureFilters(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>*  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

constexpr void __cordl_internal_set_weight(float_t  value) ;

constexpr void __cordl_internal_set_weight2Noise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_weight2NoiseOp(::JBooth::MicroVerseCore::FilterSet_NoiseOp  value) ;

constexpr void __cordl_internal_set_weight3Noise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_weight3NoiseOp(::JBooth::MicroVerseCore::FilterSet_NoiseOp  value) ;

constexpr void __cordl_internal_set_weightNoise(::JBooth::MicroVerseCore::Noise*  value) ;

/// @brief Method .ctor, addr 0x18142ff20, size 0x350, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__AngleCurve() ;

static inline int32_t getStaticF__AngleNoise() ;

static inline int32_t getStaticF__AngleNoise2() ;

static inline int32_t getStaticF__AngleNoiseChannel() ;

static inline int32_t getStaticF__AngleNoiseTexture() ;

static inline int32_t getStaticF__AngleRange() ;

static inline int32_t getStaticF__AngleSmoothness() ;

static inline int32_t getStaticF__AngleWeight() ;

static inline int32_t getStaticF__CurvatureCurve() ;

static inline int32_t getStaticF__CurvatureMipBias() ;

static inline int32_t getStaticF__CurvatureNoise() ;

static inline int32_t getStaticF__CurvatureNoise2() ;

static inline int32_t getStaticF__CurvatureNoiseChannel() ;

static inline int32_t getStaticF__CurvatureNoiseTexture() ;

static inline int32_t getStaticF__CurvatureRange() ;

static inline int32_t getStaticF__CurvatureSmoothness() ;

static inline int32_t getStaticF__CurvatureWeight() ;

static inline int32_t getStaticF__DistancesFromObject() ;

static inline int32_t getStaticF__DistancesFromParent() ;

static inline int32_t getStaticF__DistancesFromTrees() ;

static inline int32_t getStaticF__FlowCurve() ;

static inline int32_t getStaticF__FlowNoise() ;

static inline int32_t getStaticF__FlowNoise2() ;

static inline int32_t getStaticF__FlowNoiseChannel() ;

static inline int32_t getStaticF__FlowNoiseTexture() ;

static inline int32_t getStaticF__FlowRange() ;

static inline int32_t getStaticF__FlowSmoothness() ;

static inline int32_t getStaticF__FlowWeight() ;

static inline int32_t getStaticF__GlobalOriginMTX() ;

static inline int32_t getStaticF__HeightCurve() ;

static inline int32_t getStaticF__HeightNoise1() ;

static inline int32_t getStaticF__HeightNoise2() ;

static inline int32_t getStaticF__HeightNoiseChannel() ;

static inline int32_t getStaticF__HeightNoiseTexture() ;

static inline int32_t getStaticF__HeightRange() ;

static inline int32_t getStaticF__HeightSmoothness() ;

static inline int32_t getStaticF__HeightWeight() ;

static inline int32_t getStaticF__NoiseUV() ;

static inline int32_t getStaticF__PlacementSDF() ;

static inline int32_t getStaticF__PlacementSDF2() ;

static inline int32_t getStaticF__PlacementSDF3() ;

static inline int32_t getStaticF__RealSize() ;

static inline int32_t getStaticF__SDFClamp() ;

static inline int32_t getStaticF__SlopeCurve() ;

static inline int32_t getStaticF__SlopeNoise() ;

static inline int32_t getStaticF__SlopeNoise2() ;

static inline int32_t getStaticF__SlopeNoiseChannel() ;

static inline int32_t getStaticF__SlopeNoiseTexture() ;

static inline int32_t getStaticF__SlopeRange() ;

static inline int32_t getStaticF__SlopeSmoothness() ;

static inline int32_t getStaticF__SlopeWeight() ;

static inline int32_t getStaticF__TerrainSize() ;

static inline int32_t getStaticF__Transform() ;

static inline int32_t getStaticF__Weight() ;

static inline int32_t getStaticF__Weight2Noise() ;

static inline int32_t getStaticF__Weight2Noise2() ;

static inline int32_t getStaticF__Weight2NoiseChannel() ;

static inline int32_t getStaticF__Weight2NoiseOp() ;

static inline int32_t getStaticF__Weight2NoiseTexture() ;

static inline int32_t getStaticF__Weight3Noise() ;

static inline int32_t getStaticF__Weight3Noise2() ;

static inline int32_t getStaticF__Weight3NoiseChannel() ;

static inline int32_t getStaticF__Weight3NoiseOp() ;

static inline int32_t getStaticF__Weight3NoiseTexture() ;

static inline int32_t getStaticF__WeightNoise() ;

static inline int32_t getStaticF__WeightNoise2() ;

static inline int32_t getStaticF__WeightNoiseChannel() ;

static inline int32_t getStaticF__WeightNoiseTexture() ;

static inline ::ArrayW<::UnityEngine::Vector4> getStaticF_terrainLayerWeights() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

static inline void setStaticF__AngleCurve(int32_t  value) ;

static inline void setStaticF__AngleNoise(int32_t  value) ;

static inline void setStaticF__AngleNoise2(int32_t  value) ;

static inline void setStaticF__AngleNoiseChannel(int32_t  value) ;

static inline void setStaticF__AngleNoiseTexture(int32_t  value) ;

static inline void setStaticF__AngleRange(int32_t  value) ;

static inline void setStaticF__AngleSmoothness(int32_t  value) ;

static inline void setStaticF__AngleWeight(int32_t  value) ;

static inline void setStaticF__CurvatureCurve(int32_t  value) ;

static inline void setStaticF__CurvatureMipBias(int32_t  value) ;

static inline void setStaticF__CurvatureNoise(int32_t  value) ;

static inline void setStaticF__CurvatureNoise2(int32_t  value) ;

static inline void setStaticF__CurvatureNoiseChannel(int32_t  value) ;

static inline void setStaticF__CurvatureNoiseTexture(int32_t  value) ;

static inline void setStaticF__CurvatureRange(int32_t  value) ;

static inline void setStaticF__CurvatureSmoothness(int32_t  value) ;

static inline void setStaticF__CurvatureWeight(int32_t  value) ;

static inline void setStaticF__DistancesFromObject(int32_t  value) ;

static inline void setStaticF__DistancesFromParent(int32_t  value) ;

static inline void setStaticF__DistancesFromTrees(int32_t  value) ;

static inline void setStaticF__FlowCurve(int32_t  value) ;

static inline void setStaticF__FlowNoise(int32_t  value) ;

static inline void setStaticF__FlowNoise2(int32_t  value) ;

static inline void setStaticF__FlowNoiseChannel(int32_t  value) ;

static inline void setStaticF__FlowNoiseTexture(int32_t  value) ;

static inline void setStaticF__FlowRange(int32_t  value) ;

static inline void setStaticF__FlowSmoothness(int32_t  value) ;

static inline void setStaticF__FlowWeight(int32_t  value) ;

static inline void setStaticF__GlobalOriginMTX(int32_t  value) ;

static inline void setStaticF__HeightCurve(int32_t  value) ;

static inline void setStaticF__HeightNoise1(int32_t  value) ;

static inline void setStaticF__HeightNoise2(int32_t  value) ;

static inline void setStaticF__HeightNoiseChannel(int32_t  value) ;

static inline void setStaticF__HeightNoiseTexture(int32_t  value) ;

static inline void setStaticF__HeightRange(int32_t  value) ;

static inline void setStaticF__HeightSmoothness(int32_t  value) ;

static inline void setStaticF__HeightWeight(int32_t  value) ;

static inline void setStaticF__NoiseUV(int32_t  value) ;

static inline void setStaticF__PlacementSDF(int32_t  value) ;

static inline void setStaticF__PlacementSDF2(int32_t  value) ;

static inline void setStaticF__PlacementSDF3(int32_t  value) ;

static inline void setStaticF__RealSize(int32_t  value) ;

static inline void setStaticF__SDFClamp(int32_t  value) ;

static inline void setStaticF__SlopeCurve(int32_t  value) ;

static inline void setStaticF__SlopeNoise(int32_t  value) ;

static inline void setStaticF__SlopeNoise2(int32_t  value) ;

static inline void setStaticF__SlopeNoiseChannel(int32_t  value) ;

static inline void setStaticF__SlopeNoiseTexture(int32_t  value) ;

static inline void setStaticF__SlopeRange(int32_t  value) ;

static inline void setStaticF__SlopeSmoothness(int32_t  value) ;

static inline void setStaticF__SlopeWeight(int32_t  value) ;

static inline void setStaticF__TerrainSize(int32_t  value) ;

static inline void setStaticF__Transform(int32_t  value) ;

static inline void setStaticF__Weight(int32_t  value) ;

static inline void setStaticF__Weight2Noise(int32_t  value) ;

static inline void setStaticF__Weight2Noise2(int32_t  value) ;

static inline void setStaticF__Weight2NoiseChannel(int32_t  value) ;

static inline void setStaticF__Weight2NoiseOp(int32_t  value) ;

static inline void setStaticF__Weight2NoiseTexture(int32_t  value) ;

static inline void setStaticF__Weight3Noise(int32_t  value) ;

static inline void setStaticF__Weight3Noise2(int32_t  value) ;

static inline void setStaticF__Weight3NoiseChannel(int32_t  value) ;

static inline void setStaticF__Weight3NoiseOp(int32_t  value) ;

static inline void setStaticF__Weight3NoiseTexture(int32_t  value) ;

static inline void setStaticF__WeightNoise(int32_t  value) ;

static inline void setStaticF__WeightNoise2(int32_t  value) ;

static inline void setStaticF__WeightNoiseChannel(int32_t  value) ;

static inline void setStaticF__WeightNoiseTexture(int32_t  value) ;

static inline void setStaticF_terrainLayerWeights(::ArrayW<::UnityEngine::Vector4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilterSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilterSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FilterSet(FilterSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilterSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilterSet(FilterSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18014};

/// @brief Field falloffFilter, offset: 0x10, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter*  ___falloffFilter;

/// @brief Field weight, offset: 0x18, size: 0x4, def value: None
 float_t  ___weight;

/// @brief Field weightNoise, offset: 0x20, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___weightNoise;

/// @brief Field weight2Noise, offset: 0x28, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___weight2Noise;

/// @brief Field weight3Noise, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___weight3Noise;

/// @brief Field weight2NoiseOp, offset: 0x38, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::FilterSet_NoiseOp  ___weight2NoiseOp;

/// @brief Field weight3NoiseOp, offset: 0x3c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::FilterSet_NoiseOp  ___weight3NoiseOp;

/// @brief Field version, offset: 0x40, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field heightFilter, offset: 0x48, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet_Filter*  ___heightFilter;

/// @brief Field slopeFilter, offset: 0x50, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet_Filter*  ___slopeFilter;

/// @brief Field angleFilter, offset: 0x58, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet_Filter*  ___angleFilter;

/// @brief Field curvatureFilter, offset: 0x60, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet_Filter*  ___curvatureFilter;

/// @brief Field flowFilter, offset: 0x68, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet_Filter*  ___flowFilter;

/// @brief Field textureFilterEnabled, offset: 0x70, size: 0x1, def value: None
 bool  ___textureFilterEnabled;

/// @brief Field otherTextureWeight, offset: 0x74, size: 0x4, def value: None
 float_t  ___otherTextureWeight;

/// @brief Field textureFilters, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>*  ___textureFilters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___falloffFilter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___weightNoise) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___weight2Noise) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___weight3Noise) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___weight2NoiseOp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___weight3NoiseOp) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___heightFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___slopeFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___angleFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___curvatureFilter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___flowFilter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___textureFilterEnabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___otherTextureWeight) == 0x74, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::FilterSet, ___textureFilters) == 0x78, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FilterSet) == 0x80, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
