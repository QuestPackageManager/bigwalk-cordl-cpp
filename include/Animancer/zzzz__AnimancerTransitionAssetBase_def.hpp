#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransitionAssetBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimancerTransitionAssetBase)
namespace Animancer {
class AnimancerEvent_Sequence;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
template<typename TAsset>
class AnimancerTransitionAssetBase_UnShared_1;
}
namespace Animancer {
template<typename TAsset,typename TTransition,typename TState>
class AnimancerTransitionAssetBase_UnShared_3;
}
namespace Animancer {
class AnimancerTransitionAssetBase_UnShared;
}
namespace Animancer {
struct FadeMode;
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
class IWrapper;
}
namespace Animancer {
class Sequence_AnimancerEvent_Serializable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class IAnimationClipSource;
}
// Forward declare root types
namespace Animancer {
class AnimancerTransitionAssetBase;
}
namespace Animancer {
class AnimancerTransitionAssetBase_UnShared;
}
namespace Animancer {
template<typename TAsset>
class AnimancerTransitionAssetBase_UnShared_1;
}
namespace Animancer {
template<typename TAsset,typename TTransition,typename TState>
class AnimancerTransitionAssetBase_UnShared_3;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerTransitionAssetBase*);
MARK_REF_T(::Animancer::AnimancerTransitionAssetBase_UnShared*);
MARK_GEN_REF_T_PTR(::Animancer::AnimancerTransitionAssetBase_UnShared_1);
MARK_GEN_REF_T_PTR(::Animancer::AnimancerTransitionAssetBase_UnShared_3);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerTransitionAssetBase*, "Animancer", "AnimancerTransitionAssetBase");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerTransitionAssetBase_UnShared*, "Animancer", "AnimancerTransitionAssetBase/UnShared");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::AnimancerTransitionAssetBase_UnShared_1, "Animancer", "AnimancerTransitionAssetBase/UnShared`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::AnimancerTransitionAssetBase_UnShared_3, "Animancer", "AnimancerTransitionAssetBase/UnShared`3");
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename TAsset>
// Is value type: false
// CS Name: Animancer.AnimancerTransitionAssetBase/UnShared`1<TAsset>
class CORDL_TYPE AnimancerTransitionAssetBase_UnShared_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=Animancer_IWrapper_get_WrappedObject)) ::System::Object*  Animancer_IWrapper_WrappedObject;

 __declspec(property(get=get_Asset, put=set_Asset)) TAsset  Asset;

 __declspec(property(get=get_BaseState, put=set_BaseState)) ::Animancer::AnimancerState*  BaseState;

 __declspec(property(get=get_BaseTransition)) ::Animancer::ITransition*  BaseTransition;

 __declspec(property(get=get_Events)) ::Animancer::AnimancerEvent_Sequence*  Events;

 __declspec(property(get=get_FadeDuration)) float_t  FadeDuration;

 __declspec(property(get=get_FadeMode)) ::Animancer::FadeMode  FadeMode;

 __declspec(property(get=get_HasAsset)) bool  HasAsset;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_SerializedEvents)) ::Animancer::Sequence_AnimancerEvent_Serializable*  SerializedEvents;

/// @brief Field _Asset, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Asset, put=__cordl_internal_set__Asset)) TAsset  _Asset;

/// @brief Field _BaseState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__BaseState, put=__cordl_internal_set__BaseState)) ::Animancer::AnimancerState*  _BaseState;

/// @brief Field _Events, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events, put=__cordl_internal_set__Events)) ::Animancer::AnimancerEvent_Sequence*  _Events;

/// @brief Convert operator to "::Animancer::IHasEvents"
constexpr operator  ::Animancer::IHasEvents*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransitionWithEvents"
constexpr operator  ::Animancer::ITransitionWithEvents*() noexcept;

/// @brief Convert operator to "::Animancer::IWrapper"
constexpr operator  ::Animancer::IWrapper*() noexcept;

/// @brief Method Animancer.ITransition.CreateState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Animancer::AnimancerState* Animancer_ITransition_CreateState() ;

/// @brief Method Animancer.IWrapper.get_WrappedObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_IWrapper_get_WrappedObject() ;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method AssertAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AssertAsset() ;

/// @brief Method ClearCachedEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearCachedEvents() ;

static inline ::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>* New_ctor() ;

/// @brief Method OnSetBaseState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSetBaseState() ;

constexpr TAsset const& __cordl_internal_get__Asset() const;

constexpr TAsset& __cordl_internal_get__Asset() ;

constexpr ::Animancer::AnimancerState* const& __cordl_internal_get__BaseState() const;

constexpr ::Animancer::AnimancerState*& __cordl_internal_get__BaseState() ;

constexpr ::Animancer::AnimancerEvent_Sequence* const& __cordl_internal_get__Events() const;

constexpr ::Animancer::AnimancerEvent_Sequence*& __cordl_internal_get__Events() ;

constexpr void __cordl_internal_set__Asset(TAsset  value) ;

constexpr void __cordl_internal_set__BaseState(::Animancer::AnimancerState*  value) ;

constexpr void __cordl_internal_set__Events(::Animancer::AnimancerEvent_Sequence*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Asset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TAsset get_Asset() ;

/// @brief Method get_BaseState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_BaseState() ;

/// @brief Method get_BaseTransition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Animancer::ITransition* get_BaseTransition() ;

/// @brief Method get_Events, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::AnimancerEvent_Sequence* get_Events() ;

/// @brief Method get_FadeDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_FadeDuration() ;

/// @brief Method get_FadeMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::FadeMode get_FadeMode() ;

/// @brief Method get_HasAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasAsset() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_Key() ;

/// @brief Method get_SerializedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> get_SerializedEvents() ;

/// @brief Convert to "::Animancer::IHasEvents"
constexpr ::Animancer::IHasEvents* i___Animancer__IHasEvents() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransitionWithEvents"
constexpr ::Animancer::ITransitionWithEvents* i___Animancer__ITransitionWithEvents() noexcept;

/// @brief Convert to "::Animancer::IWrapper"
constexpr ::Animancer::IWrapper* i___Animancer__IWrapper() noexcept;

/// @brief Method set_Asset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Asset(TAsset  value) ;

/// @brief Method set_BaseState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_BaseState(::Animancer::AnimancerState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerTransitionAssetBase_UnShared_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase_UnShared_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerTransitionAssetBase_UnShared_1(AnimancerTransitionAssetBase_UnShared_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase_UnShared_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerTransitionAssetBase_UnShared_1(AnimancerTransitionAssetBase_UnShared_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18204};

/// @brief Field _Asset, offset: 0x10, size: 0x8, def value: None
 TAsset  ____Asset;

/// @brief Field _BaseState, offset: 0x18, size: 0x8, def value: None
 ::Animancer::AnimancerState*  ____BaseState;

/// @brief Field _Events, offset: 0x20, size: 0x8, def value: None
 ::Animancer::AnimancerEvent_Sequence*  ____Events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`1<TAsset>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerTransitionAssetBase/UnShared
class CORDL_TYPE AnimancerTransitionAssetBase_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_1<::UnityW<::Animancer::AnimancerTransitionAssetBase>> {
public:
// Declarations
static inline ::Animancer::AnimancerTransitionAssetBase_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerTransitionAssetBase_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerTransitionAssetBase_UnShared(AnimancerTransitionAssetBase_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerTransitionAssetBase_UnShared(AnimancerTransitionAssetBase_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18203};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::AnimancerTransitionAssetBase_UnShared) == 0x28, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`1<TAsset>
namespace Animancer {
// cpp template
template<typename TAsset,typename TTransition,typename TState>
// Is value type: false
// CS Name: Animancer.AnimancerTransitionAssetBase/UnShared`3<TAsset,TTransition,TState>
class CORDL_TYPE AnimancerTransitionAssetBase_UnShared_3 : public ::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset> {
public:
// Declarations
 __declspec(property(get=get_SerializedEvents)) ::Animancer::Sequence_AnimancerEvent_Serializable*  SerializedEvents;

 __declspec(property(get=get_State, put=set_State)) TState  State;

 __declspec(property(get=get_Transition, put=set_Transition)) TTransition  Transition;

/// @brief Field _State, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__State, put=__cordl_internal_set__State)) TState  _State;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<TState>"
constexpr operator  ::Animancer::ITransition_1<TState>*() noexcept;

/// @brief Method CreateState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TState CreateState() ;

static inline ::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>* New_ctor() ;

/// @brief Method OnSetBaseState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSetBaseState() ;

constexpr TState const& __cordl_internal_get__State() const;

constexpr TState& __cordl_internal_get__State() ;

constexpr void __cordl_internal_set__State(TState  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SerializedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> get_SerializedEvents() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TState get_State() ;

/// @brief Method get_Transition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TTransition get_Transition() ;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<TState>"
constexpr ::Animancer::ITransition_1<TState>* i___Animancer__ITransition_1_TState_() noexcept;

/// @brief Method set_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_State(TState  value) ;

/// @brief Method set_Transition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Transition(TTransition  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerTransitionAssetBase_UnShared_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase_UnShared_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerTransitionAssetBase_UnShared_3(AnimancerTransitionAssetBase_UnShared_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase_UnShared_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerTransitionAssetBase_UnShared_3(AnimancerTransitionAssetBase_UnShared_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18205};

/// @brief Field _State, offset: 0x28, size: 0x8, def value: None
 TState  ____State;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies UnityEngine.ScriptableObject
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerTransitionAssetBase
class CORDL_TYPE AnimancerTransitionAssetBase : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using UnShared = ::Animancer::AnimancerTransitionAssetBase_UnShared;

template<typename TAsset>
using UnShared_1 = ::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>;

template<typename TAsset,typename TTransition,typename TState>
using UnShared_3 = ::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset, TTransition, TState>;

 __declspec(property(get=Animancer_IWrapper_get_WrappedObject)) ::System::Object*  Animancer_IWrapper_WrappedObject;

 __declspec(property(get=get_FadeDuration)) float_t  FadeDuration;

 __declspec(property(get=get_FadeMode)) ::Animancer::FadeMode  FadeMode;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::IWrapper"
constexpr operator  ::Animancer::IWrapper*() noexcept;

/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr operator  ::UnityEngine::IAnimationClipSource*() noexcept;

/// @brief Method Animancer.IWrapper.get_WrappedObject, addr 0x180303b80, size 0x20, virtual true, abstract: false, final true
inline ::System::Object* Animancer_IWrapper_get_WrappedObject() ;

/// @brief Method Apply, addr 0x180303ba0, size 0x50, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CreateState, addr 0x180303bf0, size 0xb0, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* CreateState() ;

/// @brief Method GetAnimationClips, addr 0x180303ca0, size 0x30, virtual true, abstract: false, final false
inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetTransition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::ITransition* GetTransition() ;

static inline ::Animancer::AnimancerTransitionAssetBase* New_ctor() ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FadeDuration, addr 0x180303ce0, size 0xc0, virtual true, abstract: false, final false
inline float_t get_FadeDuration() ;

/// @brief Method get_FadeMode, addr 0x180303da0, size 0x40, virtual true, abstract: false, final false
inline ::Animancer::FadeMode get_FadeMode() ;

/// @brief Method get_IsValid, addr 0x180303de0, size 0x30, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Key, addr 0x180303e10, size 0x40, virtual true, abstract: false, final false
inline ::System::Object* get_Key() ;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::IWrapper"
constexpr ::Animancer::IWrapper* i___Animancer__IWrapper() noexcept;

/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* i___UnityEngine__IAnimationClipSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerTransitionAssetBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerTransitionAssetBase(AnimancerTransitionAssetBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAssetBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerTransitionAssetBase(AnimancerTransitionAssetBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::AnimancerTransitionAssetBase) == 0x18, "Size mismatch!");

} // namespace end def Animancer
