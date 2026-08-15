#pragma once
// IWYU pragma private; include "Animancer/AnimancerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimancerState)
namespace Animancer {
class AnimancerEvent_Sequence;
}
namespace Animancer {
class AnimancerLayer;
}
namespace Animancer {
class AnimancerNode;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState_DelayedPause;
}
namespace Animancer {
class AnimancerState_EventDispatcher;
}
namespace Animancer {
class IAnimationClipCollection;
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
class ICollection_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Action;
}
namespace System {
class Object;
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
class AnimancerState;
}
namespace Animancer {
class AnimancerState_DelayedPause;
}
namespace Animancer {
class AnimancerState_EventDispatcher;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerState*);
MARK_REF_T(::Animancer::AnimancerState_DelayedPause*);
MARK_REF_T(::Animancer::AnimancerState_EventDispatcher*);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerState*, "Animancer", "AnimancerState");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerState_DelayedPause*, "Animancer", "AnimancerState/DelayedPause");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerState_EventDispatcher*, "Animancer", "AnimancerState/EventDispatcher");
// Dependencies Animancer.Key
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerState/DelayedPause
class CORDL_TYPE AnimancerState_DelayedPause : public ::Animancer::Key {
public:
// Declarations
 __declspec(property(get=get_Root, put=set_Root)) ::Animancer::AnimancerPlayable*  Root;

 __declspec(property(get=get_State, put=set_State)) ::Animancer::AnimancerState*  State;

/// @brief Field <Root>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Root_k__BackingField, put=__cordl_internal_set__Root_k__BackingField)) ::Animancer::AnimancerPlayable*  _Root_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Animancer::AnimancerState*  _State_k__BackingField;

/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr operator  ::Animancer::IUpdatable*() noexcept;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

static inline ::Animancer::AnimancerState_DelayedPause* New_ctor() ;

/// @brief Method Register, addr 0x1802ecae0, size 0x90, virtual false, abstract: false, final false
static inline void Register(::Animancer::AnimancerState*  state) ;

/// @brief Method Update, addr 0x1802ecb70, size 0x90, virtual true, abstract: false, final true
inline void Update() ;

constexpr ::Animancer::AnimancerPlayable* const& __cordl_internal_get__Root_k__BackingField() const;

constexpr ::Animancer::AnimancerPlayable*& __cordl_internal_get__Root_k__BackingField() ;

constexpr ::Animancer::AnimancerState* const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Animancer::AnimancerState*& __cordl_internal_get__State_k__BackingField() ;

constexpr void __cordl_internal_set__Root_k__BackingField(::Animancer::AnimancerPlayable*  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::Animancer::AnimancerState*  value) ;

/// @brief Method .ctor, addr 0x1802ecc00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Root, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerPlayable* get_Root() ;

/// @brief Method get_State, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_State() ;

/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* i___Animancer__IUpdatable() noexcept;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

/// @brief Method set_Root, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Root(::Animancer::AnimancerPlayable*  value) ;

/// @brief Method set_State, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_State(::Animancer::AnimancerState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerState_DelayedPause() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerState_DelayedPause", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerState_DelayedPause(AnimancerState_DelayedPause && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerState_DelayedPause", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerState_DelayedPause(AnimancerState_DelayedPause const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18108};

/// @brief Field <Root>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable*  ____Root_k__BackingField;

/// @brief Field <State>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Animancer::AnimancerState*  ____State_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerState_DelayedPause, ____Root_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_DelayedPause, ____State_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerState_DelayedPause) == 0x28, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.Key
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerState/EventDispatcher
class CORDL_TYPE AnimancerState_EventDispatcher : public ::Animancer::Key {
public:
// Declarations
 __declspec(property(get=get_Events, put=set_Events)) ::Animancer::AnimancerEvent_Sequence*  Events;

 __declspec(property(get=get_HasEvents)) bool  HasEvents;

/// @brief Field _Events, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events, put=__cordl_internal_set__Events)) ::Animancer::AnimancerEvent_Sequence*  _Events;

/// @brief Field _GotEventsFromPool, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__GotEventsFromPool, put=__cordl_internal_set__GotEventsFromPool)) bool  _GotEventsFromPool;

/// @brief Field _IsLooping, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLooping, put=__cordl_internal_set__IsLooping)) bool  _IsLooping;

/// @brief Field _NextEventIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__NextEventIndex, put=__cordl_internal_set__NextEventIndex)) int32_t  _NextEventIndex;

/// @brief Field _PreviousTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__PreviousTime, put=__cordl_internal_set__PreviousTime)) float_t  _PreviousTime;

/// @brief Field _SequenceVersion, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__SequenceVersion, put=__cordl_internal_set__SequenceVersion)) int32_t  _SequenceVersion;

/// @brief Field _State, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__State, put=__cordl_internal_set__State)) ::Animancer::AnimancerState*  _State;

/// @brief Field _WasPlayingForwards, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__WasPlayingForwards, put=__cordl_internal_set__WasPlayingForwards)) bool  _WasPlayingForwards;

/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr operator  ::Animancer::IUpdatable*() noexcept;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Method Acquire, addr 0x1802ecd50, size 0xd0, virtual false, abstract: false, final false
static inline void Acquire(::Animancer::AnimancerState*  state) ;

/// @brief Method Animancer.IUpdatable.Update, addr 0x1802ece20, size 0x160, virtual true, abstract: false, final true
inline void Animancer_IUpdatable_Update() ;

/// @brief Method CheckGeneralEvents, addr 0x1802ecf80, size 0x2e0, virtual false, abstract: false, final false
inline void CheckGeneralEvents(float_t  currentTime) ;

/// @brief Method GetLoopDelta, addr 0x1802ed260, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetLoopDelta(float_t  previousTime, float_t  nextTime, float_t  eventTime) ;

/// @brief Method InvokeAllEvents, addr 0x1802ed2e0, size 0xa0, virtual false, abstract: false, final false
inline bool InvokeAllEvents(int32_t  count, int32_t  playDirectionInt) ;

static inline ::Animancer::AnimancerState_EventDispatcher* New_ctor() ;

/// @brief Method NextEvent, addr 0x1802ed3f0, size 0x50, virtual false, abstract: false, final false
inline bool NextEvent(int32_t  playDirectionInt) ;

/// @brief Method NextEventLooped, addr 0x1802ed380, size 0x70, virtual false, abstract: false, final false
inline bool NextEventLooped(int32_t  playDirectionInt) ;

/// @brief Method OnTimeChanged, addr 0x1802ed440, size 0x40, virtual false, abstract: false, final false
inline void OnTimeChanged() ;

/// @brief Method Release, addr 0x1802ed480, size 0x90, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method ToString, addr 0x1802ed510, size 0x30, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryClear, addr 0x1802ed540, size 0x10, virtual false, abstract: false, final false
static inline void TryClear(::Animancer::AnimancerState_EventDispatcher*  events) ;

/// @brief Method UpdateZeroLength, addr 0x1802ed550, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateZeroLength() ;

/// @brief Method ValidateAfterEndEvent, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ValidateAfterEndEvent(::System::Action*  callback) ;

/// @brief Method ValidateBeforeEndEvent, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ValidateBeforeEndEvent() ;

/// @brief Method ValidateNextEventIndex, addr 0x1802ed740, size 0x1e0, virtual false, abstract: false, final false
inline void ValidateNextEventIndex(::by_ref<float_t>  currentTime, ::by_ref<float_t>  playDirectionFloat, ::by_ref<int32_t>  playDirectionInt) ;

constexpr ::Animancer::AnimancerEvent_Sequence* const& __cordl_internal_get__Events() const;

constexpr ::Animancer::AnimancerEvent_Sequence*& __cordl_internal_get__Events() ;

constexpr bool const& __cordl_internal_get__GotEventsFromPool() const;

constexpr bool& __cordl_internal_get__GotEventsFromPool() ;

constexpr bool const& __cordl_internal_get__IsLooping() const;

constexpr bool& __cordl_internal_get__IsLooping() ;

constexpr int32_t const& __cordl_internal_get__NextEventIndex() const;

constexpr int32_t& __cordl_internal_get__NextEventIndex() ;

constexpr float_t const& __cordl_internal_get__PreviousTime() const;

constexpr float_t& __cordl_internal_get__PreviousTime() ;

constexpr int32_t const& __cordl_internal_get__SequenceVersion() const;

constexpr int32_t& __cordl_internal_get__SequenceVersion() ;

constexpr ::Animancer::AnimancerState* const& __cordl_internal_get__State() const;

constexpr ::Animancer::AnimancerState*& __cordl_internal_get__State() ;

constexpr bool const& __cordl_internal_get__WasPlayingForwards() const;

constexpr bool& __cordl_internal_get__WasPlayingForwards() ;

constexpr void __cordl_internal_set__Events(::Animancer::AnimancerEvent_Sequence*  value) ;

constexpr void __cordl_internal_set__GotEventsFromPool(bool  value) ;

constexpr void __cordl_internal_set__IsLooping(bool  value) ;

constexpr void __cordl_internal_set__NextEventIndex(int32_t  value) ;

constexpr void __cordl_internal_set__PreviousTime(float_t  value) ;

constexpr void __cordl_internal_set__SequenceVersion(int32_t  value) ;

constexpr void __cordl_internal_set__State(::Animancer::AnimancerState*  value) ;

constexpr void __cordl_internal_set__WasPlayingForwards(bool  value) ;

/// @brief Method .ctor, addr 0x1802ed920, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Events, addr 0x1802ed930, size 0x40, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent_Sequence* get_Events() ;

/// @brief Method get_HasEvents, addr 0x1802ed970, size 0x10, virtual false, abstract: false, final false
inline bool get_HasEvents() ;

/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* i___Animancer__IUpdatable() noexcept;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

/// @brief Method set_Events, addr 0x1802ed980, size 0xe0, virtual false, abstract: false, final false
inline void set_Events(::Animancer::AnimancerEvent_Sequence*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerState_EventDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerState_EventDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerState_EventDispatcher(AnimancerState_EventDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerState_EventDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerState_EventDispatcher(AnimancerState_EventDispatcher const& ) = delete;

/// @brief Field RecalculateEventIndex offset 0xffffffff size 0x4
static constexpr int32_t  RecalculateEventIndex{static_cast<int32_t>(0x80000000)};

/// @brief Field SequenceVersionException offset 0xffffffff size 0x8
static constexpr ::ConstString  SequenceVersionException{u"AnimancerState.Events sequence was modified while iterating through it. Events in a sequence must not modify that sequence."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18109};

/// @brief Field _State, offset: 0x18, size: 0x8, def value: None
 ::Animancer::AnimancerState*  ____State;

/// @brief Field _Events, offset: 0x20, size: 0x8, def value: None
 ::Animancer::AnimancerEvent_Sequence*  ____Events;

/// @brief Field _GotEventsFromPool, offset: 0x28, size: 0x1, def value: None
 bool  ____GotEventsFromPool;

/// @brief Field _IsLooping, offset: 0x29, size: 0x1, def value: None
 bool  ____IsLooping;

/// @brief Field _PreviousTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ____PreviousTime;

/// @brief Field _NextEventIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ____NextEventIndex;

/// @brief Field _SequenceVersion, offset: 0x34, size: 0x4, def value: None
 int32_t  ____SequenceVersion;

/// @brief Field _WasPlayingForwards, offset: 0x38, size: 0x1, def value: None
 bool  ____WasPlayingForwards;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____State) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____Events) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____GotEventsFromPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____IsLooping) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____PreviousTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____NextEventIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____SequenceVersion) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState_EventDispatcher, ____WasPlayingForwards) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerState_EventDispatcher) == 0x40, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerNode
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerState
class CORDL_TYPE AnimancerState : public ::Animancer::AnimancerNode {
public:
// Declarations
using DelayedPause = ::Animancer::AnimancerState_DelayedPause;

using EventDispatcher = ::Animancer::AnimancerState_EventDispatcher;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_Clip, put=set_Clip)) ::UnityW<::UnityEngine::AnimationClip>  Clip;

 __declspec(property(get=get_Duration, put=set_Duration)) float_t  Duration;

 __declspec(property(get=get_Events, put=set_Events)) ::Animancer::AnimancerEvent_Sequence*  Events;

 __declspec(property(get=get_HasEvents)) bool  HasEvents;

 __declspec(property(get=get_IsActive)) bool  IsActive;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_IsPlaying, put=set_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_IsStopped)) bool  IsStopped;

 __declspec(property(get=get_Key, put=set_Key)) ::System::Object*  Key;

 __declspec(property(get=get_Layer)) ::Animancer::AnimancerLayer*  Layer;

 __declspec(property(get=get_LayerIndex, put=set_LayerIndex)) int32_t  LayerIndex;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_MainObject, put=set_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

 __declspec(property(get=get_NormalizedEndTime, put=set_NormalizedEndTime)) float_t  NormalizedEndTime;

 __declspec(property(get=get_NormalizedTime, put=set_NormalizedTime)) float_t  NormalizedTime;

 __declspec(property(get=get_NormalizedTimeD, put=set_NormalizedTimeD)) double_t  NormalizedTimeD;

 __declspec(property(get=get_Parent)) ::Animancer::IPlayableWrapper*  Parent;

 __declspec(property(get=get_RawTime, put=set_RawTime)) double_t  RawTime;

 __declspec(property(get=get_RemainingDuration, put=set_RemainingDuration)) float_t  RemainingDuration;

 __declspec(property(get=get_Time, put=set_Time)) float_t  Time;

 __declspec(property(get=get_TimeD, put=set_TimeD)) double_t  TimeD;

/// @brief Field <AutomaticallyClearEvents>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__AutomaticallyClearEvents_k__BackingField, put=setStaticF__AutomaticallyClearEvents_k__BackingField)) bool  _AutomaticallyClearEvents_k__BackingField;

/// @brief Field _EventDispatcher, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__EventDispatcher, put=__cordl_internal_set__EventDispatcher)) ::Animancer::AnimancerState_EventDispatcher*  _EventDispatcher;

/// @brief Field _IsPlaying, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlaying, put=__cordl_internal_set__IsPlaying)) bool  _IsPlaying;

/// @brief Field _IsPlayingDirty, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlayingDirty, put=__cordl_internal_set__IsPlayingDirty)) bool  _IsPlayingDirty;

/// @brief Field _Key, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Key, put=__cordl_internal_set__Key)) ::System::Object*  _Key;

/// @brief Field _MustSetTime, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__MustSetTime, put=__cordl_internal_set__MustSetTime)) bool  _MustSetTime;

/// @brief Field _Parent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parent, put=__cordl_internal_set__Parent)) ::Animancer::AnimancerNode*  _Parent;

/// @brief Field _Time, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Time, put=__cordl_internal_set__Time)) double_t  _Time;

/// @brief Field _TimeFrameID, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeFrameID, put=__cordl_internal_set__TimeFrameID)) uint64_t  _TimeFrameID;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerState*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::AnimancerState*>*() noexcept;

/// @brief Method Animancer.ICopyable<Animancer.AnimancerState>.CopyFrom, addr 0x1802e5e50, size 0x190, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_AnimancerState__CopyFrom(::Animancer::AnimancerState*  copyFrom) ;

/// @brief Method AppendDetails, addr 0x1802e5fe0, size 0x530, virtual true, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method AppendPath, addr 0x1802e6510, size 0x170, virtual false, abstract: false, final false
static inline void AppendPath(::System::Text::StringBuilder*  path, ::Animancer::AnimancerNode*  parent) ;

/// @brief Method AppendPortAndType, addr 0x1802e6680, size 0xa0, virtual false, abstract: false, final false
inline void AppendPortAndType(::System::Text::StringBuilder*  path) ;

/// @brief Method CancelSetTime, addr 0x1802e6720, size 0x10, virtual false, abstract: false, final false
inline void CancelSetTime() ;

/// @brief Method ChangeMainObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void ChangeMainObject(::by_ref<T>  currentObject, T  newObject) ;

/// @brief Method Clone, addr 0x1802e6730, size 0x20, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Clone() ;

/// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method CreatePlayable, addr 0x1802e6750, size 0x120, virtual true, abstract: false, final true
inline void CreatePlayable() ;

/// @brief Method Destroy, addr 0x1802e6870, size 0xd0, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method GatherAnimationClips, addr 0x1802e6940, size 0xc0, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetPath, addr 0x1802e6a00, size 0xd0, virtual false, abstract: false, final false
inline ::StringW GetPath() ;

/// @brief Method IsPlayingAndNotEnding, addr 0x1802e6ad0, size 0x1a0, virtual true, abstract: false, final false
inline bool IsPlayingAndNotEnding() ;

/// @brief Method MoveTime, addr 0x1802e6c90, size 0x80, virtual true, abstract: false, final false
inline void MoveTime(double_t  time, bool  normalized) ;

/// @brief Method MoveTime, addr 0x1802e6c70, size 0x20, virtual false, abstract: false, final false
inline void MoveTime(float_t  time, bool  normalized) ;

static inline ::Animancer::AnimancerState* New_ctor() ;

/// @brief Method OnSetIsPlaying, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnSetIsPlaying() ;

/// @brief Method OnStartFade, addr 0x1802e6d10, size 0x30, virtual true, abstract: false, final false
inline void OnStartFade() ;

/// @brief Method Play, addr 0x1802e6d40, size 0xe0, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method SetNewCloneRoot, addr 0x1802e6e20, size 0x40, virtual false, abstract: false, final false
inline void SetNewCloneRoot(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method SetParent, addr 0x1802e6e90, size 0xd0, virtual false, abstract: false, final false
inline void SetParent(::Animancer::AnimancerNode*  parent, int32_t  index) ;

/// @brief Method SetParentInternal, addr 0x1802e6e60, size 0x30, virtual false, abstract: false, final false
inline void SetParentInternal(::Animancer::AnimancerNode*  parent, int32_t  index) ;

/// @brief Method SetRoot, addr 0x1802e6f60, size 0x230, virtual false, abstract: false, final false
inline void SetRoot(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method Stop, addr 0x1802e7190, size 0xf0, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method ToString, addr 0x1802e7280, size 0xc0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Update, addr 0x1802e7340, size 0x70, virtual true, abstract: false, final false
inline void Update(::by_ref<bool>  needsMoreUpdates) ;

constexpr ::Animancer::AnimancerState_EventDispatcher* const& __cordl_internal_get__EventDispatcher() const;

constexpr ::Animancer::AnimancerState_EventDispatcher*& __cordl_internal_get__EventDispatcher() ;

constexpr bool const& __cordl_internal_get__IsPlaying() const;

constexpr bool& __cordl_internal_get__IsPlaying() ;

constexpr bool const& __cordl_internal_get__IsPlayingDirty() const;

constexpr bool& __cordl_internal_get__IsPlayingDirty() ;

constexpr ::System::Object* const& __cordl_internal_get__Key() const;

constexpr ::System::Object*& __cordl_internal_get__Key() ;

constexpr bool const& __cordl_internal_get__MustSetTime() const;

constexpr bool& __cordl_internal_get__MustSetTime() ;

constexpr ::Animancer::AnimancerNode* const& __cordl_internal_get__Parent() const;

constexpr ::Animancer::AnimancerNode*& __cordl_internal_get__Parent() ;

constexpr double_t const& __cordl_internal_get__Time() const;

constexpr double_t& __cordl_internal_get__Time() ;

constexpr uint64_t const& __cordl_internal_get__TimeFrameID() const;

constexpr uint64_t& __cordl_internal_get__TimeFrameID() ;

constexpr void __cordl_internal_set__EventDispatcher(::Animancer::AnimancerState_EventDispatcher*  value) ;

constexpr void __cordl_internal_set__IsPlaying(bool  value) ;

constexpr void __cordl_internal_set__IsPlayingDirty(bool  value) ;

constexpr void __cordl_internal_set__Key(::System::Object*  value) ;

constexpr void __cordl_internal_set__MustSetTime(bool  value) ;

constexpr void __cordl_internal_set__Parent(::Animancer::AnimancerNode*  value) ;

constexpr void __cordl_internal_set__Time(double_t  value) ;

constexpr void __cordl_internal_set__TimeFrameID(uint64_t  value) ;

/// @brief Method .ctor, addr 0x1802e73d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__AutomaticallyClearEvents_k__BackingField() ;

/// @brief Method get_AutomaticallyClearEvents, addr 0x1802e73f0, size 0x20, virtual false, abstract: false, final false
static inline bool get_AutomaticallyClearEvents() ;

/// @brief Method get_AverageVelocity, addr 0x1802e7410, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_Clip, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Clip() ;

/// @brief Method get_Duration, addr 0x1802e7420, size 0x100, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_Events, addr 0x1802e7520, size 0x50, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent_Sequence* get_Events() ;

/// @brief Method get_HasEvents, addr 0x1802e7570, size 0x20, virtual false, abstract: false, final false
inline bool get_HasEvents() ;

/// @brief Method get_IsActive, addr 0x1802e7590, size 0x20, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_IsLooping, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_IsPlaying, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_IsStopped, addr 0x1802e75c0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsStopped() ;

/// @brief Method get_Key, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_Key() ;

/// @brief Method get_Layer, addr 0x1802e7630, size 0x20, virtual true, abstract: false, final false
inline ::Animancer::AnimancerLayer* get_Layer() ;

/// @brief Method get_LayerIndex, addr 0x1802e75f0, size 0x40, virtual false, abstract: false, final false
inline int32_t get_LayerIndex() ;

/// @brief Method get_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_MainObject, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Method get_NormalizedEndTime, addr 0x1802e7650, size 0xa0, virtual false, abstract: false, final false
inline float_t get_NormalizedEndTime() ;

/// @brief Method get_NormalizedTime, addr 0x1802e77a0, size 0xb0, virtual false, abstract: false, final false
inline float_t get_NormalizedTime() ;

/// @brief Method get_NormalizedTimeD, addr 0x1802e76f0, size 0xb0, virtual false, abstract: false, final false
inline double_t get_NormalizedTimeD() ;

/// @brief Method get_Parent, addr 0x1802e0b30, size 0x10, virtual true, abstract: false, final true
inline ::Animancer::IPlayableWrapper* get_Parent() ;

/// @brief Method get_RawTime, addr 0x1802e7850, size 0x20, virtual true, abstract: false, final false
inline double_t get_RawTime() ;

/// @brief Method get_RemainingDuration, addr 0x1802e7870, size 0xc0, virtual false, abstract: false, final false
inline float_t get_RemainingDuration() ;

/// @brief Method get_Time, addr 0x1802e7990, size 0x70, virtual false, abstract: false, final false
inline float_t get_Time() ;

/// @brief Method get_TimeD, addr 0x1802e7930, size 0x60, virtual false, abstract: false, final false
inline double_t get_TimeD() ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerState*>* i___Animancer__ICopyable_1___Animancer__AnimancerState__() noexcept;

static inline void setStaticF__AutomaticallyClearEvents_k__BackingField(bool  value) ;

/// @brief Method set_AutomaticallyClearEvents, addr 0x1802e7a00, size 0x20, virtual false, abstract: false, final false
static inline void set_AutomaticallyClearEvents(bool  value) ;

/// @brief Method set_Clip, addr 0x1802e7a20, size 0x50, virtual true, abstract: false, final false
inline void set_Clip(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_Duration, addr 0x1802e7a70, size 0x150, virtual false, abstract: false, final false
inline void set_Duration(float_t  value) ;

/// @brief Method set_Events, addr 0x1802e7bc0, size 0x60, virtual false, abstract: false, final false
inline void set_Events(::Animancer::AnimancerEvent_Sequence*  value) ;

/// @brief Method set_IsPlaying, addr 0x1802e7c20, size 0x70, virtual false, abstract: false, final false
inline void set_IsPlaying(bool  value) ;

/// @brief Method set_Key, addr 0x1802e7c90, size 0xc0, virtual false, abstract: false, final false
inline void set_Key(::System::Object*  value) ;

/// @brief Method set_LayerIndex, addr 0x1802e7d50, size 0x70, virtual false, abstract: false, final false
inline void set_LayerIndex(int32_t  value) ;

/// @brief Method set_MainObject, addr 0x1802e7dc0, size 0x50, virtual true, abstract: false, final false
inline void set_MainObject(::UnityEngine::Object*  value) ;

/// @brief Method set_NormalizedEndTime, addr 0x1802e7e10, size 0x60, virtual false, abstract: false, final false
inline void set_NormalizedEndTime(float_t  value) ;

/// @brief Method set_NormalizedTime, addr 0x1802e7ec0, size 0x50, virtual false, abstract: false, final false
inline void set_NormalizedTime(float_t  value) ;

/// @brief Method set_NormalizedTimeD, addr 0x1802e7e70, size 0x50, virtual false, abstract: false, final false
inline void set_NormalizedTimeD(double_t  value) ;

/// @brief Method set_RawTime, addr 0x1802e7f10, size 0x50, virtual true, abstract: false, final false
inline void set_RawTime(double_t  value) ;

/// @brief Method set_RemainingDuration, addr 0x1802e7f60, size 0x100, virtual false, abstract: false, final false
inline void set_RemainingDuration(float_t  value) ;

/// @brief Method set_Time, addr 0x1802e8140, size 0x10, virtual false, abstract: false, final false
inline void set_Time(float_t  value) ;

/// @brief Method set_TimeD, addr 0x1802e8060, size 0xe0, virtual false, abstract: false, final false
inline void set_TimeD(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerState(AnimancerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerState(AnimancerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18110};

/// @brief Field _EventDispatcher, offset: 0x48, size: 0x8, def value: None
 ::Animancer::AnimancerState_EventDispatcher*  ____EventDispatcher;

/// @brief Field _Parent, offset: 0x50, size: 0x8, def value: None
 ::Animancer::AnimancerNode*  ____Parent;

/// @brief Field _Key, offset: 0x58, size: 0x8, def value: None
 ::System::Object*  ____Key;

/// @brief Field _IsPlaying, offset: 0x60, size: 0x1, def value: None
 bool  ____IsPlaying;

/// @brief Field _IsPlayingDirty, offset: 0x61, size: 0x1, def value: None
 bool  ____IsPlayingDirty;

/// @brief Field _Time, offset: 0x68, size: 0x8, def value: None
 double_t  ____Time;

/// @brief Field _MustSetTime, offset: 0x70, size: 0x1, def value: None
 bool  ____MustSetTime;

/// @brief Field _TimeFrameID, offset: 0x78, size: 0x8, def value: None
 uint64_t  ____TimeFrameID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerState, ____EventDispatcher) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState, ____Parent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState, ____Key) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState, ____IsPlaying) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState, ____IsPlayingDirty) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState, ____Time) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState, ____MustSetTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerState, ____TimeFrameID) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerState) == 0x80, "Size mismatch!");

} // namespace end def Animancer
