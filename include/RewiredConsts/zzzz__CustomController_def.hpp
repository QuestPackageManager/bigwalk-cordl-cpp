#pragma once
// IWYU pragma private; include "RewiredConsts/CustomController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomController)
// Forward declare root types
namespace RewiredConsts {
class CustomController;
}
// Write type traits
MARK_REF_T(::RewiredConsts::CustomController*);
DEFINE_IL2CPP_CLASS(::RewiredConsts::CustomController*, "RewiredConsts", "CustomController");
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.CustomController
class CORDL_TYPE CustomController : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController(CustomController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController(CustomController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::CustomController) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
