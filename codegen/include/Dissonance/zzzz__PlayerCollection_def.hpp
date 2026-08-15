#pragma once
// IWYU pragma private; include "Dissonance/PlayerCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerCollection)
namespace Dissonance::Audio::Capture {
class IAmplitudeProvider;
}
namespace Dissonance::Networking {
class ICommsNetwork;
}
namespace Dissonance {
class ILossEstimator;
}
namespace Dissonance {
class LocalVoicePlayerState;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
class Rooms;
}
namespace Dissonance {
class VoicePlayerState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace Dissonance {
class PlayerCollection;
}
// Write type traits
MARK_REF_T(::Dissonance::PlayerCollection*);
DEFINE_IL2CPP_CLASS(::Dissonance::PlayerCollection*, "Dissonance", "PlayerCollection");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.PlayerCollection
class CORDL_TYPE PlayerCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Local, put=set_Local)) ::Dissonance::LocalVoicePlayerState*  Local;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Readonly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  Readonly;

/// @brief Field <Local>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Local_k__BackingField, put=__cordl_internal_set__Local_k__BackingField)) ::Dissonance::LocalVoicePlayerState*  _Local_k__BackingField;

/// @brief Field _players, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>*  _players;

/// @brief Field _playersLookup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__playersLookup, put=__cordl_internal_set__playersLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>*  _playersLookup;

/// @brief Field _playersReadOnly, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playersReadOnly, put=__cordl_internal_set__playersReadOnly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  _playersReadOnly;

/// @brief Method Add, addr 0x1805cd8f0, size 0x130, virtual false, abstract: false, final false
inline void Add(::Dissonance::VoicePlayerState*  state) ;

static inline ::Dissonance::PlayerCollection* New_ctor() ;

/// @brief Method Remove, addr 0x1805cda20, size 0xf0, virtual false, abstract: false, final false
inline ::Dissonance::VoicePlayerState* Remove(::StringW  playerId) ;

/// @brief Method Start, addr 0x1805cdb10, size 0x1a0, virtual false, abstract: false, final false
inline void Start(::StringW  name, ::Dissonance::Audio::Capture::IAmplitudeProvider*  micAmplitude, ::Dissonance::Rooms*  rooms, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::ILossEstimator*  loss, ::Dissonance::Networking::ICommsNetwork*  net) ;

/// @brief Method TryGet, addr 0x1805cdcb0, size 0x40, virtual false, abstract: false, final false
inline bool TryGet(::StringW  playerId, ::by_ref<::Dissonance::VoicePlayerState*>  state) ;

/// @brief Method Update, addr 0x1805cdcf0, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::LocalVoicePlayerState* const& __cordl_internal_get__Local_k__BackingField() const;

constexpr ::Dissonance::LocalVoicePlayerState*& __cordl_internal_get__Local_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get__players() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get__players() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>* const& __cordl_internal_get__playersLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>*& __cordl_internal_get__playersLookup() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* const& __cordl_internal_get__playersReadOnly() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*& __cordl_internal_get__playersReadOnly() ;

constexpr void __cordl_internal_set__Local_k__BackingField(::Dissonance::LocalVoicePlayerState*  value) ;

constexpr void __cordl_internal_set__players(::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set__playersLookup(::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>*  value) ;

constexpr void __cordl_internal_set__playersReadOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  value) ;

/// @brief Method .ctor, addr 0x1805cddc0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Local, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::LocalVoicePlayerState* get_Local() ;

/// @brief Method get_Readonly, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* get_Readonly() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_Local, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Local(::Dissonance::LocalVoicePlayerState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCollection(PlayerCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCollection(PlayerCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16817};

/// @brief Field _playersLookup, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>*  ____playersLookup;

/// @brief Field _players, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>*  ____players;

/// @brief Field _playersReadOnly, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  ____playersReadOnly;

/// @brief Field <Local>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::LocalVoicePlayerState*  ____Local_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::PlayerCollection, ____playersLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlayerCollection, ____players) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlayerCollection, ____playersReadOnly) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlayerCollection, ____Local_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::PlayerCollection) == 0x30, "Size mismatch!");

} // namespace end def Dissonance
