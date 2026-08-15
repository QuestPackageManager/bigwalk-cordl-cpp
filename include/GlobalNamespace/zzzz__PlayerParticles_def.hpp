#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerParticles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerParticles)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerParticles;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerParticles*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerParticles*, "", "PlayerParticles");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerParticles
class CORDL_TYPE PlayerParticles : public ::System::Object {
public:
// Declarations
/// @brief Field dazedParticleSystem, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dazedParticleSystem, put=__cordl_internal_set_dazedParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  dazedParticleSystem;

/// @brief Field logVerbose, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field sweatParticleSystem, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sweatParticleSystem, put=__cordl_internal_set_sweatParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  sweatParticleSystem;

static inline ::GlobalNamespace::PlayerParticles* New_ctor() ;

/// @brief Method SetCarryingHeavy, addr 0x180359740, size 0x40, virtual false, abstract: false, final false
inline void SetCarryingHeavy(bool  active) ;

/// @brief Method SetDazed, addr 0x180359780, size 0x40, virtual false, abstract: false, final false
inline void SetDazed(bool  active) ;

/// @brief Method SetParticleSystem, addr 0x1803597c0, size 0x40, virtual false, abstract: false, final false
inline void SetParticleSystem(::UnityEngine::ParticleSystem*  system, bool  active) ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_dazedParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_dazedParticleSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_sweatParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_sweatParticleSystem() ;

constexpr void __cordl_internal_set_dazedParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_sweatParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerParticles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerParticles", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerParticles(PlayerParticles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerParticles", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerParticles(PlayerParticles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5474};

/// @brief Field sweatParticleSystem, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___sweatParticleSystem;

/// @brief Field dazedParticleSystem, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___dazedParticleSystem;

/// @brief Field logVerbose, offset: 0x20, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerParticles, ___sweatParticleSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerParticles, ___dazedParticleSystem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerParticles, ___logVerbose) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerParticles) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
