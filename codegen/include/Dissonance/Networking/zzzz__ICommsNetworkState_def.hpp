#pragma once
// IWYU pragma private; include "Dissonance/Networking/ICommsNetworkState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ICommsNetworkState)
namespace Dissonance {
struct CodecSettings;
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
// Forward declare root types
namespace Dissonance::Networking {
class ICommsNetworkState;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::ICommsNetworkState*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::ICommsNetworkState*, "Dissonance.Networking", "ICommsNetworkState");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: false
// CS Name: Dissonance.Networking.ICommsNetworkState
class CORDL_TYPE ICommsNetworkState {
public:
// Declarations
 __declspec(property(get=get_CodecSettings)) ::Dissonance::CodecSettings  CodecSettings;

 __declspec(property(get=get_PlayerChannels)) ::Dissonance::PlayerChannels*  PlayerChannels;

 __declspec(property(get=get_PlayerName)) ::StringW  PlayerName;

 __declspec(property(get=get_RoomChannels)) ::Dissonance::RoomChannels*  RoomChannels;

 __declspec(property(get=get_Rooms)) ::Dissonance::Rooms*  Rooms;

/// @brief Method get_CodecSettings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::CodecSettings get_CodecSettings() ;

/// @brief Method get_PlayerChannels, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::PlayerChannels* get_PlayerChannels() ;

/// @brief Method get_PlayerName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_PlayerName() ;

/// @brief Method get_RoomChannels, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::RoomChannels* get_RoomChannels() ;

/// @brief Method get_Rooms, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Rooms* get_Rooms() ;

// Ctor Parameters [CppParam { name: "", ty: "ICommsNetworkState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICommsNetworkState(ICommsNetworkState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16885};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
