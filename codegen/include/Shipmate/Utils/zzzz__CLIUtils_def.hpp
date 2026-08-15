#pragma once
// IWYU pragma private; include "Shipmate/Utils/CLIUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CLIUtils)
// Forward declare root types
namespace Shipmate::Utils {
class CLIUtils;
}
// Write type traits
MARK_REF_T(::Shipmate::Utils::CLIUtils*);
DEFINE_IL2CPP_CLASS(::Shipmate::Utils::CLIUtils*, "Shipmate.Utils", "CLIUtils");
// Dependencies System.Object
namespace Shipmate::Utils {
// Is value type: false
// CS Name: Shipmate.Utils.CLIUtils
class CORDL_TYPE CLIUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GetParam, addr 0x181acaba0, size 0x80, virtual false, abstract: false, final false
static inline ::StringW GetParam(::StringW  aParam) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CLIUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CLIUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CLIUtils(CLIUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CLIUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CLIUtils(CLIUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Utils::CLIUtils) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Utils
