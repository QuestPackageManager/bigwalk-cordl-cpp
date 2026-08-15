#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/BitmaskToggleAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(BitmaskToggleAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils::Attributes {
class BitmaskToggleAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Attributes::BitmaskToggleAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Attributes::BitmaskToggleAttribute*, "Rewired.Utils.Attributes", "BitmaskToggleAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Rewired::Utils::Attributes {
// Is value type: false
// CS Name: Rewired.Utils.Attributes.BitmaskToggleAttribute
class CORDL_TYPE BitmaskToggleAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field propType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_propType, put=__cordl_internal_set_propType)) ::System::Type*  propType;

/// @brief Field showAll, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAll, put=__cordl_internal_set_showAll)) bool  showAll;

/// @brief Field showNone, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_showNone, put=__cordl_internal_set_showNone)) bool  showNone;

static inline ::Rewired::Utils::Attributes::BitmaskToggleAttribute* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Type* const& __cordl_internal_get_propType() const;

constexpr ::System::Type*& __cordl_internal_get_propType() ;

constexpr bool const& __cordl_internal_get_showAll() const;

constexpr bool& __cordl_internal_get_showAll() ;

constexpr bool const& __cordl_internal_get_showNone() const;

constexpr bool& __cordl_internal_get_showNone() ;

constexpr void __cordl_internal_set_propType(::System::Type*  value) ;

constexpr void __cordl_internal_set_showAll(bool  value) ;

constexpr void __cordl_internal_set_showNone(bool  value) ;

/// @brief Method .ctor, addr 0x181944630, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitmaskToggleAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitmaskToggleAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitmaskToggleAttribute(BitmaskToggleAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitmaskToggleAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitmaskToggleAttribute(BitmaskToggleAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3085};

/// @brief Field propType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___propType;

/// @brief Field showNone, offset: 0x20, size: 0x1, def value: None
 bool  ___showNone;

/// @brief Field showAll, offset: 0x21, size: 0x1, def value: None
 bool  ___showAll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Attributes::BitmaskToggleAttribute, ___propType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Attributes::BitmaskToggleAttribute, ___showNone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Attributes::BitmaskToggleAttribute, ___showAll) == 0x21, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Attributes::BitmaskToggleAttribute) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils::Attributes
