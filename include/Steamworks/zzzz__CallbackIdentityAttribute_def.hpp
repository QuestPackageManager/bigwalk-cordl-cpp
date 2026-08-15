#pragma once
// IWYU pragma private; include "Steamworks/CallbackIdentityAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackIdentityAttribute)
// Forward declare root types
namespace Steamworks {
class CallbackIdentityAttribute;
}
// Write type traits
MARK_REF_T(::Steamworks::CallbackIdentityAttribute*);
DEFINE_IL2CPP_CLASS(::Steamworks::CallbackIdentityAttribute*, "Steamworks", "CallbackIdentityAttribute");
// Dependencies System.Attribute
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CallbackIdentityAttribute
class CORDL_TYPE CallbackIdentityAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Identity, put=set_Identity)) int32_t  Identity;

/// @brief Field <Identity>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Identity_k__BackingField, put=__cordl_internal_set__Identity_k__BackingField)) int32_t  _Identity_k__BackingField;

static inline ::Steamworks::CallbackIdentityAttribute* New_ctor(int32_t  callbackNum) ;

constexpr int32_t const& __cordl_internal_get__Identity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Identity_k__BackingField() ;

constexpr void __cordl_internal_set__Identity_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  callbackNum) ;

/// @brief Method get_Identity, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Identity() ;

/// @brief Method set_Identity, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Identity(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackIdentityAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackIdentityAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackIdentityAttribute(CallbackIdentityAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackIdentityAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackIdentityAttribute(CallbackIdentityAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15981};

/// @brief Field <Identity>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Identity_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::CallbackIdentityAttribute, ____Identity_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CallbackIdentityAttribute) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
