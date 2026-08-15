#pragma once
// IWYU pragma private; include "Rowlan/Genesis/ITemplateCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITemplateCollection)
namespace Rowlan::Genesis {
class ITemplateSettings;
}
// Forward declare root types
namespace Rowlan::Genesis {
class ITemplateCollection;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::ITemplateCollection*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ITemplateCollection*, "Rowlan.Genesis", "ITemplateCollection");
// Dependencies 
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.ITemplateCollection
class CORDL_TYPE ITemplateCollection {
public:
// Declarations
/// @brief Method GetPresetHelpText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetPresetHelpText() ;

/// @brief Method GetTemplates, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<::Rowlan::Genesis::ITemplateSettings*> GetTemplates() ;

// Ctor Parameters [CppParam { name: "", ty: "ITemplateCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITemplateCollection(ITemplateCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rowlan::Genesis
