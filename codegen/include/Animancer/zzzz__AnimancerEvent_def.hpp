#pragma once
// IWYU pragma private; include "Animancer/AnimancerEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimancerEvent)
namespace Animancer {
class AnimancerEvent_Sequence;
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
class Sequence_AnimancerEvent_Serializable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class Action;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer {
class AnimancerEvent_Sequence;
}
namespace Animancer {
class Sequence_AnimancerEvent_Serializable;
}
namespace Animancer {
struct AnimancerEvent;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerEvent_Sequence*);
MARK_REF_T(::Animancer::Sequence_AnimancerEvent_Serializable*);
MARK_VAL_T(::Animancer::AnimancerEvent);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerEvent_Sequence*, "Animancer", "AnimancerEvent/Sequence");
DEFINE_IL2CPP_CLASS(::Animancer::Sequence_AnimancerEvent_Serializable*, "Animancer", "AnimancerEvent/Sequence/Serializable");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerEvent, "Animancer", "AnimancerEvent");
// Dependencies System.Object, UnityEngine.Events.UnityEvent
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerEvent/Sequence/Serializable
class CORDL_TYPE Sequence_AnimancerEvent_Serializable : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Callbacks)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  Callbacks;

 __declspec(property(get=get_Events, put=set_Events)) ::Animancer::AnimancerEvent_Sequence*  Events;

 __declspec(property(get=get_InitializedEvents)) ::Animancer::AnimancerEvent_Sequence*  InitializedEvents;

 __declspec(property(get=get_Names)) ::ArrayW<::StringW>  Names;

 __declspec(property(get=get_NormalizedTimes)) ::ArrayW<float_t>  NormalizedTimes;

/// @brief Field _Callbacks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Callbacks, put=__cordl_internal_set__Callbacks)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  _Callbacks;

/// @brief Field _Events, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events, put=__cordl_internal_set__Events)) ::Animancer::AnimancerEvent_Sequence*  _Events;

/// @brief Field _Names, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Names, put=__cordl_internal_set__Names)) ::ArrayW<::StringW>  _Names;

/// @brief Field _NormalizedTimes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__NormalizedTimes, put=__cordl_internal_set__NormalizedTimes)) ::ArrayW<float_t>  _NormalizedTimes;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>*() noexcept;

/// @brief Method CopyFrom, addr 0x1802f43e0, size 0xa0, virtual true, abstract: false, final true
inline void CopyFrom(::Animancer::Sequence_AnimancerEvent_Serializable*  copyFrom) ;

/// @brief Method GetEventsOptional, addr 0x1802f4480, size 0x310, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent_Sequence* GetEventsOptional() ;

/// @brief Method GetInvoker, addr 0x1802f4790, size 0x80, virtual false, abstract: false, final false
static inline ::System::Action* GetInvoker(::UnityEngine::Events::UnityEvent*  callback) ;

/// @brief Method GetNormalizedEndTime, addr 0x1802f4810, size 0x70, virtual false, abstract: false, final false
inline float_t GetNormalizedEndTime(float_t  speed) ;

/// @brief Method HasPersistentCalls, addr 0x1802f4880, size 0x30, virtual false, abstract: false, final false
static inline bool HasPersistentCalls(::UnityEngine::Events::UnityEvent*  callback) ;

static inline ::Animancer::Sequence_AnimancerEvent_Serializable* New_ctor() ;

/// @brief Method SetNormalizedEndTime, addr 0x1802f48b0, size 0x80, virtual false, abstract: false, final false
inline void SetNormalizedEndTime(float_t  normalizedTime) ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get__Callbacks() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& __cordl_internal_get__Callbacks() ;

constexpr ::Animancer::AnimancerEvent_Sequence* const& __cordl_internal_get__Events() const;

constexpr ::Animancer::AnimancerEvent_Sequence*& __cordl_internal_get__Events() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__Names() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__Names() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__NormalizedTimes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__NormalizedTimes() ;

constexpr void __cordl_internal_set__Callbacks(::ArrayW<::UnityEngine::Events::UnityEvent*>  value) ;

constexpr void __cordl_internal_set__Events(::Animancer::AnimancerEvent_Sequence*  value) ;

constexpr void __cordl_internal_set__Names(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__NormalizedTimes(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Callbacks, addr 0x1802f4930, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<::UnityEngine::Events::UnityEvent*>> get_Callbacks() ;

/// @brief Method get_Events, addr 0x1802f4940, size 0x110, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent_Sequence* get_Events() ;

/// @brief Method get_InitializedEvents, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent_Sequence* get_InitializedEvents() ;

/// @brief Method get_Names, addr 0x1802f4a50, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<::StringW>> get_Names() ;

/// @brief Method get_NormalizedTimes, addr 0x1802f4a60, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<float_t>> get_NormalizedTimes() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>"
constexpr ::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>* i___Animancer__ICopyable_1___Animancer__Sequence_AnimancerEvent_Serializable__() noexcept;

/// @brief Method op_Implicit, addr 0x1802f4a70, size 0x10, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerEvent_Sequence* op_Implicit___Animancer__AnimancerEvent_Sequence_(::Animancer::Sequence_AnimancerEvent_Serializable*  serializable) ;

/// @brief Method set_Events, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Events(::Animancer::AnimancerEvent_Sequence*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequence_AnimancerEvent_Serializable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequence_AnimancerEvent_Serializable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequence_AnimancerEvent_Serializable(Sequence_AnimancerEvent_Serializable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequence_AnimancerEvent_Serializable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequence_AnimancerEvent_Serializable(Sequence_AnimancerEvent_Serializable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18099};

/// @brief Field _NormalizedTimes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ____NormalizedTimes;

/// @brief Field _Callbacks, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent*>  ____Callbacks;

/// @brief Field _Names, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____Names;

/// @brief Field _Events, offset: 0x28, size: 0x8, def value: None
 ::Animancer::AnimancerEvent_Sequence*  ____Events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Sequence_AnimancerEvent_Serializable, ____NormalizedTimes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::Sequence_AnimancerEvent_Serializable, ____Callbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::Sequence_AnimancerEvent_Serializable, ____Names) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Sequence_AnimancerEvent_Serializable, ____Events) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Sequence_AnimancerEvent_Serializable) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.AnimancerEvent
struct CORDL_TYPE AnimancerEvent {
public:
// Declarations
using Sequence = ::Animancer::AnimancerEvent_Sequence;

/// @brief Field DummyCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DummyCallback, put=setStaticF_DummyCallback)) ::System::Action*  DummyCallback;

/// @brief Field _CurrentEvent, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__CurrentEvent, put=setStaticF__CurrentEvent)) ::Animancer::AnimancerEvent  _CurrentEvent;

/// @brief Field _CurrentState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CurrentState, put=setStaticF__CurrentState)) ::Animancer::AnimancerState*  _CurrentState;

/// @brief Convert operator to "::System::IEquatable_1<::Animancer::AnimancerEvent>"
constexpr operator  ::System::IEquatable_1<::Animancer::AnimancerEvent>*() ;

/// @brief Method AppendDetails, addr 0x1802ddb90, size 0x2c0, virtual false, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text) ;

/// @brief Method Dummy, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void Dummy() ;

/// @brief Method Equals, addr 0x1802ddef0, size 0xd0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1802dde50, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::Animancer::AnimancerEvent  other) ;

/// @brief Method GetFadeOutDuration, addr 0x1802de1b0, size 0x70, virtual false, abstract: false, final false
static inline float_t GetFadeOutDuration() ;

/// @brief Method GetFadeOutDuration, addr 0x1802ddfc0, size 0x50, virtual false, abstract: false, final false
static inline float_t GetFadeOutDuration(float_t  minDuration) ;

/// @brief Method GetFadeOutDuration, addr 0x1802de010, size 0x1a0, virtual false, abstract: false, final false
static inline float_t GetFadeOutDuration(::Animancer::AnimancerState*  state, float_t  minDuration) ;

/// @brief Method GetHashCode, addr 0x1802de220, size 0x70, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Invoke, addr 0x1802de290, size 0x1e0, virtual false, abstract: false, final false
inline void Invoke(::Animancer::AnimancerState*  state) ;

/// @brief Method IsNullOrDummy, addr 0x1802de470, size 0x50, virtual false, abstract: false, final false
static inline bool IsNullOrDummy(::System::Action*  callback) ;

/// @brief Method ToString, addr 0x1802de4c0, size 0xe0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1802de600, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  normalizedTime, ::System::Action*  callback) ;

static inline ::System::Action* getStaticF_DummyCallback() ;

static inline ::Animancer::AnimancerEvent getStaticF__CurrentEvent() ;

static inline ::Animancer::AnimancerState* getStaticF__CurrentState() ;

/// @brief Method get_CurrentEvent, addr 0x1802de620, size 0x40, virtual false, abstract: false, final false
static inline ::by_ref<::Animancer::AnimancerEvent> get_CurrentEvent() ;

/// @brief Method get_CurrentState, addr 0x1802de660, size 0x40, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerState* get_CurrentState() ;

/// @brief Convert to "::System::IEquatable_1<::Animancer::AnimancerEvent>"
constexpr ::System::IEquatable_1<::Animancer::AnimancerEvent>* i___System__IEquatable_1___Animancer__AnimancerEvent_() ;

/// @brief Method op_Equality, addr 0x1802de6a0, size 0x80, virtual false, abstract: false, final false
static inline bool op_Equality(::Animancer::AnimancerEvent  a, ::Animancer::AnimancerEvent  b) ;

/// @brief Method op_Inequality, addr 0x1802de720, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Inequality(::Animancer::AnimancerEvent  a, ::Animancer::AnimancerEvent  b) ;

static inline void setStaticF_DummyCallback(::System::Action*  value) ;

static inline void setStaticF__CurrentEvent(::Animancer::AnimancerEvent  value) ;

static inline void setStaticF__CurrentState(::Animancer::AnimancerState*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimancerEvent() ;

// Ctor Parameters [CppParam { name: "normalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::Action*", modifiers: "", def_value: None }]
constexpr AnimancerEvent(float_t  normalizedTime, ::System::Action*  callback) noexcept;

/// @brief Field AlmostOne offset 0xffffffff size 0x4
static constexpr float_t  AlmostOne{static_cast<float_t>(0.99999994f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field normalizedTime, offset: 0x0, size: 0x4, def value: None
 float_t  normalizedTime;

/// @brief Field callback, offset: 0x8, size: 0x8, def value: None
 ::System::Action*  callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerEvent, normalizedTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerEvent, callback) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerEvent) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerEvent, System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerEvent/Sequence
class CORDL_TYPE AnimancerEvent_Sequence : public ::System::Object {
public:
// Declarations
using Serializable = ::Animancer::Sequence_AnimancerEvent_Serializable;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_EndEvent, put=set_EndEvent)) ::Animancer::AnimancerEvent  EndEvent;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Item)) ::Animancer::AnimancerEvent  Item[];

 __declspec(property(get=get_Item)) ::Animancer::AnimancerEvent  Item[];

 __declspec(property(get=get_Names)) ::ArrayW<::StringW>  Names;

 __declspec(property(get=get_NormalizedEndTime, put=set_NormalizedEndTime)) float_t  NormalizedEndTime;

 __declspec(property(get=get_OnEnd, put=set_OnEnd)) ::System::Action*  OnEnd;

 __declspec(property(get=get_Version, put=set_Version)) int32_t  Version;

/// @brief Field <Count>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field _EndEvent, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__EndEvent, put=__cordl_internal_set__EndEvent)) ::Animancer::AnimancerEvent  _EndEvent;

/// @brief Field _Events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events, put=__cordl_internal_set__Events)) ::ArrayW<::Animancer::AnimancerEvent>  _Events;

/// @brief Field _Names, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Names, put=__cordl_internal_set__Names)) ::ArrayW<::StringW>  _Names;

/// @brief Field _Version, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Version, put=__cordl_internal_set__Version)) int32_t  _Version;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x1802f21d0, size 0x70, virtual false, abstract: false, final false
inline int32_t Add(::Animancer::AnimancerEvent  animancerEvent) ;

/// @brief Method Add, addr 0x1802f22a0, size 0x110, virtual false, abstract: false, final false
inline int32_t Add(int32_t  indexHint, ::Animancer::AnimancerEvent  animancerEvent) ;

/// @brief Method Add, addr 0x1802f2240, size 0x60, virtual false, abstract: false, final false
inline int32_t Add(int32_t  indexHint, float_t  normalizedTime, ::System::Action*  callback) ;

/// @brief Method Add, addr 0x1802f23b0, size 0xf0, virtual false, abstract: false, final false
inline int32_t Add(float_t  normalizedTime, ::System::Action*  callback) ;

/// @brief Method AddAllEvents, addr 0x1802f1c90, size 0x1b0, virtual false, abstract: false, final false
inline void AddAllEvents(::UnityEngine::AnimationClip*  animation) ;

/// @brief Method AddCallback, addr 0x1802f1f40, size 0xb0, virtual false, abstract: false, final false
inline void AddCallback(int32_t  index, ::System::Action*  callback) ;

/// @brief Method AddCallback, addr 0x1802f1e40, size 0x100, virtual false, abstract: false, final false
inline void AddCallback(::StringW  name, ::System::Action*  callback) ;

/// @brief Method AddRange, addr 0x1802f1ff0, size 0x1e0, virtual false, abstract: false, final false
inline void AddRange(::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*  enumerable) ;

/// @brief Method AssertCallbackUniqueness, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void AssertCallbackUniqueness(::System::Action*  oldCallback, ::System::Action*  newCallback, ::StringW  target) ;

/// @brief Method AssertEventUniqueness, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void AssertEventUniqueness(int32_t  index, ::Animancer::AnimancerEvent  newEvent) ;

/// @brief Method AssertNormalizedTimes, addr 0x1802f24a0, size 0xe0, virtual false, abstract: false, final false
inline void AssertNormalizedTimes(::Animancer::AnimancerState*  state) ;

/// @brief Method AssertNormalizedTimes, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void AssertNormalizedTimes(::Animancer::AnimancerState*  state, bool  isLooping) ;

/// @brief Method Clear, addr 0x1802f2580, size 0x80, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ContentsAreEqual, addr 0x1802f2600, size 0x170, virtual false, abstract: false, final false
inline bool ContentsAreEqual(::Animancer::AnimancerEvent_Sequence*  other) ;

/// @brief Method CopyFrom, addr 0x1802f2770, size 0x130, virtual true, abstract: false, final true
inline void CopyFrom(::Animancer::AnimancerEvent_Sequence*  copyFrom) ;

/// @brief Method CopyTo, addr 0x1802f28a0, size 0x30, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::Animancer::AnimancerEvent>  array, int32_t  index) ;

/// @brief Method DeepToString, addr 0x1802f28d0, size 0x2f0, virtual false, abstract: false, final false
inline ::StringW DeepToString(bool  multiLine) ;

/// @brief Method GetDefaultNormalizedEndTime, addr 0x1802f2bc0, size 0x20, virtual false, abstract: false, final false
static inline float_t GetDefaultNormalizedEndTime(float_t  speed) ;

/// @brief Method GetDefaultNormalizedStartTime, addr 0x1802f2be0, size 0x20, virtual false, abstract: false, final false
static inline float_t GetDefaultNormalizedStartTime(float_t  speed) ;

/// @brief Method GetEnumerator, addr 0x1802f2c00, size 0x30, virtual false, abstract: false, final false
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerEvent> GetEnumerator() ;

/// @brief Method GetName, addr 0x1802f2c30, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetName(int32_t  index) ;

/// @brief Method IndexOf, addr 0x1802f2fc0, size 0x30, virtual false, abstract: false, final false
inline int32_t IndexOf(::Animancer::AnimancerEvent  animancerEvent) ;

/// @brief Method IndexOf, addr 0x1802f2de0, size 0x1e0, virtual false, abstract: false, final false
inline int32_t IndexOf(int32_t  indexHint, ::Animancer::AnimancerEvent  animancerEvent) ;

/// @brief Method IndexOf, addr 0x1802f2ff0, size 0xb0, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  name, int32_t  startIndex) ;

/// @brief Method IndexOfRequired, addr 0x1802f2ce0, size 0xa0, virtual false, abstract: false, final false
inline int32_t IndexOfRequired(::Animancer::AnimancerEvent  animancerEvent) ;

/// @brief Method IndexOfRequired, addr 0x1802f2c50, size 0x90, virtual false, abstract: false, final false
inline int32_t IndexOfRequired(int32_t  indexHint, ::Animancer::AnimancerEvent  animancerEvent) ;

/// @brief Method IndexOfRequired, addr 0x1802f2d80, size 0x60, virtual false, abstract: false, final false
inline int32_t IndexOfRequired(::StringW  name, int32_t  startIndex) ;

/// @brief Method Insert, addr 0x1802f30a0, size 0xd0, virtual false, abstract: false, final false
inline int32_t Insert(int32_t  indexHint, float_t  normalizedTime) ;

/// @brief Method Insert, addr 0x1802f3170, size 0x240, virtual false, abstract: false, final false
inline int32_t Insert(float_t  normalizedTime) ;

/// @brief Method Insert, addr 0x1802f33b0, size 0x200, virtual false, abstract: false, final false
inline void Insert(int32_t  index) ;

static inline ::Animancer::AnimancerEvent_Sequence* New_ctor() ;

static inline ::Animancer::AnimancerEvent_Sequence* New_ctor(int32_t  capacity) ;

static inline ::Animancer::AnimancerEvent_Sequence* New_ctor(::Animancer::AnimancerEvent_Sequence*  copyFrom) ;

/// @brief Method OnSequenceModified, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnSequenceModified() ;

/// @brief Method Remove, addr 0x1802f3800, size 0x50, virtual false, abstract: false, final false
inline bool Remove(::Animancer::AnimancerEvent  animancerEvent) ;

/// @brief Method Remove, addr 0x1802f3850, size 0x40, virtual false, abstract: false, final false
inline bool Remove(::StringW  name) ;

/// @brief Method Remove, addr 0x1802f3890, size 0x110, virtual false, abstract: false, final false
inline void Remove(int32_t  index) ;

/// @brief Method RemoveCallback, addr 0x1802f3700, size 0x100, virtual false, abstract: false, final false
inline void RemoveCallback(int32_t  index, ::System::Action*  callback) ;

/// @brief Method RemoveCallback, addr 0x1802f35b0, size 0x150, virtual false, abstract: false, final false
inline void RemoveCallback(::StringW  name, ::System::Action*  callback) ;

/// @brief Method SetCallback, addr 0x1802f39a0, size 0x50, virtual false, abstract: false, final false
inline void SetCallback(int32_t  index, ::System::Action*  callback) ;

/// @brief Method SetCallback, addr 0x1802f39f0, size 0xb0, virtual false, abstract: false, final false
inline void SetCallback(::StringW  name, ::System::Action*  callback) ;

/// @brief Method SetName, addr 0x1802f3aa0, size 0xe0, virtual false, abstract: false, final false
inline void SetName(int32_t  index, ::StringW  name) ;

/// @brief Method SetNormalizedTime, addr 0x1802f3db0, size 0xc0, virtual false, abstract: false, final false
inline int32_t SetNormalizedTime(::Animancer::AnimancerEvent  animancerEvent, float_t  normalizedTime) ;

/// @brief Method SetNormalizedTime, addr 0x1802f3b80, size 0x1b0, virtual false, abstract: false, final false
inline int32_t SetNormalizedTime(int32_t  index, float_t  normalizedTime) ;

/// @brief Method SetNormalizedTime, addr 0x1802f3d30, size 0x80, virtual false, abstract: false, final false
inline int32_t SetNormalizedTime(::StringW  name, float_t  normalizedTime) ;

/// @brief Method SetShouldNotModifyReason, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetShouldNotModifyReason(::StringW  reason) ;

/// @brief Method System.Collections.Generic.IEnumerable<Animancer.AnimancerEvent>.GetEnumerator, addr 0x1802f3e70, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerEvent>* System_Collections_Generic_IEnumerable_Animancer_AnimancerEvent__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1802f3e70, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::Animancer::AnimancerEvent const& __cordl_internal_get__EndEvent() const;

constexpr ::Animancer::AnimancerEvent& __cordl_internal_get__EndEvent() ;

constexpr ::ArrayW<::Animancer::AnimancerEvent> const& __cordl_internal_get__Events() const;

constexpr ::ArrayW<::Animancer::AnimancerEvent>& __cordl_internal_get__Events() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__Names() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__Names() ;

constexpr int32_t const& __cordl_internal_get__Version() const;

constexpr int32_t& __cordl_internal_get__Version() ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__EndEvent(::Animancer::AnimancerEvent  value) ;

constexpr void __cordl_internal_set__Events(::ArrayW<::Animancer::AnimancerEvent>  value) ;

constexpr void __cordl_internal_set__Names(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__Version(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802f40d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1802f3ec0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x1802f3f80, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerEvent_Sequence*  copyFrom) ;

/// @brief Method get_Capacity, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_EndEvent, addr 0x1802f41b0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent get_EndEvent() ;

/// @brief Method get_IsEmpty, addr 0x1802f41c0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0x1802f41e0, size 0x30, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0x1802f4210, size 0xa0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent get_Item(::StringW  name) ;

/// @brief Method get_Names, addr 0x1802dd7d0, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<::StringW>> get_Names() ;

/// @brief Method get_NormalizedEndTime, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_NormalizedEndTime() ;

/// @brief Method get_OnEnd, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Action* get_OnEnd() ;

/// @brief Method get_Version, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>"
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>* i___Animancer__ICopyable_1___Animancer__AnimancerEvent_Sequence__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>* i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerEvent_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Capacity, addr 0x1802f42d0, size 0xc0, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Count, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_EndEvent, addr 0x1802f43a0, size 0x20, virtual false, abstract: false, final false
inline void set_EndEvent(::Animancer::AnimancerEvent  value) ;

/// @brief Method set_NormalizedEndTime, addr 0x1802f43c0, size 0x10, virtual false, abstract: false, final false
inline void set_NormalizedEndTime(float_t  value) ;

/// @brief Method set_OnEnd, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_OnEnd(::System::Action*  value) ;

/// @brief Method set_Version, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_Version(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerEvent_Sequence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerEvent_Sequence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerEvent_Sequence(AnimancerEvent_Sequence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerEvent_Sequence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerEvent_Sequence(AnimancerEvent_Sequence const& ) = delete;

/// @brief Field DefaultCapacity offset 0xffffffff size 0x4
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x8)};

/// @brief Field IndexOutOfRangeError offset 0xffffffff size 0x8
static constexpr ::ConstString  IndexOutOfRangeError{u"index must be within the range of 0 <= index < Count"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18100};

/// @brief Field _Events, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Animancer::AnimancerEvent>  ____Events;

/// @brief Field <Count>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// @brief Field _Version, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____Version;

/// @brief Field _EndEvent, offset: 0x20, size: 0x10, def value: None
 ::Animancer::AnimancerEvent  ____EndEvent;

/// @brief Field _Names, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____Names;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerEvent_Sequence, ____Events) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerEvent_Sequence, ____Count_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerEvent_Sequence, ____Version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerEvent_Sequence, ____EndEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerEvent_Sequence, ____Names) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerEvent_Sequence) == 0x38, "Size mismatch!");

} // namespace end def Animancer
