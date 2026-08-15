#pragma once
// IWYU pragma private; include "Enviro/LobbyLighting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyLighting)
namespace Enviro {
struct LobbyLighting_AreaType;
}
namespace Enviro {
struct LobbyLighting_LightAreaSettings;
}
namespace Enviro {
struct LobbyLighting_LightingMaterial;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Enviro {
struct LobbyLighting_AreaType;
}
namespace Enviro {
class LobbyLighting;
}
namespace Enviro {
struct LobbyLighting_LightAreaSettings;
}
namespace Enviro {
struct LobbyLighting_LightingMaterial;
}
// Write type traits
MARK_VAL_T(::Enviro::LobbyLighting_AreaType);
MARK_REF_T(::Enviro::LobbyLighting*);
MARK_VAL_T(::Enviro::LobbyLighting_LightAreaSettings);
MARK_VAL_T(::Enviro::LobbyLighting_LightingMaterial);
DEFINE_IL2CPP_CLASS(::Enviro::LobbyLighting_AreaType, "Enviro", "LobbyLighting/AreaType");
DEFINE_IL2CPP_CLASS(::Enviro::LobbyLighting*, "Enviro", "LobbyLighting");
DEFINE_IL2CPP_CLASS(::Enviro::LobbyLighting_LightAreaSettings, "Enviro", "LobbyLighting/LightAreaSettings");
DEFINE_IL2CPP_CLASS(::Enviro::LobbyLighting_LightingMaterial, "Enviro", "LobbyLighting/LightingMaterial");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.LobbyLighting/AreaType
struct CORDL_TYPE LobbyLighting_AreaType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LobbyLighting_AreaType_Unwrapped
enum struct __LobbyLighting_AreaType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Tunnel = static_cast<int32_t>(0x1),
__E_Gauntlet = static_cast<int32_t>(0x2),
__E_BellRoom = static_cast<int32_t>(0x3),
__E_GoodbyeChapel = static_cast<int32_t>(0x4),
__E_Dream = static_cast<int32_t>(0x5),
__E_GoodbyeVoid = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LobbyLighting_AreaType_Unwrapped () const noexcept {
return static_cast<__LobbyLighting_AreaType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LobbyLighting_AreaType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LobbyLighting_AreaType(int32_t  value__) noexcept;

/// @brief Field BellRoom value: I32(3)
static ::Enviro::LobbyLighting_AreaType const BellRoom;

/// @brief Field Default value: I32(0)
static ::Enviro::LobbyLighting_AreaType const Default;

/// @brief Field Dream value: I32(5)
static ::Enviro::LobbyLighting_AreaType const Dream;

/// @brief Field Gauntlet value: I32(2)
static ::Enviro::LobbyLighting_AreaType const Gauntlet;

/// @brief Field GoodbyeChapel value: I32(4)
static ::Enviro::LobbyLighting_AreaType const GoodbyeChapel;

/// @brief Field GoodbyeVoid value: I32(6)
static ::Enviro::LobbyLighting_AreaType const GoodbyeVoid;

/// @brief Field Tunnel value: I32(1)
static ::Enviro::LobbyLighting_AreaType const Tunnel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18430};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::LobbyLighting_AreaType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::LobbyLighting_AreaType) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies UnityEngine.Color
namespace Enviro {
// Is value type: true
// CS Name: Enviro.LobbyLighting/LightAreaSettings
struct CORDL_TYPE LobbyLighting_LightAreaSettings {
public:
// Declarations
/// @brief Method Combine, addr 0x18060a500, size 0x170, virtual false, abstract: false, final false
static inline ::Enviro::LobbyLighting_LightAreaSettings Combine(::Enviro::LobbyLighting_LightAreaSettings  a, ::Enviro::LobbyLighting_LightAreaSettings  b) ;

/// @brief Method Lerp, addr 0x18060a670, size 0x430, virtual false, abstract: false, final false
static inline ::Enviro::LobbyLighting_LightAreaSettings Lerp(::Enviro::LobbyLighting_LightAreaSettings  a, ::Enviro::LobbyLighting_LightAreaSettings  b, float_t  t) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyLighting_LightAreaSettings() ;

// Ctor Parameters [CppParam { name: "strength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fogColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "playerLightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "sunlightStrength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "skyColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "horizonColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "groundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr LobbyLighting_LightAreaSettings(float_t  strength, ::UnityEngine::Color  fogColor, ::UnityEngine::Color  playerLightColor, float_t  sunlightStrength, ::UnityEngine::Color  skyColor, ::UnityEngine::Color  horizonColor, ::UnityEngine::Color  groundColor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field strength, offset: 0x0, size: 0x4, def value: None
 float_t  strength;

/// @brief Field fogColor, offset: 0x4, size: 0x10, def value: None
 ::UnityEngine::Color  fogColor;

/// @brief Field playerLightColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  playerLightColor;

/// @brief Field sunlightStrength, offset: 0x24, size: 0x4, def value: None
 float_t  sunlightStrength;

/// @brief Field skyColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  skyColor;

/// @brief Field horizonColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  horizonColor;

/// @brief Field groundColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  groundColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::LobbyLighting_LightAreaSettings, strength) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightAreaSettings, fogColor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightAreaSettings, playerLightColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightAreaSettings, sunlightStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightAreaSettings, skyColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightAreaSettings, horizonColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightAreaSettings, groundColor) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Enviro::LobbyLighting_LightAreaSettings) == 0x58, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.LobbyLighting::AreaType
namespace Enviro {
// Is value type: true
// CS Name: Enviro.LobbyLighting/LightingMaterial
struct CORDL_TYPE LobbyLighting_LightingMaterial {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LobbyLighting_LightingMaterial() ;

// Ctor Parameters [CppParam { name: "physicsMaterial", ty: "::UnityW<::UnityEngine::PhysicsMaterial>", modifiers: "", def_value: None }, CppParam { name: "areaType", ty: "::Enviro::LobbyLighting_AreaType", modifiers: "", def_value: None }, CppParam { name: "strength", ty: "float_t", modifiers: "", def_value: None }]
constexpr LobbyLighting_LightingMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  physicsMaterial, ::Enviro::LobbyLighting_AreaType  areaType, float_t  strength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field physicsMaterial, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  physicsMaterial;

/// @brief Field areaType, offset: 0x8, size: 0x4, def value: None
 ::Enviro::LobbyLighting_AreaType  areaType;

/// @brief Field strength, offset: 0xc, size: 0x4, def value: None
 float_t  strength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::LobbyLighting_LightingMaterial, physicsMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightingMaterial, areaType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting_LightingMaterial, strength) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Enviro::LobbyLighting_LightingMaterial) == 0x10, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.LobbyLighting::LightAreaSettings, Enviro.LobbyLighting::LightingMaterial, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Enviro {
// Is value type: false
// CS Name: Enviro.LobbyLighting
class CORDL_TYPE LobbyLighting : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AreaType = ::Enviro::LobbyLighting_AreaType;

using LightAreaSettings = ::Enviro::LobbyLighting_LightAreaSettings;

using LightingMaterial = ::Enviro::LobbyLighting_LightingMaterial;

/// @brief Field _isDirty, offset 0x242, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDirty, put=__cordl_internal_set__isDirty)) bool  _isDirty;

/// @brief Field _isTransitioning, offset 0x241, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTransitioning, put=__cordl_internal_set__isTransitioning)) bool  _isTransitioning;

/// @brief Field bellRoomSettings, offset 0xd0, size 0x58 
 __declspec(property(get=__cordl_internal_get_bellRoomSettings, put=__cordl_internal_set_bellRoomSettings)) ::Enviro::LobbyLighting_LightAreaSettings  bellRoomSettings;

/// @brief Field dreamSettings, offset 0x180, size 0x58 
 __declspec(property(get=__cordl_internal_get_dreamSettings, put=__cordl_internal_set_dreamSettings)) ::Enviro::LobbyLighting_LightAreaSettings  dreamSettings;

/// @brief Field gauntletSettings, offset 0x78, size 0x58 
 __declspec(property(get=__cordl_internal_get_gauntletSettings, put=__cordl_internal_set_gauntletSettings)) ::Enviro::LobbyLighting_LightAreaSettings  gauntletSettings;

/// @brief Field goodbyeChapelSettings, offset 0x128, size 0x58 
 __declspec(property(get=__cordl_internal_get_goodbyeChapelSettings, put=__cordl_internal_set_goodbyeChapelSettings)) ::Enviro::LobbyLighting_LightAreaSettings  goodbyeChapelSettings;

/// @brief Field goodbyeVoidSettings, offset 0x1d8, size 0x58 
 __declspec(property(get=__cordl_internal_get_goodbyeVoidSettings, put=__cordl_internal_set_goodbyeVoidSettings)) ::Enviro::LobbyLighting_LightAreaSettings  goodbyeVoidSettings;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Enviro::LobbyLighting>  instance;

/// @brief Field layerMask, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field lightingMaterials, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightingMaterials, put=__cordl_internal_set_lightingMaterials)) ::ArrayW<::Enviro::LobbyLighting_LightingMaterial>  lightingMaterials;

/// @brief Field logVerbose, offset 0x240, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field tunnelSettings, offset 0x20, size 0x58 
 __declspec(property(get=__cordl_internal_get_tunnelSettings, put=__cordl_internal_set_tunnelSettings)) ::Enviro::LobbyLighting_LightAreaSettings  tunnelSettings;

/// @brief Method Awake, addr 0x18060aaa0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckLightingOfArea, addr 0x18060aad0, size 0x1e0, virtual false, abstract: false, final false
static inline void CheckLightingOfArea(::UnityEngine::Vector3  samplePosition, ::by_ref<::Enviro::LobbyLighting_AreaType>  area, ::by_ref<float_t>  tunnelStrength) ;

/// @brief Method ClearAllStrengths, addr 0x18060acb0, size 0xe0, virtual false, abstract: false, final false
static inline void ClearAllStrengths() ;

/// @brief Method GetActiveSettings, addr 0x18060ad90, size 0x40, virtual false, abstract: false, final false
static inline ::Enviro::LobbyLighting_LightAreaSettings GetActiveSettings() ;

/// @brief Method GetCombinedSettings, addr 0x18060add0, size 0x310, virtual false, abstract: false, final false
inline ::Enviro::LobbyLighting_LightAreaSettings GetCombinedSettings() ;

/// @brief Method GetFogColor, addr 0x18060b0e0, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetFogColor(::UnityEngine::Color  enviroFogColor) ;

/// @brief Method GetStrength, addr 0x18060b1f0, size 0x110, virtual false, abstract: false, final false
static inline float_t GetStrength(::Enviro::LobbyLighting_AreaType  areaType) ;

static inline ::Enviro::LobbyLighting* New_ctor() ;

/// @brief Method SetStrength, addr 0x18060b300, size 0x1e0, virtual false, abstract: false, final false
static inline void SetStrength(float_t  value, ::Enviro::LobbyLighting_AreaType  areaType) ;

/// @brief Method SetTrilight, addr 0x18060b4e0, size 0x290, virtual false, abstract: false, final false
static inline void SetTrilight(::UnityEngine::Color  enviroSky, ::UnityEngine::Color  enviroHorizon, ::UnityEngine::Color  enviroGround) ;

constexpr bool const& __cordl_internal_get__isDirty() const;

constexpr bool& __cordl_internal_get__isDirty() ;

constexpr bool const& __cordl_internal_get__isTransitioning() const;

constexpr bool& __cordl_internal_get__isTransitioning() ;

constexpr ::Enviro::LobbyLighting_LightAreaSettings const& __cordl_internal_get_bellRoomSettings() const;

constexpr ::Enviro::LobbyLighting_LightAreaSettings& __cordl_internal_get_bellRoomSettings() ;

constexpr ::Enviro::LobbyLighting_LightAreaSettings const& __cordl_internal_get_dreamSettings() const;

constexpr ::Enviro::LobbyLighting_LightAreaSettings& __cordl_internal_get_dreamSettings() ;

constexpr ::Enviro::LobbyLighting_LightAreaSettings const& __cordl_internal_get_gauntletSettings() const;

constexpr ::Enviro::LobbyLighting_LightAreaSettings& __cordl_internal_get_gauntletSettings() ;

constexpr ::Enviro::LobbyLighting_LightAreaSettings const& __cordl_internal_get_goodbyeChapelSettings() const;

constexpr ::Enviro::LobbyLighting_LightAreaSettings& __cordl_internal_get_goodbyeChapelSettings() ;

constexpr ::Enviro::LobbyLighting_LightAreaSettings const& __cordl_internal_get_goodbyeVoidSettings() const;

constexpr ::Enviro::LobbyLighting_LightAreaSettings& __cordl_internal_get_goodbyeVoidSettings() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr ::ArrayW<::Enviro::LobbyLighting_LightingMaterial> const& __cordl_internal_get_lightingMaterials() const;

constexpr ::ArrayW<::Enviro::LobbyLighting_LightingMaterial>& __cordl_internal_get_lightingMaterials() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::Enviro::LobbyLighting_LightAreaSettings const& __cordl_internal_get_tunnelSettings() const;

constexpr ::Enviro::LobbyLighting_LightAreaSettings& __cordl_internal_get_tunnelSettings() ;

constexpr void __cordl_internal_set__isDirty(bool  value) ;

constexpr void __cordl_internal_set__isTransitioning(bool  value) ;

constexpr void __cordl_internal_set_bellRoomSettings(::Enviro::LobbyLighting_LightAreaSettings  value) ;

constexpr void __cordl_internal_set_dreamSettings(::Enviro::LobbyLighting_LightAreaSettings  value) ;

constexpr void __cordl_internal_set_gauntletSettings(::Enviro::LobbyLighting_LightAreaSettings  value) ;

constexpr void __cordl_internal_set_goodbyeChapelSettings(::Enviro::LobbyLighting_LightAreaSettings  value) ;

constexpr void __cordl_internal_set_goodbyeVoidSettings(::Enviro::LobbyLighting_LightAreaSettings  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_lightingMaterials(::ArrayW<::Enviro::LobbyLighting_LightingMaterial>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_tunnelSettings(::Enviro::LobbyLighting_LightAreaSettings  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Enviro::LobbyLighting> getStaticF_instance() ;

/// @brief Method get_SunlightModifier, addr 0x18060b770, size 0x80, virtual false, abstract: false, final false
static inline float_t get_SunlightModifier() ;

/// @brief Method get_hasActiveOverrides, addr 0x18060b7f0, size 0xb0, virtual false, abstract: false, final false
static inline bool get_hasActiveOverrides() ;

/// @brief Method get_isDirty, addr 0x18060b8a0, size 0x50, virtual false, abstract: false, final false
static inline bool get_isDirty() ;

static inline void setStaticF_instance(::UnityW<::Enviro::LobbyLighting>  value) ;

/// @brief Method set_isDirty, addr 0x18060b8f0, size 0x50, virtual false, abstract: false, final false
static inline void set_isDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyLighting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyLighting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyLighting(LobbyLighting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyLighting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyLighting(LobbyLighting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18433};

/// @brief Field tunnelSettings, offset: 0x20, size: 0x58, def value: None
 ::Enviro::LobbyLighting_LightAreaSettings  ___tunnelSettings;

/// @brief Field gauntletSettings, offset: 0x78, size: 0x58, def value: None
 ::Enviro::LobbyLighting_LightAreaSettings  ___gauntletSettings;

/// @brief Field bellRoomSettings, offset: 0xd0, size: 0x58, def value: None
 ::Enviro::LobbyLighting_LightAreaSettings  ___bellRoomSettings;

/// @brief Field goodbyeChapelSettings, offset: 0x128, size: 0x58, def value: None
 ::Enviro::LobbyLighting_LightAreaSettings  ___goodbyeChapelSettings;

/// @brief Field dreamSettings, offset: 0x180, size: 0x58, def value: None
 ::Enviro::LobbyLighting_LightAreaSettings  ___dreamSettings;

/// @brief Field goodbyeVoidSettings, offset: 0x1d8, size: 0x58, def value: None
 ::Enviro::LobbyLighting_LightAreaSettings  ___goodbyeVoidSettings;

/// @brief Field layerMask, offset: 0x230, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field lightingMaterials, offset: 0x238, size: 0x8, def value: None
 ::ArrayW<::Enviro::LobbyLighting_LightingMaterial>  ___lightingMaterials;

/// @brief Field logVerbose, offset: 0x240, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _isTransitioning, offset: 0x241, size: 0x1, def value: None
 bool  ____isTransitioning;

/// @brief Field _isDirty, offset: 0x242, size: 0x1, def value: None
 bool  ____isDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::LobbyLighting, ___tunnelSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___gauntletSettings) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___bellRoomSettings) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___goodbyeChapelSettings) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___dreamSettings) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___goodbyeVoidSettings) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___layerMask) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___lightingMaterials) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ___logVerbose) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ____isTransitioning) == 0x241, "Offset mismatch!");

static_assert(offsetof(::Enviro::LobbyLighting, ____isDirty) == 0x242, "Offset mismatch!");

static_assert(sizeof(::Enviro::LobbyLighting) == 0x248, "Size mismatch!");

} // namespace end def Enviro
