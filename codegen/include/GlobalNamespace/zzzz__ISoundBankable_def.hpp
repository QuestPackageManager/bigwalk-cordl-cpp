#pragma once
// IWYU pragma private; include "GlobalNamespace/ISoundBankable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISoundBankable)
// Forward declare root types
namespace GlobalNamespace {
class ISoundBankable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISoundBankable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISoundBankable*, "", "ISoundBankable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISoundBankable
class CORDL_TYPE ISoundBankable {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "ISoundBankable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISoundBankable(ISoundBankable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17640};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
