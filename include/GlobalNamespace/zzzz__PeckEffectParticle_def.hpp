#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectParticle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectParticle)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectParticle_ParticleSetting;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectParticle_ParticleSetting;
}
namespace GlobalNamespace {
class PeckEffectParticle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectParticle_ParticleSetting);
MARK_REF_T(::GlobalNamespace::PeckEffectParticle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectParticle_ParticleSetting, "", "PeckEffectParticle/ParticleSetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectParticle*, "", "PeckEffectParticle");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectParticle/ParticleSetting
struct CORDL_TYPE PeckEffectParticle_ParticleSetting {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectParticle_ParticleSetting_Unwrapped
enum struct __PeckEffectParticle_ParticleSetting_Unwrapped : int32_t {
__E_Ignore = static_cast<int32_t>(0x0),
__E_Play = static_cast<int32_t>(0x1),
__E_Stop = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectParticle_ParticleSetting_Unwrapped () const noexcept {
return static_cast<__PeckEffectParticle_ParticleSetting_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectParticle_ParticleSetting() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectParticle_ParticleSetting(int32_t  value__) noexcept;

/// @brief Field Ignore value: I32(0)
static ::GlobalNamespace::PeckEffectParticle_ParticleSetting const Ignore;

/// @brief Field Play value: I32(1)
static ::GlobalNamespace::PeckEffectParticle_ParticleSetting const Play;

/// @brief Field Stop value: I32(2)
static ::GlobalNamespace::PeckEffectParticle_ParticleSetting const Stop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5396};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectParticle_ParticleSetting, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectParticle_ParticleSetting) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectParticle::ParticleSetting, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectParticle
class CORDL_TYPE PeckEffectParticle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ParticleSetting = ::GlobalNamespace::PeckEffectParticle_ParticleSetting;

/// @brief Field _asc, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__asc, put=__cordl_internal_set__asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  _asc;

/// @brief Field customAudioTransform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_customAudioTransform, put=__cordl_internal_set_customAudioTransform)) ::UnityW<::UnityEngine::Transform>  customAudioTransform;

/// @brief Field emitOneBeforePlaying, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_emitOneBeforePlaying, put=__cordl_internal_set_emitOneBeforePlaying)) bool  emitOneBeforePlaying;

/// @brief Field isLooping, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLooping, put=__cordl_internal_set_isLooping)) bool  isLooping;

/// @brief Field logVerbose, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field originalParent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalParent, put=__cordl_internal_set_originalParent)) ::UnityW<::UnityEngine::Transform>  originalParent;

/// @brief Field settings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting>  settings;

/// @brief Field sound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_sound, put=__cordl_internal_set_sound)) ::UnityW<::GlobalNamespace::AudioAsset>  sound;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field targetParticleSystem, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetParticleSystem, put=__cordl_internal_set_targetParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  targetParticleSystem;

/// @brief Field unparentAndLeave, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_unparentAndLeave, put=__cordl_internal_set_unparentAndLeave)) bool  unparentAndLeave;

/// @brief Method Awake, addr 0x18044af90, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectParticle* New_ctor() ;

/// @brief Method Peck, addr 0x18044b080, size 0x4d0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context, ::GlobalNamespace::TrackedPeckState*  peckSystem) ;

/// @brief Method <Peck>g___clearRef|13_0, addr 0x18031db50, size 0x60, virtual false, abstract: false, final false
static inline void _Peck_g___clearRef_13_0(::GlobalNamespace::PeckEffectParticle*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__asc() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customAudioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customAudioTransform() ;

constexpr bool const& __cordl_internal_get_emitOneBeforePlaying() const;

constexpr bool& __cordl_internal_get_emitOneBeforePlaying() ;

constexpr bool const& __cordl_internal_get_isLooping() const;

constexpr bool& __cordl_internal_get_isLooping() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_originalParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_originalParent() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting> const& __cordl_internal_get_settings() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting>& __cordl_internal_get_settings() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_sound() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_targetParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_targetParticleSystem() ;

constexpr bool const& __cordl_internal_get_unparentAndLeave() const;

constexpr bool& __cordl_internal_get_unparentAndLeave() ;

constexpr void __cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_customAudioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_emitOneBeforePlaying(bool  value) ;

constexpr void __cordl_internal_set_isLooping(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_originalParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_settings(::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting>  value) ;

constexpr void __cordl_internal_set_sound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targetParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_unparentAndLeave(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectParticle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectParticle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectParticle(PeckEffectParticle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectParticle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectParticle(PeckEffectParticle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5397};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field targetParticleSystem, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___targetParticleSystem;

/// @brief Field settings, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting>  ___settings;

/// @brief Field emitOneBeforePlaying, offset: 0x58, size: 0x1, def value: None
 bool  ___emitOneBeforePlaying;

/// @brief Field unparentAndLeave, offset: 0x59, size: 0x1, def value: None
 bool  ___unparentAndLeave;

/// @brief Field sound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___sound;

/// @brief Field customAudioTransform, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customAudioTransform;

/// @brief Field isLooping, offset: 0x70, size: 0x1, def value: None
 bool  ___isLooping;

/// @brief Field logVerbose, offset: 0x71, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field originalParent, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___originalParent;

/// @brief Field _asc, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____asc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___targetParticleSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___settings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___emitOneBeforePlaying) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___unparentAndLeave) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___sound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___customAudioTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___isLooping) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___logVerbose) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ___originalParent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticle, ____asc) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectParticle) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
