#pragma once
// IWYU pragma private; include "Rewired/CustomObfuscation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CustomObfuscation)
// Forward declare root types
namespace Rewired {
class CustomObfuscation;
}
// Write type traits
MARK_REF_T(::Rewired::CustomObfuscation*);
DEFINE_IL2CPP_CLASS(::Rewired::CustomObfuscation*, "Rewired", "CustomObfuscation");
// Dependencies System.Attribute
namespace Rewired {
// Is value type: false
// CS Name: Rewired.CustomObfuscation
class CORDL_TYPE CustomObfuscation : public ::System::Attribute {
public:
// Declarations
/// @brief Field rename, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_rename, put=__cordl_internal_set_rename)) bool  rename;

static inline ::Rewired::CustomObfuscation* New_ctor() ;

constexpr bool const& __cordl_internal_get_rename() const;

constexpr bool& __cordl_internal_get_rename() ;

constexpr void __cordl_internal_set_rename(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomObfuscation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomObfuscation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomObfuscation(CustomObfuscation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomObfuscation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomObfuscation(CustomObfuscation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1974};

/// @brief Field rename, offset: 0x10, size: 0x1, def value: None
 bool  ___rename;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CustomObfuscation, ___rename) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::CustomObfuscation) == 0x18, "Size mismatch!");

} // namespace end def Rewired
