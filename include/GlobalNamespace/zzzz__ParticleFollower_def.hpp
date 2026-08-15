#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleFollower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ParticleFollower)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleFollower;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParticleFollower*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleFollower*, "", "ParticleFollower");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::Particle
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleFollower
class CORDL_TYPE ParticleFollower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ParticleSys, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ParticleSys, put=__cordl_internal_set_ParticleSys)) ::UnityW<::UnityEngine::ParticleSystem>  ParticleSys;

/// @brief Field _particles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__particles, put=__cordl_internal_set__particles)) ::ArrayW<::UnityEngine::ParticleSystem_Particle>  _particles;

static inline ::GlobalNamespace::ParticleFollower* New_ctor() ;

/// @brief Method Start, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803daa80, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_ParticleSys() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_ParticleSys() ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle> const& __cordl_internal_get__particles() const;

constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle>& __cordl_internal_get__particles() ;

constexpr void __cordl_internal_set_ParticleSys(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__particles(::ArrayW<::UnityEngine::ParticleSystem_Particle>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleFollower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleFollower", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleFollower(ParticleFollower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleFollower", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleFollower(ParticleFollower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4857};

/// @brief Field ParticleSys, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___ParticleSys;

/// @brief Field _particles, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::ParticleSystem_Particle>  ____particles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleFollower, ___ParticleSys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleFollower, ____particles) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleFollower) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
