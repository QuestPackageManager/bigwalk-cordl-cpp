#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/IServer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IServer_1)
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Networking::Server {
template<typename TPeer>
class IServer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::IServer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::IServer_1, "Dissonance.Networking.Server", "IServer`1");
// Dependencies 
namespace Dissonance::Networking::Server {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.IServer`1<TPeer>
class CORDL_TYPE IServer_1 {
public:
// Declarations
 __declspec(property(get=get_SessionId)) uint32_t  SessionId;

/// @brief Method AddClient, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method SendReliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendReliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendUnreliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendUnreliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method get_SessionId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint32_t get_SessionId() ;

// Ctor Parameters [CppParam { name: "", ty: "IServer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServer_1(IServer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16894};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server
