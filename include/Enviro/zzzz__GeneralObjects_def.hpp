#pragma once
// IWYU pragma private; include "Enviro/GeneralObjects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GeneralObjects)
namespace Enviro {
class EnviroReflectionProbe;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class WindZone;
}
// Forward declare root types
namespace Enviro {
class GeneralObjects;
}
// Write type traits
MARK_REF_T(::Enviro::GeneralObjects*);
DEFINE_IL2CPP_CLASS(::Enviro::GeneralObjects*, "Enviro", "GeneralObjects");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.GeneralObjects
class CORDL_TYPE GeneralObjects : public ::System::Object {
public:
// Declarations
/// @brief Field additionalDirectionalLight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_additionalDirectionalLight, put=__cordl_internal_set_additionalDirectionalLight)) ::UnityW<::UnityEngine::Light>  additionalDirectionalLight;

/// @brief Field audio, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audio, put=__cordl_internal_set_audio)) ::UnityW<::UnityEngine::GameObject>  audio;

/// @brief Field directionalLight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_directionalLight, put=__cordl_internal_set_directionalLight)) ::UnityW<::UnityEngine::Light>  directionalLight;

/// @brief Field effects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_effects, put=__cordl_internal_set_effects)) ::UnityW<::UnityEngine::GameObject>  effects;

/// @brief Field globalReflectionProbe, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalReflectionProbe, put=__cordl_internal_set_globalReflectionProbe)) ::UnityW<::Enviro::EnviroReflectionProbe>  globalReflectionProbe;

/// @brief Field moon, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_moon, put=__cordl_internal_set_moon)) ::UnityW<::UnityEngine::GameObject>  moon;

/// @brief Field stars, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stars, put=__cordl_internal_set_stars)) ::UnityW<::UnityEngine::GameObject>  stars;

/// @brief Field sun, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sun, put=__cordl_internal_set_sun)) ::UnityW<::UnityEngine::GameObject>  sun;

/// @brief Field windZone, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_windZone, put=__cordl_internal_set_windZone)) ::UnityW<::UnityEngine::WindZone>  windZone;

/// @brief Field worldAnchor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldAnchor, put=__cordl_internal_set_worldAnchor)) ::UnityW<::UnityEngine::GameObject>  worldAnchor;

static inline ::Enviro::GeneralObjects* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_additionalDirectionalLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_additionalDirectionalLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_audio() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_audio() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_directionalLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_directionalLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effects() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effects() ;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& __cordl_internal_get_globalReflectionProbe() const;

constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& __cordl_internal_get_globalReflectionProbe() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_moon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_moon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stars() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stars() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sun() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sun() ;

constexpr ::UnityW<::UnityEngine::WindZone> const& __cordl_internal_get_windZone() const;

constexpr ::UnityW<::UnityEngine::WindZone>& __cordl_internal_get_windZone() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_worldAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_worldAnchor() ;

constexpr void __cordl_internal_set_additionalDirectionalLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_audio(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_effects(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_globalReflectionProbe(::UnityW<::Enviro::EnviroReflectionProbe>  value) ;

constexpr void __cordl_internal_set_moon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stars(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sun(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_windZone(::UnityW<::UnityEngine::WindZone>  value) ;

constexpr void __cordl_internal_set_worldAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeneralObjects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeneralObjects", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneralObjects(GeneralObjects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneralObjects", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneralObjects(GeneralObjects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18420};

/// @brief Field sun, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sun;

/// @brief Field moon, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___moon;

/// @brief Field stars, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stars;

/// @brief Field directionalLight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___directionalLight;

/// @brief Field additionalDirectionalLight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___additionalDirectionalLight;

/// @brief Field globalReflectionProbe, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionProbe>  ___globalReflectionProbe;

/// @brief Field effects, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effects;

/// @brief Field audio, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___audio;

/// @brief Field windZone, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::WindZone>  ___windZone;

/// @brief Field worldAnchor, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___worldAnchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::GeneralObjects, ___sun) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___moon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___stars) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___directionalLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___additionalDirectionalLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___globalReflectionProbe) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___effects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___audio) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___windZone) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::GeneralObjects, ___worldAnchor) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Enviro::GeneralObjects) == 0x60, "Size mismatch!");

} // namespace end def Enviro
