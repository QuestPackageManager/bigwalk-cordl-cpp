#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleOneShotSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleOneShotSound)
namespace GlobalNamespace {
struct ParticleOneShotSound_OneShotType;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleOneShotSound_OneShotType;
}
namespace GlobalNamespace {
class ParticleOneShotSound;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleOneShotSound_OneShotType);
MARK_REF_T(::GlobalNamespace::ParticleOneShotSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleOneShotSound_OneShotType, "", "ParticleOneShotSound/OneShotType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleOneShotSound*, "", "ParticleOneShotSound");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ParticleOneShotSound/OneShotType
struct CORDL_TYPE ParticleOneShotSound_OneShotType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParticleOneShotSound_OneShotType_Unwrapped
enum struct __ParticleOneShotSound_OneShotType_Unwrapped : int32_t {
__E_OnZero = static_cast<int32_t>(0x0),
__E_OnAny = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParticleOneShotSound_OneShotType_Unwrapped () const noexcept {
return static_cast<__ParticleOneShotSound_OneShotType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParticleOneShotSound_OneShotType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParticleOneShotSound_OneShotType(int32_t  value__) noexcept;

/// @brief Field OnAny value: I32(1)
static ::GlobalNamespace::ParticleOneShotSound_OneShotType const OnAny;

/// @brief Field OnZero value: I32(0)
static ::GlobalNamespace::ParticleOneShotSound_OneShotType const OnZero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4858};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound_OneShotType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleOneShotSound_OneShotType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioAsset, ParticleOneShotSound::OneShotType, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::Particle, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleOneShotSound
class CORDL_TYPE ParticleOneShotSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OneShotType = ::GlobalNamespace::ParticleOneShotSound_OneShotType;

/// @brief Field Assets, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Assets, put=__cordl_internal_set_Assets)) ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  Assets;

/// @brief Field BehavioursToDisable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BehavioursToDisable, put=__cordl_internal_set_BehavioursToDisable)) ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  BehavioursToDisable;

/// @brief Field DelayByDistance, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_DelayByDistance, put=__cordl_internal_set_DelayByDistance)) bool  DelayByDistance;

/// @brief Field DisableAfterPlay, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableAfterPlay, put=__cordl_internal_set_DisableAfterPlay)) bool  DisableAfterPlay;

/// @brief Field ParticleSys, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ParticleSys, put=__cordl_internal_set_ParticleSys)) ::UnityW<::UnityEngine::ParticleSystem>  ParticleSys;

/// @brief Field Timing, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Timing, put=__cordl_internal_set_Timing)) ::GlobalNamespace::ParticleOneShotSound_OneShotType  Timing;

/// @brief Field _lastPos, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastPos, put=__cordl_internal_set__lastPos)) ::UnityEngine::Vector3  _lastPos;

/// @brief Field _particles, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__particles, put=__cordl_internal_set__particles)) ::ArrayW<::UnityEngine::ParticleSystem_Particle>  _particles;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

static inline ::GlobalNamespace::ParticleOneShotSound* New_ctor() ;

/// @brief Method Update, addr 0x1803daba0, size 0x5b0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>> const& __cordl_internal_get_Assets() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>& __cordl_internal_get_Assets() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& __cordl_internal_get_BehavioursToDisable() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& __cordl_internal_get_BehavioursToDisable() ;

constexpr bool const& __cordl_internal_get_DelayByDistance() const;

constexpr bool& __cordl_internal_get_DelayByDistance() ;

constexpr bool const& __cordl_internal_get_DisableAfterPlay() const;

constexpr bool& __cordl_internal_get_DisableAfterPlay() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_ParticleSys() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_ParticleSys() ;

constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType const& __cordl_internal_get_Timing() const;

constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType& __cordl_internal_get_Timing() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastPos() ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle> const& __cordl_internal_get__particles() const;

constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle>& __cordl_internal_get__particles() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Assets(::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  value) ;

constexpr void __cordl_internal_set_BehavioursToDisable(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value) ;

constexpr void __cordl_internal_set_DelayByDistance(bool  value) ;

constexpr void __cordl_internal_set_DisableAfterPlay(bool  value) ;

constexpr void __cordl_internal_set_ParticleSys(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_Timing(::GlobalNamespace::ParticleOneShotSound_OneShotType  value) ;

constexpr void __cordl_internal_set__lastPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__particles(::ArrayW<::UnityEngine::ParticleSystem_Particle>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0x1803db150, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleOneShotSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleOneShotSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleOneShotSound(ParticleOneShotSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleOneShotSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleOneShotSound(ParticleOneShotSound const& ) = delete;

/// @brief Field SOUND_SPEED offset 0xffffffff size 0x4
static constexpr float_t  SOUND_SPEED{static_cast<float_t>(343.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4859};

/// @brief Field ParticleSys, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___ParticleSys;

/// @brief Field Timing, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ParticleOneShotSound_OneShotType  ___Timing;

/// @brief Field DisableAfterPlay, offset: 0x2c, size: 0x1, def value: None
 bool  ___DisableAfterPlay;

/// @brief Field DelayByDistance, offset: 0x2d, size: 0x1, def value: None
 bool  ___DelayByDistance;

/// @brief Field Assets, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  ___Assets;

/// @brief Field BehavioursToDisable, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  ___BehavioursToDisable;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _particles, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::ParticleSystem_Particle>  ____particles;

/// @brief Field _lastPos, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ___ParticleSys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ___Timing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ___DisableAfterPlay) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ___DelayByDistance) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ___Assets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ___BehavioursToDisable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ____started) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ____particles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleOneShotSound, ____lastPos) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleOneShotSound) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
