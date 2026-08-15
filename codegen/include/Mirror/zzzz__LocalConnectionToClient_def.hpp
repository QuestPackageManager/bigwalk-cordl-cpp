#pragma once
// IWYU pragma private; include "Mirror/LocalConnectionToClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalConnectionToClient)
namespace Mirror {
class LocalConnectionToServer;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Mirror {
class LocalConnectionToClient;
}
// Write type traits
MARK_REF_T(::Mirror::LocalConnectionToClient*);
DEFINE_IL2CPP_CLASS(::Mirror::LocalConnectionToClient*, "Mirror", "LocalConnectionToClient");
// Dependencies Mirror.NetworkConnectionToClient
namespace Mirror {
// Is value type: false
// CS Name: Mirror.LocalConnectionToClient
class CORDL_TYPE LocalConnectionToClient : public ::Mirror::NetworkConnectionToClient {
public:
// Declarations
 __declspec(property(get=get_address)) ::StringW  address;

/// @brief Field connectionToServer, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionToServer, put=__cordl_internal_set_connectionToServer)) ::Mirror::LocalConnectionToServer*  connectionToServer;

/// @brief Method Disconnect, addr 0x181536cf0, size 0x60, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method DisconnectInternal, addr 0x181536ce0, size 0x10, virtual false, abstract: false, final false
inline void DisconnectInternal() ;

/// @brief Method IsAlive, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool IsAlive(float_t  timeout) ;

static inline ::Mirror::LocalConnectionToClient* New_ctor() ;

/// @brief Method Send, addr 0x181536d50, size 0x80, virtual true, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

constexpr ::Mirror::LocalConnectionToServer* const& __cordl_internal_get_connectionToServer() const;

constexpr ::Mirror::LocalConnectionToServer*& __cordl_internal_get_connectionToServer() ;

constexpr void __cordl_internal_set_connectionToServer(::Mirror::LocalConnectionToServer*  value) ;

/// @brief Method .ctor, addr 0x181536dd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_address, addr 0x181536de0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_address() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalConnectionToClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalConnectionToClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalConnectionToClient(LocalConnectionToClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalConnectionToClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalConnectionToClient(LocalConnectionToClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18275};

/// @brief Field connectionToServer, offset: 0xe0, size: 0x8, def value: None
 ::Mirror::LocalConnectionToServer*  ___connectionToServer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::LocalConnectionToClient, ___connectionToServer) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Mirror::LocalConnectionToClient) == 0xe8, "Size mismatch!");

} // namespace end def Mirror
