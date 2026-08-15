#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/NetworkRoomPlayerExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkRoomPlayer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRoomPlayerExt)
// Forward declare root types
namespace Mirror::Examples::NetworkRoom {
class NetworkRoomPlayerExt;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::NetworkRoom::NetworkRoomPlayerExt*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::NetworkRoom::NetworkRoomPlayerExt*, "Mirror.Examples.NetworkRoom", "NetworkRoomPlayerExt");
// Dependencies Mirror.NetworkRoomPlayer
namespace Mirror::Examples::NetworkRoom {
// Is value type: false
// CS Name: Mirror.Examples.NetworkRoom.NetworkRoomPlayerExt
class CORDL_TYPE NetworkRoomPlayerExt : public ::Mirror::NetworkRoomPlayer {
public:
// Declarations
/// @brief Method IndexChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void IndexChanged(int32_t  oldIndex, int32_t  newIndex) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::NetworkRoom::NetworkRoomPlayerExt* New_ctor() ;

/// @brief Method OnClientEnterRoom, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientEnterRoom() ;

/// @brief Method OnClientExitRoom, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientExitRoom() ;

/// @brief Method OnGUI, addr 0x18155e5b0, size 0x10, virtual true, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnStartClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method ReadyStateChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ReadyStateChanged(bool  oldReadyState, bool  newReadyState) ;

/// @brief Method .ctor, addr 0x18155e5c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRoomPlayerExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomPlayerExt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRoomPlayerExt(NetworkRoomPlayerExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomPlayerExt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRoomPlayerExt(NetworkRoomPlayerExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19281};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::NetworkRoom::NetworkRoomPlayerExt) == 0x70, "Size mismatch!");

} // namespace end def Mirror::Examples::NetworkRoom
