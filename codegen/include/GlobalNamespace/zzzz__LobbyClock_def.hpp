#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyClock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LobbyClock)
namespace GlobalNamespace {
class SoundCue;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyClock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LobbyClock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyClock*, "", "LobbyClock");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyClock
class CORDL_TYPE LobbyClock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastSecond, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSecond, put=__cordl_internal_set__lastSecond)) float_t  _lastSecond;

/// @brief Field hourHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hourHand, put=__cordl_internal_set_hourHand)) ::UnityW<::UnityEngine::Transform>  hourHand;

/// @brief Field secondHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondHand, put=__cordl_internal_set_secondHand)) ::UnityW<::UnityEngine::Transform>  secondHand;

/// @brief Field tickSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tickSound, put=__cordl_internal_set_tickSound)) ::UnityW<::GlobalNamespace::SoundCue>  tickSound;

/// @brief Field tockSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tockSound, put=__cordl_internal_set_tockSound)) ::UnityW<::GlobalNamespace::SoundCue>  tockSound;

static inline ::GlobalNamespace::LobbyClock* New_ctor() ;

/// @brief Method Update, addr 0x1803ffd00, size 0x250, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__lastSecond() const;

constexpr float_t& __cordl_internal_get__lastSecond() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hourHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hourHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_secondHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_secondHand() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_tickSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_tickSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_tockSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_tockSound() ;

constexpr void __cordl_internal_set__lastSecond(float_t  value) ;

constexpr void __cordl_internal_set_hourHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_secondHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tickSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_tockSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyClock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyClock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyClock(LobbyClock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyClock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyClock(LobbyClock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5074};

/// @brief Field hourHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hourHand;

/// @brief Field secondHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___secondHand;

/// @brief Field tickSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___tickSound;

/// @brief Field tockSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___tockSound;

/// @brief Field _lastSecond, offset: 0x40, size: 0x4, def value: None
 float_t  ____lastSecond;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyClock, ___hourHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyClock, ___secondHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyClock, ___tickSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyClock, ___tockSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyClock, ____lastSecond) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LobbyClock) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
