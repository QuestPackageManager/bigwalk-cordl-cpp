#pragma once
// IWYU pragma private; include "Rewired/Utils/PlatformTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlatformTools)
// Forward declare root types
namespace Rewired::Utils {
class PlatformTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::PlatformTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::PlatformTools*, "Rewired.Utils", "PlatformTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.PlatformTools
class CORDL_TYPE PlatformTools : public ::System::Object {
public:
// Declarations
/// @brief Method IsSysVersionInRange, addr 0x181930e40, size 0x180, virtual false, abstract: false, final false
static inline bool IsSysVersionInRange(::StringW  min, ::StringW  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformTools(PlatformTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformTools(PlatformTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::PlatformTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
