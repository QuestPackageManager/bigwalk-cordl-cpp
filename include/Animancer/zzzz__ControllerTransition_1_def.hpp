#pragma once
// IWYU pragma private; include "Animancer/ControllerTransition_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransition_1_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerTransition_1)
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
struct ControllerState_ActionOnStop;
}
namespace Animancer {
class IAnimationClipCollection;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Forward declare root types
namespace Animancer {
template<typename TState>
class ControllerTransition_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::ControllerTransition_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::ControllerTransition_1, "Animancer", "ControllerTransition`1");
// Dependencies Animancer.AnimancerTransition`1<TState>, Animancer.ControllerState::ActionOnStop
namespace Animancer {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.ControllerTransition`1<TState>
class CORDL_TYPE ControllerTransition_1 : public ::Animancer::AnimancerTransition_1<TState> {
public:
// Declarations
 __declspec(property(get=get_ActionsOnStop)) ::ArrayW<::Animancer::ControllerState_ActionOnStop>  ActionsOnStop;

 __declspec(property(get=get_Controller)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  Controller;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

 __declspec(property(get=get_MaximumDuration)) float_t  MaximumDuration;

/// @brief Field _ActionsOnStop, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActionsOnStop, put=__cordl_internal_set__ActionsOnStop)) ::ArrayW<::Animancer::ControllerState_ActionOnStop>  _ActionsOnStop;

/// @brief Field _Controller, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller, put=__cordl_internal_set__Controller)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  _Controller;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>*() noexcept;

/// @brief Method Animancer.IAnimationClipCollection.GatherAnimationClips, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Animancer_IAnimationClipCollection_GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::ControllerTransition_1<TState>*  copyFrom) ;

static inline ::Animancer::ControllerTransition_1<TState>* New_ctor() ;

constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop> const& __cordl_internal_get__ActionsOnStop() const;

constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop>& __cordl_internal_get__ActionsOnStop() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get__Controller() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get__Controller() ;

constexpr void __cordl_internal_set__ActionsOnStop(::ArrayW<::Animancer::ControllerState_ActionOnStop>  value) ;

constexpr void __cordl_internal_set__Controller(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActionsOnStop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<::Animancer::ControllerState_ActionOnStop>> get_ActionsOnStop() ;

/// @brief Method get_Controller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::UnityW<::UnityEngine::RuntimeAnimatorController>> get_Controller() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_MainObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Method get_MaximumDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_MaximumDuration() ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>* i___Animancer__ICopyable_1___Animancer__ControllerTransition_1_TState___() noexcept;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RuntimeAnimatorController> op_Implicit___UnityW___UnityEngine__RuntimeAnimatorController_(::Animancer::ControllerTransition_1<TState>*  transition) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTransition_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransition_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTransition_1(ControllerTransition_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransition_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTransition_1(ControllerTransition_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18215};

/// @brief Field _Controller, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ____Controller;

/// @brief Field _ActionsOnStop, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Animancer::ControllerState_ActionOnStop>  ____ActionsOnStop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
