#pragma once
// IWYU pragma private; include "LobbyNetworking/ITicketed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITicketed)
// Forward declare root types
namespace LobbyNetworking {
class ITicketed;
}
// Write type traits
MARK_REF_T(::LobbyNetworking::ITicketed*);
DEFINE_IL2CPP_CLASS(::LobbyNetworking::ITicketed*, "LobbyNetworking", "ITicketed");
// Dependencies 
namespace LobbyNetworking {
// Is value type: false
// CS Name: LobbyNetworking.ITicketed
class CORDL_TYPE ITicketed {
public:
// Declarations
 __declspec(property(get=get_ticket, put=set_ticket)) uint16_t  ticket;

/// @brief Method get_ticket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint16_t get_ticket() ;

/// @brief Method set_ticket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_ticket(uint16_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITicketed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITicketed(ITicketed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LobbyNetworking
