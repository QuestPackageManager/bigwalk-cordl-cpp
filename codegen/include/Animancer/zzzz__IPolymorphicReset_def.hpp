#pragma once
// IWYU pragma private; include "Animancer/IPolymorphicReset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPolymorphicReset)
namespace Animancer {
class IPolymorphic;
}
// Forward declare root types
namespace Animancer {
class IPolymorphicReset;
}
// Write type traits
MARK_REF_T(::Animancer::IPolymorphicReset*);
DEFINE_IL2CPP_CLASS(::Animancer::IPolymorphicReset*, "Animancer", "IPolymorphicReset");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IPolymorphicReset
class CORDL_TYPE IPolymorphicReset {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPolymorphicReset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPolymorphicReset(IPolymorphicReset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
