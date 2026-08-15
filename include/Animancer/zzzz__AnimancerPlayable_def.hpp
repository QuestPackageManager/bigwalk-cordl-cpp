#pragma once
// IWYU pragma private; include "Animancer/AnimancerPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationLayerMixerPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimancerPlayable)
namespace Animancer {
class AnimancerLayer;
}
namespace Animancer {
class AnimancerNode;
}
namespace Animancer {
class AnimancerPlayable_LayerList;
}
namespace Animancer {
class AnimancerPlayable_PostUpdate;
}
namespace Animancer {
class AnimancerPlayable_StateDictionary;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class ClipState;
}
namespace Animancer {
struct FadeMode;
}
namespace Animancer {
template<typename T>
struct FastEnumerator_1;
}
namespace Animancer {
class IAnimancerComponent;
}
namespace Animancer {
class IAnimationClipCollection;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPlayableWrapper;
}
namespace Animancer {
class ITransition;
}
namespace Animancer {
class IUpdatable;
}
namespace Animancer {
template<typename T>
class Key_KeyedList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct ValueCollection_Dictionary_2_Enumerator;
}
namespace System::Collections {
class ICollection;
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
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Animations {
struct AnimationScriptPlayable;
}
namespace UnityEngine::Playables {
struct DirectorUpdateMode;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AvatarMask;
}
namespace UnityEngine {
class IAnimationClipSource;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerPlayable_LayerList;
}
namespace Animancer {
class AnimancerPlayable_PostUpdate;
}
namespace Animancer {
class AnimancerPlayable_StateDictionary;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerPlayable*);
MARK_REF_T(::Animancer::AnimancerPlayable_LayerList*);
MARK_REF_T(::Animancer::AnimancerPlayable_PostUpdate*);
MARK_REF_T(::Animancer::AnimancerPlayable_StateDictionary*);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerPlayable*, "Animancer", "AnimancerPlayable");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerPlayable_LayerList*, "Animancer", "AnimancerPlayable/LayerList");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerPlayable_PostUpdate*, "Animancer", "AnimancerPlayable/PostUpdate");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerPlayable_StateDictionary*, "Animancer", "AnimancerPlayable/StateDictionary");
// Dependencies Animancer.AnimancerLayer, System.Object, UnityEngine.Animations.AnimationLayerMixerPlayable
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerPlayable/LayerList
class CORDL_TYPE AnimancerPlayable_LayerList : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::Animancer::AnimancerLayer*  Item[];

/// @brief Field LayerMixer, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_LayerMixer, put=__cordl_internal_set_LayerMixer)) ::UnityEngine::Animations::AnimationLayerMixerPlayable  LayerMixer;

/// @brief Field Root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::Animancer::AnimancerPlayable*  Root;

/// @brief Field _Count, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count, put=__cordl_internal_set__Count)) int32_t  _Count;

/// @brief Field <DefaultCapacity>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DefaultCapacity_k__BackingField, put=setStaticF__DefaultCapacity_k__BackingField)) int32_t  _DefaultCapacity_k__BackingField;

/// @brief Field _Layers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Layers, put=__cordl_internal_set__Layers)) ::ArrayW<::Animancer::AnimancerLayer*>  _Layers;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Activate, addr 0x1802f0b40, size 0xf0, virtual true, abstract: false, final false
inline void Activate(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method Activate, addr 0x1802f0c30, size 0xe0, virtual false, abstract: false, final false
inline void Activate(::Animancer::AnimancerPlayable*  root, ::UnityEngine::Playables::Playable  mixer) ;

/// @brief Method Add, addr 0x1802f0d10, size 0x1d0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerLayer* Add() ;

/// @brief Method GatherAnimationClips, addr 0x1802f0ee0, size 0x20, virtual true, abstract: false, final true
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetEnumerator, addr 0x1802f0f00, size 0x30, virtual false, abstract: false, final false
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerLayer*> GetEnumerator() ;

/// @brief Method GetLayer, addr 0x1802f0f30, size 0x20, virtual false, abstract: false, final false
inline ::Animancer::AnimancerLayer* GetLayer(int32_t  index) ;

/// @brief Method IsAdditive, addr 0x1802f0f50, size 0x20, virtual true, abstract: false, final false
inline bool IsAdditive(int32_t  index) ;

static inline ::Animancer::AnimancerPlayable_LayerList* New_ctor(::Animancer::AnimancerPlayable*  root) ;

static inline ::Animancer::AnimancerPlayable_LayerList* New_ctor(::Animancer::AnimancerPlayable*  root, ::by_ref<::UnityEngine::Playables::Playable>  layerMixer) ;

/// @brief Method SetAdditive, addr 0x1802f0f70, size 0x60, virtual true, abstract: false, final false
inline void SetAdditive(int32_t  index, bool  value) ;

/// @brief Method SetDebugName, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetDebugName(int32_t  index, ::StringW  name) ;

/// @brief Method SetMask, addr 0x1802f0fd0, size 0x90, virtual true, abstract: false, final false
inline void SetMask(int32_t  index, ::UnityEngine::AvatarMask*  mask) ;

/// @brief Method SetMinCount, addr 0x1802f1060, size 0x10, virtual false, abstract: false, final false
inline void SetMinCount(int32_t  min) ;

/// @brief Method SetMinDefaultCapacity, addr 0x1802f1070, size 0x20, virtual false, abstract: false, final false
static inline void SetMinDefaultCapacity(int32_t  min) ;

/// @brief Method System.Collections.Generic.IEnumerable<Animancer.AnimancerLayer>.GetEnumerator, addr 0x1802f1090, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerLayer*>* System_Collections_Generic_IEnumerable_Animancer_AnimancerLayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1802f1090, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::UnityEngine::Animations::AnimationLayerMixerPlayable const& __cordl_internal_get_LayerMixer() const;

constexpr ::UnityEngine::Animations::AnimationLayerMixerPlayable& __cordl_internal_get_LayerMixer() ;

constexpr ::Animancer::AnimancerPlayable* const& __cordl_internal_get_Root() const;

constexpr ::Animancer::AnimancerPlayable*& __cordl_internal_get_Root() ;

constexpr int32_t const& __cordl_internal_get__Count() const;

constexpr int32_t& __cordl_internal_get__Count() ;

constexpr ::ArrayW<::Animancer::AnimancerLayer*> const& __cordl_internal_get__Layers() const;

constexpr ::ArrayW<::Animancer::AnimancerLayer*>& __cordl_internal_get__Layers() ;

constexpr void __cordl_internal_set_LayerMixer(::UnityEngine::Animations::AnimationLayerMixerPlayable  value) ;

constexpr void __cordl_internal_set_Root(::Animancer::AnimancerPlayable*  value) ;

constexpr void __cordl_internal_set__Count(int32_t  value) ;

constexpr void __cordl_internal_set__Layers(::ArrayW<::Animancer::AnimancerLayer*>  value) ;

/// @brief Method .ctor, addr 0x1802f1110, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method .ctor, addr 0x1802f1160, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerPlayable*  root, ::by_ref<::UnityEngine::Playables::Playable>  layerMixer) ;

static inline int32_t getStaticF__DefaultCapacity_k__BackingField() ;

/// @brief Method get_AverageVelocity, addr 0x1802f1250, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_Capacity, addr 0x1802f1400, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_DefaultCapacity, addr 0x1802f1420, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_DefaultCapacity() ;

/// @brief Method get_Item, addr 0x1802f1440, size 0x40, virtual false, abstract: false, final false
inline ::Animancer::AnimancerLayer* get_Item(int32_t  index) ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerLayer*>* i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerLayer__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF__DefaultCapacity_k__BackingField(int32_t  value) ;

/// @brief Method set_Capacity, addr 0x1802f1480, size 0x80, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Count, addr 0x1802f1500, size 0x130, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_DefaultCapacity, addr 0x1802f1630, size 0x30, virtual false, abstract: false, final false
static inline void set_DefaultCapacity(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerPlayable_LayerList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable_LayerList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerPlayable_LayerList(AnimancerPlayable_LayerList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable_LayerList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerPlayable_LayerList(AnimancerPlayable_LayerList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18104};

/// @brief Field Root, offset: 0x10, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable*  ___Root;

/// @brief Field _Layers, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Animancer::AnimancerLayer*>  ____Layers;

/// @brief Field LayerMixer, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Animations::AnimationLayerMixerPlayable  ___LayerMixer;

/// @brief Field _Count, offset: 0x30, size: 0x4, def value: None
 int32_t  ____Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerPlayable_LayerList, ___Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable_LayerList, ____Layers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable_LayerList, ___LayerMixer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable_LayerList, ____Count) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerPlayable_LayerList) == 0x38, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerPlayable/StateDictionary
class CORDL_TYPE AnimancerPlayable_StateDictionary : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Current)) ::Animancer::AnimancerState*  Current;

 __declspec(property(get=get_Item)) ::Animancer::AnimancerState*  Item[];

 __declspec(property(get=get_Item)) ::Animancer::AnimancerState*  Item[];

 __declspec(property(get=get_Item)) ::Animancer::AnimancerState*  Item[];

/// @brief Field Root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::Animancer::AnimancerPlayable*  Root;

/// @brief Field States, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_States, put=__cordl_internal_set_States)) ::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>*  States;

/// @brief Field <EqualityComparer>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__EqualityComparer_k__BackingField, put=setStaticF__EqualityComparer_k__BackingField)) ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*  _EqualityComparer_k__BackingField;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Create, addr 0x1802f4c10, size 0x50, virtual false, abstract: false, final false
inline ::Animancer::ClipState* Create(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Create, addr 0x1802f4c60, size 0xa0, virtual false, abstract: false, final false
inline ::Animancer::ClipState* Create(::System::Object*  key, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method CreateIfNew, addr 0x1802f4b50, size 0x40, virtual false, abstract: false, final false
inline void CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1) ;

/// @brief Method CreateIfNew, addr 0x1802f4af0, size 0x60, virtual false, abstract: false, final false
inline void CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2) ;

/// @brief Method CreateIfNew, addr 0x1802f4a80, size 0x70, virtual false, abstract: false, final false
inline void CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2, ::UnityEngine::AnimationClip*  clip3) ;

/// @brief Method CreateIfNew, addr 0x1802f4b90, size 0x80, virtual false, abstract: false, final false
inline void CreateIfNew(::ArrayW<::UnityEngine::AnimationClip*>  clips) ;

/// @brief Method Destroy, addr 0x1802f50f0, size 0xc0, virtual false, abstract: false, final false
inline bool Destroy(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Destroy, addr 0x1802f51b0, size 0x90, virtual false, abstract: false, final false
inline bool Destroy(::Animancer::IHasKey*  hasKey) ;

/// @brief Method Destroy, addr 0x1802f5240, size 0x70, virtual false, abstract: false, final false
inline bool Destroy(::System::Object*  key) ;

/// @brief Method DestroyAll, addr 0x1802f4de0, size 0x180, virtual false, abstract: false, final false
inline void DestroyAll(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method DestroyAll, addr 0x1802f4d00, size 0xe0, virtual false, abstract: false, final false
inline void DestroyAll(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method DestroyAll, addr 0x1802f4f60, size 0x70, virtual false, abstract: false, final false
inline void DestroyAll(::Animancer::IAnimationClipCollection*  source) ;

/// @brief Method DestroyAll, addr 0x1802f4fd0, size 0x120, virtual false, abstract: false, final false
inline void DestroyAll(::UnityEngine::IAnimationClipSource*  source) ;

/// @brief Method GatherAnimationClips, addr 0x1802f52b0, size 0xa0, virtual true, abstract: false, final true
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetClipMismatchError, addr 0x1802f5350, size 0x80, virtual false, abstract: false, final false
static inline ::StringW GetClipMismatchError(::System::Object*  key, ::UnityEngine::AnimationClip*  oldClip, ::UnityEngine::AnimationClip*  newClip) ;

/// @brief Method GetEnumerator, addr 0x1802f53d0, size 0x40, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ValueCollection_Dictionary_2_Enumerator<::System::Object*,::Animancer::AnimancerState*> GetEnumerator() ;

/// @brief Method GetOrCreate, addr 0x1802f5530, size 0x140, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreate(::UnityEngine::AnimationClip*  clip, bool  allowSetClip) ;

/// @brief Method GetOrCreate, addr 0x1802f5410, size 0x120, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreate(::System::Object*  key, ::UnityEngine::AnimationClip*  clip, bool  allowSetClip) ;

/// @brief Method GetOrCreate, addr 0x1802f5670, size 0x110, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreate(::Animancer::ITransition*  transition) ;

static inline ::Animancer::AnimancerPlayable_StateDictionary* New_ctor(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method Register, addr 0x1802f5780, size 0x40, virtual false, abstract: false, final false
inline void Register(::Animancer::AnimancerState*  state) ;

/// @brief Method System.Collections.Generic.IEnumerable<Animancer.AnimancerState>.GetEnumerator, addr 0x1802f57c0, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerState*>* System_Collections_Generic_IEnumerable_Animancer_AnimancerState__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1802f57c0, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGet, addr 0x1802f5820, size 0xa0, virtual false, abstract: false, final false
inline bool TryGet(::UnityEngine::AnimationClip*  clip, ::by_ref<::Animancer::AnimancerState*>  state) ;

/// @brief Method TryGet, addr 0x1802f58c0, size 0x80, virtual false, abstract: false, final false
inline bool TryGet(::Animancer::IHasKey*  hasKey, ::by_ref<::Animancer::AnimancerState*>  state) ;

/// @brief Method TryGet, addr 0x1802f5940, size 0x40, virtual false, abstract: false, final false
inline bool TryGet(::System::Object*  key, ::by_ref<::Animancer::AnimancerState*>  state) ;

/// @brief Method Unregister, addr 0x1802f5980, size 0x40, virtual false, abstract: false, final false
inline void Unregister(::Animancer::AnimancerState*  state) ;

constexpr ::Animancer::AnimancerPlayable* const& __cordl_internal_get_Root() const;

constexpr ::Animancer::AnimancerPlayable*& __cordl_internal_get_Root() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>* const& __cordl_internal_get_States() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>*& __cordl_internal_get_States() ;

constexpr void __cordl_internal_set_Root(::Animancer::AnimancerPlayable*  value) ;

constexpr void __cordl_internal_set_States(::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>*  value) ;

/// @brief Method .ctor, addr 0x1802f5a20, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerPlayable*  root) ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* getStaticF__EqualityComparer_k__BackingField() ;

/// @brief Method get_Count, addr 0x1802f5ac0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Current, addr 0x1802f5ae0, size 0x50, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_Current() ;

/// @brief Method get_EqualityComparer, addr 0x1802f5b30, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* get_EqualityComparer() ;

/// @brief Method get_Item, addr 0x1802f5bf0, size 0x40, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_Item(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method get_Item, addr 0x1802f5ba0, size 0x50, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_Item(::Animancer::IHasKey*  hasKey) ;

/// @brief Method get_Item, addr 0x1802f5b70, size 0x30, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_Item(::System::Object*  key) ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerState*>* i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerState__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF__EqualityComparer_k__BackingField(::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*  value) ;

/// @brief Method set_EqualityComparer, addr 0x1802f5c30, size 0x50, virtual false, abstract: false, final false
static inline void set_EqualityComparer(::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerPlayable_StateDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable_StateDictionary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerPlayable_StateDictionary(AnimancerPlayable_StateDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable_StateDictionary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerPlayable_StateDictionary(AnimancerPlayable_StateDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18105};

/// @brief Field Root, offset: 0x10, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable*  ___Root;

/// @brief Field States, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Object*,::Animancer::AnimancerState*>*  ___States;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerPlayable_StateDictionary, ___Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable_StateDictionary, ___States) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerPlayable_StateDictionary) == 0x20, "Size mismatch!");

} // namespace end def Animancer
// Dependencies UnityEngine.Playables.Playable, UnityEngine.Playables.PlayableBehaviour
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerPlayable/PostUpdate
class CORDL_TYPE AnimancerPlayable_PostUpdate : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsConnected, put=set_IsConnected)) bool  IsConnected;

/// @brief Field Template, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Template, put=setStaticF_Template)) ::Animancer::AnimancerPlayable_PostUpdate*  Template;

/// @brief Field _IsConnected, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsConnected, put=__cordl_internal_set__IsConnected)) bool  _IsConnected;

/// @brief Field _Playable, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__Playable, put=__cordl_internal_set__Playable)) ::UnityEngine::Playables::Playable  _Playable;

/// @brief Field _Root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Root, put=__cordl_internal_set__Root)) ::Animancer::AnimancerPlayable*  _Root;

/// @brief Method Create, addr 0x1802f1a50, size 0xd0, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerPlayable_PostUpdate* Create(::Animancer::AnimancerPlayable*  root) ;

static inline ::Animancer::AnimancerPlayable_PostUpdate* New_ctor() ;

/// @brief Method OnPlayableCreate, addr 0x1802f1b20, size 0x10, virtual true, abstract: false, final false
inline void OnPlayableCreate(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method PrepareFrame, addr 0x1802f1b30, size 0x70, virtual true, abstract: false, final false
inline void PrepareFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

constexpr bool const& __cordl_internal_get__IsConnected() const;

constexpr bool& __cordl_internal_get__IsConnected() ;

constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get__Playable() const;

constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get__Playable() ;

constexpr ::Animancer::AnimancerPlayable* const& __cordl_internal_get__Root() const;

constexpr ::Animancer::AnimancerPlayable*& __cordl_internal_get__Root() ;

constexpr void __cordl_internal_set__IsConnected(bool  value) ;

constexpr void __cordl_internal_set__Playable(::UnityEngine::Playables::Playable  value) ;

constexpr void __cordl_internal_set__Root(::Animancer::AnimancerPlayable*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::AnimancerPlayable_PostUpdate* getStaticF_Template() ;

/// @brief Method get_IsConnected, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

static inline void setStaticF_Template(::Animancer::AnimancerPlayable_PostUpdate*  value) ;

/// @brief Method set_IsConnected, addr 0x1802f1bf0, size 0xa0, virtual false, abstract: false, final false
inline void set_IsConnected(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerPlayable_PostUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable_PostUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerPlayable_PostUpdate(AnimancerPlayable_PostUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable_PostUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerPlayable_PostUpdate(AnimancerPlayable_PostUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18106};

/// @brief Field _Root, offset: 0x10, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable*  ____Root;

/// @brief Field _Playable, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Playables::Playable  ____Playable;

/// @brief Field _IsConnected, offset: 0x28, size: 0x1, def value: None
 bool  ____IsConnected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerPlayable_PostUpdate, ____Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable_PostUpdate, ____Playable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable_PostUpdate, ____IsConnected) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerPlayable_PostUpdate) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies UnityEngine.Playables.Playable, UnityEngine.Playables.PlayableBehaviour, UnityEngine.Playables.PlayableGraph
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerPlayable
class CORDL_TYPE AnimancerPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using LayerList = ::Animancer::AnimancerPlayable_LayerList;

using PostUpdate = ::Animancer::AnimancerPlayable_PostUpdate;

using StateDictionary = ::Animancer::AnimancerPlayable_StateDictionary;

 __declspec(property(get=Animancer_IPlayableWrapper_get_ChildCount)) int32_t  Animancer_IPlayableWrapper_ChildCount;

 __declspec(property(get=Animancer_IPlayableWrapper_get_Parent)) ::Animancer::IPlayableWrapper*  Animancer_IPlayableWrapper_Parent;

 __declspec(property(get=Animancer_IPlayableWrapper_get_Playable)) ::UnityEngine::Playables::Playable  Animancer_IPlayableWrapper_Playable;

 __declspec(property(get=Animancer_IPlayableWrapper_get_Weight)) float_t  Animancer_IPlayableWrapper_Weight;

 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_CommandCount)) int32_t  CommandCount;

 __declspec(property(get=get_Component, put=set_Component)) ::Animancer::IAnimancerComponent*  Component;

 __declspec(property(get=get_Disposables)) ::System::Collections::Generic::List_1<::System::IDisposable*>*  Disposables;

 __declspec(property(get=get_FrameID, put=set_FrameID)) uint64_t  FrameID;

 __declspec(property(get=get_Graph)) ::UnityEngine::Playables::PlayableGraph  Graph;

 __declspec(property(get=get_IsGraphPlaying, put=set_IsGraphPlaying)) bool  IsGraphPlaying;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_KeepChildrenConnected, put=set_KeepChildrenConnected)) bool  KeepChildrenConnected;

 __declspec(property(get=get_Layers, put=set_Layers)) ::Animancer::AnimancerPlayable_LayerList*  Layers;

 __declspec(property(get=get_PostUpdatableCount)) int32_t  PostUpdatableCount;

 __declspec(property(get=get_PreUpdatableCount)) int32_t  PreUpdatableCount;

 __declspec(property(get=get_SkipFirstFade, put=set_SkipFirstFade)) bool  SkipFirstFade;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

 __declspec(property(get=get_States, put=set_States)) ::Animancer::AnimancerPlayable_StateDictionary*  States;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field Template, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Template, put=setStaticF_Template)) ::Animancer::AnimancerPlayable*  Template;

 __declspec(property(get=get_UpdateMode, put=set_UpdateMode)) ::UnityEngine::Playables::DirectorUpdateMode  UpdateMode;

/// @brief Field _ApplyAnimatorIK, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyAnimatorIK, put=__cordl_internal_set__ApplyAnimatorIK)) bool  _ApplyAnimatorIK;

/// @brief Field _ApplyFootIK, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyFootIK, put=__cordl_internal_set__ApplyFootIK)) bool  _ApplyFootIK;

/// @brief Field <Component>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Component_k__BackingField, put=__cordl_internal_set__Component_k__BackingField)) ::Animancer::IAnimancerComponent*  _Component_k__BackingField;

/// @brief Field _CurrentUpdatable, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurrentUpdatable, put=setStaticF__CurrentUpdatable)) int32_t  _CurrentUpdatable;

/// @brief Field _CurrentUpdatables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CurrentUpdatables, put=setStaticF__CurrentUpdatables)) ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  _CurrentUpdatables;

/// @brief Field <Current>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Current_k__BackingField, put=setStaticF__Current_k__BackingField)) ::Animancer::AnimancerPlayable*  _Current_k__BackingField;

/// @brief Field _DefaultFadeDuration, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DefaultFadeDuration, put=setStaticF__DefaultFadeDuration)) float_t  _DefaultFadeDuration;

/// @brief Field <DeltaTime>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeltaTime_k__BackingField, put=setStaticF__DeltaTime_k__BackingField)) float_t  _DeltaTime_k__BackingField;

/// @brief Field _Disposables, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Disposables, put=__cordl_internal_set__Disposables)) ::System::Collections::Generic::List_1<::System::IDisposable*>*  _Disposables;

/// @brief Field <FrameID>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__FrameID_k__BackingField, put=__cordl_internal_set__FrameID_k__BackingField)) uint64_t  _FrameID_k__BackingField;

/// @brief Field _Graph, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__Graph, put=__cordl_internal_set__Graph)) ::UnityEngine::Playables::PlayableGraph  _Graph;

/// @brief Field _IsGraphPlaying, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGraphPlaying, put=__cordl_internal_set__IsGraphPlaying)) bool  _IsGraphPlaying;

/// @brief Field _KeepChildrenConnected, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__KeepChildrenConnected, put=__cordl_internal_set__KeepChildrenConnected)) bool  _KeepChildrenConnected;

/// @brief Field _LayerMixer, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__LayerMixer, put=__cordl_internal_set__LayerMixer)) ::UnityEngine::Playables::Playable  _LayerMixer;

/// @brief Field <Layers>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Layers_k__BackingField, put=__cordl_internal_set__Layers_k__BackingField)) ::Animancer::AnimancerPlayable_LayerList*  _Layers_k__BackingField;

/// @brief Field _PostUpdatables, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__PostUpdatables, put=__cordl_internal_set__PostUpdatables)) ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  _PostUpdatables;

/// @brief Field _PostUpdate, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PostUpdate, put=__cordl_internal_set__PostUpdate)) ::Animancer::AnimancerPlayable_PostUpdate*  _PostUpdate;

/// @brief Field _PreUpdatables, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__PreUpdatables, put=__cordl_internal_set__PreUpdatables)) ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  _PreUpdatables;

/// @brief Field _RootPlayable, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__RootPlayable, put=__cordl_internal_set__RootPlayable)) ::UnityEngine::Playables::Playable  _RootPlayable;

/// @brief Field _SkipFirstFade, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get__SkipFirstFade, put=__cordl_internal_set__SkipFirstFade)) bool  _SkipFirstFade;

/// @brief Field _Speed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__Speed, put=__cordl_internal_set__Speed)) float_t  _Speed;

/// @brief Field <States>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__States_k__BackingField, put=__cordl_internal_set__States_k__BackingField)) ::Animancer::AnimancerPlayable_StateDictionary*  _States_k__BackingField;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::Animancer::IPlayableWrapper"
constexpr operator  ::Animancer::IPlayableWrapper*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method Animancer.IPlayableWrapper.GetChild, addr 0x1802e3070, size 0x50, virtual true, abstract: false, final true
inline ::Animancer::AnimancerNode* Animancer_IPlayableWrapper_GetChild(int32_t  index) ;

/// @brief Method Animancer.IPlayableWrapper.get_ChildCount, addr 0x1802e30c0, size 0x20, virtual true, abstract: false, final true
inline int32_t Animancer_IPlayableWrapper_get_ChildCount() ;

/// @brief Method Animancer.IPlayableWrapper.get_Parent, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::Animancer::IPlayableWrapper* Animancer_IPlayableWrapper_get_Parent() ;

/// @brief Method Animancer.IPlayableWrapper.get_Playable, addr 0x1802e30e0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::Playable Animancer_IPlayableWrapper_get_Playable() ;

/// @brief Method Animancer.IPlayableWrapper.get_Weight, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Animancer_IPlayableWrapper_get_Weight() ;

/// @brief Method AppendAll, addr 0x1802e3100, size 0x260, virtual false, abstract: false, final false
static inline void AppendAll(::System::Text::StringBuilder*  text, ::StringW  sectionPrefix, ::StringW  itemPrefix, ::System::Collections::ICollection*  collection, ::StringW  name) ;

/// @brief Method AppendDescription, addr 0x1802e3360, size 0x210, virtual false, abstract: false, final false
inline void AppendDescription(::System::Text::StringBuilder*  text) ;

/// @brief Method AppendInternalDetails, addr 0x1802e3570, size 0xd0, virtual false, abstract: false, final false
inline void AppendInternalDetails(::System::Text::StringBuilder*  text, ::StringW  sectionPrefix, ::StringW  itemPrefix) ;

/// @brief Method CancelPostUpdate, addr 0x1802e3640, size 0x80, virtual false, abstract: false, final false
inline void CancelPostUpdate(::Animancer::IUpdatable*  updatable) ;

/// @brief Method CancelPreUpdate, addr 0x1802e36c0, size 0x80, virtual false, abstract: false, final false
inline void CancelPreUpdate(::Animancer::IUpdatable*  updatable) ;

/// @brief Method CancelUpdate, addr 0x1802e3740, size 0x90, virtual false, abstract: false, final false
inline void CancelUpdate(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  updatables, ::Animancer::IUpdatable*  updatable) ;

/// @brief Method Create, addr 0x1802e39f0, size 0x70, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerPlayable* Create() ;

/// @brief Method Create, addr 0x1802e3990, size 0x60, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerPlayable* Create(::UnityEngine::Playables::PlayableGraph  graph) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Create(::UnityEngine::Playables::PlayableGraph  graph, T  _cordl_template) ;

/// @brief Method CreateOutput, addr 0x1802e38d0, size 0xc0, virtual false, abstract: false, final false
inline void CreateOutput(::Animancer::IAnimancerComponent*  animancer) ;

/// @brief Method CreateOutput, addr 0x1802e37d0, size 0x100, virtual false, abstract: false, final false
inline void CreateOutput(::UnityEngine::Animator*  animator, ::Animancer::IAnimancerComponent*  animancer) ;

/// @brief Method DestroyGraph, addr 0x1802e3a60, size 0x30, virtual false, abstract: false, final false
inline void DestroyGraph() ;

/// @brief Method DestroyOutput, addr 0x1802e3a90, size 0xe0, virtual false, abstract: false, final false
inline bool DestroyOutput() ;

/// @brief Method DisposeAll, addr 0x1802e3b70, size 0x170, virtual false, abstract: false, final false
inline void DisposeAll() ;

/// @brief Method Evaluate, addr 0x1802e3ce0, size 0x10, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method Evaluate, addr 0x1802e3cf0, size 0x10, virtual false, abstract: false, final false
inline void Evaluate(float_t  deltaTime) ;

/// @brief Method Finalize, addr 0x1802e3d00, size 0x10, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GatherAnimationClips, addr 0x1802e3d10, size 0x30, virtual true, abstract: false, final true
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetDescription, addr 0x1802e3d40, size 0xb0, virtual false, abstract: false, final false
inline ::StringW GetDescription() ;

/// @brief Method GetKey, addr 0x1802e3df0, size 0xb0, virtual false, abstract: false, final false
inline ::System::Object* GetKey(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method GetLocalLayer, addr 0x1802e3ea0, size 0x70, virtual false, abstract: false, final false
inline ::Animancer::AnimancerLayer* GetLocalLayer(::Animancer::AnimancerState*  state) ;

/// @brief Method GetPostUpdatable, addr 0x1802e3f10, size 0x20, virtual false, abstract: false, final false
inline ::Animancer::IUpdatable* GetPostUpdatable(int32_t  index) ;

/// @brief Method GetPreUpdatable, addr 0x1802e3f30, size 0x20, virtual false, abstract: false, final false
inline ::Animancer::IUpdatable* GetPreUpdatable(int32_t  index) ;

/// @brief Method GetTotalWeight, addr 0x1802e3f50, size 0xb0, virtual false, abstract: false, final false
inline float_t GetTotalWeight() ;

/// @brief Method InsertOutputJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::Animations::AnimationScriptPlayable InsertOutputJob(T  data) ;

/// @brief Method InsertOutputPlayable, addr 0x1802e4000, size 0xd0, virtual false, abstract: false, final false
inline void InsertOutputPlayable(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method IsPlaying, addr 0x1802e4300, size 0xd0, virtual false, abstract: false, final false
inline bool IsPlaying() ;

/// @brief Method IsPlaying, addr 0x1802e4200, size 0x90, virtual false, abstract: false, final false
inline bool IsPlaying(::Animancer::IHasKey*  hasKey) ;

/// @brief Method IsPlaying, addr 0x1802e4290, size 0x70, virtual false, abstract: false, final false
inline bool IsPlaying(::System::Object*  key) ;

/// @brief Method IsPlayingClip, addr 0x1802e40d0, size 0x130, virtual false, abstract: false, final false
inline bool IsPlayingClip(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method IsRunningPostUpdate, addr 0x1802e43d0, size 0x50, virtual false, abstract: false, final false
static inline bool IsRunningPostUpdate(::Animancer::AnimancerPlayable*  animancer) ;

static inline ::Animancer::AnimancerPlayable* New_ctor() ;

/// @brief Method OnPlayableCreate, addr 0x1802e4420, size 0x310, virtual true, abstract: false, final false
inline void OnPlayableCreate(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method OnPlayableDestroy, addr 0x1802e4730, size 0x100, virtual true, abstract: false, final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method PauseGraph, addr 0x1802e4830, size 0x30, virtual false, abstract: false, final false
inline void PauseGraph() ;

/// @brief Method Play, addr 0x1802e4ac0, size 0xa0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Play, addr 0x1802e4860, size 0x60, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip*  clip, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method Play, addr 0x1802e4c10, size 0x90, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::AnimancerState*  state) ;

/// @brief Method Play, addr 0x1802e4b60, size 0xb0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::AnimancerState*  state, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method Play, addr 0x1802e48c0, size 0x80, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::ITransition*  transition) ;

/// @brief Method Play, addr 0x1802e4940, size 0x180, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::ITransition*  transition, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method PrepareFrame, addr 0x1802e4ca0, size 0xb0, virtual true, abstract: false, final false
inline void PrepareFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method RequirePostUpdate, addr 0x1802e4d50, size 0x30, virtual false, abstract: false, final false
inline void RequirePostUpdate(::Animancer::IUpdatable*  updatable) ;

/// @brief Method RequirePreUpdate, addr 0x1802e4d80, size 0x30, virtual false, abstract: false, final false
inline void RequirePreUpdate(::Animancer::IUpdatable*  updatable) ;

/// @brief Method SetNextGraphName, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetNextGraphName(::StringW  name) ;

/// @brief Method Stop, addr 0x1802e4eb0, size 0xb0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Stop(::Animancer::IHasKey*  hasKey) ;

/// @brief Method Stop, addr 0x1802e4e30, size 0x80, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Stop(::System::Object*  key) ;

/// @brief Method Stop, addr 0x1802e4db0, size 0x80, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x1802e4f60, size 0xa0, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method TryGetOutput, addr 0x1802e5000, size 0xd0, virtual false, abstract: false, final false
inline bool TryGetOutput(::by_ref<::UnityEngine::Playables::PlayableOutput>  output) ;

/// @brief Method TryPlay, addr 0x1802e51e0, size 0xf0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* TryPlay(::System::Object*  key) ;

/// @brief Method TryPlay, addr 0x1802e50d0, size 0x110, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* TryPlay(::System::Object*  key, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method UnpauseGraph, addr 0x1802e52d0, size 0x30, virtual false, abstract: false, final false
inline void UnpauseGraph() ;

/// @brief Method UpdateAll, addr 0x1802e5300, size 0x310, virtual false, abstract: false, final false
inline void UpdateAll(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  updatables, float_t  deltaTime) ;

constexpr bool const& __cordl_internal_get__ApplyAnimatorIK() const;

constexpr bool& __cordl_internal_get__ApplyAnimatorIK() ;

constexpr bool const& __cordl_internal_get__ApplyFootIK() const;

constexpr bool& __cordl_internal_get__ApplyFootIK() ;

constexpr ::Animancer::IAnimancerComponent* const& __cordl_internal_get__Component_k__BackingField() const;

constexpr ::Animancer::IAnimancerComponent*& __cordl_internal_get__Component_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& __cordl_internal_get__Disposables() const;

constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get__Disposables() ;

constexpr uint64_t const& __cordl_internal_get__FrameID_k__BackingField() const;

constexpr uint64_t& __cordl_internal_get__FrameID_k__BackingField() ;

constexpr ::UnityEngine::Playables::PlayableGraph const& __cordl_internal_get__Graph() const;

constexpr ::UnityEngine::Playables::PlayableGraph& __cordl_internal_get__Graph() ;

constexpr bool const& __cordl_internal_get__IsGraphPlaying() const;

constexpr bool& __cordl_internal_get__IsGraphPlaying() ;

constexpr bool const& __cordl_internal_get__KeepChildrenConnected() const;

constexpr bool& __cordl_internal_get__KeepChildrenConnected() ;

constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get__LayerMixer() const;

constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get__LayerMixer() ;

constexpr ::Animancer::AnimancerPlayable_LayerList* const& __cordl_internal_get__Layers_k__BackingField() const;

constexpr ::Animancer::AnimancerPlayable_LayerList*& __cordl_internal_get__Layers_k__BackingField() ;

constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>* const& __cordl_internal_get__PostUpdatables() const;

constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*& __cordl_internal_get__PostUpdatables() ;

constexpr ::Animancer::AnimancerPlayable_PostUpdate* const& __cordl_internal_get__PostUpdate() const;

constexpr ::Animancer::AnimancerPlayable_PostUpdate*& __cordl_internal_get__PostUpdate() ;

constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>* const& __cordl_internal_get__PreUpdatables() const;

constexpr ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*& __cordl_internal_get__PreUpdatables() ;

constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get__RootPlayable() const;

constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get__RootPlayable() ;

constexpr bool const& __cordl_internal_get__SkipFirstFade() const;

constexpr bool& __cordl_internal_get__SkipFirstFade() ;

constexpr float_t const& __cordl_internal_get__Speed() const;

constexpr float_t& __cordl_internal_get__Speed() ;

constexpr ::Animancer::AnimancerPlayable_StateDictionary* const& __cordl_internal_get__States_k__BackingField() const;

constexpr ::Animancer::AnimancerPlayable_StateDictionary*& __cordl_internal_get__States_k__BackingField() ;

constexpr void __cordl_internal_set__ApplyAnimatorIK(bool  value) ;

constexpr void __cordl_internal_set__ApplyFootIK(bool  value) ;

constexpr void __cordl_internal_set__Component_k__BackingField(::Animancer::IAnimancerComponent*  value) ;

constexpr void __cordl_internal_set__Disposables(::System::Collections::Generic::List_1<::System::IDisposable*>*  value) ;

constexpr void __cordl_internal_set__FrameID_k__BackingField(uint64_t  value) ;

constexpr void __cordl_internal_set__Graph(::UnityEngine::Playables::PlayableGraph  value) ;

constexpr void __cordl_internal_set__IsGraphPlaying(bool  value) ;

constexpr void __cordl_internal_set__KeepChildrenConnected(bool  value) ;

constexpr void __cordl_internal_set__LayerMixer(::UnityEngine::Playables::Playable  value) ;

constexpr void __cordl_internal_set__Layers_k__BackingField(::Animancer::AnimancerPlayable_LayerList*  value) ;

constexpr void __cordl_internal_set__PostUpdatables(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  value) ;

constexpr void __cordl_internal_set__PostUpdate(::Animancer::AnimancerPlayable_PostUpdate*  value) ;

constexpr void __cordl_internal_set__PreUpdatables(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  value) ;

constexpr void __cordl_internal_set__RootPlayable(::UnityEngine::Playables::Playable  value) ;

constexpr void __cordl_internal_set__SkipFirstFade(bool  value) ;

constexpr void __cordl_internal_set__Speed(float_t  value) ;

constexpr void __cordl_internal_set__States_k__BackingField(::Animancer::AnimancerPlayable_StateDictionary*  value) ;

/// @brief Method .ctor, addr 0x1802e5690, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::AnimancerPlayable* getStaticF_Template() ;

static inline int32_t getStaticF__CurrentUpdatable() ;

static inline ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>* getStaticF__CurrentUpdatables() ;

static inline ::Animancer::AnimancerPlayable* getStaticF__Current_k__BackingField() ;

static inline float_t getStaticF__DefaultFadeDuration() ;

static inline float_t getStaticF__DeltaTime_k__BackingField() ;

/// @brief Method get_ApplyAnimatorIK, addr 0x1802e56a0, size 0x10, virtual true, abstract: false, final true
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0x1802e56b0, size 0x10, virtual true, abstract: false, final true
inline bool get_ApplyFootIK() ;

/// @brief Method get_CommandCount, addr 0x1802e56c0, size 0x50, virtual false, abstract: false, final false
inline int32_t get_CommandCount() ;

/// @brief Method get_Component, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::IAnimancerComponent* get_Component() ;

/// @brief Method get_Current, addr 0x1802e5720, size 0x40, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerPlayable* get_Current() ;

/// @brief Method get_DefaultFadeDuration, addr 0x1802e5760, size 0x40, virtual false, abstract: false, final false
static inline float_t get_DefaultFadeDuration() ;

/// @brief Method get_DeltaTime, addr 0x1802dc400, size 0x40, virtual false, abstract: false, final false
static inline float_t get_DeltaTime() ;

/// @brief Method get_Disposables, addr 0x1802e57a0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::IDisposable*>* get_Disposables() ;

/// @brief Method get_FrameID, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_FrameID() ;

/// @brief Method get_Graph, addr 0x1802e5810, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_Graph() ;

/// @brief Method get_IsGraphPlaying, addr 0x1802e5820, size 0x10, virtual false, abstract: false, final false
inline bool get_IsGraphPlaying() ;

/// @brief Method get_IsValid, addr 0x1802e5830, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_KeepChildrenConnected, addr 0x1802e5840, size 0x10, virtual true, abstract: false, final true
inline bool get_KeepChildrenConnected() ;

/// @brief Method get_Layers, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerPlayable_LayerList* get_Layers() ;

/// @brief Method get_PostUpdatableCount, addr 0x1802e5860, size 0x20, virtual false, abstract: false, final false
inline int32_t get_PostUpdatableCount() ;

/// @brief Method get_PreUpdatableCount, addr 0x1802e5880, size 0x20, virtual false, abstract: false, final false
inline int32_t get_PreUpdatableCount() ;

/// @brief Method get_SkipFirstFade, addr 0x1802e58a0, size 0x10, virtual false, abstract: false, final false
inline bool get_SkipFirstFade() ;

/// @brief Method get_Speed, addr 0x1802e58b0, size 0x10, virtual true, abstract: false, final true
inline float_t get_Speed() ;

/// @brief Method get_States, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerPlayable_StateDictionary* get_States() ;

/// @brief Method get_UpdateMode, addr 0x1802e58d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorUpdateMode get_UpdateMode() ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::Animancer::IPlayableWrapper"
constexpr ::Animancer::IPlayableWrapper* i___Animancer__IPlayableWrapper() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

static inline void setStaticF_Template(::Animancer::AnimancerPlayable*  value) ;

static inline void setStaticF__CurrentUpdatable(int32_t  value) ;

static inline void setStaticF__CurrentUpdatables(::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  value) ;

static inline void setStaticF__Current_k__BackingField(::Animancer::AnimancerPlayable*  value) ;

static inline void setStaticF__DefaultFadeDuration(float_t  value) ;

static inline void setStaticF__DeltaTime_k__BackingField(float_t  value) ;

/// @brief Method set_ApplyAnimatorIK, addr 0x1802e58e0, size 0xa0, virtual true, abstract: false, final true
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0x1802e5980, size 0xa0, virtual true, abstract: false, final true
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_Component, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_Component(::Animancer::IAnimancerComponent*  value) ;

/// @brief Method set_Current, addr 0x1802e5a30, size 0x60, virtual false, abstract: false, final false
static inline void set_Current(::Animancer::AnimancerPlayable*  value) ;

/// @brief Method set_DefaultFadeDuration, addr 0x1802e5a90, size 0x60, virtual false, abstract: false, final false
static inline void set_DefaultFadeDuration(float_t  value) ;

/// @brief Method set_DeltaTime, addr 0x1802e5af0, size 0x60, virtual false, abstract: false, final false
static inline void set_DeltaTime(float_t  value) ;

/// @brief Method set_FrameID, addr 0x1802e5b50, size 0x10, virtual false, abstract: false, final false
inline void set_FrameID(uint64_t  value) ;

/// @brief Method set_IsGraphPlaying, addr 0x1802e5b60, size 0x50, virtual false, abstract: false, final false
inline void set_IsGraphPlaying(bool  value) ;

/// @brief Method set_KeepChildrenConnected, addr 0x1802e5bb0, size 0x1e0, virtual false, abstract: false, final false
inline void set_KeepChildrenConnected(bool  value) ;

/// @brief Method set_Layers, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_Layers(::Animancer::AnimancerPlayable_LayerList*  value) ;

/// @brief Method set_SkipFirstFade, addr 0x1802e5da0, size 0x60, virtual false, abstract: false, final false
inline void set_SkipFirstFade(bool  value) ;

/// @brief Method set_Speed, addr 0x1802e5e00, size 0x30, virtual true, abstract: false, final true
inline void set_Speed(float_t  value) ;

/// @brief Method set_States, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_States(::Animancer::AnimancerPlayable_StateDictionary*  value) ;

/// @brief Method set_UpdateMode, addr 0x1802e5e40, size 0x10, virtual false, abstract: false, final false
inline void set_UpdateMode(::UnityEngine::Playables::DirectorUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerPlayable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerPlayable(AnimancerPlayable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerPlayable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerPlayable(AnimancerPlayable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18107};

/// @brief Field _Graph, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableGraph  ____Graph;

/// @brief Field _RootPlayable, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Playables::Playable  ____RootPlayable;

/// @brief Field _LayerMixer, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Playables::Playable  ____LayerMixer;

/// @brief Field <Layers>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable_LayerList*  ____Layers_k__BackingField;

/// @brief Field <States>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable_StateDictionary*  ____States_k__BackingField;

/// @brief Field _PreUpdatables, offset: 0x50, size: 0x8, def value: None
 ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  ____PreUpdatables;

/// @brief Field _PostUpdatables, offset: 0x58, size: 0x8, def value: None
 ::Animancer::Key_KeyedList_1<::Animancer::IUpdatable*>*  ____PostUpdatables;

/// @brief Field _PostUpdate, offset: 0x60, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable_PostUpdate*  ____PostUpdate;

/// @brief Field <Component>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Animancer::IAnimancerComponent*  ____Component_k__BackingField;

/// @brief Field _Speed, offset: 0x70, size: 0x4, def value: None
 float_t  ____Speed;

/// @brief Field _KeepChildrenConnected, offset: 0x74, size: 0x1, def value: None
 bool  ____KeepChildrenConnected;

/// @brief Field _SkipFirstFade, offset: 0x75, size: 0x1, def value: None
 bool  ____SkipFirstFade;

/// @brief Field _Disposables, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IDisposable*>*  ____Disposables;

/// @brief Field _ApplyAnimatorIK, offset: 0x80, size: 0x1, def value: None
 bool  ____ApplyAnimatorIK;

/// @brief Field _ApplyFootIK, offset: 0x81, size: 0x1, def value: None
 bool  ____ApplyFootIK;

/// @brief Field _IsGraphPlaying, offset: 0x82, size: 0x1, def value: None
 bool  ____IsGraphPlaying;

/// @brief Field <FrameID>k__BackingField, offset: 0x88, size: 0x8, def value: None
 uint64_t  ____FrameID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerPlayable, ____Graph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____RootPlayable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____LayerMixer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____Layers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____States_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____PreUpdatables) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____PostUpdatables) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____PostUpdate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____Component_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____Speed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____KeepChildrenConnected) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____SkipFirstFade) == 0x75, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____Disposables) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____ApplyAnimatorIK) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____ApplyFootIK) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____IsGraphPlaying) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerPlayable, ____FrameID_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerPlayable) == 0x90, "Size mismatch!");

} // namespace end def Animancer
