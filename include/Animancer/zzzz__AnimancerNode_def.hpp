#pragma once
// IWYU pragma private; include "Animancer/AnimancerNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__Key_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimancerNode)
namespace Animancer {
class AnimancerLayer;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
template<typename T>
struct FastEnumerator_1;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IPlayableWrapper;
}
namespace Animancer {
class IUpdatable;
}
namespace Animancer {
class Key_IListItem;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace Animancer {
class AnimancerNode;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerNode*);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerNode*, "Animancer", "AnimancerNode");
// Dependencies Animancer.Key, UnityEngine.Playables.Playable
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerNode
class CORDL_TYPE AnimancerNode : public ::Animancer::Key {
public:
// Declarations
 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_ChildCount)) int32_t  ChildCount;

 __declspec(property(get=get_EffectiveSpeed, put=set_EffectiveSpeed)) float_t  EffectiveSpeed;

 __declspec(property(get=get_EffectiveWeight)) float_t  EffectiveWeight;

 __declspec(property(get=get_FadeSpeed, put=set_FadeSpeed)) float_t  FadeSpeed;

 __declspec(property(get=get_Index, put=set_Index)) int32_t  Index;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_KeepChildrenConnected)) bool  KeepChildrenConnected;

 __declspec(property(get=get_Layer)) ::Animancer::AnimancerLayer*  Layer;

 __declspec(property(get=get_Parent)) ::Animancer::IPlayableWrapper*  Parent;

 __declspec(property(get=get_ParentEffectiveSpeed)) float_t  ParentEffectiveSpeed;

 __declspec(property(get=get_Playable)) ::UnityEngine::Playables::Playable  Playable;

 __declspec(property(get=get_Root, put=set_Root)) ::Animancer::AnimancerPlayable*  Root;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

 __declspec(property(get=get_TargetWeight, put=set_TargetWeight)) float_t  TargetWeight;

 __declspec(property(get=get_Weight, put=set_Weight)) float_t  Weight;

/// @brief Field <ApplyParentAnimatorIK>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__ApplyParentAnimatorIK_k__BackingField, put=setStaticF__ApplyParentAnimatorIK_k__BackingField)) bool  _ApplyParentAnimatorIK_k__BackingField;

/// @brief Field <ApplyParentFootIK>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__ApplyParentFootIK_k__BackingField, put=setStaticF__ApplyParentFootIK_k__BackingField)) bool  _ApplyParentFootIK_k__BackingField;

/// @brief Field <FadeSpeed>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__FadeSpeed_k__BackingField, put=__cordl_internal_set__FadeSpeed_k__BackingField)) float_t  _FadeSpeed_k__BackingField;

/// @brief Field <Index>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Index_k__BackingField, put=__cordl_internal_set__Index_k__BackingField)) int32_t  _Index_k__BackingField;

/// @brief Field _IsWeightDirty, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsWeightDirty, put=__cordl_internal_set__IsWeightDirty)) bool  _IsWeightDirty;

/// @brief Field _Playable, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__Playable, put=__cordl_internal_set__Playable)) ::UnityEngine::Playables::Playable  _Playable;

/// @brief Field _Root, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Root, put=__cordl_internal_set__Root)) ::Animancer::AnimancerPlayable*  _Root;

/// @brief Field _Speed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__Speed, put=__cordl_internal_set__Speed)) float_t  _Speed;

/// @brief Field <TargetWeight>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TargetWeight_k__BackingField, put=__cordl_internal_set__TargetWeight_k__BackingField)) float_t  _TargetWeight_k__BackingField;

/// @brief Field _Weight, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerNode*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::AnimancerNode*>*() noexcept;

/// @brief Convert operator to "::Animancer::IPlayableWrapper"
constexpr operator  ::Animancer::IPlayableWrapper*() noexcept;

/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr operator  ::Animancer::IUpdatable*() noexcept;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method Animancer.ICopyable<Animancer.AnimancerNode>.CopyFrom, addr 0x1802e0dc0, size 0xb0, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_AnimancerNode__CopyFrom(::Animancer::AnimancerNode*  copyFrom) ;

/// @brief Method Animancer.IPlayableWrapper.GetChild, addr 0x1802e0e70, size 0x20, virtual true, abstract: false, final true
inline ::Animancer::AnimancerNode* Animancer_IPlayableWrapper_GetChild(int32_t  index) ;

/// @brief Method Animancer.IUpdatable.Update, addr 0x1802e0e90, size 0x70, virtual true, abstract: false, final true
inline void Animancer_IUpdatable_Update() ;

/// @brief Method AppendDescription, addr 0x1802e0f00, size 0x210, virtual false, abstract: false, final false
inline void AppendDescription(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method AppendDetails, addr 0x1802e1110, size 0x2f0, virtual true, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method AppendIKDetails, addr 0x1802e1400, size 0x190, virtual false, abstract: false, final false
static inline void AppendIKDetails(::System::Text::StringBuilder*  text, ::StringW  separator, ::Animancer::IPlayableWrapper*  node) ;

/// @brief Method ApplyConnectedState, addr 0x1802e1590, size 0x80, virtual false, abstract: false, final false
inline void ApplyConnectedState(::Animancer::IPlayableWrapper*  parent) ;

/// @brief Method ApplyWeight, addr 0x1802e1610, size 0x130, virtual false, abstract: false, final false
inline void ApplyWeight() ;

/// @brief Method ConnectAllChildrenToGraph, addr 0x1802e1740, size 0x150, virtual false, abstract: false, final false
inline void ConnectAllChildrenToGraph() ;

/// @brief Method ConnectToGraph, addr 0x1802e1890, size 0x140, virtual false, abstract: false, final false
inline void ConnectToGraph() ;

/// @brief Method CopyIKFlags, addr 0x1802e19d0, size 0xd0, virtual true, abstract: false, final false
inline void CopyIKFlags(::Animancer::AnimancerNode*  copyFrom) ;

/// @brief Method CreatePlayable, addr 0x1802e1aa0, size 0xe0, virtual true, abstract: false, final false
inline void CreatePlayable() ;

/// @brief Method CreatePlayable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable) ;

/// @brief Method DestroyPlayable, addr 0x1802e1b80, size 0x60, virtual false, abstract: false, final false
inline void DestroyPlayable() ;

/// @brief Method DisconnectFromGraph, addr 0x1802e1be0, size 0x120, virtual false, abstract: false, final false
inline void DisconnectFromGraph() ;

/// @brief Method DisconnectWeightlessChildrenFromGraph, addr 0x1802e1d00, size 0x80, virtual false, abstract: false, final false
inline void DisconnectWeightlessChildrenFromGraph() ;

/// @brief Method GetChild, addr 0x1802e1d80, size 0x50, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* GetChild(int32_t  index) ;

/// @brief Method GetDescription, addr 0x1802e1dd0, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetDescription(::StringW  separator) ;

/// @brief Method GetEnumerator, addr 0x1802e1e90, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> GetEnumerator() ;

/// @brief Method IsPlayingAndNotEnding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsPlayingAndNotEnding() ;

static inline ::Animancer::AnimancerNode* New_ctor() ;

/// @brief Method OnAddChild, addr 0x1802e1ea0, size 0x70, virtual true, abstract: false, final false
inline void OnAddChild(::Animancer::AnimancerState*  state) ;

/// @brief Method OnAddChild, addr 0x1802e1f10, size 0x260, virtual false, abstract: false, final false
inline void OnAddChild(::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*  states, ::Animancer::AnimancerState*  state) ;

/// @brief Method OnRemoveChild, addr 0x1802e1ea0, size 0x70, virtual true, abstract: false, final false
inline void OnRemoveChild(::Animancer::AnimancerState*  state) ;

/// @brief Method OnStartFade, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnStartFade() ;

/// @brief Method RecreatePlayable, addr 0x1802e21f0, size 0x70, virtual true, abstract: false, final false
inline void RecreatePlayable() ;

/// @brief Method RecreatePlayableRecursive, addr 0x1802e2170, size 0x80, virtual false, abstract: false, final false
inline void RecreatePlayableRecursive() ;

/// @brief Method RequireUpdate, addr 0x1802e2260, size 0x40, virtual false, abstract: false, final false
inline void RequireUpdate() ;

/// @brief Method SetDebugName, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetDebugName(::StringW  name) ;

/// @brief Method SetWeight, addr 0x1802e22e0, size 0x50, virtual false, abstract: false, final false
inline void SetWeight(float_t  value) ;

/// @brief Method SetWeightDirty, addr 0x1802e22a0, size 0x40, virtual false, abstract: false, final false
inline void SetWeightDirty() ;

/// @brief Method StartFade, addr 0x1802e2400, size 0x60, virtual false, abstract: false, final false
inline void StartFade(float_t  targetWeight) ;

/// @brief Method StartFade, addr 0x1802e2330, size 0xd0, virtual false, abstract: false, final false
inline void StartFade(float_t  targetWeight, float_t  fadeDuration) ;

/// @brief Method Stop, addr 0x1802e2460, size 0x60, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method System.Collections.Generic.IEnumerable<Animancer.AnimancerState>.GetEnumerator, addr 0x1802e24c0, size 0x40, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>* System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1802e24c0, size 0x40, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x1802e2500, size 0x20, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method ToString, addr 0x1802e2520, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Update, addr 0x1802e2640, size 0x200, virtual true, abstract: false, final false
inline void Update(::by_ref<bool>  needsMoreUpdates) ;

/// @brief Method UpdateFade, addr 0x1802e2530, size 0x110, virtual false, abstract: false, final false
inline void UpdateFade(::by_ref<bool>  needsMoreUpdates) ;

constexpr float_t const& __cordl_internal_get__FadeSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FadeSpeed_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Index_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Index_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsWeightDirty() const;

constexpr bool& __cordl_internal_get__IsWeightDirty() ;

constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get__Playable() const;

constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get__Playable() ;

constexpr ::Animancer::AnimancerPlayable* const& __cordl_internal_get__Root() const;

constexpr ::Animancer::AnimancerPlayable*& __cordl_internal_get__Root() ;

constexpr float_t const& __cordl_internal_get__Speed() const;

constexpr float_t& __cordl_internal_get__Speed() ;

constexpr float_t const& __cordl_internal_get__TargetWeight_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TargetWeight_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr void __cordl_internal_set__FadeSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Index_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsWeightDirty(bool  value) ;

constexpr void __cordl_internal_set__Playable(::UnityEngine::Playables::Playable  value) ;

constexpr void __cordl_internal_set__Root(::Animancer::AnimancerPlayable*  value) ;

constexpr void __cordl_internal_set__Speed(float_t  value) ;

constexpr void __cordl_internal_set__TargetWeight_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

/// @brief Method .ctor, addr 0x1802e2880, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__ApplyParentAnimatorIK_k__BackingField() ;

static inline bool getStaticF__ApplyParentFootIK_k__BackingField() ;

/// @brief Method get_ApplyAnimatorIK, addr 0x1802e28a0, size 0x90, virtual true, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0x1802e2930, size 0x90, virtual true, abstract: false, final false
inline bool get_ApplyFootIK() ;

/// @brief Method get_ApplyParentAnimatorIK, addr 0x1802e29c0, size 0x20, virtual false, abstract: false, final false
static inline bool get_ApplyParentAnimatorIK() ;

/// @brief Method get_ApplyParentFootIK, addr 0x1802e29e0, size 0x20, virtual false, abstract: false, final false
static inline bool get_ApplyParentFootIK() ;

/// @brief Method get_ChildCount, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ChildCount() ;

/// @brief Method get_EffectiveSpeed, addr 0x1802e2a00, size 0x30, virtual false, abstract: false, final false
inline float_t get_EffectiveSpeed() ;

/// @brief Method get_EffectiveWeight, addr 0x1802e2a30, size 0x160, virtual false, abstract: false, final false
inline float_t get_EffectiveWeight() ;

/// @brief Method get_FadeSpeed, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_FadeSpeed() ;

/// @brief Method get_Index, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// @brief Method get_IsValid, addr 0x1802e2bb0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_KeepChildrenConnected, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_KeepChildrenConnected() ;

/// @brief Method get_Layer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::AnimancerLayer* get_Layer() ;

/// @brief Method get_Parent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::IPlayableWrapper* get_Parent() ;

/// @brief Method get_ParentEffectiveSpeed, addr 0x1802e2be0, size 0x190, virtual false, abstract: false, final false
inline float_t get_ParentEffectiveSpeed() ;

/// @brief Method get_Playable, addr 0x1802e2d70, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::Playable get_Playable() ;

/// @brief Method get_Root, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerPlayable* get_Root() ;

/// @brief Method get_Speed, addr 0x1802e2d80, size 0x10, virtual true, abstract: false, final true
inline float_t get_Speed() ;

/// @brief Method get_TargetWeight, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_TargetWeight() ;

/// @brief Method get_Weight, addr 0x1802e2da0, size 0x10, virtual true, abstract: false, final true
inline float_t get_Weight() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerNode*>"
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerNode*>* i___Animancer__ICopyable_1___Animancer__AnimancerNode__() noexcept;

/// @brief Convert to "::Animancer::IPlayableWrapper"
constexpr ::Animancer::IPlayableWrapper* i___Animancer__IPlayableWrapper() noexcept;

/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* i___Animancer__IUpdatable() noexcept;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>* i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerState__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

static inline void setStaticF__ApplyParentAnimatorIK_k__BackingField(bool  value) ;

static inline void setStaticF__ApplyParentFootIK_k__BackingField(bool  value) ;

/// @brief Method set_ApplyAnimatorIK, addr 0x1802e2db0, size 0x80, virtual true, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0x1802e2e30, size 0x80, virtual true, abstract: false, final false
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_ApplyParentAnimatorIK, addr 0x1802e2eb0, size 0x20, virtual false, abstract: false, final false
static inline void set_ApplyParentAnimatorIK(bool  value) ;

/// @brief Method set_ApplyParentFootIK, addr 0x1802e2ed0, size 0x20, virtual false, abstract: false, final false
static inline void set_ApplyParentFootIK(bool  value) ;

/// @brief Method set_EffectiveSpeed, addr 0x1802e2ef0, size 0x70, virtual false, abstract: false, final false
inline void set_EffectiveSpeed(float_t  value) ;

/// @brief Method set_FadeSpeed, addr 0x1802e2f60, size 0x10, virtual false, abstract: false, final false
inline void set_FadeSpeed(float_t  value) ;

/// @brief Method set_Index, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_Index(int32_t  value) ;

/// @brief Method set_Root, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Root(::Animancer::AnimancerPlayable*  value) ;

/// @brief Method set_Speed, addr 0x1802e2f80, size 0x70, virtual true, abstract: false, final true
inline void set_Speed(float_t  value) ;

/// @brief Method set_TargetWeight, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetWeight(float_t  value) ;

/// @brief Method set_Weight, addr 0x1802e3000, size 0x70, virtual false, abstract: false, final false
inline void set_Weight(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerNode(AnimancerNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerNode(AnimancerNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18103};

/// @brief Field _Playable, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Playables::Playable  ____Playable;

/// @brief Field _Root, offset: 0x28, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable*  ____Root;

/// @brief Field <Index>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____Index_k__BackingField;

/// @brief Field _Weight, offset: 0x34, size: 0x4, def value: None
 float_t  ____Weight;

/// @brief Field _IsWeightDirty, offset: 0x38, size: 0x1, def value: None
 bool  ____IsWeightDirty;

/// @brief Field <TargetWeight>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____TargetWeight_k__BackingField;

/// @brief Field <FadeSpeed>k__BackingField, offset: 0x40, size: 0x4, def value: None
 float_t  ____FadeSpeed_k__BackingField;

/// @brief Field _Speed, offset: 0x44, size: 0x4, def value: None
 float_t  ____Speed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerNode, ____Playable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerNode, ____Root) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerNode, ____Index_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerNode, ____Weight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerNode, ____IsWeightDirty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerNode, ____TargetWeight_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerNode, ____FadeSpeed_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerNode, ____Speed) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerNode) == 0x48, "Size mismatch!");

} // namespace end def Animancer
