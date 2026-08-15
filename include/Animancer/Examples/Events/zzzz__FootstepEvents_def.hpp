#pragma once
// IWYU pragma private; include "Animancer/Examples/Events/FootstepEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FootstepEvents)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class ClipTransition;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Animancer::Examples::Events {
class FootstepEvents;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Events::FootstepEvents*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Events::FootstepEvents*, "Animancer.Examples.Events", "FootstepEvents");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace Animancer::Examples::Events {
// Is value type: false
// CS Name: Animancer.Examples.Events.FootstepEvents
class CORDL_TYPE FootstepEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Sounds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Sounds, put=__cordl_internal_set__Sounds)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _Sounds;

/// @brief Field _Walk, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Walk, put=__cordl_internal_set__Walk)) ::Animancer::ClipTransition*  _Walk;

static inline ::Animancer::Examples::Events::FootstepEvents* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fba70, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlaySound, addr 0x1802fbaa0, size 0x60, virtual false, abstract: false, final false
inline void PlaySound(::UnityEngine::AudioSource*  source) ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__Sounds() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__Sounds() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Walk() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Walk() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Sounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__Walk(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepEvents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepEvents(FootstepEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepEvents(FootstepEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20009};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Walk, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Walk;

/// @brief Field _Sounds, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____Sounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Events::FootstepEvents, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::FootstepEvents, ____Walk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::FootstepEvents, ____Sounds) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Events::FootstepEvents) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::Events
