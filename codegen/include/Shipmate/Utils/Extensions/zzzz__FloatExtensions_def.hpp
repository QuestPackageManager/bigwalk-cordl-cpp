#pragma once
// IWYU pragma private; include "Shipmate/Utils/Extensions/FloatExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatExtensions)
// Forward declare root types
namespace Shipmate::Utils::Extensions {
class FloatExtensions;
}
// Write type traits
MARK_REF_T(::Shipmate::Utils::Extensions::FloatExtensions*);
DEFINE_IL2CPP_CLASS(::Shipmate::Utils::Extensions::FloatExtensions*, "Shipmate.Utils.Extensions", "FloatExtensions");
// Dependencies System.Object
namespace Shipmate::Utils::Extensions {
// Is value type: false
// CS Name: Shipmate.Utils.Extensions.FloatExtensions
class CORDL_TYPE FloatExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Truncate, addr 0x181acac20, size 0x60, virtual false, abstract: false, final false
static inline float_t Truncate(float_t  value, int32_t  digits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatExtensions(FloatExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatExtensions(FloatExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Utils::Extensions::FloatExtensions) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Utils::Extensions
