#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerShepherd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerShepherd)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerShepherd_ShepherdColliderSnapshot;
}
namespace GlobalNamespace {
class PropHome;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerShepherd;
}
namespace GlobalNamespace {
struct PlayerShepherd_ShepherdColliderSnapshot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerShepherd*);
MARK_VAL_T(::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerShepherd*, "", "PlayerShepherd");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot, "", "PlayerShepherd/ShepherdColliderSnapshot");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerShepherd/ShepherdColliderSnapshot
struct CORDL_TYPE PlayerShepherd_ShepherdColliderSnapshot {
public:
// Declarations
/// @brief Method SetFromCollider, addr 0x180378c30, size 0x190, virtual false, abstract: false, final false
inline void SetFromCollider(::UnityEngine::Collider*  newCollider) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerShepherd_ShepherdColliderSnapshot() ;

// Ctor Parameters [CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr PlayerShepherd_ShepherdColliderSnapshot(::UnityW<::UnityEngine::Collider>  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field collider, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field position, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot, collider) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot, rotation) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Collider, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerShepherd
class CORDL_TYPE PlayerShepherd : public ::System::Object {
public:
// Declarations
using ShepherdColliderSnapshot = ::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot;

/// @brief Field bypassFixedUpdate, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassFixedUpdate, put=__cordl_internal_set_bypassFixedUpdate)) bool  bypassFixedUpdate;

/// @brief Field colliderSnapshots, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderSnapshots, put=__cordl_internal_set_colliderSnapshots)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*  colliderSnapshots;

/// @brief Field layerMask, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field logVerbose, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field overLapColliderCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_overLapColliderCache, put=__cordl_internal_set_overLapColliderCache)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overLapColliderCache;

/// @brief Field playerCharacter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field runForRemotePlayers, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_runForRemotePlayers, put=__cordl_internal_set_runForRemotePlayers)) bool  runForRemotePlayers;

/// @brief Field showDebugLines, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_showDebugLines, put=__cordl_internal_set_showDebugLines)) bool  showDebugLines;

/// @brief Method AddCollider, addr 0x180372200, size 0x220, virtual false, abstract: false, final false
inline void AddCollider(::UnityEngine::Collider*  newCollider, ::GlobalNamespace::PlayerCharacter*  startInsidePlayer) ;

/// @brief Method AddPropHome, addr 0x180372420, size 0x160, virtual false, abstract: false, final false
inline void AddPropHome(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::PlayerCharacter*  startInsidePlayer) ;

/// @brief Method Clear, addr 0x180372580, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ColliderOverlapCheck, addr 0x1803725c0, size 0x7a0, virtual false, abstract: false, final false
static inline void ColliderOverlapCheck(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  layerMask, ::ArrayW<::UnityEngine::Collider*>  overlapColliders, ::by_ref<int32_t>  hits) ;

/// @brief Method DoShepherdCasts, addr 0x180372d60, size 0xa90, virtual false, abstract: false, final false
inline void DoShepherdCasts(int32_t  stepCount, ::by_ref<::UnityEngine::Vector3>  movement) ;

/// @brief Method FixedUpdate, addr 0x1803737f0, size 0x510, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetMaxMovement, addr 0x180373d00, size 0x170, virtual false, abstract: false, final false
static inline float_t GetMaxMovement(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*  colliderSnapshots) ;

/// @brief Method GetStepsFromMovement, addr 0x180373e70, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetStepsFromMovement(float_t  movement) ;

/// @brief Method Initialize, addr 0x180373f50, size 0x80, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerShepherd* New_ctor() ;

/// @brief Method RecordColliderPositions, addr 0x180373fd0, size 0x1a0, virtual false, abstract: false, final false
inline void RecordColliderPositions(::UnityEngine::Vector3  offset) ;

/// @brief Method RefreshHeldColliderArray, addr 0x180374170, size 0x2c0, virtual false, abstract: false, final false
inline void RefreshHeldColliderArray(::by_ref<bool>  hasNewColliders) ;

constexpr bool const& __cordl_internal_get_bypassFixedUpdate() const;

constexpr bool& __cordl_internal_get_bypassFixedUpdate() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>* const& __cordl_internal_get_colliderSnapshots() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*& __cordl_internal_get_colliderSnapshots() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_overLapColliderCache() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_overLapColliderCache() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr bool const& __cordl_internal_get_runForRemotePlayers() const;

constexpr bool& __cordl_internal_get_runForRemotePlayers() ;

constexpr bool const& __cordl_internal_get_showDebugLines() const;

constexpr bool& __cordl_internal_get_showDebugLines() ;

constexpr void __cordl_internal_set_bypassFixedUpdate(bool  value) ;

constexpr void __cordl_internal_set_colliderSnapshots(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_overLapColliderCache(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_runForRemotePlayers(bool  value) ;

constexpr void __cordl_internal_set_showDebugLines(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerShepherd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerShepherd", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerShepherd(PlayerShepherd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerShepherd", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerShepherd(PlayerShepherd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5479};

/// @brief Field layerMask, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field runForRemotePlayers, offset: 0x14, size: 0x1, def value: None
 bool  ___runForRemotePlayers;

/// @brief Field logVerbose, offset: 0x15, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field bypassFixedUpdate, offset: 0x16, size: 0x1, def value: None
 bool  ___bypassFixedUpdate;

/// @brief Field showDebugLines, offset: 0x17, size: 0x1, def value: None
 bool  ___showDebugLines;

/// @brief Field playerCharacter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field colliderSnapshots, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*  ___colliderSnapshots;

/// @brief Field overLapColliderCache, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___overLapColliderCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___layerMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___runForRemotePlayers) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___logVerbose) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___bypassFixedUpdate) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___showDebugLines) == 0x17, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___playerCharacter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___colliderSnapshots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerShepherd, ___overLapColliderCache) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerShepherd) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
