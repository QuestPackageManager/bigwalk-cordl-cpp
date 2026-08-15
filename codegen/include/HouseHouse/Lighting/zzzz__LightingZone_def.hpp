#pragma once
// IWYU pragma private; include "HouseHouse/Lighting/LightingZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Enviro/zzzz__LobbyLighting_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightingZone)
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HouseHouse::Lighting {
class LightingZone;
}
// Write type traits
MARK_REF_T(::HouseHouse::Lighting::LightingZone*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Lighting::LightingZone*, "HouseHouse.Lighting", "LightingZone");
// Dependencies Enviro.LobbyLighting::AreaType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace HouseHouse::Lighting {
// Is value type: false
// CS Name: HouseHouse.Lighting.LightingZone
class CORDL_TYPE LightingZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field areaType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_areaType, put=__cordl_internal_set_areaType)) ::Enviro::LobbyLighting_AreaType  areaType;

/// @brief Field logVerbose, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maxStrength, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxStrength, put=__cordl_internal_set_maxStrength)) float_t  maxStrength;

/// @brief Field samplePositionInside, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_samplePositionInside, put=__cordl_internal_set_samplePositionInside)) ::UnityEngine::Vector3  samplePositionInside;

/// @brief Field samplePositionOutside, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_samplePositionOutside, put=__cordl_internal_set_samplePositionOutside)) ::UnityEngine::Vector3  samplePositionOutside;

/// @brief Method GetDepth, addr 0x1803ccfc0, size 0x1c0, virtual false, abstract: false, final false
inline float_t GetDepth(::Unity::Mathematics::float3  position) ;

/// @brief Method InverseLerp, addr 0x1803cd180, size 0x90, virtual false, abstract: false, final false
static inline float_t InverseLerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  t) ;

static inline ::HouseHouse::Lighting::LightingZone* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803cd210, size 0x110, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method UpdateForPosition, addr 0x1803cd320, size 0x90, virtual false, abstract: false, final false
inline void UpdateForPosition(::Unity::Mathematics::float3  position) ;

/// @brief Method UpdateOnExit, addr 0x1803cd3b0, size 0x1c0, virtual false, abstract: false, final false
inline void UpdateOnExit(::Unity::Mathematics::float3  position) ;

constexpr ::Enviro::LobbyLighting_AreaType const& __cordl_internal_get_areaType() const;

constexpr ::Enviro::LobbyLighting_AreaType& __cordl_internal_get_areaType() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_maxStrength() const;

constexpr float_t& __cordl_internal_get_maxStrength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_samplePositionInside() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_samplePositionInside() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_samplePositionOutside() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_samplePositionOutside() ;

constexpr void __cordl_internal_set_areaType(::Enviro::LobbyLighting_AreaType  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maxStrength(float_t  value) ;

constexpr void __cordl_internal_set_samplePositionInside(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_samplePositionOutside(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightingZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightingZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightingZone(LightingZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightingZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightingZone(LightingZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5782};

/// @brief Field samplePositionOutside, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___samplePositionOutside;

/// @brief Field samplePositionInside, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___samplePositionInside;

/// @brief Field areaType, offset: 0x38, size: 0x4, def value: None
 ::Enviro::LobbyLighting_AreaType  ___areaType;

/// @brief Field maxStrength, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxStrength;

/// @brief Field logVerbose, offset: 0x40, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Lighting::LightingZone, ___samplePositionOutside) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Lighting::LightingZone, ___samplePositionInside) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Lighting::LightingZone, ___areaType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Lighting::LightingZone, ___maxStrength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Lighting::LightingZone, ___logVerbose) == 0x40, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Lighting::LightingZone) == 0x48, "Size mismatch!");

} // namespace end def HouseHouse::Lighting
