#pragma once
// IWYU pragma private; include "Rewired/Dev/ActionIdFieldInfoAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ActionIdFieldInfoAttribute)
// Forward declare root types
namespace Rewired::Dev {
class ActionIdFieldInfoAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Dev::ActionIdFieldInfoAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Dev::ActionIdFieldInfoAttribute*, "Rewired.Dev", "ActionIdFieldInfoAttribute");
// Dependencies System.Attribute
namespace Rewired::Dev {
// Is value type: false
// CS Name: Rewired.Dev.ActionIdFieldInfoAttribute
class CORDL_TYPE ActionIdFieldInfoAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field categoryName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_categoryName, put=__cordl_internal_set_categoryName)) ::StringW  categoryName;

/// @brief Field friendlyName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendlyName, put=__cordl_internal_set_friendlyName)) ::StringW  friendlyName;

static inline ::Rewired::Dev::ActionIdFieldInfoAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_categoryName() const;

constexpr ::StringW& __cordl_internal_get_categoryName() ;

constexpr ::StringW const& __cordl_internal_get_friendlyName() const;

constexpr ::StringW& __cordl_internal_get_friendlyName() ;

constexpr void __cordl_internal_set_categoryName(::StringW  value) ;

constexpr void __cordl_internal_set_friendlyName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionIdFieldInfoAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionIdFieldInfoAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionIdFieldInfoAttribute(ActionIdFieldInfoAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionIdFieldInfoAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionIdFieldInfoAttribute(ActionIdFieldInfoAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3091};

/// @brief Field categoryName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___categoryName;

/// @brief Field friendlyName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___friendlyName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Dev::ActionIdFieldInfoAttribute, ___categoryName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Dev::ActionIdFieldInfoAttribute, ___friendlyName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Dev::ActionIdFieldInfoAttribute) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Dev
