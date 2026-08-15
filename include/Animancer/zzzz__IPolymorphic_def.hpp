#pragma once
// IWYU pragma private; include "Animancer/IPolymorphic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPolymorphic)
// Forward declare root types
namespace Animancer {
class IPolymorphic;
}
// Write type traits
MARK_REF_T(::Animancer::IPolymorphic*);
DEFINE_IL2CPP_CLASS(::Animancer::IPolymorphic*, "Animancer", "IPolymorphic");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IPolymorphic
class CORDL_TYPE IPolymorphic {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IPolymorphic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPolymorphic(IPolymorphic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
