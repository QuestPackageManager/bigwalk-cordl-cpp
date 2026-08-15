#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPool)
namespace GlobalNamespace {
class AudioPool_SortController;
}
namespace GlobalNamespace {
class AudioPool_SourcePoolByMixerGroup;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace GlobalNamespace {
template<typename T>
class HashSetBuffered_1;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPool;
}
namespace GlobalNamespace {
class AudioPool_SortController;
}
namespace GlobalNamespace {
class AudioPool_SourcePoolByMixerGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioPool*);
MARK_REF_T(::GlobalNamespace::AudioPool_SortController*);
MARK_REF_T(::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPool*, "", "AudioPool");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPool_SortController*, "", "AudioPool/SortController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*, "", "AudioPool/SourcePoolByMixerGroup");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPool/SourcePoolByMixerGroup
class CORDL_TYPE AudioPool_SourcePoolByMixerGroup : public ::System::Object {
public:
// Declarations
/// @brief Field Group, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  Group;

/// @brief Field Sources, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sources, put=__cordl_internal_set_Sources)) ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  Sources;

static inline ::GlobalNamespace::AudioPool_SourcePoolByMixerGroup* New_ctor(::UnityEngine::Audio::AudioMixerGroup*  group) ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_Group() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_Group() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* const& __cordl_internal_get_Sources() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*& __cordl_internal_get_Sources() ;

constexpr void __cordl_internal_set_Group(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_Sources(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value) ;

/// @brief Method .ctor, addr 0x180497e80, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Audio::AudioMixerGroup*  group) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPool_SourcePoolByMixerGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPool_SourcePoolByMixerGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPool_SourcePoolByMixerGroup(AudioPool_SourcePoolByMixerGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPool_SourcePoolByMixerGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPool_SourcePoolByMixerGroup(AudioPool_SourcePoolByMixerGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17547};

/// @brief Field Group, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___Group;

/// @brief Field Sources, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  ___Sources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPool_SourcePoolByMixerGroup, ___Group) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool_SourcePoolByMixerGroup, ___Sources) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPool_SourcePoolByMixerGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPool/SortController
class CORDL_TYPE AudioPool_SortController : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>*() noexcept;

/// @brief Method Compare, addr 0x180497d90, size 0xf0, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::AudioSourceController*  x, ::GlobalNamespace::AudioSourceController*  y) ;

static inline ::GlobalNamespace::AudioPool_SortController* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>* i___System__Collections__Generic__IComparer_1___UnityW___GlobalNamespace__AudioSourceController__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPool_SortController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPool_SortController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPool_SortController(AudioPool_SortController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPool_SortController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPool_SortController(AudioPool_SortController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17548};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioPool_SortController) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPool
class CORDL_TYPE AudioPool : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SortController = ::GlobalNamespace::AudioPool_SortController;

using SourcePoolByMixerGroup = ::GlobalNamespace::AudioPool_SourcePoolByMixerGroup;

 __declspec(property(get=get_ActuallyPlayingControllers, put=set_ActuallyPlayingControllers)) ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ActuallyPlayingControllers;

 __declspec(property(get=get_AllControllers)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  AllControllers;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_PlayingControllers, put=set_PlayingControllers)) ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  PlayingControllers;

 __declspec(property(get=get_PlayingSources, put=set_PlayingSources)) ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  PlayingSources;

 __declspec(property(get=get_UtilASC, put=set_UtilASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  UtilASC;

/// @brief Field <ActuallyPlayingControllers>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActuallyPlayingControllers_k__BackingField, put=__cordl_internal_set__ActuallyPlayingControllers_k__BackingField)) ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _ActuallyPlayingControllers_k__BackingField;

/// @brief Field <PlayingControllers>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayingControllers_k__BackingField, put=__cordl_internal_set__PlayingControllers_k__BackingField)) ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _PlayingControllers_k__BackingField;

/// @brief Field <PlayingSources>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayingSources_k__BackingField, put=__cordl_internal_set__PlayingSources_k__BackingField)) ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  _PlayingSources_k__BackingField;

/// @brief Field <UtilASC>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__UtilASC_k__BackingField, put=__cordl_internal_set__UtilASC_k__BackingField)) ::UnityW<::GlobalNamespace::AudioSourceController>  _UtilASC_k__BackingField;

/// @brief Field _allControllers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allControllers, put=__cordl_internal_set__allControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _allControllers;

/// @brief Field _avaiableSourcesByMixerGroup, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__avaiableSourcesByMixerGroup, put=__cordl_internal_set__avaiableSourcesByMixerGroup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  _avaiableSourcesByMixerGroup;

/// @brief Field _availableControllers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__availableControllers, put=__cordl_internal_set__availableControllers)) ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _availableControllers;

/// @brief Field _controllerParent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerParent, put=__cordl_internal_set__controllerParent)) ::UnityW<::UnityEngine::Transform>  _controllerParent;

/// @brief Field _initialControllerCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialControllerCount, put=__cordl_internal_set__initialControllerCount)) int32_t  _initialControllerCount;

/// @brief Field _initialSources, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialSources, put=__cordl_internal_set__initialSources)) ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  _initialSources;

/// @brief Field _initialized, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _sort, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sort, put=__cordl_internal_set__sort)) ::GlobalNamespace::AudioPool_SortController*  _sort;

/// @brief Field _sourcePools, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourcePools, put=__cordl_internal_set__sourcePools)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  _sourcePools;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method FindMaxPool, addr 0x180489c40, size 0x90, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioPool_SourcePoolByMixerGroup* FindMaxPool() ;

/// @brief Method FreeAudioSource, addr 0x180489cd0, size 0x310, virtual false, abstract: false, final false
inline void FreeAudioSource(::GlobalNamespace::AudioSourceRefs*  source, ::GlobalNamespace::AudioSourceController*  controller) ;

/// @brief Method FreeController, addr 0x180489fe0, size 0xd0, virtual false, abstract: false, final false
inline void FreeController(::GlobalNamespace::AudioSourceController*  controller) ;

/// @brief Method GetAudioSource, addr 0x18048a0b0, size 0x210, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceRefs> GetAudioSource(::GlobalNamespace::AudioSourceController*  controller) ;

/// @brief Method GetController, addr 0x18048a2c0, size 0x160, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceController> GetController(bool  forceAdd) ;

/// @brief Method Initialize, addr 0x18048a420, size 0x590, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::GameObject*  sourcePrefab, int32_t  sourceCount, ::UnityEngine::Transform*  sourceParent, int32_t  controllerCount, ::UnityEngine::Transform*  controllerParent) ;

static inline ::GlobalNamespace::AudioPool* New_ctor() ;

/// @brief Method StealSource, addr 0x18048a9b0, size 0x320, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceRefs> StealSource(::GlobalNamespace::AudioSourceController*  controller) ;

constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__ActuallyPlayingControllers_k__BackingField() const;

constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__ActuallyPlayingControllers_k__BackingField() ;

constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__PlayingControllers_k__BackingField() const;

constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__PlayingControllers_k__BackingField() ;

constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* const& __cordl_internal_get__PlayingSources_k__BackingField() const;

constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*& __cordl_internal_get__PlayingSources_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__UtilASC_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__UtilASC_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__allControllers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__allControllers() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>* const& __cordl_internal_get__avaiableSourcesByMixerGroup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*& __cordl_internal_get__avaiableSourcesByMixerGroup() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__availableControllers() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__availableControllers() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__controllerParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__controllerParent() ;

constexpr int32_t const& __cordl_internal_get__initialControllerCount() const;

constexpr int32_t& __cordl_internal_get__initialControllerCount() ;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* const& __cordl_internal_get__initialSources() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*& __cordl_internal_get__initialSources() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::GlobalNamespace::AudioPool_SortController* const& __cordl_internal_get__sort() const;

constexpr ::GlobalNamespace::AudioPool_SortController*& __cordl_internal_get__sort() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>* const& __cordl_internal_get__sourcePools() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*& __cordl_internal_get__sourcePools() ;

constexpr void __cordl_internal_set__ActuallyPlayingControllers_k__BackingField(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__PlayingControllers_k__BackingField(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__PlayingSources_k__BackingField(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value) ;

constexpr void __cordl_internal_set__UtilASC_k__BackingField(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__allControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__avaiableSourcesByMixerGroup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  value) ;

constexpr void __cordl_internal_set__availableControllers(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__controllerParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__initialControllerCount(int32_t  value) ;

constexpr void __cordl_internal_set__initialSources(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__sort(::GlobalNamespace::AudioPool_SortController*  value) ;

constexpr void __cordl_internal_set__sourcePools(::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  value) ;

/// @brief Method .ctor, addr 0x18048acd0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActuallyPlayingControllers, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* get_ActuallyPlayingControllers() ;

/// @brief Method get_AllControllers, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::AudioSourceController>>* get_AllControllers() ;

/// @brief Method get_Initialized, addr 0x1803cf3d0, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Method get_PlayingControllers, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* get_PlayingControllers() ;

/// @brief Method get_PlayingSources, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* get_PlayingSources() ;

/// @brief Method get_UtilASC, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceController> get_UtilASC() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

/// @brief Method set_ActuallyPlayingControllers, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_ActuallyPlayingControllers(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

/// @brief Method set_PlayingControllers, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_PlayingControllers(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

/// @brief Method set_PlayingSources, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_PlayingSources(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value) ;

/// @brief Method set_UtilASC, addr 0x1803117a0, size 0x10, virtual false, abstract: false, final false
inline void set_UtilASC(::GlobalNamespace::AudioSourceController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPool(AudioPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPool(AudioPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17549};

/// @brief Field _allControllers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____allControllers;

/// @brief Field _availableControllers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____availableControllers;

/// @brief Field _initialControllerCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ____initialControllerCount;

/// @brief Field _controllerParent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____controllerParent;

/// @brief Field <PlayingControllers>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____PlayingControllers_k__BackingField;

/// @brief Field <ActuallyPlayingControllers>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____ActuallyPlayingControllers_k__BackingField;

/// @brief Field _initialSources, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  ____initialSources;

/// @brief Field _avaiableSourcesByMixerGroup, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  ____avaiableSourcesByMixerGroup;

/// @brief Field _sourcePools, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  ____sourcePools;

/// @brief Field <PlayingSources>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  ____PlayingSources_k__BackingField;

/// @brief Field _sort, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::AudioPool_SortController*  ____sort;

/// @brief Field _initialized, offset: 0x78, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field <UtilASC>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____UtilASC_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPool, ____allControllers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____availableControllers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____initialControllerCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____controllerParent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____PlayingControllers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____ActuallyPlayingControllers_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____initialSources) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____avaiableSourcesByMixerGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____sourcePools) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____PlayingSources_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____sort) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____initialized) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPool, ____UtilASC_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPool) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
