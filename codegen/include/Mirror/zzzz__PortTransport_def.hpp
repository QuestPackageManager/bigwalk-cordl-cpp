#pragma once
// IWYU pragma private; include "Mirror/PortTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(PortTransport)
// Forward declare root types
namespace Mirror {
class PortTransport;
}
// Write type traits
MARK_REF_T(::Mirror::PortTransport*);
DEFINE_IL2CPP_CLASS(::Mirror::PortTransport*, "Mirror", "PortTransport");
// Dependencies 
namespace Mirror {
// Is value type: false
// CS Name: Mirror.PortTransport
class CORDL_TYPE PortTransport {
public:
// Declarations
 __declspec(property(get=get_Port, put=set_Port)) uint16_t  Port;

/// @brief Method get_Port, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint16_t get_Port() ;

/// @brief Method set_Port, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Port(uint16_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "PortTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PortTransport(PortTransport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18351};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
