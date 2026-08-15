#pragma once
// IWYU pragma private; include "Rewired/Interfaces/ILocalizedStringProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILocalizedStringProvider)
// Forward declare root types
namespace Rewired::Interfaces {
class ILocalizedStringProvider;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::ILocalizedStringProvider*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::ILocalizedStringProvider*, "Rewired.Interfaces", "ILocalizedStringProvider");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.ILocalizedStringProvider
class CORDL_TYPE ILocalizedStringProvider {
public:
// Declarations
/// @brief Method TryGetLocalizedString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetLocalizedString(::StringW  key, ::by_ref<::StringW>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "ILocalizedStringProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILocalizedStringProvider(ILocalizedStringProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2250};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
