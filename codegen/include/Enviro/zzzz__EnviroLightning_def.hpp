#pragma once
// IWYU pragma private; include "Enviro/EnviroLightning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroLightning)
namespace Enviro {
class Lightning;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Enviro {
class EnviroLightning;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroLightning*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLightning*, "Enviro", "EnviroLightning");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroLightning
class CORDL_TYPE EnviroLightning : public ::System::Object {
public:
// Declarations
/// @brief Field cloudsLightningDuration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsLightningDuration, put=__cordl_internal_set_cloudsLightningDuration)) float_t  cloudsLightningDuration;

/// @brief Field cloudsLightningRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsLightningRadius, put=__cordl_internal_set_cloudsLightningRadius)) float_t  cloudsLightningRadius;

/// @brief Field customLightningEffect, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_customLightningEffect, put=__cordl_internal_set_customLightningEffect)) ::UnityW<::UnityEngine::GameObject>  customLightningEffect;

/// @brief Field lightningStorm, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_lightningStorm, put=__cordl_internal_set_lightningStorm)) bool  lightningStorm;

/// @brief Field prefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::Enviro::Lightning>  prefab;

/// @brief Field randomLightingDelay, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomLightingDelay, put=__cordl_internal_set_randomLightingDelay)) float_t  randomLightingDelay;

/// @brief Field randomSpawnRange, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomSpawnRange, put=__cordl_internal_set_randomSpawnRange)) float_t  randomSpawnRange;

/// @brief Field randomTargetRange, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomTargetRange, put=__cordl_internal_set_randomTargetRange)) float_t  randomTargetRange;

static inline ::Enviro::EnviroLightning* New_ctor() ;

constexpr float_t const& __cordl_internal_get_cloudsLightningDuration() const;

constexpr float_t& __cordl_internal_get_cloudsLightningDuration() ;

constexpr float_t const& __cordl_internal_get_cloudsLightningRadius() const;

constexpr float_t& __cordl_internal_get_cloudsLightningRadius() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_customLightningEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_customLightningEffect() ;

constexpr bool const& __cordl_internal_get_lightningStorm() const;

constexpr bool& __cordl_internal_get_lightningStorm() ;

constexpr ::UnityW<::Enviro::Lightning> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::Enviro::Lightning>& __cordl_internal_get_prefab() ;

constexpr float_t const& __cordl_internal_get_randomLightingDelay() const;

constexpr float_t& __cordl_internal_get_randomLightingDelay() ;

constexpr float_t const& __cordl_internal_get_randomSpawnRange() const;

constexpr float_t& __cordl_internal_get_randomSpawnRange() ;

constexpr float_t const& __cordl_internal_get_randomTargetRange() const;

constexpr float_t& __cordl_internal_get_randomTargetRange() ;

constexpr void __cordl_internal_set_cloudsLightningDuration(float_t  value) ;

constexpr void __cordl_internal_set_cloudsLightningRadius(float_t  value) ;

constexpr void __cordl_internal_set_customLightningEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lightningStorm(bool  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::Enviro::Lightning>  value) ;

constexpr void __cordl_internal_set_randomLightingDelay(float_t  value) ;

constexpr void __cordl_internal_set_randomSpawnRange(float_t  value) ;

constexpr void __cordl_internal_set_randomTargetRange(float_t  value) ;

/// @brief Method .ctor, addr 0x180615b90, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroLightning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightning", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroLightning(EnviroLightning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightning", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroLightning(EnviroLightning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18464};

/// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Enviro::Lightning>  ___prefab;

/// @brief Field customLightningEffect, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___customLightningEffect;

/// @brief Field lightningStorm, offset: 0x20, size: 0x1, def value: None
 bool  ___lightningStorm;

/// @brief Field randomLightingDelay, offset: 0x24, size: 0x4, def value: None
 float_t  ___randomLightingDelay;

/// @brief Field randomSpawnRange, offset: 0x28, size: 0x4, def value: None
 float_t  ___randomSpawnRange;

/// @brief Field randomTargetRange, offset: 0x2c, size: 0x4, def value: None
 float_t  ___randomTargetRange;

/// @brief Field cloudsLightningRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___cloudsLightningRadius;

/// @brief Field cloudsLightningDuration, offset: 0x34, size: 0x4, def value: None
 float_t  ___cloudsLightningDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLightning, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightning, ___customLightningEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightning, ___lightningStorm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightning, ___randomLightingDelay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightning, ___randomSpawnRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightning, ___randomTargetRange) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightning, ___cloudsLightningRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightning, ___cloudsLightningDuration) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLightning) == 0x38, "Size mismatch!");

} // namespace end def Enviro
