#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HeightStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HeightStamp)
namespace JBooth::MicroVerseCore {
class FalloffFilter;
}
namespace JBooth::MicroVerseCore {
struct HeightStamp_CombineMode;
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
class OcclusionData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct HeightStamp_CombineMode;
}
namespace JBooth::MicroVerseCore {
class HeightStamp;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::HeightStamp_CombineMode);
MARK_REF_T(::JBooth::MicroVerseCore::HeightStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::HeightStamp_CombineMode, "JBooth.MicroVerseCore", "HeightStamp/CombineMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::HeightStamp*, "JBooth.MicroVerseCore", "HeightStamp");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.HeightStamp/CombineMode
struct CORDL_TYPE HeightStamp_CombineMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeightStamp_CombineMode_Unwrapped
enum struct __HeightStamp_CombineMode_Unwrapped : int32_t {
__E_Override = static_cast<int32_t>(0x0),
__E_Max = static_cast<int32_t>(0x1),
__E_Min = static_cast<int32_t>(0x2),
__E_Add = static_cast<int32_t>(0x3),
__E_Subtract = static_cast<int32_t>(0x4),
__E_Multiply = static_cast<int32_t>(0x5),
__E_Average = static_cast<int32_t>(0x6),
__E_Difference = static_cast<int32_t>(0x7),
__E_SqrtMultiply = static_cast<int32_t>(0x8),
__E_Blend = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeightStamp_CombineMode_Unwrapped () const noexcept {
return static_cast<__HeightStamp_CombineMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeightStamp_CombineMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HeightStamp_CombineMode(int32_t  value__) noexcept;

/// @brief Field Add value: I32(3)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Add;

/// @brief Field Average value: I32(6)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Average;

/// @brief Field Blend value: I32(9)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Blend;

/// @brief Field Difference value: I32(7)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Difference;

/// @brief Field Max value: I32(1)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Max;

/// @brief Field Min value: I32(2)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Min;

/// @brief Field Multiply value: I32(5)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Multiply;

/// @brief Field Override value: I32(0)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Override;

/// @brief Field SqrtMultiply value: I32(8)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const SqrtMultiply;

/// @brief Field Subtract value: I32(4)
static ::JBooth::MicroVerseCore::HeightStamp_CombineMode const Subtract;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp_CombineMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::HeightStamp_CombineMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.HeightStamp::CombineMode, JBooth.MicroVerseCore.Stamp, UnityEngine.Vector2, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.HeightStamp
class CORDL_TYPE HeightStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using CombineMode = ::JBooth::MicroVerseCore::HeightStamp_CombineMode;

/// @brief Field _AlphaMapSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaMapSize, put=setStaticF__AlphaMapSize)) int32_t  _AlphaMapSize;

/// @brief Field _Blend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Blend, put=setStaticF__Blend)) int32_t  _Blend;

/// @brief Field _CombineBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CombineBlend, put=setStaticF__CombineBlend)) int32_t  _CombineBlend;

/// @brief Field _CombineMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CombineMode, put=setStaticF__CombineMode)) int32_t  _CombineMode;

/// @brief Field _Erosion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Erosion, put=setStaticF__Erosion)) int32_t  _Erosion;

/// @brief Field _ErosionSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ErosionSize, put=setStaticF__ErosionSize)) int32_t  _ErosionSize;

/// @brief Field _HeightRemap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightRemap, put=setStaticF__HeightRemap)) int32_t  _HeightRemap;

/// @brief Field _HeightRemapCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightRemapCurve, put=setStaticF__HeightRemapCurve)) int32_t  _HeightRemapCurve;

/// @brief Field _Invert, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Invert, put=setStaticF__Invert)) int32_t  _Invert;

/// @brief Field _MipBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MipBias, put=setStaticF__MipBias)) int32_t  _MipBias;

/// @brief Field _NoiseUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseUV, put=setStaticF__NoiseUV)) int32_t  _NoiseUV;

/// @brief Field _PlacementMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementMask, put=setStaticF__PlacementMask)) int32_t  _PlacementMask;

/// @brief Field _Power, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Power, put=setStaticF__Power)) int32_t  _Power;

/// @brief Field _RealSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealSize, put=setStaticF__RealSize)) int32_t  _RealSize;

/// @brief Field _RemapRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RemapRange, put=setStaticF__RemapRange)) int32_t  _RemapRange;

/// @brief Field _ScaleOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleOffset, put=setStaticF__ScaleOffset)) int32_t  _ScaleOffset;

/// @brief Field _StampTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StampTex, put=setStaticF__StampTex)) int32_t  _StampTex;

/// @brief Field _Tilt, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tilt, put=setStaticF__Tilt)) int32_t  _Tilt;

/// @brief Field _TiltScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TiltScale, put=setStaticF__TiltScale)) int32_t  _TiltScale;

/// @brief Field _Transform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Transform, put=setStaticF__Transform)) int32_t  _Transform;

/// @brief Field _Twist, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Twist, put=setStaticF__Twist)) int32_t  _Twist;

/// @brief Field blend, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_blend, put=__cordl_internal_set_blend)) float_t  blend;

/// @brief Field erosion, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_erosion, put=__cordl_internal_set_erosion)) float_t  erosion;

/// @brief Field erosionSize, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_erosionSize, put=__cordl_internal_set_erosionSize)) float_t  erosionSize;

/// @brief Field falloff, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_falloff, put=__cordl_internal_set_falloff)) ::JBooth::MicroVerseCore::FalloffFilter*  falloff;

/// @brief Field heightmapShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_heightmapShader, put=setStaticF_heightmapShader)) ::UnityW<::UnityEngine::Shader>  heightmapShader;

/// @brief Field invert, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_invert, put=__cordl_internal_set_invert)) bool  invert;

/// @brief Field material, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field mipBias, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_mipBias, put=__cordl_internal_set_mipBias)) float_t  mipBias;

/// @brief Field mode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::JBooth::MicroVerseCore::HeightStamp_CombineMode  mode;

/// @brief Field power, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_power, put=__cordl_internal_set_power)) float_t  power;

/// @brief Field remapCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_remapCurve, put=__cordl_internal_set_remapCurve)) ::UnityEngine::AnimationCurve*  remapCurve;

/// @brief Field remapCurveTex, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_remapCurveTex, put=__cordl_internal_set_remapCurveTex)) ::UnityW<::UnityEngine::Texture2D>  remapCurveTex;

/// @brief Field remapRange, offset 0x74, size 0x8 
 __declspec(property(get=__cordl_internal_get_remapRange, put=__cordl_internal_set_remapRange)) ::UnityEngine::Vector2  remapRange;

/// @brief Field scaleOffset, offset 0x7c, size 0x10 
 __declspec(property(get=__cordl_internal_get_scaleOffset, put=__cordl_internal_set_scaleOffset)) ::UnityEngine::Vector4  scaleOffset;

/// @brief Field stamp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stamp, put=__cordl_internal_set_stamp)) ::UnityW<::UnityEngine::Texture2D>  stamp;

/// @brief Field tiltScaleX, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_tiltScaleX, put=__cordl_internal_set_tiltScaleX)) bool  tiltScaleX;

/// @brief Field tiltScaleZ, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get_tiltScaleZ, put=__cordl_internal_set_tiltScaleZ)) bool  tiltScaleZ;

/// @brief Field tiltX, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltX, put=__cordl_internal_set_tiltX)) float_t  tiltX;

/// @brief Field tiltZ, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltZ, put=__cordl_internal_set_tiltZ)) float_t  tiltZ;

/// @brief Field twist, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_twist, put=__cordl_internal_set_twist)) float_t  twist;

/// @brief Field useHeightRemap, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_useHeightRemap, put=__cordl_internal_set_useHeightRemap)) bool  useHeightRemap;

/// @brief Field version, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHeightModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyHeightStamp, addr 0x181440c70, size 0x520, virtual true, abstract: false, final true
inline bool ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyHeightStampAbsolute, addr 0x181440710, size 0x560, virtual false, abstract: false, final false
inline bool ApplyHeightStampAbsolute(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od, ::UnityEngine::Vector2  heightRenorm) ;

/// @brief Method ClearRemapCurve, addr 0x181441190, size 0x40, virtual false, abstract: false, final false
inline void ClearRemapCurve() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x1814411d0, size 0x160, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method Initialize, addr 0x181441330, size 0x250, virtual true, abstract: false, final true
inline void Initialize() ;

static inline ::JBooth::MicroVerseCore::HeightStamp* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181441580, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x181440390, size 0x120, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x181441590, size 0xc0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PrepareMaterial, addr 0x181441650, size 0x6f0, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

constexpr float_t const& __cordl_internal_get_blend() const;

constexpr float_t& __cordl_internal_get_blend() ;

constexpr float_t const& __cordl_internal_get_erosion() const;

constexpr float_t& __cordl_internal_get_erosion() ;

constexpr float_t const& __cordl_internal_get_erosionSize() const;

constexpr float_t& __cordl_internal_get_erosionSize() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& __cordl_internal_get_falloff() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter*& __cordl_internal_get_falloff() ;

constexpr bool const& __cordl_internal_get_invert() const;

constexpr bool& __cordl_internal_get_invert() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr float_t const& __cordl_internal_get_mipBias() const;

constexpr float_t& __cordl_internal_get_mipBias() ;

constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode const& __cordl_internal_get_mode() const;

constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_power() const;

constexpr float_t& __cordl_internal_get_power() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_remapCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_remapCurve() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_remapCurveTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_remapCurveTex() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_remapRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_remapRange() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_scaleOffset() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_scaleOffset() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_stamp() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_stamp() ;

constexpr bool const& __cordl_internal_get_tiltScaleX() const;

constexpr bool& __cordl_internal_get_tiltScaleX() ;

constexpr bool const& __cordl_internal_get_tiltScaleZ() const;

constexpr bool& __cordl_internal_get_tiltScaleZ() ;

constexpr float_t const& __cordl_internal_get_tiltX() const;

constexpr float_t& __cordl_internal_get_tiltX() ;

constexpr float_t const& __cordl_internal_get_tiltZ() const;

constexpr float_t& __cordl_internal_get_tiltZ() ;

constexpr float_t const& __cordl_internal_get_twist() const;

constexpr float_t& __cordl_internal_get_twist() ;

constexpr bool const& __cordl_internal_get_useHeightRemap() const;

constexpr bool& __cordl_internal_get_useHeightRemap() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_blend(float_t  value) ;

constexpr void __cordl_internal_set_erosion(float_t  value) ;

constexpr void __cordl_internal_set_erosionSize(float_t  value) ;

constexpr void __cordl_internal_set_falloff(::JBooth::MicroVerseCore::FalloffFilter*  value) ;

constexpr void __cordl_internal_set_invert(bool  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_mipBias(float_t  value) ;

constexpr void __cordl_internal_set_mode(::JBooth::MicroVerseCore::HeightStamp_CombineMode  value) ;

constexpr void __cordl_internal_set_power(float_t  value) ;

constexpr void __cordl_internal_set_remapCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_remapCurveTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_remapRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_scaleOffset(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_stamp(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_tiltScaleX(bool  value) ;

constexpr void __cordl_internal_set_tiltScaleZ(bool  value) ;

constexpr void __cordl_internal_set_tiltX(float_t  value) ;

constexpr void __cordl_internal_set_tiltZ(float_t  value) ;

constexpr void __cordl_internal_set_twist(float_t  value) ;

constexpr void __cordl_internal_set_useHeightRemap(bool  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x181442010, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__AlphaMapSize() ;

static inline int32_t getStaticF__Blend() ;

static inline int32_t getStaticF__CombineBlend() ;

static inline int32_t getStaticF__CombineMode() ;

static inline int32_t getStaticF__Erosion() ;

static inline int32_t getStaticF__ErosionSize() ;

static inline int32_t getStaticF__HeightRemap() ;

static inline int32_t getStaticF__HeightRemapCurve() ;

static inline int32_t getStaticF__Invert() ;

static inline int32_t getStaticF__MipBias() ;

static inline int32_t getStaticF__NoiseUV() ;

static inline int32_t getStaticF__PlacementMask() ;

static inline int32_t getStaticF__Power() ;

static inline int32_t getStaticF__RealSize() ;

static inline int32_t getStaticF__RemapRange() ;

static inline int32_t getStaticF__ScaleOffset() ;

static inline int32_t getStaticF__StampTex() ;

static inline int32_t getStaticF__Tilt() ;

static inline int32_t getStaticF__TiltScale() ;

static inline int32_t getStaticF__Transform() ;

static inline int32_t getStaticF__Twist() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_heightmapShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* i___JBooth__MicroVerseCore__IHeightModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

static inline void setStaticF__AlphaMapSize(int32_t  value) ;

static inline void setStaticF__Blend(int32_t  value) ;

static inline void setStaticF__CombineBlend(int32_t  value) ;

static inline void setStaticF__CombineMode(int32_t  value) ;

static inline void setStaticF__Erosion(int32_t  value) ;

static inline void setStaticF__ErosionSize(int32_t  value) ;

static inline void setStaticF__HeightRemap(int32_t  value) ;

static inline void setStaticF__HeightRemapCurve(int32_t  value) ;

static inline void setStaticF__Invert(int32_t  value) ;

static inline void setStaticF__MipBias(int32_t  value) ;

static inline void setStaticF__NoiseUV(int32_t  value) ;

static inline void setStaticF__PlacementMask(int32_t  value) ;

static inline void setStaticF__Power(int32_t  value) ;

static inline void setStaticF__RealSize(int32_t  value) ;

static inline void setStaticF__RemapRange(int32_t  value) ;

static inline void setStaticF__ScaleOffset(int32_t  value) ;

static inline void setStaticF__StampTex(int32_t  value) ;

static inline void setStaticF__Tilt(int32_t  value) ;

static inline void setStaticF__TiltScale(int32_t  value) ;

static inline void setStaticF__Transform(int32_t  value) ;

static inline void setStaticF__Twist(int32_t  value) ;

static inline void setStaticF_heightmapShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeightStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeightStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeightStamp(HeightStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeightStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeightStamp(HeightStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18037};

/// @brief Field stamp, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___stamp;

/// @brief Field mode, offset: 0x38, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::HeightStamp_CombineMode  ___mode;

/// @brief Field falloff, offset: 0x40, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter*  ___falloff;

/// @brief Field twist, offset: 0x48, size: 0x4, def value: None
 float_t  ___twist;

/// @brief Field erosion, offset: 0x4c, size: 0x4, def value: None
 float_t  ___erosion;

/// @brief Field erosionSize, offset: 0x50, size: 0x4, def value: None
 float_t  ___erosionSize;

/// @brief Field power, offset: 0x54, size: 0x4, def value: None
 float_t  ___power;

/// @brief Field invert, offset: 0x58, size: 0x1, def value: None
 bool  ___invert;

/// @brief Field useHeightRemap, offset: 0x59, size: 0x1, def value: None
 bool  ___useHeightRemap;

/// @brief Field remapCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___remapCurve;

/// @brief Field remapCurveTex, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___remapCurveTex;

/// @brief Field blend, offset: 0x70, size: 0x4, def value: None
 float_t  ___blend;

/// @brief Field remapRange, offset: 0x74, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___remapRange;

/// @brief Field scaleOffset, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___scaleOffset;

/// @brief Field tiltX, offset: 0x8c, size: 0x4, def value: None
 float_t  ___tiltX;

/// @brief Field tiltZ, offset: 0x90, size: 0x4, def value: None
 float_t  ___tiltZ;

/// @brief Field tiltScaleX, offset: 0x94, size: 0x1, def value: None
 bool  ___tiltScaleX;

/// @brief Field tiltScaleZ, offset: 0x95, size: 0x1, def value: None
 bool  ___tiltScaleZ;

/// @brief Field mipBias, offset: 0x98, size: 0x4, def value: None
 float_t  ___mipBias;

/// @brief Field material, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field version, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___stamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___falloff) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___twist) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___erosion) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___erosionSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___power) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___invert) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___useHeightRemap) == 0x59, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___remapCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___remapCurveTex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___blend) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___remapRange) == 0x74, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___scaleOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___tiltX) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___tiltZ) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___tiltScaleX) == 0x94, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___tiltScaleZ) == 0x95, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___mipBias) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___material) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightStamp, ___version) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::HeightStamp) == 0xb0, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
