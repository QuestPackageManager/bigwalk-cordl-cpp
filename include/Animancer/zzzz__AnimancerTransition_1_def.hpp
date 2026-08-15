#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransition_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimancerTransition_1)
namespace Animancer {
class AnimancerEvent_Sequence;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
struct FadeMode;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IHasEvents;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
class ITransitionDetailed;
}
namespace Animancer {
class ITransitionWithEvents;
}
namespace Animancer {
template<typename TState>
class ITransition_1;
}
namespace Animancer {
class ITransition;
}
namespace Animancer {
class Sequence_AnimancerEvent_Serializable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Animancer {
template<typename TState>
class AnimancerTransition_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::AnimancerTransition_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::AnimancerTransition_1, "Animancer", "AnimancerTransition`1");
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.AnimancerTransition`1<TState>
class CORDL_TYPE AnimancerTransition_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BaseState, put=set_BaseState)) ::Animancer::AnimancerState*  BaseState;

 __declspec(property(get=get_Events)) ::Animancer::AnimancerEvent_Sequence*  Events;

 __declspec(property(get=get_FadeDuration, put=set_FadeDuration)) float_t  FadeDuration;

 __declspec(property(get=get_FadeMode)) ::Animancer::FadeMode  FadeMode;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

 __declspec(property(get=get_MaximumDuration)) float_t  MaximumDuration;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NormalizedStartTime, put=set_NormalizedStartTime)) float_t  NormalizedStartTime;

 __declspec(property(get=get_SerializedEvents)) ::Animancer::Sequence_AnimancerEvent_Serializable*  SerializedEvents;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

 __declspec(property(get=get_State, put=set_State)) TState  State;

/// @brief Field <BaseState>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__BaseState_k__BackingField, put=__cordl_internal_set__BaseState_k__BackingField)) ::Animancer::AnimancerState*  _BaseState_k__BackingField;

/// @brief Field _Events, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events, put=__cordl_internal_set__Events)) ::Animancer::Sequence_AnimancerEvent_Serializable*  _Events;

/// @brief Field _FadeDuration, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__FadeDuration, put=__cordl_internal_set__FadeDuration)) float_t  _FadeDuration;

/// @brief Field <MainObject>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__MainObject_k__BackingField, put=__cordl_internal_set__MainObject_k__BackingField)) ::UnityW<::UnityEngine::Object>  _MainObject_k__BackingField;

/// @brief Field _State, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__State, put=__cordl_internal_set__State)) TState  _State;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasEvents"
constexpr operator  ::Animancer::IHasEvents*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransitionDetailed"
constexpr operator  ::Animancer::ITransitionDetailed*() noexcept;

/// @brief Convert operator to "::Animancer::ITransitionWithEvents"
constexpr operator  ::Animancer::ITransitionWithEvents*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<TState>"
constexpr operator  ::Animancer::ITransition_1<TState>*() noexcept;

/// @brief Method Animancer.ITransition.CreateState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Animancer::AnimancerState* Animancer_ITransition_CreateState() ;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method ApplyDetails, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ApplyDetails(::Animancer::AnimancerState*  state, float_t  speed, float_t  normalizedStartTime) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::AnimancerTransition_1<TState>*  copyFrom) ;

/// @brief Method CreateState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TState CreateState() ;

static inline ::Animancer::AnimancerTransition_1<TState>* New_ctor() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Animancer::AnimancerState* const& __cordl_internal_get__BaseState_k__BackingField() const;

constexpr ::Animancer::AnimancerState*& __cordl_internal_get__BaseState_k__BackingField() ;

constexpr ::Animancer::Sequence_AnimancerEvent_Serializable* const& __cordl_internal_get__Events() const;

constexpr ::Animancer::Sequence_AnimancerEvent_Serializable*& __cordl_internal_get__Events() ;

constexpr float_t const& __cordl_internal_get__FadeDuration() const;

constexpr float_t& __cordl_internal_get__FadeDuration() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__MainObject_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__MainObject_k__BackingField() ;

constexpr TState const& __cordl_internal_get__State() const;

constexpr TState& __cordl_internal_get__State() ;

constexpr void __cordl_internal_set__BaseState_k__BackingField(::Animancer::AnimancerState*  value) ;

constexpr void __cordl_internal_set__Events(::Animancer::Sequence_AnimancerEvent_Serializable*  value) ;

constexpr void __cordl_internal_set__FadeDuration(float_t  value) ;

constexpr void __cordl_internal_set__MainObject_k__BackingField(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__State(TState  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BaseState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_BaseState() ;

/// @brief Method get_Events, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Animancer::AnimancerEvent_Sequence* get_Events() ;

/// @brief Method get_FadeDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_FadeDuration() ;

/// @brief Method get_FadeMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::FadeMode get_FadeMode() ;

/// @brief Method get_IsLooping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_Key() ;

/// @brief Method get_MainObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Method get_MaximumDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_MaximumDuration() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NormalizedStartTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_NormalizedStartTime() ;

/// @brief Method get_SerializedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> get_SerializedEvents() ;

/// @brief Method get_Speed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TState get_State() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>"
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>* i___Animancer__ICopyable_1___Animancer__AnimancerTransition_1_TState___() noexcept;

/// @brief Convert to "::Animancer::IHasEvents"
constexpr ::Animancer::IHasEvents* i___Animancer__IHasEvents() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransitionDetailed"
constexpr ::Animancer::ITransitionDetailed* i___Animancer__ITransitionDetailed() noexcept;

/// @brief Convert to "::Animancer::ITransitionWithEvents"
constexpr ::Animancer::ITransitionWithEvents* i___Animancer__ITransitionWithEvents() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<TState>"
constexpr ::Animancer::ITransition_1<TState>* i___Animancer__ITransition_1_TState_() noexcept;

/// @brief Method set_BaseState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_BaseState(::Animancer::AnimancerState*  value) ;

/// @brief Method set_FadeDuration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_FadeDuration(float_t  value) ;

/// @brief Method set_NormalizedStartTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_NormalizedStartTime(float_t  value) ;

/// @brief Method set_Speed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Speed(float_t  value) ;

/// @brief Method set_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_State(TState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerTransition_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransition_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerTransition_1(AnimancerTransition_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransition_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerTransition_1(AnimancerTransition_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18201};

/// @brief Field _FadeDuration, offset: 0x10, size: 0x4, def value: None
 float_t  ____FadeDuration;

/// @brief Field _Events, offset: 0x18, size: 0x8, def value: None
 ::Animancer::Sequence_AnimancerEvent_Serializable*  ____Events;

/// @brief Field <BaseState>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Animancer::AnimancerState*  ____BaseState_k__BackingField;

/// @brief Field _State, offset: 0x28, size: 0x8, def value: None
 TState  ____State;

/// @brief Field <MainObject>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____MainObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
