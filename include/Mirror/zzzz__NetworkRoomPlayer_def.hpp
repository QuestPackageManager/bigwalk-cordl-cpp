#pragma once
// IWYU pragma private; include "Mirror/NetworkRoomPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRoomPlayer)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace Mirror {
class NetworkRoomPlayer;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkRoomPlayer*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkRoomPlayer*, "Mirror", "NetworkRoomPlayer");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkRoomPlayer
class CORDL_TYPE NetworkRoomPlayer : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Networkindex, put=set_Networkindex)) int32_t  Networkindex;

 __declspec(property(get=get_NetworkreadyToBegin, put=set_NetworkreadyToBegin)) bool  NetworkreadyToBegin;

/// @brief Field index, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field readyToBegin, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_readyToBegin, put=__cordl_internal_set_readyToBegin)) bool  readyToBegin;

/// @brief Field showRoomGUI, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_showRoomGUI, put=__cordl_internal_set_showRoomGUI)) bool  showRoomGUI;

/// @brief Method CmdChangeReadyState, addr 0x181524e60, size 0xc0, virtual false, abstract: false, final false
inline void CmdChangeReadyState(bool  readyState) ;

/// @brief Method DeserializeSyncVars, addr 0x181524f20, size 0x230, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method DrawPlayerReadyButton, addr 0x181525150, size 0xb0, virtual false, abstract: false, final false
inline void DrawPlayerReadyButton() ;

/// @brief Method DrawPlayerReadyState, addr 0x181525200, size 0x270, virtual false, abstract: false, final false
inline void DrawPlayerReadyState() ;

/// @brief Method IndexChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void IndexChanged(int32_t  oldIndex, int32_t  newIndex) ;

/// @brief Method InvokeUserCode_CmdChangeReadyState__Boolean, addr 0x181525470, size 0x1b0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdChangeReadyState__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkRoomPlayer* New_ctor() ;

/// @brief Method OnClientEnterRoom, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientEnterRoom() ;

/// @brief Method OnClientExitRoom, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientExitRoom() ;

/// @brief Method OnDisable, addr 0x181525620, size 0xb0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnGUI, addr 0x1815256d0, size 0x170, virtual true, abstract: false, final false
inline void OnGUI() ;

/// @brief Method ReadyStateChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ReadyStateChanged(bool  oldReadyState, bool  newReadyState) ;

/// @brief Method SerializeSyncVars, addr 0x181525840, size 0x70, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method Start, addr 0x1815258b0, size 0x160, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UserCode_CmdChangeReadyState__Boolean, addr 0x181525a10, size 0x130, virtual false, abstract: false, final false
inline void UserCode_CmdChangeReadyState__Boolean(bool  readyState) ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr bool const& __cordl_internal_get_readyToBegin() const;

constexpr bool& __cordl_internal_get_readyToBegin() ;

constexpr bool const& __cordl_internal_get_showRoomGUI() const;

constexpr bool& __cordl_internal_get_showRoomGUI() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_readyToBegin(bool  value) ;

constexpr void __cordl_internal_set_showRoomGUI(bool  value) ;

/// @brief Method .ctor, addr 0x181525bb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkindex, addr 0x1803fa750, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Networkindex() ;

/// @brief Method get_NetworkreadyToBegin, addr 0x1805d8ab0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkreadyToBegin() ;

/// @brief Method set_Networkindex, addr 0x181525bc0, size 0x120, virtual false, abstract: false, final false
inline void set_Networkindex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworkreadyToBegin, addr 0x181525ce0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkreadyToBegin(::ByRefConst<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRoomPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRoomPlayer(NetworkRoomPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRoomPlayer(NetworkRoomPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19242};

/// @brief Field showRoomGUI, offset: 0x68, size: 0x1, def value: None
 bool  ___showRoomGUI;

/// @brief Field readyToBegin, offset: 0x69, size: 0x1, def value: None
 bool  ___readyToBegin;

/// @brief Field index, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkRoomPlayer, ___showRoomGUI) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomPlayer, ___readyToBegin) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomPlayer, ___index) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkRoomPlayer) == 0x70, "Size mismatch!");

} // namespace end def Mirror
