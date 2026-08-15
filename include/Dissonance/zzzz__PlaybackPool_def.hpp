#pragma once
// IWYU pragma private; include "Dissonance/PlaybackPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlaybackPool)
namespace Dissonance::Audio::Playback {
class IPriorityManager;
}
namespace Dissonance::Audio::Playback {
class IVoicePlaybackInternal;
}
namespace Dissonance::Audio::Playback {
class IVoicePlayback;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Datastructures {
template<typename T>
class Pool_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Dissonance {
class PlaybackPool;
}
// Write type traits
MARK_REF_T(::Dissonance::PlaybackPool*);
DEFINE_IL2CPP_CLASS(::Dissonance::PlaybackPool*, "Dissonance", "PlaybackPool");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.PlaybackPool
class CORDL_TYPE PlaybackPool : public ::System::Object {
public:
// Declarations
/// @brief Field _parent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::UnityEngine::Transform>  _parent;

/// @brief Field _pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>*  _pool;

/// @brief Field _prefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefab, put=__cordl_internal_set__prefab)) ::UnityW<::UnityEngine::GameObject>  _prefab;

/// @brief Field _priority, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__priority, put=__cordl_internal_set__priority)) ::Dissonance::Audio::Playback::IPriorityManager*  _priority;

/// @brief Field _volume, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) ::Dissonance::Audio::Playback::IVolumeProvider*  _volume;

/// @brief Method CreatePlayback, addr 0x1805ccc70, size 0x140, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* CreatePlayback() ;

/// @brief Method Get, addr 0x1805ccdb0, size 0x120, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* Get(::StringW  playerId) ;

static inline ::Dissonance::PlaybackPool* New_ctor(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume) ;

/// @brief Method Put, addr 0x1805cced0, size 0x140, virtual false, abstract: false, final false
inline void Put(::Dissonance::Audio::Playback::IVoicePlayback*  playback) ;

/// @brief Method Start, addr 0x1805cd010, size 0x70, virtual false, abstract: false, final false
inline void Start(::UnityEngine::GameObject*  playbackPrefab, ::UnityEngine::Transform*  transform) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parent() ;

constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>* const& __cordl_internal_get__pool() const;

constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>*& __cordl_internal_get__pool() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__prefab() ;

constexpr ::Dissonance::Audio::Playback::IPriorityManager* const& __cordl_internal_get__priority() const;

constexpr ::Dissonance::Audio::Playback::IPriorityManager*& __cordl_internal_get__priority() ;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& __cordl_internal_get__volume() const;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& __cordl_internal_get__volume() ;

constexpr void __cordl_internal_set__parent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__pool(::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>*  value) ;

constexpr void __cordl_internal_set__prefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__priority(::Dissonance::Audio::Playback::IPriorityManager*  value) ;

constexpr void __cordl_internal_set__volume(::Dissonance::Audio::Playback::IVolumeProvider*  value) ;

/// @brief Method .ctor, addr 0x1805cd080, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlaybackPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaybackPool(PlaybackPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaybackPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaybackPool(PlaybackPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16816};

/// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>*  ____pool;

/// @brief Field _priority, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IPriorityManager*  ____priority;

/// @brief Field _volume, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IVolumeProvider*  ____volume;

/// @brief Field _prefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____prefab;

/// @brief Field _parent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::PlaybackPool, ____pool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlaybackPool, ____priority) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlaybackPool, ____volume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlaybackPool, ____prefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlaybackPool, ____parent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::PlaybackPool) == 0x38, "Size mismatch!");

} // namespace end def Dissonance
