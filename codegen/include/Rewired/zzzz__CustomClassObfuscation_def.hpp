#pragma once
// IWYU pragma private; include "Rewired/CustomClassObfuscation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CustomClassObfuscation)
// Forward declare root types
namespace Rewired {
class CustomClassObfuscation;
}
// Write type traits
MARK_REF_T(::Rewired::CustomClassObfuscation*);
DEFINE_IL2CPP_CLASS(::Rewired::CustomClassObfuscation*, "Rewired", "CustomClassObfuscation");
// Dependencies System.Attribute
namespace Rewired {
// Is value type: false
// CS Name: Rewired.CustomClassObfuscation
class CORDL_TYPE CustomClassObfuscation : public ::System::Attribute {
public:
// Declarations
/// @brief Field renamePrivateMembers, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_renamePrivateMembers, put=__cordl_internal_set_renamePrivateMembers)) bool  renamePrivateMembers;

/// @brief Field renamePubIntMembers, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_renamePubIntMembers, put=__cordl_internal_set_renamePubIntMembers)) bool  renamePubIntMembers;

static inline ::Rewired::CustomClassObfuscation* New_ctor() ;

constexpr bool const& __cordl_internal_get_renamePrivateMembers() const;

constexpr bool& __cordl_internal_get_renamePrivateMembers() ;

constexpr bool const& __cordl_internal_get_renamePubIntMembers() const;

constexpr bool& __cordl_internal_get_renamePubIntMembers() ;

constexpr void __cordl_internal_set_renamePrivateMembers(bool  value) ;

constexpr void __cordl_internal_set_renamePubIntMembers(bool  value) ;

/// @brief Method .ctor, addr 0x18195c980, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomClassObfuscation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomClassObfuscation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomClassObfuscation(CustomClassObfuscation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomClassObfuscation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomClassObfuscation(CustomClassObfuscation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1975};

/// @brief Field renamePubIntMembers, offset: 0x10, size: 0x1, def value: None
 bool  ___renamePubIntMembers;

/// @brief Field renamePrivateMembers, offset: 0x11, size: 0x1, def value: None
 bool  ___renamePrivateMembers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CustomClassObfuscation, ___renamePubIntMembers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::CustomClassObfuscation, ___renamePrivateMembers) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Rewired::CustomClassObfuscation) == 0x18, "Size mismatch!");

} // namespace end def Rewired
