#pragma once
// IWYU pragma private; include "Animancer/DefaultValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DefaultValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
class DefaultValueAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::DefaultValueAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::DefaultValueAttribute*, "Animancer", "DefaultValueAttribute");
// Dependencies System.Attribute
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DefaultValueAttribute
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Primary, put=set_Primary)) ::System::Object*  Primary;

 __declspec(property(get=get_Secondary, put=set_Secondary)) ::System::Object*  Secondary;

/// @brief Field <Primary>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Primary_k__BackingField, put=__cordl_internal_set__Primary_k__BackingField)) ::System::Object*  _Primary_k__BackingField;

/// @brief Field <Secondary>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Secondary_k__BackingField, put=__cordl_internal_set__Secondary_k__BackingField)) ::System::Object*  _Secondary_k__BackingField;

static inline ::Animancer::DefaultValueAttribute* New_ctor() ;

static inline ::Animancer::DefaultValueAttribute* New_ctor(::System::Object*  primary, ::System::Object*  secondary) ;

constexpr ::System::Object* const& __cordl_internal_get__Primary_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Primary_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__Secondary_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Secondary_k__BackingField() ;

constexpr void __cordl_internal_set__Primary_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__Secondary_k__BackingField(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1803084b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  primary, ::System::Object*  secondary) ;

/// @brief Method get_Primary, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* get_Primary() ;

/// @brief Method get_Secondary, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* get_Secondary() ;

/// @brief Method set_Primary, addr 0x180308500, size 0x30, virtual true, abstract: false, final false
inline void set_Primary(::System::Object*  value) ;

/// @brief Method set_Secondary, addr 0x1802ecc20, size 0x10, virtual true, abstract: false, final false
inline void set_Secondary(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultValueAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultValueAttribute(DefaultValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultValueAttribute(DefaultValueAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18119};

/// @brief Field <Primary>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____Primary_k__BackingField;

/// @brief Field <Secondary>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____Secondary_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::DefaultValueAttribute, ____Primary_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::DefaultValueAttribute, ____Secondary_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Animancer::DefaultValueAttribute) == 0x20, "Size mismatch!");

} // namespace end def Animancer
