#pragma once
// IWYU pragma private; include "Mirror/ServerAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ServerAttribute)
// Forward declare root types
namespace Mirror {
class ServerAttribute;
}
// Write type traits
MARK_REF_T(::Mirror::ServerAttribute*);
DEFINE_IL2CPP_CLASS(::Mirror::ServerAttribute*, "Mirror", "ServerAttribute");
// Dependencies System.Attribute
namespace Mirror {
// Is value type: false
// CS Name: Mirror.ServerAttribute
class CORDL_TYPE ServerAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Mirror::ServerAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerAttribute(ServerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerAttribute(ServerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::ServerAttribute) == 0x10, "Size mismatch!");

} // namespace end def Mirror
