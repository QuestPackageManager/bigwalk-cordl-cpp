#pragma once
// IWYU pragma private; include "Rowlan/Genesis/TreeSettingsTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TreeSettingsTemplate)
namespace Rowlan::Genesis {
class ITemplateSettings;
}
// Forward declare root types
namespace Rowlan::Genesis {
class TreeSettingsTemplate;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::TreeSettingsTemplate*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::TreeSettingsTemplate*, "Rowlan.Genesis", "TreeSettingsTemplate");
// Dependencies UnityEngine.ScriptableObject
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.TreeSettingsTemplate
class CORDL_TYPE TreeSettingsTemplate : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field active, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field probability, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_probability, put=__cordl_internal_set_probability)) float_t  probability;

/// @brief Field templateName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateName, put=__cordl_internal_set_templateName)) ::StringW  templateName;

/// @brief Convert operator to "::Rowlan::Genesis::ITemplateSettings"
constexpr operator  ::Rowlan::Genesis::ITemplateSettings*() noexcept;

/// @brief Method GetName, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::StringW GetName() ;

static inline ::Rowlan::Genesis::TreeSettingsTemplate* New_ctor() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr float_t const& __cordl_internal_get_probability() const;

constexpr float_t& __cordl_internal_get_probability() ;

constexpr ::StringW const& __cordl_internal_get_templateName() const;

constexpr ::StringW& __cordl_internal_get_templateName() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_probability(float_t  value) ;

constexpr void __cordl_internal_set_templateName(::StringW  value) ;

/// @brief Method .ctor, addr 0x181ac2180, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Rowlan::Genesis::ITemplateSettings"
constexpr ::Rowlan::Genesis::ITemplateSettings* i___Rowlan__Genesis__ITemplateSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreeSettingsTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreeSettingsTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeSettingsTemplate(TreeSettingsTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeSettingsTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeSettingsTemplate(TreeSettingsTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20393};

/// @brief Field templateName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___templateName;

/// @brief Field active, offset: 0x20, size: 0x1, def value: None
 bool  ___active;

/// @brief Field probability, offset: 0x24, size: 0x4, def value: None
 float_t  ___probability;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::TreeSettingsTemplate, ___templateName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::TreeSettingsTemplate, ___active) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::TreeSettingsTemplate, ___probability) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::TreeSettingsTemplate) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis
