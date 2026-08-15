#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/WindController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WindController)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class WindZone;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class WindController;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::WindController*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::WindController*, "JBooth.MicroVerseCore", "WindController");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.WindController
class CORDL_TYPE WindController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field WIND_SETTINGS_FlexNoiseScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_FlexNoiseScale, put=setStaticF_WIND_SETTINGS_FlexNoiseScale)) int32_t  WIND_SETTINGS_FlexNoiseScale;

/// @brief Field WIND_SETTINGS_GustScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_GustScale, put=setStaticF_WIND_SETTINGS_GustScale)) int32_t  WIND_SETTINGS_GustScale;

/// @brief Field WIND_SETTINGS_GustSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_GustSpeed, put=setStaticF_WIND_SETTINGS_GustSpeed)) int32_t  WIND_SETTINGS_GustSpeed;

/// @brief Field WIND_SETTINGS_GustWorldScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_GustWorldScale, put=setStaticF_WIND_SETTINGS_GustWorldScale)) int32_t  WIND_SETTINGS_GustWorldScale;

/// @brief Field WIND_SETTINGS_ShiverNoiseScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_ShiverNoiseScale, put=setStaticF_WIND_SETTINGS_ShiverNoiseScale)) int32_t  WIND_SETTINGS_ShiverNoiseScale;

/// @brief Field WIND_SETTINGS_TexGust, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_TexGust, put=setStaticF_WIND_SETTINGS_TexGust)) int32_t  WIND_SETTINGS_TexGust;

/// @brief Field WIND_SETTINGS_TexNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_TexNoise, put=setStaticF_WIND_SETTINGS_TexNoise)) int32_t  WIND_SETTINGS_TexNoise;

/// @brief Field WIND_SETTINGS_Turbulence, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_Turbulence, put=setStaticF_WIND_SETTINGS_Turbulence)) int32_t  WIND_SETTINGS_Turbulence;

/// @brief Field WIND_SETTINGS_WorldDirectionAndSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WIND_SETTINGS_WorldDirectionAndSpeed, put=setStaticF_WIND_SETTINGS_WorldDirectionAndSpeed)) int32_t  WIND_SETTINGS_WorldDirectionAndSpeed;

/// @brief Field bendingWorldSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_bendingWorldSize, put=__cordl_internal_set_bendingWorldSize)) float_t  bendingWorldSize;

/// @brief Field gistSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_gistSpeed, put=__cordl_internal_set_gistSpeed)) float_t  gistSpeed;

/// @brief Field gustScale, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_gustScale, put=__cordl_internal_set_gustScale)) float_t  gustScale;

/// @brief Field gustTexture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gustTexture, put=__cordl_internal_set_gustTexture)) ::UnityW<::UnityEngine::Texture2D>  gustTexture;

/// @brief Field gustWorldSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_gustWorldSize, put=__cordl_internal_set_gustWorldSize)) float_t  gustWorldSize;

/// @brief Field leafWorldSize, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_leafWorldSize, put=__cordl_internal_set_leafWorldSize)) float_t  leafWorldSize;

/// @brief Field noiseTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_noiseTexture, put=__cordl_internal_set_noiseTexture)) ::UnityW<::UnityEngine::Texture2D>  noiseTexture;

/// @brief Field point1, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_point1, put=__cordl_internal_set_point1)) ::UnityW<::UnityEngine::WindZone>  point1;

/// @brief Field point2, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_point2, put=__cordl_internal_set_point2)) ::UnityW<::UnityEngine::WindZone>  point2;

/// @brief Field point3, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_point3, put=__cordl_internal_set_point3)) ::UnityW<::UnityEngine::WindZone>  point3;

/// @brief Field point4, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_point4, put=__cordl_internal_set_point4)) ::UnityW<::UnityEngine::WindZone>  point4;

/// @brief Field pos1, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_pos1, put=__cordl_internal_set_pos1)) ::UnityEngine::Vector4  pos1;

/// @brief Field pos2, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_pos2, put=__cordl_internal_set_pos2)) ::UnityEngine::Vector4  pos2;

/// @brief Field pos3, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_pos3, put=__cordl_internal_set_pos3)) ::UnityEngine::Vector4  pos3;

/// @brief Field pos4, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_pos4, put=__cordl_internal_set_pos4)) ::UnityEngine::Vector4  pos4;

/// @brief Field radius, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) ::UnityEngine::Vector4  radius;

/// @brief Field turbulence, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_turbulence, put=__cordl_internal_set_turbulence)) float_t  turbulence;

/// @brief Field windSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_windSpeed, put=__cordl_internal_set_windSpeed)) float_t  windSpeed;

/// @brief Method ApplySettings, addr 0x18144c310, size 0x7d0, virtual false, abstract: false, final false
inline void ApplySettings() ;

/// @brief Method GetDirectionAndSpeed, addr 0x18144cae0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetDirectionAndSpeed() ;

static inline ::JBooth::MicroVerseCore::WindController* New_ctor() ;

/// @brief Method OnValidate, addr 0x18144cbd0, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x18144cbd0, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18144cbd0, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_bendingWorldSize() const;

constexpr float_t& __cordl_internal_get_bendingWorldSize() ;

constexpr float_t const& __cordl_internal_get_gistSpeed() const;

constexpr float_t& __cordl_internal_get_gistSpeed() ;

constexpr float_t const& __cordl_internal_get_gustScale() const;

constexpr float_t& __cordl_internal_get_gustScale() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_gustTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_gustTexture() ;

constexpr float_t const& __cordl_internal_get_gustWorldSize() const;

constexpr float_t& __cordl_internal_get_gustWorldSize() ;

constexpr float_t const& __cordl_internal_get_leafWorldSize() const;

constexpr float_t& __cordl_internal_get_leafWorldSize() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_noiseTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_noiseTexture() ;

constexpr ::UnityW<::UnityEngine::WindZone> const& __cordl_internal_get_point1() const;

constexpr ::UnityW<::UnityEngine::WindZone>& __cordl_internal_get_point1() ;

constexpr ::UnityW<::UnityEngine::WindZone> const& __cordl_internal_get_point2() const;

constexpr ::UnityW<::UnityEngine::WindZone>& __cordl_internal_get_point2() ;

constexpr ::UnityW<::UnityEngine::WindZone> const& __cordl_internal_get_point3() const;

constexpr ::UnityW<::UnityEngine::WindZone>& __cordl_internal_get_point3() ;

constexpr ::UnityW<::UnityEngine::WindZone> const& __cordl_internal_get_point4() const;

constexpr ::UnityW<::UnityEngine::WindZone>& __cordl_internal_get_point4() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_pos1() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_pos1() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_pos2() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_pos2() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_pos3() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_pos3() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_pos4() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_pos4() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_radius() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_turbulence() const;

constexpr float_t& __cordl_internal_get_turbulence() ;

constexpr float_t const& __cordl_internal_get_windSpeed() const;

constexpr float_t& __cordl_internal_get_windSpeed() ;

constexpr void __cordl_internal_set_bendingWorldSize(float_t  value) ;

constexpr void __cordl_internal_set_gistSpeed(float_t  value) ;

constexpr void __cordl_internal_set_gustScale(float_t  value) ;

constexpr void __cordl_internal_set_gustTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_gustWorldSize(float_t  value) ;

constexpr void __cordl_internal_set_leafWorldSize(float_t  value) ;

constexpr void __cordl_internal_set_noiseTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_point1(::UnityW<::UnityEngine::WindZone>  value) ;

constexpr void __cordl_internal_set_point2(::UnityW<::UnityEngine::WindZone>  value) ;

constexpr void __cordl_internal_set_point3(::UnityW<::UnityEngine::WindZone>  value) ;

constexpr void __cordl_internal_set_point4(::UnityW<::UnityEngine::WindZone>  value) ;

constexpr void __cordl_internal_set_pos1(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_pos2(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_pos3(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_pos4(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_radius(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_turbulence(float_t  value) ;

constexpr void __cordl_internal_set_windSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x18144cd10, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_WIND_SETTINGS_FlexNoiseScale() ;

static inline int32_t getStaticF_WIND_SETTINGS_GustScale() ;

static inline int32_t getStaticF_WIND_SETTINGS_GustSpeed() ;

static inline int32_t getStaticF_WIND_SETTINGS_GustWorldScale() ;

static inline int32_t getStaticF_WIND_SETTINGS_ShiverNoiseScale() ;

static inline int32_t getStaticF_WIND_SETTINGS_TexGust() ;

static inline int32_t getStaticF_WIND_SETTINGS_TexNoise() ;

static inline int32_t getStaticF_WIND_SETTINGS_Turbulence() ;

static inline int32_t getStaticF_WIND_SETTINGS_WorldDirectionAndSpeed() ;

static inline void setStaticF_WIND_SETTINGS_FlexNoiseScale(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_GustScale(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_GustSpeed(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_GustWorldScale(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_ShiverNoiseScale(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_TexGust(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_TexNoise(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_Turbulence(int32_t  value) ;

static inline void setStaticF_WIND_SETTINGS_WorldDirectionAndSpeed(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindController(WindController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindController(WindController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18058};

/// @brief Field windSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___windSpeed;

/// @brief Field turbulence, offset: 0x24, size: 0x4, def value: None
 float_t  ___turbulence;

/// @brief Field noiseTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___noiseTexture;

/// @brief Field bendingWorldSize, offset: 0x30, size: 0x4, def value: None
 float_t  ___bendingWorldSize;

/// @brief Field leafWorldSize, offset: 0x34, size: 0x4, def value: None
 float_t  ___leafWorldSize;

/// @brief Field gustTexture, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___gustTexture;

/// @brief Field gustWorldSize, offset: 0x40, size: 0x4, def value: None
 float_t  ___gustWorldSize;

/// @brief Field gistSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___gistSpeed;

/// @brief Field gustScale, offset: 0x48, size: 0x4, def value: None
 float_t  ___gustScale;

/// @brief Field point1, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::WindZone>  ___point1;

/// @brief Field point2, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::WindZone>  ___point2;

/// @brief Field point3, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::WindZone>  ___point3;

/// @brief Field point4, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::WindZone>  ___point4;

/// @brief Field pos1, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___pos1;

/// @brief Field pos2, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___pos2;

/// @brief Field pos3, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___pos3;

/// @brief Field pos4, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___pos4;

/// @brief Field radius, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___windSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___turbulence) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___noiseTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___bendingWorldSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___leafWorldSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___gustTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___gustWorldSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___gistSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___gustScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___point1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___point2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___point3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___point4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___pos1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___pos2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___pos3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___pos4) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::WindController, ___radius) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::WindController) == 0xc0, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
