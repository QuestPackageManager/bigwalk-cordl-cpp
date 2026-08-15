#pragma once
// IWYU pragma private; include "Rowlan/Genesis/TreeTemplateCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rowlan/Genesis/zzzz__TreeSettingsTemplate_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TreeTemplateCollection)
namespace Rowlan::Genesis {
class ITemplateCollection;
}
namespace Rowlan::Genesis {
class ITemplateSettings;
}
// Forward declare root types
namespace Rowlan::Genesis {
class TreeTemplateCollection;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::TreeTemplateCollection*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::TreeTemplateCollection*, "Rowlan.Genesis", "TreeTemplateCollection");
// Dependencies Rowlan.Genesis.TreeSettingsTemplate, UnityEngine.ScriptableObject
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.TreeTemplateCollection
class CORDL_TYPE TreeTemplateCollection : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field presetHelpText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_presetHelpText, put=__cordl_internal_set_presetHelpText)) ::StringW  presetHelpText;

/// @brief Field templates, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_templates, put=__cordl_internal_set_templates)) ::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>>  templates;

/// @brief Convert operator to "::Rowlan::Genesis::ITemplateCollection"
constexpr operator  ::Rowlan::Genesis::ITemplateCollection*() noexcept;

/// @brief Method GetPresetHelpText, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::StringW GetPresetHelpText() ;

/// @brief Method GetTemplates, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final true
inline ::ArrayW<::Rowlan::Genesis::ITemplateSettings*> GetTemplates() ;

static inline ::Rowlan::Genesis::TreeTemplateCollection* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_presetHelpText() const;

constexpr ::StringW& __cordl_internal_get_presetHelpText() ;

constexpr ::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>> const& __cordl_internal_get_templates() const;

constexpr ::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>>& __cordl_internal_get_templates() ;

constexpr void __cordl_internal_set_presetHelpText(::StringW  value) ;

constexpr void __cordl_internal_set_templates(::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>>  value) ;

/// @brief Method .ctor, addr 0x181ac2210, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Rowlan::Genesis::ITemplateCollection"
constexpr ::Rowlan::Genesis::ITemplateCollection* i___Rowlan__Genesis__ITemplateCollection() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreeTemplateCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreeTemplateCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeTemplateCollection(TreeTemplateCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeTemplateCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeTemplateCollection(TreeTemplateCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20394};

/// @brief Field presetHelpText, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___presetHelpText;

/// @brief Field templates, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>>  ___templates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::TreeTemplateCollection, ___presetHelpText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::TreeTemplateCollection, ___templates) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::TreeTemplateCollection) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis
