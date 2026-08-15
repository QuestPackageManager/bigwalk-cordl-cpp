#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/IServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IServer)
// Forward declare root types
namespace Mirror::FizzySteam {
class IServer;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::IServer*);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::IServer*, "Mirror.FizzySteam", "IServer");
// Dependencies 
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.IServer
class CORDL_TYPE IServer {
public:
// Declarations
/// @brief Method Disconnect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disconnect(int32_t  connectionId) ;

/// @brief Method FlushData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FlushData() ;

/// @brief Method ReceiveData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReceiveData() ;

/// @brief Method Send, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Send(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method ServerGetClientAddress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method Shutdown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Shutdown() ;

// Ctor Parameters [CppParam { name: "", ty: "IServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServer(IServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20893};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror::FizzySteam
