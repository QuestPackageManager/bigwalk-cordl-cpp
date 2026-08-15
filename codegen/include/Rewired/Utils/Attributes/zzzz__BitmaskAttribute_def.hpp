#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/BitmaskAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(BitmaskAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils::Attributes {
class BitmaskAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Attributes::BitmaskAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Attributes::BitmaskAttribute*, "Rewired.Utils.Attributes", "BitmaskAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Rewired::Utils::Attributes {
// Is value type: false
// CS Name: Rewired.Utils.Attributes.BitmaskAttribute
class CORDL_TYPE BitmaskAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field propType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_propType, put=__cordl_internal_set_propType)) ::System::Type*  propType;

static inline ::Rewired::Utils::Attributes::BitmaskAttribute* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Type* const& __cordl_internal_get_propType() const;

constexpr ::System::Type*& __cordl_internal_get_propType() ;

constexpr void __cordl_internal_set_propType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x1818382a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitmaskAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitmaskAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitmaskAttribute(BitmaskAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitmaskAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitmaskAttribute(BitmaskAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3084};

/// @brief Field propType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___propType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Attributes::BitmaskAttribute, ___propType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Attributes::BitmaskAttribute) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Attributes
