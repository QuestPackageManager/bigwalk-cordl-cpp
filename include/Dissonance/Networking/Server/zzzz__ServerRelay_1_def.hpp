#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/ServerRelay_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerRelay_1)
namespace Dissonance::Networking::Server {
template<typename TPeer>
class IServer_1;
}
namespace Dissonance::Networking {
template<typename TPeer>
class BaseClientCollection_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Networking::Server {
template<typename TPeer>
class ServerRelay_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::ServerRelay_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::ServerRelay_1, "Dissonance.Networking.Server", "ServerRelay`1");
// Dependencies System.Object
namespace Dissonance::Networking::Server {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.ServerRelay`1<TPeer>
class CORDL_TYPE ServerRelay_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field OnRelayingPacket, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRelayingPacket, put=__cordl_internal_set_OnRelayingPacket)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  OnRelayingPacket;

/// @brief Field _peers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__peers, put=__cordl_internal_set__peers)) ::Dissonance::Networking::BaseClientCollection_1<TPeer>*  _peers;

/// @brief Field _server, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__server, put=__cordl_internal_set__server)) ::Dissonance::Networking::Server::IServer_1<TPeer>*  _server;

/// @brief Field _tmpIdBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpIdBuffer, put=__cordl_internal_set__tmpIdBuffer)) ::System::Collections::Generic::List_1<uint16_t>*  _tmpIdBuffer;

/// @brief Field _tmpPeerBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpPeerBuffer, put=__cordl_internal_set__tmpPeerBuffer)) ::System::Collections::Generic::List_1<TPeer>*  _tmpPeerBuffer;

static inline ::Dissonance::Networking::Server::ServerRelay_1<TPeer>* New_ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server, ::Dissonance::Networking::BaseClientCollection_1<TPeer>*  peers) ;

/// @brief Method ProcessPacketRelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ProcessPacketRelay(::by_ref<::Dissonance::Networking::PacketReader>  reader, bool  reliable, TPeer  source) ;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>* const& __cordl_internal_get_OnRelayingPacket() const;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*& __cordl_internal_get_OnRelayingPacket() ;

constexpr ::Dissonance::Networking::BaseClientCollection_1<TPeer>* const& __cordl_internal_get__peers() const;

constexpr ::Dissonance::Networking::BaseClientCollection_1<TPeer>*& __cordl_internal_get__peers() ;

constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>* const& __cordl_internal_get__server() const;

constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>*& __cordl_internal_get__server() ;

constexpr ::System::Collections::Generic::List_1<uint16_t>* const& __cordl_internal_get__tmpIdBuffer() const;

constexpr ::System::Collections::Generic::List_1<uint16_t>*& __cordl_internal_get__tmpIdBuffer() ;

constexpr ::System::Collections::Generic::List_1<TPeer>* const& __cordl_internal_get__tmpPeerBuffer() const;

constexpr ::System::Collections::Generic::List_1<TPeer>*& __cordl_internal_get__tmpPeerBuffer() ;

constexpr void __cordl_internal_set_OnRelayingPacket(::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  value) ;

constexpr void __cordl_internal_set__peers(::Dissonance::Networking::BaseClientCollection_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__server(::Dissonance::Networking::Server::IServer_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__tmpIdBuffer(::System::Collections::Generic::List_1<uint16_t>*  value) ;

constexpr void __cordl_internal_set__tmpPeerBuffer(::System::Collections::Generic::List_1<TPeer>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server, ::Dissonance::Networking::BaseClientCollection_1<TPeer>*  peers) ;

/// @brief Method add_OnRelayingPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnRelayingPacket(::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method remove_OnRelayingPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnRelayingPacket(::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerRelay_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerRelay_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerRelay_1(ServerRelay_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerRelay_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerRelay_1(ServerRelay_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16896};

/// @brief Field _server, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Server::IServer_1<TPeer>*  ____server;

/// @brief Field _peers, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Networking::BaseClientCollection_1<TPeer>*  ____peers;

/// @brief Field _tmpPeerBuffer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TPeer>*  ____tmpPeerBuffer;

/// @brief Field _tmpIdBuffer, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint16_t>*  ____tmpIdBuffer;

/// @brief Field OnRelayingPacket, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  ___OnRelayingPacket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server
