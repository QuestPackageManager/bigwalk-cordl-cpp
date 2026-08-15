#pragma once
// IWYU pragma private; include "MA/Flora/MathConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MathConstants)
// Forward declare root types
namespace MA::Flora {
class MathConstants;
}
// Write type traits
MARK_REF_T(::MA::Flora::MathConstants*);
DEFINE_IL2CPP_CLASS(::MA::Flora::MathConstants*, "MA.Flora", "MathConstants");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.MathConstants
class CORDL_TYPE MathConstants : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MathConstants(MathConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathConstants(MathConstants const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(1e-5f)};

/// @brief Field ZeroTolerance offset 0xffffffff size 0x4
static constexpr float_t  ZeroTolerance{static_cast<float_t>(1e-6f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13399};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::MathConstants) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
