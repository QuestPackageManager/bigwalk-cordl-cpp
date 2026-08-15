#pragma once
// IWYU pragma private; include "Rewired/Internal/IPrefetch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPrefetch)
// Forward declare root types
namespace Rewired::Internal {
class IPrefetch;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::IPrefetch*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::IPrefetch*, "Rewired.Internal", "IPrefetch");
// Dependencies 
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.IPrefetch
class CORDL_TYPE IPrefetch {
public:
// Declarations
/// @brief Method Prefetch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Prefetch() ;

// Ctor Parameters [CppParam { name: "", ty: "IPrefetch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPrefetch(IPrefetch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Internal
