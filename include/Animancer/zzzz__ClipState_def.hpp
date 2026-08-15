#pragma once
// IWYU pragma private; include "Animancer/ClipState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClipState)
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class ClipState_ITransition;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
template<typename TState>
class ITransition_1;
}
namespace Animancer {
class ITransition;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class ClipState;
}
namespace Animancer {
class ClipState_ITransition;
}
// Write type traits
MARK_REF_T(::Animancer::ClipState*);
MARK_REF_T(::Animancer::ClipState_ITransition*);
DEFINE_IL2CPP_CLASS(::Animancer::ClipState*, "Animancer", "ClipState");
DEFINE_IL2CPP_CLASS(::Animancer::ClipState_ITransition*, "Animancer", "ClipState/ITransition");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ClipState/ITransition
class CORDL_TYPE ClipState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ClipState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ClipState*>* i___Animancer__ITransition_1___Animancer__ClipState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ClipState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipState_ITransition(ClipState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.AnimancerState
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ClipState
class CORDL_TYPE ClipState : public ::Animancer::AnimancerState {
public:
// Declarations
using ITransition = ::Animancer::ClipState_ITransition;

 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_Clip, put=set_Clip)) ::UnityW<::UnityEngine::AnimationClip>  Clip;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_MainObject, put=set_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

/// @brief Field _Clip, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Clip, put=__cordl_internal_set__Clip)) ::UnityW<::UnityEngine::AnimationClip>  _Clip;

/// @brief Method Clone, addr 0x180305be0, size 0x90, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method CreatePlayable, addr 0x180305c70, size 0x60, virtual true, abstract: false, final false
inline void CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable) ;

/// @brief Method Destroy, addr 0x180305cd0, size 0x30, virtual true, abstract: false, final false
inline void Destroy() ;

static inline ::Animancer::ClipState* New_ctor(::UnityEngine::AnimationClip*  clip) ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Clip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Clip() ;

constexpr void __cordl_internal_set__Clip(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x180305d00, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method get_ApplyAnimatorIK, addr 0x180305d40, size 0x70, virtual true, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0x180305db0, size 0x70, virtual true, abstract: false, final false
inline bool get_ApplyFootIK() ;

/// @brief Method get_AverageVelocity, addr 0x180305e20, size 0x30, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_Clip, addr 0x1802ec4c0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Clip() ;

/// @brief Method get_IsLooping, addr 0x180305e50, size 0x30, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_Length, addr 0x180305e80, size 0x30, virtual true, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_MainObject, addr 0x1802ec4c0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Method set_ApplyAnimatorIK, addr 0x180305eb0, size 0x50, virtual true, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0x180305f00, size 0x50, virtual true, abstract: false, final false
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_Clip, addr 0x1802ec7f0, size 0x20, virtual true, abstract: false, final false
inline void set_Clip(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_MainObject, addr 0x180305f50, size 0x50, virtual true, abstract: false, final false
inline void set_MainObject(::UnityEngine::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipState(ClipState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipState(ClipState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18113};

/// @brief Field _Clip, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Clip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ClipState, ____Clip) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Animancer::ClipState) == 0x88, "Size mismatch!");

} // namespace end def Animancer
