#pragma once
// IWYU pragma private; include "Animancer/IAnimancerComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimancerComponent)
namespace Animancer {
class AnimancerPlayable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Animancer {
class IAnimancerComponent;
}
// Write type traits
MARK_REF_T(::Animancer::IAnimancerComponent*);
DEFINE_IL2CPP_CLASS(::Animancer::IAnimancerComponent*, "Animancer", "IAnimancerComponent");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IAnimancerComponent
class CORDL_TYPE IAnimancerComponent {
public:
// Declarations
 __declspec(property(get=get_Animator, put=set_Animator)) ::UnityW<::UnityEngine::Animator>  Animator;

 __declspec(property(get=get_IsPlayableInitialized)) bool  IsPlayableInitialized;

 __declspec(property(get=get_Playable)) ::Animancer::AnimancerPlayable*  Playable;

 __declspec(property(get=get_ResetOnDisable)) bool  ResetOnDisable;

 __declspec(property(get=get_UpdateMode, put=set_UpdateMode)) ::UnityEngine::AnimatorUpdateMode  UpdateMode;

 __declspec(property(get=get_enabled)) bool  enabled;

 __declspec(property(get=get_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Method GetKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* GetKey(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method get_Animator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Animator> get_Animator() ;

/// @brief Method get_IsPlayableInitialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsPlayableInitialized() ;

/// @brief Method get_Playable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::AnimancerPlayable* get_Playable() ;

/// @brief Method get_ResetOnDisable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_ResetOnDisable() ;

/// @brief Method get_UpdateMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AnimatorUpdateMode get_UpdateMode() ;

/// @brief Method get_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_gameObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_gameObject() ;

/// @brief Method set_Animator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Animator(::UnityEngine::Animator*  value) ;

/// @brief Method set_UpdateMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_UpdateMode(::UnityEngine::AnimatorUpdateMode  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAnimancerComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnimancerComponent(IAnimancerComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18134};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
