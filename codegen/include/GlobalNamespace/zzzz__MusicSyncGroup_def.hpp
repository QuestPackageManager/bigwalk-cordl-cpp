#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicSyncGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MusicSyncGroup)
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicSyncGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicSyncGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicSyncGroup*, "", "MusicSyncGroup");
// Dependencies MusicPlayer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicSyncGroup
class CORDL_TYPE MusicSyncGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

/// @brief Field MusicPlayers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MusicPlayers, put=__cordl_internal_set_MusicPlayers)) ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  MusicPlayers;

/// @brief Field <Initialized>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1803d9ae0, size 0x260, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method Awake, addr 0x1803d9d40, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MusicSyncGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803d9d50, size 0xb0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803d9e00, size 0x1b0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMovingTooFast, addr 0x1803d9fb0, size 0x10, virtual false, abstract: false, final false
inline void OnMovingTooFast(::UnityEngine::Vector3  obj) ;

/// @brief Method SyncGroup, addr 0x1803d9fc0, size 0x1d0, virtual false, abstract: false, final false
inline void SyncGroup() ;

/// @brief Method <OnEnable>b__7_0, addr 0x1803da190, size 0x10, virtual false, abstract: false, final false
inline void _OnEnable_b__7_0() ;

/// @brief Method <OnEnable>b__7_1, addr 0x1803da1a0, size 0x1f0, virtual false, abstract: false, final false
inline void _OnEnable_b__7_1() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>> const& __cordl_internal_get_MusicPlayers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>& __cordl_internal_get_MusicPlayers() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr void __cordl_internal_set_MusicPlayers(::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initialized, addr 0x1802f1be0, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

/// @brief Method set_Initialized, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicSyncGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicSyncGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicSyncGroup(MusicSyncGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicSyncGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicSyncGroup(MusicSyncGroup const& ) = delete;

/// @brief Field SYNC_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  SYNC_THRESHOLD{static_cast<float_t>(0.01f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4855};

/// @brief Field MusicPlayers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  ___MusicPlayers;

/// @brief Field <Initialized>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicSyncGroup, ___MusicPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicSyncGroup, ____Initialized_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicSyncGroup) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
