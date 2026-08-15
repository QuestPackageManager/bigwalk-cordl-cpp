#pragma once
// IWYU pragma private; include "Rewired/Utils/ExtensionMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExtensionMethods)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils {
class ExtensionMethods;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::ExtensionMethods*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::ExtensionMethods*, "Rewired.Utils", "ExtensionMethods");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.ExtensionMethods
class CORDL_TYPE ExtensionMethods : public ::System::Object {
public:
// Declarations
/// @brief Method IsNullOrDestroyed, addr 0x181903870, size 0x80, virtual false, abstract: false, final false
static inline bool IsNullOrDestroyed(::System::Object*  object) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExtensionMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtensionMethods(ExtensionMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtensionMethods(ExtensionMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2900};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::ExtensionMethods) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
