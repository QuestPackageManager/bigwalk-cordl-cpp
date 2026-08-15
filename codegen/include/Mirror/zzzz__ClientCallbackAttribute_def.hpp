#pragma once
// IWYU pragma private; include "Mirror/ClientCallbackAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ClientCallbackAttribute)
// Forward declare root types
namespace Mirror {
class ClientCallbackAttribute;
}
// Write type traits
MARK_REF_T(::Mirror::ClientCallbackAttribute*);
DEFINE_IL2CPP_CLASS(::Mirror::ClientCallbackAttribute*, "Mirror", "ClientCallbackAttribute");
// Dependencies System.Attribute
namespace Mirror {
// Is value type: false
// CS Name: Mirror.ClientCallbackAttribute
class CORDL_TYPE ClientCallbackAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Mirror::ClientCallbackAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientCallbackAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientCallbackAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientCallbackAttribute(ClientCallbackAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientCallbackAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientCallbackAttribute(ClientCallbackAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18267};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::ClientCallbackAttribute) == 0x10, "Size mismatch!");

} // namespace end def Mirror
