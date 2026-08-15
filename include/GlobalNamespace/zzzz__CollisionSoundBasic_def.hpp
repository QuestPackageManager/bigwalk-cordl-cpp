#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionSoundBasic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CollisionSoundBasic)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class CollisionSoundBasic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CollisionSoundBasic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionSoundBasic*, "", "CollisionSoundBasic");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollisionSoundBasic
class CORDL_TYPE CollisionSoundBasic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DebugMode, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugMode, put=__cordl_internal_set_DebugMode)) bool  DebugMode;

 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Field Rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Rb, put=__cordl_internal_set_Rb)) ::UnityW<::UnityEngine::Rigidbody>  Rb;

/// @brief Field Sound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sound, put=__cordl_internal_set_Sound)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  Sound;

/// @brief Field _audioEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioEvent, put=__cordl_internal_set__audioEvent)) ::GlobalNamespace::AudioEvent*  _audioEvent;

/// @brief Field _tooFar, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__tooFar, put=__cordl_internal_set__tooFar)) bool  _tooFar;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x18032c9e0, size 0x40, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method CalculateDistance, addr 0x18032ca20, size 0xa0, virtual false, abstract: false, final false
inline void CalculateDistance() ;

static inline ::GlobalNamespace::CollisionSoundBasic* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x18032cac0, size 0x150, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x18032cc10, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18032cc20, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method <OnCollisionEnter>b__14_0, addr 0x18032cca0, size 0x60, virtual false, abstract: false, final false
inline float_t _OnCollisionEnter_b__14_0() ;

constexpr bool const& __cordl_internal_get_DebugMode() const;

constexpr bool& __cordl_internal_get_DebugMode() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_Rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_Rb() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_Sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_Sound() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__audioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__audioEvent() ;

constexpr bool const& __cordl_internal_get__tooFar() const;

constexpr bool& __cordl_internal_get__tooFar() ;

constexpr void __cordl_internal_set_DebugMode(bool  value) ;

constexpr void __cordl_internal_set_Rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set__audioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__tooFar(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initialized, addr 0x1802dc4d0, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionSoundBasic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionSoundBasic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionSoundBasic(CollisionSoundBasic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionSoundBasic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionSoundBasic(CollisionSoundBasic const& ) = delete;

/// @brief Field TOO_FAR_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  TOO_FAR_THRESHOLD{static_cast<float_t>(2500.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4822};

/// @brief Field Rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___Rb;

/// @brief Field Sound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___Sound;

/// @brief Field DebugMode, offset: 0x30, size: 0x1, def value: None
 bool  ___DebugMode;

/// @brief Field _tooFar, offset: 0x31, size: 0x1, def value: None
 bool  ____tooFar;

/// @brief Field _audioEvent, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____audioEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionSoundBasic, ___Rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundBasic, ___Sound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundBasic, ___DebugMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundBasic, ____tooFar) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundBasic, ____audioEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionSoundBasic) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
