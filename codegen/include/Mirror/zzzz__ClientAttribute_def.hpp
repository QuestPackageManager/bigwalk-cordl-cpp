#pragma once
// IWYU pragma private; include "Mirror/ClientAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ClientAttribute)
// Forward declare root types
namespace Mirror {
class ClientAttribute;
}
// Write type traits
MARK_REF_T(::Mirror::ClientAttribute*);
DEFINE_IL2CPP_CLASS(::Mirror::ClientAttribute*, "Mirror", "ClientAttribute");
// Dependencies System.Attribute
namespace Mirror {
// Is value type: false
// CS Name: Mirror.ClientAttribute
class CORDL_TYPE ClientAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Mirror::ClientAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientAttribute(ClientAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientAttribute(ClientAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18266};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::ClientAttribute) == 0x10, "Size mismatch!");

} // namespace end def Mirror
