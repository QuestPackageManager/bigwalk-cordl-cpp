#pragma once
// IWYU pragma private; include "Animancer/FSM/IPrioritizable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IPrioritizable)
namespace Animancer::FSM {
class IState;
}
// Forward declare root types
namespace Animancer::FSM {
class IPrioritizable;
}
// Write type traits
MARK_REF_T(::Animancer::FSM::IPrioritizable*);
DEFINE_IL2CPP_CLASS(::Animancer::FSM::IPrioritizable*, "Animancer.FSM", "IPrioritizable");
// Dependencies 
namespace Animancer::FSM {
// Is value type: false
// CS Name: Animancer.FSM.IPrioritizable
class CORDL_TYPE IPrioritizable {
public:
// Declarations
 __declspec(property(get=get_Priority)) float_t  Priority;

/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr operator  ::Animancer::FSM::IState*() noexcept;

/// @brief Method get_Priority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Priority() ;

/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* i___Animancer__FSM__IState() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPrioritizable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPrioritizable(IPrioritizable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21351};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
