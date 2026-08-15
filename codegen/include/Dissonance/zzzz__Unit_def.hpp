#pragma once
// IWYU pragma private; include "Dissonance/Unit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Unit)
// Forward declare root types
namespace Dissonance {
struct Unit;
}
// Write type traits
MARK_VAL_T(::Dissonance::Unit);
DEFINE_IL2CPP_CLASS(::Dissonance::Unit, "Dissonance", "Unit");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.Unit
#pragma pack(push, 0)
struct CORDL_TYPE Unit {
public:
// Declarations
/// @brief Field None, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Dissonance::Unit  None;

static inline ::Dissonance::Unit getStaticF_None() ;

static inline void setStaticF_None(::Dissonance::Unit  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Unit() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16829};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Dissonance::Unit) == 0x1, "Size mismatch!");

} // namespace end def Dissonance
