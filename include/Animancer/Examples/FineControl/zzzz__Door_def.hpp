#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/Door.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Door)
namespace Animancer::Examples::FineControl {
class IInteractable;
}
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer::Examples::FineControl {
class Door;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::FineControl::Door*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::FineControl::Door*, "Animancer.Examples.FineControl", "Door");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::FineControl {
// Is value type: false
// CS Name: Animancer.Examples.FineControl.Door
class CORDL_TYPE Door : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Open, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Open, put=__cordl_internal_set__Open)) ::UnityW<::UnityEngine::AnimationClip>  _Open;

/// @brief Field _Openness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Openness, put=__cordl_internal_set__Openness)) float_t  _Openness;

/// @brief Convert operator to "::Animancer::Examples::FineControl::IInteractable"
constexpr operator  ::Animancer::Examples::FineControl::IInteractable*() noexcept;

/// @brief Method Awake, addr 0x1802fa550, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Interact, addr 0x1802fa640, size 0xa0, virtual true, abstract: false, final true
inline void Interact() ;

static inline ::Animancer::Examples::FineControl::Door* New_ctor() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Open() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Open() ;

constexpr float_t const& __cordl_internal_get__Openness() const;

constexpr float_t& __cordl_internal_get__Openness() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Open(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__Openness(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::Examples::FineControl::IInteractable"
constexpr ::Animancer::Examples::FineControl::IInteractable* i___Animancer__Examples__FineControl__IInteractable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Door() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Door(Door && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Door(Door const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20025};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Open, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Open;

/// @brief Field _Openness, offset: 0x30, size: 0x4, def value: None
 float_t  ____Openness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::FineControl::Door, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::Door, ____Open) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::Door, ____Openness) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::FineControl::Door) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::FineControl
