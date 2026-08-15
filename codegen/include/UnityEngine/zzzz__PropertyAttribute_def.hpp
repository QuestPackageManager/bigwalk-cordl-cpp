#pragma once
// IWYU pragma private; include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PropertyAttribute)
// Forward declare root types
namespace UnityEngine {
class PropertyAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::PropertyAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PropertyAttribute*, "UnityEngine", "PropertyAttribute");
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PropertyAttribute
class CORDL_TYPE PropertyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <applyToCollection>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__applyToCollection_k__BackingField, put=__cordl_internal_set__applyToCollection_k__BackingField)) bool  _applyToCollection_k__BackingField;

static inline ::UnityEngine::PropertyAttribute* New_ctor() ;

static inline ::UnityEngine::PropertyAttribute* New_ctor(bool  applyToCollection) ;

constexpr bool const& __cordl_internal_get__applyToCollection_k__BackingField() const;

constexpr bool& __cordl_internal_get__applyToCollection_k__BackingField() ;

constexpr void __cordl_internal_set__applyToCollection_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x18159e620, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  applyToCollection) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyAttribute(PropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyAttribute(PropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10633};

/// @brief Field <applyToCollection>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____applyToCollection_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PropertyAttribute, ____applyToCollection_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::PropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
