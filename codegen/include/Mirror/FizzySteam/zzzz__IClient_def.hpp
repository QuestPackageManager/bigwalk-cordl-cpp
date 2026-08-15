#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/IClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IClient)
// Forward declare root types
namespace Mirror::FizzySteam {
class IClient;
}
// Write type traits
MARK_REF_T(::Mirror::FizzySteam::IClient*);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::IClient*, "Mirror.FizzySteam", "IClient");
// Dependencies 
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.IClient
class CORDL_TYPE IClient {
public:
// Declarations
 __declspec(property(get=get_Connected)) bool  Connected;

 __declspec(property(get=get_Error)) bool  Error;

/// @brief Method Disconnect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method FlushData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FlushData() ;

/// @brief Method ReceiveData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReceiveData() ;

/// @brief Method Send, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Send(::ArrayW<uint8_t>  data, int32_t  channelId) ;

/// @brief Method get_Connected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Connected() ;

/// @brief Method get_Error, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Error() ;

// Ctor Parameters [CppParam { name: "", ty: "IClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IClient(IClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror::FizzySteam
