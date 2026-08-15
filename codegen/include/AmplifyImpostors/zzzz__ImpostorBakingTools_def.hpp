#pragma once
// IWYU pragma private; include "AmplifyImpostors/ImpostorBakingTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ImpostorBakingTools)
// Forward declare root types
namespace AmplifyImpostors {
class ImpostorBakingTools;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::ImpostorBakingTools*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::ImpostorBakingTools*, "AmplifyImpostors", "ImpostorBakingTools");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.ImpostorBakingTools
class CORDL_TYPE ImpostorBakingTools : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImpostorBakingTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImpostorBakingTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImpostorBakingTools(ImpostorBakingTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImpostorBakingTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImpostorBakingTools(ImpostorBakingTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::ImpostorBakingTools) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
