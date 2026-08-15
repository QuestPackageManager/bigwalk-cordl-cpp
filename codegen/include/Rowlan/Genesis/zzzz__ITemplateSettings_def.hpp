#pragma once
// IWYU pragma private; include "Rowlan/Genesis/ITemplateSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITemplateSettings)
// Forward declare root types
namespace Rowlan::Genesis {
class ITemplateSettings;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::ITemplateSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ITemplateSettings*, "Rowlan.Genesis", "ITemplateSettings");
// Dependencies 
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.ITemplateSettings
class CORDL_TYPE ITemplateSettings {
public:
// Declarations
/// @brief Method GetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetName() ;

// Ctor Parameters [CppParam { name: "", ty: "ITemplateSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITemplateSettings(ITemplateSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rowlan::Genesis
