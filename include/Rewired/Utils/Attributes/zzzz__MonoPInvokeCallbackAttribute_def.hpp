#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/MonoPInvokeCallbackAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MonoPInvokeCallbackAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils::Attributes {
class MonoPInvokeCallbackAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute*, "Rewired.Utils.Attributes", "MonoPInvokeCallbackAttribute");
// Dependencies System.Attribute
namespace Rewired::Utils::Attributes {
// Is value type: false
// CS Name: Rewired.Utils.Attributes.MonoPInvokeCallbackAttribute
class CORDL_TYPE MonoPInvokeCallbackAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoPInvokeCallbackAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3088};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute, ___type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Attributes
