#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpecificTurnstile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__SplitFlapGlyph_def.hpp"
#include "Mirror/zzzz__NetworkBehaviourSyncVar_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PlayerSpecificTurnstile)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
class PlayerZone;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificTurnstile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSpecificTurnstile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSpecificTurnstile*, "", "PlayerSpecificTurnstile");
// Dependencies Mirror.NetworkBehaviour, Mirror.NetworkBehaviourSyncVar, PeckSystemReference, SplitFlapGlyph
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSpecificTurnstile
class CORDL_TYPE PlayerSpecificTurnstile : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkchosenPlayer, put=set_NetworkchosenPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  NetworkchosenPlayer;

/// @brief Field ___chosenPlayerNetId, offset 0xbc, size 0x8 
 __declspec(property(get=__cordl_internal_get____chosenPlayerNetId, put=__cordl_internal_set____chosenPlayerNetId)) ::Mirror::NetworkBehaviourSyncVar  ___chosenPlayerNetId;

/// @brief Field chosenPlayer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_chosenPlayer, put=__cordl_internal_set_chosenPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  chosenPlayer;

/// @brief Field entryPose, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryPose, put=__cordl_internal_set_entryPose)) ::UnityW<::GlobalNamespace::PlayerPose>  entryPose;

/// @brief Field lockSystem, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockSystem, put=__cordl_internal_set_lockSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  lockSystem;

/// @brief Field logVerbose, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerZone, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

/// @brief Field pokeButton, offset 0x80, size 0x28 
 __declspec(property(get=__cordl_internal_get_pokeButton, put=__cordl_internal_set_pokeButton)) ::GlobalNamespace::PeckSystemReference  pokeButton;

/// @brief Field splitFlapGlyphs, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_splitFlapGlyphs, put=__cordl_internal_set_splitFlapGlyphs)) ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  splitFlapGlyphs;

/// @brief Method Awake, addr 0x18040f310, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x18040f370, size 0x90, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PlayerSpecificTurnstile* New_ctor() ;

/// @brief Method OnChange, addr 0x18040f480, size 0x110, virtual false, abstract: false, final false
inline void OnChange(::GlobalNamespace::PlayerCharacter*  changedPlayer) ;

/// @brief Method OnChangeChosenPlayer, addr 0x18040f400, size 0x80, virtual false, abstract: false, final false
inline void OnChangeChosenPlayer(::GlobalNamespace::PlayerCharacter*  oldValue, ::GlobalNamespace::PlayerCharacter*  newValue) ;

/// @brief Method OnPeck, addr 0x18040f590, size 0x110, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method PickPlayer, addr 0x18040f6a0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PlayerCharacter> PickPlayer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  playersInZone) ;

/// @brief Method RefreshPokeButton, addr 0x18040f750, size 0xa0, virtual false, abstract: false, final false
inline void RefreshPokeButton() ;

/// @brief Method SerializeSyncVars, addr 0x18040f7f0, size 0x70, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method Start, addr 0x18040f860, size 0x1b0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateGlyphs, addr 0x18040fa10, size 0x230, virtual false, abstract: false, final false
inline void UpdateGlyphs() ;

constexpr ::Mirror::NetworkBehaviourSyncVar const& __cordl_internal_get____chosenPlayerNetId() const;

constexpr ::Mirror::NetworkBehaviourSyncVar& __cordl_internal_get____chosenPlayerNetId() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_chosenPlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_chosenPlayer() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_entryPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_entryPose() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_lockSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_lockSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_pokeButton() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_pokeButton() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>> const& __cordl_internal_get_splitFlapGlyphs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>& __cordl_internal_get_splitFlapGlyphs() ;

constexpr void __cordl_internal_set____chosenPlayerNetId(::Mirror::NetworkBehaviourSyncVar  value) ;

constexpr void __cordl_internal_set_chosenPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_entryPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

constexpr void __cordl_internal_set_lockSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

constexpr void __cordl_internal_set_pokeButton(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_splitFlapGlyphs(::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkchosenPlayer, addr 0x18040fc40, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> get_NetworkchosenPlayer() ;

/// @brief Method set_NetworkchosenPlayer, addr 0x18040fc60, size 0x100, virtual false, abstract: false, final false
inline void set_NetworkchosenPlayer(::ByRefConst<::GlobalNamespace::PlayerCharacter*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSpecificTurnstile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificTurnstile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSpecificTurnstile(PlayerSpecificTurnstile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificTurnstile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSpecificTurnstile(PlayerSpecificTurnstile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5105};

/// @brief Field entryPose, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___entryPose;

/// @brief Field playerZone, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

/// @brief Field lockSystem, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___lockSystem;

/// @brief Field pokeButton, offset: 0x80, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___pokeButton;

/// @brief Field chosenPlayer, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___chosenPlayer;

/// @brief Field splitFlapGlyphs, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  ___splitFlapGlyphs;

/// @brief Field logVerbose, offset: 0xb8, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field ___chosenPlayerNetId, offset: 0xbc, size: 0x8, def value: None
 ::Mirror::NetworkBehaviourSyncVar  ______chosenPlayerNetId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ___entryPose) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ___playerZone) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ___lockSystem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ___pokeButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ___chosenPlayer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ___splitFlapGlyphs) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ___logVerbose) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificTurnstile, ______chosenPlayerNetId) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSpecificTurnstile) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
