#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplinePath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__SplineRenderer_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplinePath)
namespace JBooth::MicroVerseCore {
class Easing;
}
namespace JBooth::MicroVerseCore {
class HeightmapData;
}
namespace JBooth::MicroVerseCore {
class IHeightModifier;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class ITextureModifier;
}
namespace JBooth::MicroVerseCore {
class Noise;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
struct SplinePath_CombineMode;
}
namespace JBooth::MicroVerseCore {
struct SplinePath_SDFRes;
}
namespace JBooth::MicroVerseCore {
struct SplinePath_SearchQuality;
}
namespace JBooth::MicroVerseCore {
class SplinePath_SplineWidthData;
}
namespace JBooth::MicroVerseCore {
class SplineRenderer;
}
namespace JBooth::MicroVerseCore {
class TextureData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
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
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct SplinePath_CombineMode;
}
namespace JBooth::MicroVerseCore {
struct SplinePath_SDFRes;
}
namespace JBooth::MicroVerseCore {
struct SplinePath_SearchQuality;
}
namespace JBooth::MicroVerseCore {
class SplinePath;
}
namespace JBooth::MicroVerseCore {
class SplinePath_SplineWidthData;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::SplinePath_CombineMode);
MARK_VAL_T(::JBooth::MicroVerseCore::SplinePath_SDFRes);
MARK_VAL_T(::JBooth::MicroVerseCore::SplinePath_SearchQuality);
MARK_REF_T(::JBooth::MicroVerseCore::SplinePath*);
MARK_REF_T(::JBooth::MicroVerseCore::SplinePath_SplineWidthData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplinePath_CombineMode, "JBooth.MicroVerseCore", "SplinePath/CombineMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplinePath_SDFRes, "JBooth.MicroVerseCore", "SplinePath/SDFRes");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplinePath_SearchQuality, "JBooth.MicroVerseCore", "SplinePath/SearchQuality");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplinePath*, "JBooth.MicroVerseCore", "SplinePath");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplinePath_SplineWidthData*, "JBooth.MicroVerseCore", "SplinePath/SplineWidthData");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.SplinePath/CombineMode
struct CORDL_TYPE SplinePath_CombineMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplinePath_CombineMode_Unwrapped
enum struct __SplinePath_CombineMode_Unwrapped : int32_t {
__E_Override = static_cast<int32_t>(0x0),
__E_Max = static_cast<int32_t>(0x1),
__E_Min = static_cast<int32_t>(0x2),
__E_Blend = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplinePath_CombineMode_Unwrapped () const noexcept {
return static_cast<__SplinePath_CombineMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplinePath_CombineMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplinePath_CombineMode(int32_t  value__) noexcept;

/// @brief Field Blend value: I32(9)
static ::JBooth::MicroVerseCore::SplinePath_CombineMode const Blend;

/// @brief Field Max value: I32(1)
static ::JBooth::MicroVerseCore::SplinePath_CombineMode const Max;

/// @brief Field Min value: I32(2)
static ::JBooth::MicroVerseCore::SplinePath_CombineMode const Min;

/// @brief Field Override value: I32(0)
static ::JBooth::MicroVerseCore::SplinePath_CombineMode const Override;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath_CombineMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplinePath_CombineMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.SplinePath/SDFRes
struct CORDL_TYPE SplinePath_SDFRes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplinePath_SDFRes_Unwrapped
enum struct __SplinePath_SDFRes_Unwrapped : int32_t {
__E_k256 = static_cast<int32_t>(0x100),
__E_k512 = static_cast<int32_t>(0x200),
__E_k1024 = static_cast<int32_t>(0x400),
__E_k2048 = static_cast<int32_t>(0x800),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplinePath_SDFRes_Unwrapped () const noexcept {
return static_cast<__SplinePath_SDFRes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplinePath_SDFRes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplinePath_SDFRes(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17970};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k1024 value: I32(1024)
static ::JBooth::MicroVerseCore::SplinePath_SDFRes const k1024;

/// @brief Field k2048 value: I32(2048)
static ::JBooth::MicroVerseCore::SplinePath_SDFRes const k2048;

/// @brief Field k256 value: I32(256)
static ::JBooth::MicroVerseCore::SplinePath_SDFRes const k256;

/// @brief Field k512 value: I32(512)
static ::JBooth::MicroVerseCore::SplinePath_SDFRes const k512;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath_SDFRes, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplinePath_SDFRes) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.SplinePath/SearchQuality
struct CORDL_TYPE SplinePath_SearchQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplinePath_SearchQuality_Unwrapped
enum struct __SplinePath_SearchQuality_Unwrapped : int32_t {
__E_VeryLow = static_cast<int32_t>(0x40),
__E_Low = static_cast<int32_t>(0x80),
__E_Medium = static_cast<int32_t>(0x100),
__E_High = static_cast<int32_t>(0x200),
__E_VeryHigh = static_cast<int32_t>(0x400),
__E_ExtremelyHigh = static_cast<int32_t>(0x800),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplinePath_SearchQuality_Unwrapped () const noexcept {
return static_cast<__SplinePath_SearchQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplinePath_SearchQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplinePath_SearchQuality(int32_t  value__) noexcept;

/// @brief Field ExtremelyHigh value: I32(2048)
static ::JBooth::MicroVerseCore::SplinePath_SearchQuality const ExtremelyHigh;

/// @brief Field High value: I32(512)
static ::JBooth::MicroVerseCore::SplinePath_SearchQuality const High;

/// @brief Field Low value: I32(128)
static ::JBooth::MicroVerseCore::SplinePath_SearchQuality const Low;

/// @brief Field Medium value: I32(256)
static ::JBooth::MicroVerseCore::SplinePath_SearchQuality const Medium;

/// @brief Field VeryHigh value: I32(1024)
static ::JBooth::MicroVerseCore::SplinePath_SearchQuality const VeryHigh;

/// @brief Field VeryLow value: I32(64)
static ::JBooth::MicroVerseCore::SplinePath_SearchQuality const VeryLow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17971};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath_SearchQuality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplinePath_SearchQuality) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SplinePath/SplineWidthData
class CORDL_TYPE SplinePath_SplineWidthData : public ::System::Object {
public:
// Declarations
/// @brief Field widthData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_widthData, put=__cordl_internal_set_widthData)) ::UnityEngine::Splines::SplineData_1<float_t>*  widthData;

static inline ::JBooth::MicroVerseCore::SplinePath_SplineWidthData* New_ctor() ;

constexpr ::UnityEngine::Splines::SplineData_1<float_t>* const& __cordl_internal_get_widthData() const;

constexpr ::UnityEngine::Splines::SplineData_1<float_t>*& __cordl_internal_get_widthData() ;

constexpr void __cordl_internal_set_widthData(::UnityEngine::Splines::SplineData_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x181426400, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePath_SplineWidthData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePath_SplineWidthData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePath_SplineWidthData(SplinePath_SplineWidthData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePath_SplineWidthData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePath_SplineWidthData(SplinePath_SplineWidthData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17972};

/// @brief Field widthData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineData_1<float_t>*  ___widthData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath_SplineWidthData, ___widthData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplinePath_SplineWidthData) == 0x18, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.SplinePath::CombineMode, JBooth.MicroVerseCore.SplinePath::SDFRes, JBooth.MicroVerseCore.SplinePath::SearchQuality, JBooth.MicroVerseCore.SplineRenderer::RenderDesc, JBooth.MicroVerseCore.Stamp, UnityEngine.Bounds, UnityEngine.RenderBuffer
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SplinePath
class CORDL_TYPE SplinePath : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using CombineMode = ::JBooth::MicroVerseCore::SplinePath_CombineMode;

using SDFRes = ::JBooth::MicroVerseCore::SplinePath_SDFRes;

using SearchQuality = ::JBooth::MicroVerseCore::SplinePath_SearchQuality;

using SplineWidthData = ::JBooth::MicroVerseCore::SplinePath_SplineWidthData;

/// @brief Field _AlphaMapSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaMapSize, put=setStaticF__AlphaMapSize)) int32_t  _AlphaMapSize;

/// @brief Field _Blend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Blend, put=setStaticF__Blend)) int32_t  _Blend;

/// @brief Field _Channel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Channel, put=setStaticF__Channel)) int32_t  _Channel;

/// @brief Field _CombineBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CombineBlend, put=setStaticF__CombineBlend)) int32_t  _CombineBlend;

/// @brief Field _CombineMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CombineMode, put=setStaticF__CombineMode)) int32_t  _CombineMode;

/// @brief Field _DetailSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailSmoothness, put=setStaticF__DetailSmoothness)) int32_t  _DetailSmoothness;

/// @brief Field _DetailWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailWidth, put=setStaticF__DetailWidth)) int32_t  _DetailWidth;

/// @brief Field _EmbankmentChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmbankmentChannel, put=setStaticF__EmbankmentChannel)) int32_t  _EmbankmentChannel;

/// @brief Field _HeightMapSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightMapSize, put=setStaticF__HeightMapSize)) int32_t  _HeightMapSize;

/// @brief Field _HeightSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightSmoothness, put=setStaticF__HeightSmoothness)) int32_t  _HeightSmoothness;

/// @brief Field _HeightWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightWidth, put=setStaticF__HeightWidth)) int32_t  _HeightWidth;

/// @brief Field _IndexMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndexMap, put=setStaticF__IndexMap)) int32_t  _IndexMap;

/// @brief Field _NoiseParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseParams, put=setStaticF__NoiseParams)) int32_t  _NoiseParams;

/// @brief Field _NoiseParams2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseParams2, put=setStaticF__NoiseParams2)) int32_t  _NoiseParams2;

/// @brief Field _NoiseUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseUV, put=setStaticF__NoiseUV)) int32_t  _NoiseUV;

/// @brief Field _RealHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealHeight, put=setStaticF__RealHeight)) int32_t  _RealHeight;

/// @brief Field _Smoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Smoothness, put=setStaticF__Smoothness)) int32_t  _Smoothness;

/// @brief Field _SplatNoiseChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SplatNoiseChannel, put=setStaticF__SplatNoiseChannel)) int32_t  _SplatNoiseChannel;

/// @brief Field _SplatNoiseTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SplatNoiseTexture, put=setStaticF__SplatNoiseTexture)) int32_t  _SplatNoiseTexture;

/// @brief Field _SplatSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SplatSmoothness, put=setStaticF__SplatSmoothness)) int32_t  _SplatSmoothness;

/// @brief Field _SplatWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SplatWeight, put=setStaticF__SplatWeight)) int32_t  _SplatWeight;

/// @brief Field _SplatWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SplatWidth, put=setStaticF__SplatWidth)) int32_t  _SplatWidth;

/// @brief Field _SplineSDF, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SplineSDF, put=setStaticF__SplineSDF)) int32_t  _SplineSDF;

/// @brief Field _TerrainHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainHeight, put=setStaticF__TerrainHeight)) int32_t  _TerrainHeight;

/// @brief Field _TreeSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TreeSmoothness, put=setStaticF__TreeSmoothness)) int32_t  _TreeSmoothness;

/// @brief Field _TreeWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TreeWidth, put=setStaticF__TreeWidth)) int32_t  _TreeWidth;

/// @brief Field _Trench, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Trench, put=setStaticF__Trench)) int32_t  _Trench;

/// @brief Field _TrenchCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TrenchCurve, put=setStaticF__TrenchCurve)) int32_t  _TrenchCurve;

/// @brief Field _WeightMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightMap, put=setStaticF__WeightMap)) int32_t  _WeightMap;

/// @brief Field _Width, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Width, put=setStaticF__Width)) int32_t  _Width;

/// @brief Field blend, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_blend, put=__cordl_internal_set_blend)) float_t  blend;

/// @brief Field bounds, offset 0x170, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field cachedSplineDetailWeight, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedSplineDetailWeight, put=__cordl_internal_set_cachedSplineDetailWeight)) ::UnityW<::UnityEngine::Texture2D>  cachedSplineDetailWeight;

/// @brief Field cachedSplineTextureWeight, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedSplineTextureWeight, put=__cordl_internal_set_cachedSplineTextureWeight)) ::UnityW<::UnityEngine::Texture2D>  cachedSplineTextureWeight;

/// @brief Field cachedSplineTreeWeight, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedSplineTreeWeight, put=__cordl_internal_set_cachedSplineTreeWeight)) ::UnityW<::UnityEngine::Texture2D>  cachedSplineTreeWeight;

/// @brief Field cachedSplineTrenchWeight, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedSplineTrenchWeight, put=__cordl_internal_set_cachedSplineTrenchWeight)) ::UnityW<::UnityEngine::Texture2D>  cachedSplineTrenchWeight;

/// @brief Field clearDetails, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearDetails, put=__cordl_internal_set_clearDetails)) bool  clearDetails;

/// @brief Field clearObjects, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearObjects, put=__cordl_internal_set_clearObjects)) bool  clearObjects;

/// @brief Field clearTrees, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearTrees, put=__cordl_internal_set_clearTrees)) bool  clearTrees;

/// @brief Field detailCurve, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailCurve, put=__cordl_internal_set_detailCurve)) ::UnityEngine::AnimationCurve*  detailCurve;

/// @brief Field detailSmoothness, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailSmoothness, put=__cordl_internal_set_detailSmoothness)) float_t  detailSmoothness;

/// @brief Field detailWidth, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailWidth, put=__cordl_internal_set_detailWidth)) float_t  detailWidth;

/// @brief Field embankmentChannelIndex, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_embankmentChannelIndex, put=__cordl_internal_set_embankmentChannelIndex)) int32_t  embankmentChannelIndex;

/// @brief Field embankmentEasing, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_embankmentEasing, put=__cordl_internal_set_embankmentEasing)) ::JBooth::MicroVerseCore::Easing*  embankmentEasing;

/// @brief Field embankmentLayer, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_embankmentLayer, put=__cordl_internal_set_embankmentLayer)) ::UnityW<::UnityEngine::TerrainLayer>  embankmentLayer;

/// @brief Field embankmentNoise, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_embankmentNoise, put=__cordl_internal_set_embankmentNoise)) ::JBooth::MicroVerseCore::Noise*  embankmentNoise;

/// @brief Field heightBlendMode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightBlendMode, put=__cordl_internal_set_heightBlendMode)) ::JBooth::MicroVerseCore::SplinePath_CombineMode  heightBlendMode;

/// @brief Field heightMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_heightMat, put=setStaticF_heightMat)) ::UnityW<::UnityEngine::Material>  heightMat;

/// @brief Field heightNoise, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightNoise, put=__cordl_internal_set_heightNoise)) ::JBooth::MicroVerseCore::Noise*  heightNoise;

/// @brief Field layer, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::UnityW<::UnityEngine::TerrainLayer>  layer;

/// @brief Field mainChannelIndex, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_mainChannelIndex, put=__cordl_internal_set_mainChannelIndex)) int32_t  mainChannelIndex;

/// @brief Field modifyHeightMap, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyHeightMap, put=__cordl_internal_set_modifyHeightMap)) bool  modifyHeightMap;

/// @brief Field modifySplatMap, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifySplatMap, put=__cordl_internal_set_modifySplatMap)) bool  modifySplatMap;

/// @brief Field multiSpline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiSpline, put=__cordl_internal_set_multiSpline)) ::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>  multiSpline;

/// @brief Field multipleRenderBuffers, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_multipleRenderBuffers, put=__cordl_internal_set_multipleRenderBuffers)) ::ArrayW<::UnityEngine::RenderBuffer>  multipleRenderBuffers;

/// @brief Field objectSmoothness, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_objectSmoothness, put=__cordl_internal_set_objectSmoothness)) float_t  objectSmoothness;

/// @brief Field objectWidth, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_objectWidth, put=__cordl_internal_set_objectWidth)) float_t  objectWidth;

/// @brief Field occludeHeightMod, offset 0x10c, size 0x1 
 __declspec(property(get=__cordl_internal_get_occludeHeightMod, put=__cordl_internal_set_occludeHeightMod)) bool  occludeHeightMod;

/// @brief Field occludeHeightSmoothness, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeHeightSmoothness, put=__cordl_internal_set_occludeHeightSmoothness)) float_t  occludeHeightSmoothness;

/// @brief Field occludeHeightWidth, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeHeightWidth, put=__cordl_internal_set_occludeHeightWidth)) float_t  occludeHeightWidth;

/// @brief Field occludeTextureMod, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_occludeTextureMod, put=__cordl_internal_set_occludeTextureMod)) bool  occludeTextureMod;

/// @brief Field occludeTextureSmoothness, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeTextureSmoothness, put=__cordl_internal_set_occludeTextureSmoothness)) float_t  occludeTextureSmoothness;

/// @brief Field occludeTextureWidth, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeTextureWidth, put=__cordl_internal_set_occludeTextureWidth)) float_t  occludeTextureWidth;

/// @brief Field positionNoise, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionNoise, put=__cordl_internal_set_positionNoise)) ::JBooth::MicroVerseCore::Noise*  positionNoise;

/// @brief Field sdfRes, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_sdfRes, put=__cordl_internal_set_sdfRes)) ::JBooth::MicroVerseCore::SplinePath_SDFRes  sdfRes;

/// @brief Field sdfToMaskMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sdfToMaskMat, put=setStaticF_sdfToMaskMat)) ::UnityW<::UnityEngine::Material>  sdfToMaskMat;

/// @brief Field sdfToMaskShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sdfToMaskShader, put=setStaticF_sdfToMaskShader)) ::UnityW<::UnityEngine::Shader>  sdfToMaskShader;

/// @brief Field searchQuality, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_searchQuality, put=__cordl_internal_set_searchQuality)) ::JBooth::MicroVerseCore::SplinePath_SearchQuality  searchQuality;

/// @brief Field smoothness, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothness, put=__cordl_internal_set_smoothness)) float_t  smoothness;

/// @brief Field splatMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_splatMat, put=setStaticF_splatMat)) ::UnityW<::UnityEngine::Material>  splatMat;

/// @brief Field splatNoise, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_splatNoise, put=__cordl_internal_set_splatNoise)) ::JBooth::MicroVerseCore::Noise*  splatNoise;

/// @brief Field splatSmoothness, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_splatSmoothness, put=__cordl_internal_set_splatSmoothness)) float_t  splatSmoothness;

/// @brief Field splatWeight, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_splatWeight, put=__cordl_internal_set_splatWeight)) float_t  splatWeight;

/// @brief Field splatWidth, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_splatWidth, put=__cordl_internal_set_splatWidth)) float_t  splatWidth;

/// @brief Field spline, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  spline;

/// @brief Field splineRenderers, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineRenderers, put=__cordl_internal_set_splineRenderers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  splineRenderers;

/// @brief Field splineWidthEasing, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineWidthEasing, put=__cordl_internal_set_splineWidthEasing)) ::JBooth::MicroVerseCore::Easing*  splineWidthEasing;

/// @brief Field splineWidths, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineWidths, put=__cordl_internal_set_splineWidths)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  splineWidths;

/// @brief Field textureCurve, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureCurve, put=__cordl_internal_set_textureCurve)) ::UnityEngine::AnimationCurve*  textureCurve;

/// @brief Field treatAsSplineArea, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_treatAsSplineArea, put=__cordl_internal_set_treatAsSplineArea)) bool  treatAsSplineArea;

/// @brief Field treeCurve, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeCurve, put=__cordl_internal_set_treeCurve)) ::UnityEngine::AnimationCurve*  treeCurve;

/// @brief Field treeSmoothness, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_treeSmoothness, put=__cordl_internal_set_treeSmoothness)) float_t  treeSmoothness;

/// @brief Field treeWidth, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_treeWidth, put=__cordl_internal_set_treeWidth)) float_t  treeWidth;

/// @brief Field trench, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_trench, put=__cordl_internal_set_trench)) float_t  trench;

/// @brief Field trenchCurve, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_trenchCurve, put=__cordl_internal_set_trenchCurve)) ::UnityEngine::AnimationCurve*  trenchCurve;

/// @brief Field useDetailCurve, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_useDetailCurve, put=__cordl_internal_set_useDetailCurve)) bool  useDetailCurve;

/// @brief Field useTextureCurve, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTextureCurve, put=__cordl_internal_set_useTextureCurve)) bool  useTextureCurve;

/// @brief Field useTreeCurve, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTreeCurve, put=__cordl_internal_set_useTreeCurve)) bool  useTreeCurve;

/// @brief Field useTrenchCurve, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTrenchCurve, put=__cordl_internal_set_useTrenchCurve)) bool  useTrenchCurve;

/// @brief Field width, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) float_t  width;

/// @brief Field widthNoise, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_widthNoise, put=__cordl_internal_set_widthNoise)) ::JBooth::MicroVerseCore::Noise*  widthNoise;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHeightModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITextureModifier*() noexcept;

/// @brief Method ApplyHeightStamp, addr 0x18141f650, size 0xc40, virtual true, abstract: false, final true
inline bool ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTextureStamp, addr 0x181420290, size 0x4f0, virtual true, abstract: false, final true
inline bool ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ClearCachedSplineDetailCurve, addr 0x181420780, size 0x40, virtual false, abstract: false, final false
inline void ClearCachedSplineDetailCurve() ;

/// @brief Method ClearCachedSplineTextureCurve, addr 0x1814207c0, size 0x40, virtual false, abstract: false, final false
inline void ClearCachedSplineTextureCurve() ;

/// @brief Method ClearCachedSplineTreeCurve, addr 0x181420800, size 0x40, virtual false, abstract: false, final false
inline void ClearCachedSplineTreeCurve() ;

/// @brief Method ClearCachedSplineTrenchCurve, addr 0x181420840, size 0x40, virtual false, abstract: false, final false
inline void ClearCachedSplineTrenchCurve() ;

/// @brief Method ClearSplineRenders, addr 0x181420880, size 0x580, virtual false, abstract: false, final false
inline void ClearSplineRenders(::System::Nullable_1<::UnityEngine::Bounds>  bounds) ;

/// @brief Method ComputeBounds, addr 0x181420e00, size 0x880, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds ComputeBounds(::UnityEngine::Splines::SplineContainer*  spline, float_t  expand) ;

/// @brief Method ComputeMaxSDF, addr 0x181421680, size 0x2b0, virtual false, abstract: false, final false
inline float_t ComputeMaxSDF() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x181421930, size 0x260, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetSplineRenderer, addr 0x181421b90, size 0x340, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::SplineRenderer* GetSplineRenderer(::UnityEngine::Terrain*  terrain) ;

/// @brief Method Initialize, addr 0x181421ed0, size 0x150, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InqTerrainLayers, addr 0x181422020, size 0x110, virtual true, abstract: false, final true
inline void InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  layers) ;

/// @brief Method NeedCurvatureMap, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedFlowMap, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

static inline ::JBooth::MicroVerseCore::SplinePath* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181422130, size 0xf0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x181422220, size 0x50, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181422270, size 0x50, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PrepareMaterial, addr 0x181422700, size 0x4e0, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

/// @brief Method PrepareMaterial, addr 0x1814222c0, size 0x440, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

/// @brief Method UpdateCachedDetailWeight, addr 0x181422be0, size 0x180, virtual false, abstract: false, final false
inline void UpdateCachedDetailWeight() ;

/// @brief Method UpdateCachedTextureWeight, addr 0x181422d60, size 0x180, virtual false, abstract: false, final false
inline void UpdateCachedTextureWeight() ;

/// @brief Method UpdateCachedTreeWeight, addr 0x181422ee0, size 0x180, virtual false, abstract: false, final false
inline void UpdateCachedTreeWeight() ;

/// @brief Method UpdateCachedTrenchCurve, addr 0x181423060, size 0x180, virtual false, abstract: false, final false
inline void UpdateCachedTrenchCurve() ;

/// @brief Method UpdateSplineSDFs, addr 0x1814231e0, size 0x40, virtual false, abstract: false, final false
inline void UpdateSplineSDFs() ;

constexpr float_t const& __cordl_internal_get_blend() const;

constexpr float_t& __cordl_internal_get_blend() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cachedSplineDetailWeight() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cachedSplineDetailWeight() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cachedSplineTextureWeight() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cachedSplineTextureWeight() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cachedSplineTreeWeight() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cachedSplineTreeWeight() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cachedSplineTrenchWeight() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cachedSplineTrenchWeight() ;

constexpr bool const& __cordl_internal_get_clearDetails() const;

constexpr bool& __cordl_internal_get_clearDetails() ;

constexpr bool const& __cordl_internal_get_clearObjects() const;

constexpr bool& __cordl_internal_get_clearObjects() ;

constexpr bool const& __cordl_internal_get_clearTrees() const;

constexpr bool& __cordl_internal_get_clearTrees() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_detailCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_detailCurve() ;

constexpr float_t const& __cordl_internal_get_detailSmoothness() const;

constexpr float_t& __cordl_internal_get_detailSmoothness() ;

constexpr float_t const& __cordl_internal_get_detailWidth() const;

constexpr float_t& __cordl_internal_get_detailWidth() ;

constexpr int32_t const& __cordl_internal_get_embankmentChannelIndex() const;

constexpr int32_t& __cordl_internal_get_embankmentChannelIndex() ;

constexpr ::JBooth::MicroVerseCore::Easing* const& __cordl_internal_get_embankmentEasing() const;

constexpr ::JBooth::MicroVerseCore::Easing*& __cordl_internal_get_embankmentEasing() ;

constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_embankmentLayer() const;

constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_embankmentLayer() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_embankmentNoise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_embankmentNoise() ;

constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode const& __cordl_internal_get_heightBlendMode() const;

constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode& __cordl_internal_get_heightBlendMode() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_heightNoise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_heightNoise() ;

constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_layer() const;

constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_layer() ;

constexpr int32_t const& __cordl_internal_get_mainChannelIndex() const;

constexpr int32_t& __cordl_internal_get_mainChannelIndex() ;

constexpr bool const& __cordl_internal_get_modifyHeightMap() const;

constexpr bool& __cordl_internal_get_modifyHeightMap() ;

constexpr bool const& __cordl_internal_get_modifySplatMap() const;

constexpr bool& __cordl_internal_get_modifySplatMap() ;

constexpr ::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc> const& __cordl_internal_get_multiSpline() const;

constexpr ::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>& __cordl_internal_get_multiSpline() ;

constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& __cordl_internal_get_multipleRenderBuffers() const;

constexpr ::ArrayW<::UnityEngine::RenderBuffer>& __cordl_internal_get_multipleRenderBuffers() ;

constexpr float_t const& __cordl_internal_get_objectSmoothness() const;

constexpr float_t& __cordl_internal_get_objectSmoothness() ;

constexpr float_t const& __cordl_internal_get_objectWidth() const;

constexpr float_t& __cordl_internal_get_objectWidth() ;

constexpr bool const& __cordl_internal_get_occludeHeightMod() const;

constexpr bool& __cordl_internal_get_occludeHeightMod() ;

constexpr float_t const& __cordl_internal_get_occludeHeightSmoothness() const;

constexpr float_t& __cordl_internal_get_occludeHeightSmoothness() ;

constexpr float_t const& __cordl_internal_get_occludeHeightWidth() const;

constexpr float_t& __cordl_internal_get_occludeHeightWidth() ;

constexpr bool const& __cordl_internal_get_occludeTextureMod() const;

constexpr bool& __cordl_internal_get_occludeTextureMod() ;

constexpr float_t const& __cordl_internal_get_occludeTextureSmoothness() const;

constexpr float_t& __cordl_internal_get_occludeTextureSmoothness() ;

constexpr float_t const& __cordl_internal_get_occludeTextureWidth() const;

constexpr float_t& __cordl_internal_get_occludeTextureWidth() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_positionNoise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_positionNoise() ;

constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes const& __cordl_internal_get_sdfRes() const;

constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes& __cordl_internal_get_sdfRes() ;

constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality const& __cordl_internal_get_searchQuality() const;

constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality& __cordl_internal_get_searchQuality() ;

constexpr float_t const& __cordl_internal_get_smoothness() const;

constexpr float_t& __cordl_internal_get_smoothness() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_splatNoise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_splatNoise() ;

constexpr float_t const& __cordl_internal_get_splatSmoothness() const;

constexpr float_t& __cordl_internal_get_splatSmoothness() ;

constexpr float_t const& __cordl_internal_get_splatWeight() const;

constexpr float_t& __cordl_internal_get_splatWeight() ;

constexpr float_t const& __cordl_internal_get_splatWidth() const;

constexpr float_t& __cordl_internal_get_splatWidth() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_spline() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>* const& __cordl_internal_get_splineRenderers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*& __cordl_internal_get_splineRenderers() ;

constexpr ::JBooth::MicroVerseCore::Easing* const& __cordl_internal_get_splineWidthEasing() const;

constexpr ::JBooth::MicroVerseCore::Easing*& __cordl_internal_get_splineWidthEasing() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>* const& __cordl_internal_get_splineWidths() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*& __cordl_internal_get_splineWidths() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_textureCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_textureCurve() ;

constexpr bool const& __cordl_internal_get_treatAsSplineArea() const;

constexpr bool& __cordl_internal_get_treatAsSplineArea() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_treeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_treeCurve() ;

constexpr float_t const& __cordl_internal_get_treeSmoothness() const;

constexpr float_t& __cordl_internal_get_treeSmoothness() ;

constexpr float_t const& __cordl_internal_get_treeWidth() const;

constexpr float_t& __cordl_internal_get_treeWidth() ;

constexpr float_t const& __cordl_internal_get_trench() const;

constexpr float_t& __cordl_internal_get_trench() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_trenchCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_trenchCurve() ;

constexpr bool const& __cordl_internal_get_useDetailCurve() const;

constexpr bool& __cordl_internal_get_useDetailCurve() ;

constexpr bool const& __cordl_internal_get_useTextureCurve() const;

constexpr bool& __cordl_internal_get_useTextureCurve() ;

constexpr bool const& __cordl_internal_get_useTreeCurve() const;

constexpr bool& __cordl_internal_get_useTreeCurve() ;

constexpr bool const& __cordl_internal_get_useTrenchCurve() const;

constexpr bool& __cordl_internal_get_useTrenchCurve() ;

constexpr float_t const& __cordl_internal_get_width() const;

constexpr float_t& __cordl_internal_get_width() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_widthNoise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_widthNoise() ;

constexpr void __cordl_internal_set_blend(float_t  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_cachedSplineDetailWeight(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_cachedSplineTextureWeight(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_cachedSplineTreeWeight(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_cachedSplineTrenchWeight(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_clearDetails(bool  value) ;

constexpr void __cordl_internal_set_clearObjects(bool  value) ;

constexpr void __cordl_internal_set_clearTrees(bool  value) ;

constexpr void __cordl_internal_set_detailCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_detailSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_detailWidth(float_t  value) ;

constexpr void __cordl_internal_set_embankmentChannelIndex(int32_t  value) ;

constexpr void __cordl_internal_set_embankmentEasing(::JBooth::MicroVerseCore::Easing*  value) ;

constexpr void __cordl_internal_set_embankmentLayer(::UnityW<::UnityEngine::TerrainLayer>  value) ;

constexpr void __cordl_internal_set_embankmentNoise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_heightBlendMode(::JBooth::MicroVerseCore::SplinePath_CombineMode  value) ;

constexpr void __cordl_internal_set_heightNoise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value) ;

constexpr void __cordl_internal_set_mainChannelIndex(int32_t  value) ;

constexpr void __cordl_internal_set_modifyHeightMap(bool  value) ;

constexpr void __cordl_internal_set_modifySplatMap(bool  value) ;

constexpr void __cordl_internal_set_multiSpline(::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>  value) ;

constexpr void __cordl_internal_set_multipleRenderBuffers(::ArrayW<::UnityEngine::RenderBuffer>  value) ;

constexpr void __cordl_internal_set_objectSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_objectWidth(float_t  value) ;

constexpr void __cordl_internal_set_occludeHeightMod(bool  value) ;

constexpr void __cordl_internal_set_occludeHeightSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_occludeHeightWidth(float_t  value) ;

constexpr void __cordl_internal_set_occludeTextureMod(bool  value) ;

constexpr void __cordl_internal_set_occludeTextureSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_occludeTextureWidth(float_t  value) ;

constexpr void __cordl_internal_set_positionNoise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_sdfRes(::JBooth::MicroVerseCore::SplinePath_SDFRes  value) ;

constexpr void __cordl_internal_set_searchQuality(::JBooth::MicroVerseCore::SplinePath_SearchQuality  value) ;

constexpr void __cordl_internal_set_smoothness(float_t  value) ;

constexpr void __cordl_internal_set_splatNoise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_splatSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_splatWeight(float_t  value) ;

constexpr void __cordl_internal_set_splatWidth(float_t  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_splineRenderers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  value) ;

constexpr void __cordl_internal_set_splineWidthEasing(::JBooth::MicroVerseCore::Easing*  value) ;

constexpr void __cordl_internal_set_splineWidths(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  value) ;

constexpr void __cordl_internal_set_textureCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_treatAsSplineArea(bool  value) ;

constexpr void __cordl_internal_set_treeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_treeSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_treeWidth(float_t  value) ;

constexpr void __cordl_internal_set_trench(float_t  value) ;

constexpr void __cordl_internal_set_trenchCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_useDetailCurve(bool  value) ;

constexpr void __cordl_internal_set_useTextureCurve(bool  value) ;

constexpr void __cordl_internal_set_useTreeCurve(bool  value) ;

constexpr void __cordl_internal_set_useTrenchCurve(bool  value) ;

constexpr void __cordl_internal_set_width(float_t  value) ;

constexpr void __cordl_internal_set_widthNoise(::JBooth::MicroVerseCore::Noise*  value) ;

/// @brief Method .ctor, addr 0x181423650, size 0x350, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__AlphaMapSize() ;

static inline int32_t getStaticF__Blend() ;

static inline int32_t getStaticF__Channel() ;

static inline int32_t getStaticF__CombineBlend() ;

static inline int32_t getStaticF__CombineMode() ;

static inline int32_t getStaticF__DetailSmoothness() ;

static inline int32_t getStaticF__DetailWidth() ;

static inline int32_t getStaticF__EmbankmentChannel() ;

static inline int32_t getStaticF__HeightMapSize() ;

static inline int32_t getStaticF__HeightSmoothness() ;

static inline int32_t getStaticF__HeightWidth() ;

static inline int32_t getStaticF__IndexMap() ;

static inline int32_t getStaticF__NoiseParams() ;

static inline int32_t getStaticF__NoiseParams2() ;

static inline int32_t getStaticF__NoiseUV() ;

static inline int32_t getStaticF__RealHeight() ;

static inline int32_t getStaticF__Smoothness() ;

static inline int32_t getStaticF__SplatNoiseChannel() ;

static inline int32_t getStaticF__SplatNoiseTexture() ;

static inline int32_t getStaticF__SplatSmoothness() ;

static inline int32_t getStaticF__SplatWeight() ;

static inline int32_t getStaticF__SplatWidth() ;

static inline int32_t getStaticF__SplineSDF() ;

static inline int32_t getStaticF__TerrainHeight() ;

static inline int32_t getStaticF__TreeSmoothness() ;

static inline int32_t getStaticF__TreeWidth() ;

static inline int32_t getStaticF__Trench() ;

static inline int32_t getStaticF__TrenchCurve() ;

static inline int32_t getStaticF__WeightMap() ;

static inline int32_t getStaticF__Width() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_heightMat() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_sdfToMaskMat() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_sdfToMaskShader() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_splatMat() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* i___JBooth__MicroVerseCore__IHeightModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* i___JBooth__MicroVerseCore__ITextureModifier() noexcept;

static inline void setStaticF__AlphaMapSize(int32_t  value) ;

static inline void setStaticF__Blend(int32_t  value) ;

static inline void setStaticF__Channel(int32_t  value) ;

static inline void setStaticF__CombineBlend(int32_t  value) ;

static inline void setStaticF__CombineMode(int32_t  value) ;

static inline void setStaticF__DetailSmoothness(int32_t  value) ;

static inline void setStaticF__DetailWidth(int32_t  value) ;

static inline void setStaticF__EmbankmentChannel(int32_t  value) ;

static inline void setStaticF__HeightMapSize(int32_t  value) ;

static inline void setStaticF__HeightSmoothness(int32_t  value) ;

static inline void setStaticF__HeightWidth(int32_t  value) ;

static inline void setStaticF__IndexMap(int32_t  value) ;

static inline void setStaticF__NoiseParams(int32_t  value) ;

static inline void setStaticF__NoiseParams2(int32_t  value) ;

static inline void setStaticF__NoiseUV(int32_t  value) ;

static inline void setStaticF__RealHeight(int32_t  value) ;

static inline void setStaticF__Smoothness(int32_t  value) ;

static inline void setStaticF__SplatNoiseChannel(int32_t  value) ;

static inline void setStaticF__SplatNoiseTexture(int32_t  value) ;

static inline void setStaticF__SplatSmoothness(int32_t  value) ;

static inline void setStaticF__SplatWeight(int32_t  value) ;

static inline void setStaticF__SplatWidth(int32_t  value) ;

static inline void setStaticF__SplineSDF(int32_t  value) ;

static inline void setStaticF__TerrainHeight(int32_t  value) ;

static inline void setStaticF__TreeSmoothness(int32_t  value) ;

static inline void setStaticF__TreeWidth(int32_t  value) ;

static inline void setStaticF__Trench(int32_t  value) ;

static inline void setStaticF__TrenchCurve(int32_t  value) ;

static inline void setStaticF__WeightMap(int32_t  value) ;

static inline void setStaticF__Width(int32_t  value) ;

static inline void setStaticF_heightMat(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_sdfToMaskMat(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_sdfToMaskShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_splatMat(::UnityW<::UnityEngine::Material>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePath(SplinePath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePath(SplinePath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17973};

/// @brief Field heightBlendMode, offset: 0x2c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::SplinePath_CombineMode  ___heightBlendMode;

/// @brief Field multiSpline, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>  ___multiSpline;

/// @brief Field spline, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___spline;

/// @brief Field positionNoise, offset: 0x40, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___positionNoise;

/// @brief Field widthNoise, offset: 0x48, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___widthNoise;

/// @brief Field blend, offset: 0x50, size: 0x4, def value: None
 float_t  ___blend;

/// @brief Field treatAsSplineArea, offset: 0x54, size: 0x1, def value: None
 bool  ___treatAsSplineArea;

/// @brief Field sdfRes, offset: 0x58, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::SplinePath_SDFRes  ___sdfRes;

/// @brief Field searchQuality, offset: 0x5c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::SplinePath_SearchQuality  ___searchQuality;

/// @brief Field modifyHeightMap, offset: 0x60, size: 0x1, def value: None
 bool  ___modifyHeightMap;

/// @brief Field width, offset: 0x64, size: 0x4, def value: None
 float_t  ___width;

/// @brief Field smoothness, offset: 0x68, size: 0x4, def value: None
 float_t  ___smoothness;

/// @brief Field trench, offset: 0x6c, size: 0x4, def value: None
 float_t  ___trench;

/// @brief Field trenchCurve, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___trenchCurve;

/// @brief Field useTrenchCurve, offset: 0x78, size: 0x1, def value: None
 bool  ___useTrenchCurve;

/// @brief Field heightNoise, offset: 0x80, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___heightNoise;

/// @brief Field embankmentEasing, offset: 0x88, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Easing*  ___embankmentEasing;

/// @brief Field embankmentNoise, offset: 0x90, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___embankmentNoise;

/// @brief Field useTextureCurve, offset: 0x98, size: 0x1, def value: None
 bool  ___useTextureCurve;

/// @brief Field useDetailCurve, offset: 0x99, size: 0x1, def value: None
 bool  ___useDetailCurve;

/// @brief Field useTreeCurve, offset: 0x9a, size: 0x1, def value: None
 bool  ___useTreeCurve;

/// @brief Field textureCurve, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___textureCurve;

/// @brief Field treeCurve, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___treeCurve;

/// @brief Field detailCurve, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___detailCurve;

/// @brief Field modifySplatMap, offset: 0xb8, size: 0x1, def value: None
 bool  ___modifySplatMap;

/// @brief Field layer, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  ___layer;

/// @brief Field splatWeight, offset: 0xc8, size: 0x4, def value: None
 float_t  ___splatWeight;

/// @brief Field splatWidth, offset: 0xcc, size: 0x4, def value: None
 float_t  ___splatWidth;

/// @brief Field splatSmoothness, offset: 0xd0, size: 0x4, def value: None
 float_t  ___splatSmoothness;

/// @brief Field splatNoise, offset: 0xd8, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___splatNoise;

/// @brief Field embankmentLayer, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  ___embankmentLayer;

/// @brief Field clearTrees, offset: 0xe8, size: 0x1, def value: None
 bool  ___clearTrees;

/// @brief Field treeWidth, offset: 0xec, size: 0x4, def value: None
 float_t  ___treeWidth;

/// @brief Field treeSmoothness, offset: 0xf0, size: 0x4, def value: None
 float_t  ___treeSmoothness;

/// @brief Field clearDetails, offset: 0xf4, size: 0x1, def value: None
 bool  ___clearDetails;

/// @brief Field detailWidth, offset: 0xf8, size: 0x4, def value: None
 float_t  ___detailWidth;

/// @brief Field detailSmoothness, offset: 0xfc, size: 0x4, def value: None
 float_t  ___detailSmoothness;

/// @brief Field clearObjects, offset: 0x100, size: 0x1, def value: None
 bool  ___clearObjects;

/// @brief Field objectWidth, offset: 0x104, size: 0x4, def value: None
 float_t  ___objectWidth;

/// @brief Field objectSmoothness, offset: 0x108, size: 0x4, def value: None
 float_t  ___objectSmoothness;

/// @brief Field occludeHeightMod, offset: 0x10c, size: 0x1, def value: None
 bool  ___occludeHeightMod;

/// @brief Field occludeHeightWidth, offset: 0x110, size: 0x4, def value: None
 float_t  ___occludeHeightWidth;

/// @brief Field occludeHeightSmoothness, offset: 0x114, size: 0x4, def value: None
 float_t  ___occludeHeightSmoothness;

/// @brief Field occludeTextureMod, offset: 0x118, size: 0x1, def value: None
 bool  ___occludeTextureMod;

/// @brief Field occludeTextureWidth, offset: 0x11c, size: 0x4, def value: None
 float_t  ___occludeTextureWidth;

/// @brief Field occludeTextureSmoothness, offset: 0x120, size: 0x4, def value: None
 float_t  ___occludeTextureSmoothness;

/// @brief Field splineWidthEasing, offset: 0x128, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Easing*  ___splineWidthEasing;

/// @brief Field splineWidths, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  ___splineWidths;

/// @brief Field multipleRenderBuffers, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RenderBuffer>  ___multipleRenderBuffers;

/// @brief Field splineRenderers, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  ___splineRenderers;

/// @brief Field mainChannelIndex, offset: 0x148, size: 0x4, def value: None
 int32_t  ___mainChannelIndex;

/// @brief Field embankmentChannelIndex, offset: 0x14c, size: 0x4, def value: None
 int32_t  ___embankmentChannelIndex;

/// @brief Field cachedSplineTextureWeight, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cachedSplineTextureWeight;

/// @brief Field cachedSplineTreeWeight, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cachedSplineTreeWeight;

/// @brief Field cachedSplineDetailWeight, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cachedSplineDetailWeight;

/// @brief Field cachedSplineTrenchWeight, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cachedSplineTrenchWeight;

/// @brief Field bounds, offset: 0x170, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Size padding 0x190 - 0x188 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___heightBlendMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___multiSpline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___spline) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___positionNoise) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___widthNoise) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___blend) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___treatAsSplineArea) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___sdfRes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___searchQuality) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___modifyHeightMap) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___width) == 0x64, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___smoothness) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___trench) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___trenchCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___useTrenchCurve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___heightNoise) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___embankmentEasing) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___embankmentNoise) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___useTextureCurve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___useDetailCurve) == 0x99, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___useTreeCurve) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___textureCurve) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___treeCurve) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___detailCurve) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___modifySplatMap) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___layer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___splatWeight) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___splatWidth) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___splatSmoothness) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___splatNoise) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___embankmentLayer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___clearTrees) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___treeWidth) == 0xec, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___treeSmoothness) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___clearDetails) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___detailWidth) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___detailSmoothness) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___clearObjects) == 0x100, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___objectWidth) == 0x104, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___objectSmoothness) == 0x108, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___occludeHeightMod) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___occludeHeightWidth) == 0x110, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___occludeHeightSmoothness) == 0x114, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___occludeTextureMod) == 0x118, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___occludeTextureWidth) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___occludeTextureSmoothness) == 0x120, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___splineWidthEasing) == 0x128, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___splineWidths) == 0x130, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___multipleRenderBuffers) == 0x138, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___splineRenderers) == 0x140, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___mainChannelIndex) == 0x148, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___embankmentChannelIndex) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___cachedSplineTextureWeight) == 0x150, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___cachedSplineTreeWeight) == 0x158, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___cachedSplineDetailWeight) == 0x160, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___cachedSplineTrenchWeight) == 0x168, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplinePath, ___bounds) == 0x170, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplinePath) == 0x190, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
