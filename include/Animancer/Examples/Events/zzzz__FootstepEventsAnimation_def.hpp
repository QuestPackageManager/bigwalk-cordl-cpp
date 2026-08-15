#pragma once
// IWYU pragma private; include "Animancer/Examples/Events/FootstepEventsAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FootstepEventsAnimation)
namespace Animancer::Examples::Events {
class FootstepEvents;
}
// Forward declare root types
namespace Animancer::Examples::Events {
class FootstepEventsAnimation;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Events::FootstepEventsAnimation*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Events::FootstepEventsAnimation*, "Animancer.Examples.Events", "FootstepEventsAnimation");
// Dependencies UnityEngine.AudioSource, UnityEngine.MonoBehaviour
namespace Animancer::Examples::Events {
// Is value type: false
// CS Name: Animancer.Examples.Events.FootstepEventsAnimation
class CORDL_TYPE FootstepEventsAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _FootSources, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FootSources, put=__cordl_internal_set__FootSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  _FootSources;

/// @brief Field _FootstepEvents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__FootstepEvents, put=__cordl_internal_set__FootstepEvents)) ::UnityW<::Animancer::Examples::Events::FootstepEvents>  _FootstepEvents;

/// @brief Method Footstep, addr 0x1802fba00, size 0x70, virtual false, abstract: false, final false
inline void Footstep(int32_t  foot) ;

static inline ::Animancer::Examples::Events::FootstepEventsAnimation* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get__FootSources() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get__FootSources() ;

constexpr ::UnityW<::Animancer::Examples::Events::FootstepEvents> const& __cordl_internal_get__FootstepEvents() const;

constexpr ::UnityW<::Animancer::Examples::Events::FootstepEvents>& __cordl_internal_get__FootstepEvents() ;

constexpr void __cordl_internal_set__FootSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set__FootstepEvents(::UnityW<::Animancer::Examples::Events::FootstepEvents>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepEventsAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepEventsAnimation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepEventsAnimation(FootstepEventsAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepEventsAnimation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepEventsAnimation(FootstepEventsAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20010};

/// @brief Field _FootstepEvents, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::Events::FootstepEvents>  ____FootstepEvents;

/// @brief Field _FootSources, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ____FootSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Events::FootstepEventsAnimation, ____FootstepEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::FootstepEventsAnimation, ____FootSources) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Events::FootstepEventsAnimation) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::Events
