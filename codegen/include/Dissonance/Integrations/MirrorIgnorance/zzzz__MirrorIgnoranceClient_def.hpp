#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnoranceClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_def.hpp"
#include "Dissonance/Networking/zzzz__BaseClient_3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorIgnoranceClient)
namespace Dissonance::Integrations::MirrorIgnorance {
struct DissonanceNetworkMessage;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceCommsNetwork;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceServer;
}
namespace Mirror {
class NetworkConnection;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceClient;
}
// Write type traits
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*, "Dissonance.Integrations.MirrorIgnorance", "MirrorIgnoranceClient");
// Dependencies Dissonance.Integrations.MirrorIgnorance.MirrorConn, Dissonance.Networking.BaseClient`3<TServer, TClient, TPeer>
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.MirrorIgnoranceClient
class CORDL_TYPE MirrorIgnoranceClient : public ::Dissonance::Networking::BaseClient_3<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*,::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*,::Dissonance::Integrations::MirrorIgnorance::MirrorConn> {
public:
// Declarations
/// @brief Field _network, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__network, put=__cordl_internal_set__network)) ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  _network;

/// @brief Method Connect, addr 0x1803cd990, size 0x80, virtual true, abstract: false, final false
inline void Connect() ;

/// @brief Method Disconnect, addr 0x1803cda10, size 0x80, virtual true, abstract: false, final false
inline void Disconnect() ;

static inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient* New_ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network) ;

/// @brief Method OnMessageReceived, addr 0x1803cda90, size 0x70, virtual false, abstract: false, final false
inline void OnMessageReceived(::Mirror::NetworkConnection*  source, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  msg) ;

/// @brief Method ReadMessages, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ReadMessages() ;

/// @brief Method Send, addr 0x1803cdb80, size 0x1f0, virtual false, abstract: false, final false
inline bool Send(::System::ArraySegment_1<uint8_t>  packet, uint8_t  channel) ;

/// @brief Method SendReliable, addr 0x1803cdb00, size 0x50, virtual true, abstract: false, final false
inline void SendReliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendUnreliable, addr 0x1803cdb50, size 0x30, virtual true, abstract: false, final false
inline void SendUnreliable(::System::ArraySegment_1<uint8_t>  packet) ;

constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork> const& __cordl_internal_get__network() const;

constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>& __cordl_internal_get__network() ;

constexpr void __cordl_internal_set__network(::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  value) ;

/// @brief Method .ctor, addr 0x1803cdd70, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorIgnoranceClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorIgnoranceClient(MirrorIgnoranceClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorIgnoranceClient(MirrorIgnoranceClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5817};

/// @brief Field _network, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  ____network;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient, ____network) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient) == 0xb0, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
