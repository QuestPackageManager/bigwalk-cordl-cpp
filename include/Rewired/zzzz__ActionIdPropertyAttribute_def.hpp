#pragma once
// IWYU pragma private; include "Rewired/ActionIdPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ActionIdPropertyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired {
class ActionIdPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::ActionIdPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::ActionIdPropertyAttribute*, "Rewired", "ActionIdPropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ActionIdPropertyAttribute
class CORDL_TYPE ActionIdPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field JjXwsLQOvFWGlFKQgBsjMXvTSnzh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_JjXwsLQOvFWGlFKQgBsjMXvTSnzh, put=__cordl_internal_set_JjXwsLQOvFWGlFKQgBsjMXvTSnzh)) ::System::Type*  JjXwsLQOvFWGlFKQgBsjMXvTSnzh;

 __declspec(property(get=get_Type)) ::System::Type*  Type;

static inline ::Rewired::ActionIdPropertyAttribute* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Type* const& __cordl_internal_get_JjXwsLQOvFWGlFKQgBsjMXvTSnzh() const;

constexpr ::System::Type*& __cordl_internal_get_JjXwsLQOvFWGlFKQgBsjMXvTSnzh() ;

constexpr void __cordl_internal_set_JjXwsLQOvFWGlFKQgBsjMXvTSnzh(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x1818382a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Type, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionIdPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionIdPropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionIdPropertyAttribute(ActionIdPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionIdPropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionIdPropertyAttribute(ActionIdPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1747};

/// @brief Field JjXwsLQOvFWGlFKQgBsjMXvTSnzh, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___JjXwsLQOvFWGlFKQgBsjMXvTSnzh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ActionIdPropertyAttribute, ___JjXwsLQOvFWGlFKQgBsjMXvTSnzh) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::ActionIdPropertyAttribute) == 0x20, "Size mismatch!");

} // namespace end def Rewired
