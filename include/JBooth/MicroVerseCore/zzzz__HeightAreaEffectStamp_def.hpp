#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HeightAreaEffectStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__HeightStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HeightAreaEffectStamp)
namespace JBooth::MicroVerseCore {
class FalloffFilter;
}
namespace JBooth::MicroVerseCore {
struct HeightAreaEffectStamp_EffectType;
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
class Noise;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
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
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct HeightAreaEffectStamp_EffectType;
}
namespace JBooth::MicroVerseCore {
class HeightAreaEffectStamp;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType);
MARK_REF_T(::JBooth::MicroVerseCore::HeightAreaEffectStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType, "JBooth.MicroVerseCore", "HeightAreaEffectStamp/EffectType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::HeightAreaEffectStamp*, "JBooth.MicroVerseCore", "HeightAreaEffectStamp");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.HeightAreaEffectStamp/EffectType
struct CORDL_TYPE HeightAreaEffectStamp_EffectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeightAreaEffectStamp_EffectType_Unwrapped
enum struct __HeightAreaEffectStamp_EffectType_Unwrapped : int32_t {
__E_Terrace = static_cast<int32_t>(0x0),
__E_Beach = static_cast<int32_t>(0x1),
__E_RemapCurve = static_cast<int32_t>(0x2),
__E_Noise = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeightAreaEffectStamp_EffectType_Unwrapped () const noexcept {
return static_cast<__HeightAreaEffectStamp_EffectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeightAreaEffectStamp_EffectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HeightAreaEffectStamp_EffectType(int32_t  value__) noexcept;

/// @brief Field Beach value: I32(1)
static ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType const Beach;

/// @brief Field Noise value: I32(3)
static ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType const Noise;

/// @brief Field RemapCurve value: I32(2)
static ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType const RemapCurve;

/// @brief Field Terrace value: I32(0)
static ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType const Terrace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.HeightAreaEffectStamp::EffectType, JBooth.MicroVerseCore.HeightStamp::CombineMode, JBooth.MicroVerseCore.Stamp
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.HeightAreaEffectStamp
class CORDL_TYPE HeightAreaEffectStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using EffectType = ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType;

/// @brief Field _BeachDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BeachDistance, put=setStaticF__BeachDistance)) int32_t  _BeachDistance;

/// @brief Field _BeachPower, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BeachPower, put=setStaticF__BeachPower)) int32_t  _BeachPower;

/// @brief Field _CombineBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CombineBlend, put=setStaticF__CombineBlend)) int32_t  _CombineBlend;

/// @brief Field _CombineMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CombineMode, put=setStaticF__CombineMode)) int32_t  _CombineMode;

/// @brief Field _NoiseUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseUV, put=setStaticF__NoiseUV)) int32_t  _NoiseUV;

/// @brief Field _RealSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealSize, put=setStaticF__RealSize)) int32_t  _RealSize;

/// @brief Field _RemapCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RemapCurve, put=setStaticF__RemapCurve)) int32_t  _RemapCurve;

/// @brief Field _TerraceSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerraceSize, put=setStaticF__TerraceSize)) int32_t  _TerraceSize;

/// @brief Field _TerraceStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerraceStrength, put=setStaticF__TerraceStrength)) int32_t  _TerraceStrength;

/// @brief Field _Transform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Transform, put=setStaticF__Transform)) int32_t  _Transform;

/// @brief Field _WorldPosY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WorldPosY, put=setStaticF__WorldPosY)) int32_t  _WorldPosY;

/// @brief Field beachDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_beachDistance, put=__cordl_internal_set_beachDistance)) float_t  beachDistance;

/// @brief Field beachPower, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_beachPower, put=__cordl_internal_set_beachPower)) float_t  beachPower;

/// @brief Field combineBlend, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_combineBlend, put=__cordl_internal_set_combineBlend)) float_t  combineBlend;

/// @brief Field combineMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_combineMode, put=__cordl_internal_set_combineMode)) ::JBooth::MicroVerseCore::HeightStamp_CombineMode  combineMode;

/// @brief Field effectType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectType, put=__cordl_internal_set_effectType)) ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  effectType;

/// @brief Field falloff, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_falloff, put=__cordl_internal_set_falloff)) ::JBooth::MicroVerseCore::FalloffFilter*  falloff;

/// @brief Field heightmapShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_heightmapShader, put=setStaticF_heightmapShader)) ::UnityW<::UnityEngine::Shader>  heightmapShader;

/// @brief Field material, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field noise, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_noise, put=__cordl_internal_set_noise)) ::JBooth::MicroVerseCore::Noise*  noise;

/// @brief Field remapCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_remapCurve, put=__cordl_internal_set_remapCurve)) ::UnityEngine::AnimationCurve*  remapCurve;

/// @brief Field remapCurveTex, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_remapCurveTex, put=__cordl_internal_set_remapCurveTex)) ::UnityW<::UnityEngine::Texture2D>  remapCurveTex;

/// @brief Field terraceSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_terraceSize, put=__cordl_internal_set_terraceSize)) float_t  terraceSize;

/// @brief Field terraceStrength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_terraceStrength, put=__cordl_internal_set_terraceStrength)) float_t  terraceStrength;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHeightModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyHeightStamp, addr 0x18143f990, size 0x680, virtual true, abstract: false, final true
inline bool ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x181440010, size 0x160, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method Initialize, addr 0x181440170, size 0x210, virtual true, abstract: false, final true
inline void Initialize() ;

static inline ::JBooth::MicroVerseCore::HeightAreaEffectStamp* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181440380, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x181440390, size 0x120, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr float_t const& __cordl_internal_get_beachDistance() const;

constexpr float_t& __cordl_internal_get_beachDistance() ;

constexpr float_t const& __cordl_internal_get_beachPower() const;

constexpr float_t& __cordl_internal_get_beachPower() ;

constexpr float_t const& __cordl_internal_get_combineBlend() const;

constexpr float_t& __cordl_internal_get_combineBlend() ;

constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode const& __cordl_internal_get_combineMode() const;

constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode& __cordl_internal_get_combineMode() ;

constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType const& __cordl_internal_get_effectType() const;

constexpr ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType& __cordl_internal_get_effectType() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& __cordl_internal_get_falloff() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter*& __cordl_internal_get_falloff() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_noise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_noise() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_remapCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_remapCurve() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_remapCurveTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_remapCurveTex() ;

constexpr float_t const& __cordl_internal_get_terraceSize() const;

constexpr float_t& __cordl_internal_get_terraceSize() ;

constexpr float_t const& __cordl_internal_get_terraceStrength() const;

constexpr float_t& __cordl_internal_get_terraceStrength() ;

constexpr void __cordl_internal_set_beachDistance(float_t  value) ;

constexpr void __cordl_internal_set_beachPower(float_t  value) ;

constexpr void __cordl_internal_set_combineBlend(float_t  value) ;

constexpr void __cordl_internal_set_combineMode(::JBooth::MicroVerseCore::HeightStamp_CombineMode  value) ;

constexpr void __cordl_internal_set_effectType(::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  value) ;

constexpr void __cordl_internal_set_falloff(::JBooth::MicroVerseCore::FalloffFilter*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_noise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_remapCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_remapCurveTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_terraceSize(float_t  value) ;

constexpr void __cordl_internal_set_terraceStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x181440640, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__BeachDistance() ;

static inline int32_t getStaticF__BeachPower() ;

static inline int32_t getStaticF__CombineBlend() ;

static inline int32_t getStaticF__CombineMode() ;

static inline int32_t getStaticF__NoiseUV() ;

static inline int32_t getStaticF__RealSize() ;

static inline int32_t getStaticF__RemapCurve() ;

static inline int32_t getStaticF__TerraceSize() ;

static inline int32_t getStaticF__TerraceStrength() ;

static inline int32_t getStaticF__Transform() ;

static inline int32_t getStaticF__WorldPosY() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_heightmapShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* i___JBooth__MicroVerseCore__IHeightModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

static inline void setStaticF__BeachDistance(int32_t  value) ;

static inline void setStaticF__BeachPower(int32_t  value) ;

static inline void setStaticF__CombineBlend(int32_t  value) ;

static inline void setStaticF__CombineMode(int32_t  value) ;

static inline void setStaticF__NoiseUV(int32_t  value) ;

static inline void setStaticF__RealSize(int32_t  value) ;

static inline void setStaticF__RemapCurve(int32_t  value) ;

static inline void setStaticF__TerraceSize(int32_t  value) ;

static inline void setStaticF__TerraceStrength(int32_t  value) ;

static inline void setStaticF__Transform(int32_t  value) ;

static inline void setStaticF__WorldPosY(int32_t  value) ;

static inline void setStaticF_heightmapShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeightAreaEffectStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeightAreaEffectStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeightAreaEffectStamp(HeightAreaEffectStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeightAreaEffectStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeightAreaEffectStamp(HeightAreaEffectStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18035};

/// @brief Field effectType, offset: 0x2c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::HeightAreaEffectStamp_EffectType  ___effectType;

/// @brief Field falloff, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter*  ___falloff;

/// @brief Field noise, offset: 0x38, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___noise;

/// @brief Field combineMode, offset: 0x40, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::HeightStamp_CombineMode  ___combineMode;

/// @brief Field combineBlend, offset: 0x44, size: 0x4, def value: None
 float_t  ___combineBlend;

/// @brief Field terraceSize, offset: 0x48, size: 0x4, def value: None
 float_t  ___terraceSize;

/// @brief Field terraceStrength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___terraceStrength;

/// @brief Field beachDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ___beachDistance;

/// @brief Field beachPower, offset: 0x54, size: 0x4, def value: None
 float_t  ___beachPower;

/// @brief Field remapCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___remapCurve;

/// @brief Field material, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field remapCurveTex, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___remapCurveTex;

/// @brief Size padding 0x78 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___effectType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___falloff) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___noise) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___combineMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___combineBlend) == 0x44, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___terraceSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___terraceStrength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___beachDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___beachPower) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___remapCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___material) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HeightAreaEffectStamp, ___remapCurveTex) == 0x68, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::HeightAreaEffectStamp) == 0x78, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
