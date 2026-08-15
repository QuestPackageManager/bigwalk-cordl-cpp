#pragma once
// IWYU pragma private; include "Dissonance/Networking/RoomEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RoomEvent)
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace Dissonance::Networking {
struct RoomEvent;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::RoomEvent);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::RoomEvent, "Dissonance.Networking", "RoomEvent");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.RoomEvent
struct CORDL_TYPE RoomEvent {
public:
// Declarations
/// @brief Method .ctor, addr 0x1805e7970, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  room, bool  joined, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  rooms) ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomEvent() ;

// Ctor Parameters [CppParam { name: "PlayerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Room", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Joined", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Rooms", ty: "::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*", modifiers: "", def_value: None }]
constexpr RoomEvent(::StringW  PlayerName, ::StringW  Room, bool  Joined, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16880};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field PlayerName, offset: 0x0, size: 0x8, def value: None
 ::StringW  PlayerName;

/// @brief Field Room, offset: 0x8, size: 0x8, def value: None
 ::StringW  Room;

/// @brief Field Joined, offset: 0x10, size: 0x1, def value: None
 bool  Joined;

/// @brief Field Rooms, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::RoomEvent, PlayerName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::RoomEvent, Room) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::RoomEvent, Joined) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::RoomEvent, Rooms) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::RoomEvent) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Networking
