#pragma once
// IWYU pragma private; include "Animancer/NamedAnimancerComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(NamedAnimancerComponent)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer {
class NamedAnimancerComponent;
}
// Write type traits
MARK_REF_T(::Animancer::NamedAnimancerComponent*);
DEFINE_IL2CPP_CLASS(::Animancer::NamedAnimancerComponent*, "Animancer", "NamedAnimancerComponent");
// Dependencies Animancer.AnimancerComponent, UnityEngine.AnimationClip
namespace Animancer {
// Is value type: false
// CS Name: Animancer.NamedAnimancerComponent
class CORDL_TYPE NamedAnimancerComponent : public ::Animancer::AnimancerComponent {
public:
// Declarations
 __declspec(property(get=get_Animations, put=set_Animations)) ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  Animations;

 __declspec(property(get=get_DefaultAnimation, put=set_DefaultAnimation)) ::UnityW<::UnityEngine::AnimationClip>  DefaultAnimation;

 __declspec(property(get=get_PlayAutomatically)) bool  PlayAutomatically;

/// @brief Field _Animations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animations, put=__cordl_internal_set__Animations)) ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  _Animations;

/// @brief Field _PlayAutomatically, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__PlayAutomatically, put=__cordl_internal_set__PlayAutomatically)) bool  _PlayAutomatically;

/// @brief Method Awake, addr 0x180311ca0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GatherAnimationClips, addr 0x180311cf0, size 0x40, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetKey, addr 0x180311d30, size 0x20, virtual true, abstract: false, final false
inline ::System::Object* GetKey(::UnityEngine::AnimationClip*  clip) ;

static inline ::Animancer::NamedAnimancerComponent* New_ctor() ;

/// @brief Method OnEnable, addr 0x180311d50, size 0x80, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> const& __cordl_internal_get__Animations() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>& __cordl_internal_get__Animations() ;

constexpr bool const& __cordl_internal_get__PlayAutomatically() const;

constexpr bool& __cordl_internal_get__PlayAutomatically() ;

constexpr void __cordl_internal_set__Animations(::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  value) ;

constexpr void __cordl_internal_set__PlayAutomatically(bool  value) ;

/// @brief Method .ctor, addr 0x180311dd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animations, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> get_Animations() ;

/// @brief Method get_DefaultAnimation, addr 0x180311de0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_DefaultAnimation() ;

/// @brief Method get_PlayAutomatically, addr 0x180311e20, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<bool> get_PlayAutomatically() ;

/// @brief Method set_Animations, addr 0x180311e30, size 0x50, virtual false, abstract: false, final false
inline void set_Animations(::ArrayW<::UnityEngine::AnimationClip*>  value) ;

/// @brief Method set_DefaultAnimation, addr 0x180311e80, size 0x90, virtual false, abstract: false, final false
inline void set_DefaultAnimation(::UnityEngine::AnimationClip*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NamedAnimancerComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NamedAnimancerComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NamedAnimancerComponent(NamedAnimancerComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamedAnimancerComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamedAnimancerComponent(NamedAnimancerComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18156};

/// @brief Field _PlayAutomatically, offset: 0x34, size: 0x1, def value: None
 bool  ____PlayAutomatically;

/// @brief Field _Animations, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  ____Animations;

/// @brief Size padding 0x48 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::NamedAnimancerComponent, ____PlayAutomatically) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::NamedAnimancerComponent, ____Animations) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::NamedAnimancerComponent) == 0x48, "Size mismatch!");

} // namespace end def Animancer
