#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Utils)
// Forward declare root types
namespace Mirror::SimpleWeb {
class Utils;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::Utils*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::Utils*, "Mirror.SimpleWeb", "Utils");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Method CheckForInterupt, addr 0x181ad6320, size 0x10, virtual false, abstract: false, final false
static inline void CheckForInterupt() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::Utils) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
