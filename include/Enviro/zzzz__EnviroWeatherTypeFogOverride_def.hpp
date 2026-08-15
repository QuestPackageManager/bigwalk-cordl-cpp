#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeFogOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeatherTypeFogOverride)
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeFogOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeFogOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeFogOverride*, "Enviro", "EnviroWeatherTypeFogOverride");
// Dependencies System.Object, UnityEngine.Color
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeFogOverride
class CORDL_TYPE EnviroWeatherTypeFogOverride : public ::System::Object {
public:
// Declarations
/// @brief Field anistropy, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_anistropy, put=__cordl_internal_set_anistropy)) float_t  anistropy;

/// @brief Field extinction, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_extinction, put=__cordl_internal_set_extinction)) float_t  extinction;

/// @brief Field fogColorBlend, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogColorBlend, put=__cordl_internal_set_fogColorBlend)) float_t  fogColorBlend;

/// @brief Field fogColorMod, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_fogColorMod, put=__cordl_internal_set_fogColorMod)) ::UnityEngine::Color  fogColorMod;

/// @brief Field fogDensity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogDensity, put=__cordl_internal_set_fogDensity)) float_t  fogDensity;

/// @brief Field fogDensity2, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogDensity2, put=__cordl_internal_set_fogDensity2)) float_t  fogDensity2;

/// @brief Field fogHeight, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeight, put=__cordl_internal_set_fogHeight)) float_t  fogHeight;

/// @brief Field fogHeight2, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeight2, put=__cordl_internal_set_fogHeight2)) float_t  fogHeight2;

/// @brief Field fogHeightFalloff, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeightFalloff, put=__cordl_internal_set_fogHeightFalloff)) float_t  fogHeightFalloff;

/// @brief Field fogHeightFalloff2, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeightFalloff2, put=__cordl_internal_set_fogHeightFalloff2)) float_t  fogHeightFalloff2;

/// @brief Field scattering, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scattering, put=__cordl_internal_set_scattering)) float_t  scattering;

/// @brief Field unityFogDensity, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_unityFogDensity, put=__cordl_internal_set_unityFogDensity)) float_t  unityFogDensity;

/// @brief Field unityFogEndDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_unityFogEndDistance, put=__cordl_internal_set_unityFogEndDistance)) float_t  unityFogEndDistance;

/// @brief Field unityFogStartDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_unityFogStartDistance, put=__cordl_internal_set_unityFogStartDistance)) float_t  unityFogStartDistance;

static inline ::Enviro::EnviroWeatherTypeFogOverride* New_ctor() ;

constexpr float_t const& __cordl_internal_get_anistropy() const;

constexpr float_t& __cordl_internal_get_anistropy() ;

constexpr float_t const& __cordl_internal_get_extinction() const;

constexpr float_t& __cordl_internal_get_extinction() ;

constexpr float_t const& __cordl_internal_get_fogColorBlend() const;

constexpr float_t& __cordl_internal_get_fogColorBlend() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_fogColorMod() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_fogColorMod() ;

constexpr float_t const& __cordl_internal_get_fogDensity() const;

constexpr float_t& __cordl_internal_get_fogDensity() ;

constexpr float_t const& __cordl_internal_get_fogDensity2() const;

constexpr float_t& __cordl_internal_get_fogDensity2() ;

constexpr float_t const& __cordl_internal_get_fogHeight() const;

constexpr float_t& __cordl_internal_get_fogHeight() ;

constexpr float_t const& __cordl_internal_get_fogHeight2() const;

constexpr float_t& __cordl_internal_get_fogHeight2() ;

constexpr float_t const& __cordl_internal_get_fogHeightFalloff() const;

constexpr float_t& __cordl_internal_get_fogHeightFalloff() ;

constexpr float_t const& __cordl_internal_get_fogHeightFalloff2() const;

constexpr float_t& __cordl_internal_get_fogHeightFalloff2() ;

constexpr float_t const& __cordl_internal_get_scattering() const;

constexpr float_t& __cordl_internal_get_scattering() ;

constexpr float_t const& __cordl_internal_get_unityFogDensity() const;

constexpr float_t& __cordl_internal_get_unityFogDensity() ;

constexpr float_t const& __cordl_internal_get_unityFogEndDistance() const;

constexpr float_t& __cordl_internal_get_unityFogEndDistance() ;

constexpr float_t const& __cordl_internal_get_unityFogStartDistance() const;

constexpr float_t& __cordl_internal_get_unityFogStartDistance() ;

constexpr void __cordl_internal_set_anistropy(float_t  value) ;

constexpr void __cordl_internal_set_extinction(float_t  value) ;

constexpr void __cordl_internal_set_fogColorBlend(float_t  value) ;

constexpr void __cordl_internal_set_fogColorMod(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fogDensity(float_t  value) ;

constexpr void __cordl_internal_set_fogDensity2(float_t  value) ;

constexpr void __cordl_internal_set_fogHeight(float_t  value) ;

constexpr void __cordl_internal_set_fogHeight2(float_t  value) ;

constexpr void __cordl_internal_set_fogHeightFalloff(float_t  value) ;

constexpr void __cordl_internal_set_fogHeightFalloff2(float_t  value) ;

constexpr void __cordl_internal_set_scattering(float_t  value) ;

constexpr void __cordl_internal_set_unityFogDensity(float_t  value) ;

constexpr void __cordl_internal_set_unityFogEndDistance(float_t  value) ;

constexpr void __cordl_internal_set_unityFogStartDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x180629a60, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeFogOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeFogOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeFogOverride(EnviroWeatherTypeFogOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeFogOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeFogOverride(EnviroWeatherTypeFogOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18515};

/// @brief Field fogDensity, offset: 0x10, size: 0x4, def value: None
 float_t  ___fogDensity;

/// @brief Field fogHeightFalloff, offset: 0x14, size: 0x4, def value: None
 float_t  ___fogHeightFalloff;

/// @brief Field fogHeight, offset: 0x18, size: 0x4, def value: None
 float_t  ___fogHeight;

/// @brief Field fogDensity2, offset: 0x1c, size: 0x4, def value: None
 float_t  ___fogDensity2;

/// @brief Field fogHeightFalloff2, offset: 0x20, size: 0x4, def value: None
 float_t  ___fogHeightFalloff2;

/// @brief Field fogHeight2, offset: 0x24, size: 0x4, def value: None
 float_t  ___fogHeight2;

/// @brief Field fogColorBlend, offset: 0x28, size: 0x4, def value: None
 float_t  ___fogColorBlend;

/// @brief Field fogColorMod, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ___fogColorMod;

/// @brief Field scattering, offset: 0x3c, size: 0x4, def value: None
 float_t  ___scattering;

/// @brief Field extinction, offset: 0x40, size: 0x4, def value: None
 float_t  ___extinction;

/// @brief Field anistropy, offset: 0x44, size: 0x4, def value: None
 float_t  ___anistropy;

/// @brief Field unityFogDensity, offset: 0x48, size: 0x4, def value: None
 float_t  ___unityFogDensity;

/// @brief Field unityFogStartDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ___unityFogStartDistance;

/// @brief Field unityFogEndDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ___unityFogEndDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogDensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogHeightFalloff) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogDensity2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogHeightFalloff2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogHeight2) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogColorBlend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___fogColorMod) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___scattering) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___extinction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___anistropy) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___unityFogDensity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___unityFogStartDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFogOverride, ___unityFogEndDistance) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeFogOverride) == 0x58, "Size mismatch!");

} // namespace end def Enviro
