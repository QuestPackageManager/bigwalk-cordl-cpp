#pragma once
// IWYU pragma private; include "Rewired/InputActionCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputCategory_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InputActionCategory)
// Forward declare root types
namespace Rewired {
class InputActionCategory;
}
// Write type traits
MARK_REF_T(::Rewired::InputActionCategory*);
DEFINE_IL2CPP_CLASS(::Rewired::InputActionCategory*, "Rewired", "InputActionCategory");
// Dependencies Rewired.InputCategory
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputActionCategory
class CORDL_TYPE InputActionCategory : public ::Rewired::InputCategory {
public:
// Declarations
 __declspec(property(get=get_keyCategory)) ::StringW  keyCategory;

static inline ::Rewired::InputActionCategory* New_ctor() ;

static inline ::Rewired::InputActionCategory* New_ctor(::Rewired::InputActionCategory*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a3420, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputActionCategory*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_keyCategory, addr 0x1819a34a0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_keyCategory() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionCategory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionCategory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionCategory(InputActionCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionCategory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionCategory(InputActionCategory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2077};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::InputActionCategory) == 0x48, "Size mismatch!");

} // namespace end def Rewired
