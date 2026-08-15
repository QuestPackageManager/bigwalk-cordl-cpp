#pragma once
// IWYU pragma private; include "GlobalNamespace/GoodbyeTrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSpecificTurnstile_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GoodbyeTrain)
namespace GlobalNamespace {
class NetworkedTrain;
}
namespace GlobalNamespace {
class PlayerZone;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class GoodbyeTrain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GoodbyeTrain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GoodbyeTrain*, "", "GoodbyeTrain");
// Dependencies PlayerSpecificTurnstile, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GoodbyeTrain
class CORDL_TYPE GoodbyeTrain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entryTurnstileLockSystem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryTurnstileLockSystem, put=__cordl_internal_set_entryTurnstileLockSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  entryTurnstileLockSystem;

/// @brief Field exitTurnstiles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitTurnstiles, put=__cordl_internal_set_exitTurnstiles)) ::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>>  exitTurnstiles;

/// @brief Field loadingZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingZone, put=__cordl_internal_set_loadingZone)) ::UnityW<::GlobalNamespace::PlayerZone>  loadingZone;

/// @brief Field networkedTrain, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedTrain, put=__cordl_internal_set_networkedTrain)) ::UnityW<::GlobalNamespace::NetworkedTrain>  networkedTrain;

static inline ::GlobalNamespace::GoodbyeTrain* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_entryTurnstileLockSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_entryTurnstileLockSystem() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>> const& __cordl_internal_get_exitTurnstiles() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>>& __cordl_internal_get_exitTurnstiles() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_loadingZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_loadingZone() ;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& __cordl_internal_get_networkedTrain() const;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& __cordl_internal_get_networkedTrain() ;

constexpr void __cordl_internal_set_entryTurnstileLockSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_exitTurnstiles(::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>>  value) ;

constexpr void __cordl_internal_set_loadingZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

constexpr void __cordl_internal_set_networkedTrain(::UnityW<::GlobalNamespace::NetworkedTrain>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GoodbyeTrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GoodbyeTrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GoodbyeTrain(GoodbyeTrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GoodbyeTrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GoodbyeTrain(GoodbyeTrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5059};

/// @brief Field networkedTrain, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkedTrain>  ___networkedTrain;

/// @brief Field loadingZone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___loadingZone;

/// @brief Field entryTurnstileLockSystem, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___entryTurnstileLockSystem;

/// @brief Field exitTurnstiles, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>>  ___exitTurnstiles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GoodbyeTrain, ___networkedTrain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodbyeTrain, ___loadingZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodbyeTrain, ___entryTurnstileLockSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodbyeTrain, ___exitTurnstiles) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GoodbyeTrain) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
