#pragma once
// IWYU pragma private; include "Dissonance/PlayerTrackerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerTrackerManager)
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class PlayerCollection;
}
namespace Dissonance {
class VoicePlayerState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Dissonance {
class PlayerTrackerManager;
}
// Write type traits
MARK_REF_T(::Dissonance::PlayerTrackerManager*);
DEFINE_IL2CPP_CLASS(::Dissonance::PlayerTrackerManager*, "Dissonance", "PlayerTrackerManager");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.PlayerTrackerManager
class CORDL_TYPE PlayerTrackerManager : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _players, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::Dissonance::PlayerCollection*  _players;

/// @brief Field _unlinkedPlayerTrackers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__unlinkedPlayerTrackers, put=__cordl_internal_set__unlinkedPlayerTrackers)) ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>*  _unlinkedPlayerTrackers;

/// @brief Method AddPlayer, addr 0x1805cde70, size 0xa0, virtual false, abstract: false, final false
inline void AddPlayer(::Dissonance::VoicePlayerState*  state) ;

/// @brief Method AddTracker, addr 0x1805cdf10, size 0x120, virtual false, abstract: false, final false
inline void AddTracker(::Dissonance::IDissonancePlayer*  player) ;

static inline ::Dissonance::PlayerTrackerManager* New_ctor(::Dissonance::PlayerCollection*  players) ;

/// @brief Method RemovePlayer, addr 0x1805ce030, size 0xb0, virtual false, abstract: false, final false
inline void RemovePlayer(::Dissonance::VoicePlayerState*  state) ;

/// @brief Method RemoveTracker, addr 0x1805ce0e0, size 0x100, virtual false, abstract: false, final false
inline void RemoveTracker(::Dissonance::IDissonancePlayer*  player) ;

constexpr ::Dissonance::PlayerCollection* const& __cordl_internal_get__players() const;

constexpr ::Dissonance::PlayerCollection*& __cordl_internal_get__players() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>* const& __cordl_internal_get__unlinkedPlayerTrackers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>*& __cordl_internal_get__unlinkedPlayerTrackers() ;

constexpr void __cordl_internal_set__players(::Dissonance::PlayerCollection*  value) ;

constexpr void __cordl_internal_set__unlinkedPlayerTrackers(::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>*  value) ;

/// @brief Method .ctor, addr 0x1805ce230, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::PlayerCollection*  players) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTrackerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTrackerManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTrackerManager(PlayerTrackerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTrackerManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTrackerManager(PlayerTrackerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16818};

/// @brief Field _unlinkedPlayerTrackers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::IDissonancePlayer*>*  ____unlinkedPlayerTrackers;

/// @brief Field _players, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::PlayerCollection*  ____players;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::PlayerTrackerManager, ____unlinkedPlayerTrackers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlayerTrackerManager, ____players) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::PlayerTrackerManager) == 0x20, "Size mismatch!");

} // namespace end def Dissonance
