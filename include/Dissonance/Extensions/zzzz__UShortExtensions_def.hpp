#pragma once
// IWYU pragma private; include "Dissonance/Extensions/UShortExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UShortExtensions)
// Forward declare root types
namespace Dissonance::Extensions {
class UShortExtensions;
}
// Write type traits
MARK_REF_T(::Dissonance::Extensions::UShortExtensions*);
DEFINE_IL2CPP_CLASS(::Dissonance::Extensions::UShortExtensions*, "Dissonance.Extensions", "UShortExtensions");
// Dependencies System.Object
namespace Dissonance::Extensions {
// Is value type: false
// CS Name: Dissonance.Extensions.UShortExtensions
class CORDL_TYPE UShortExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method WrappedDelta, addr 0x1805ed6b0, size 0x40, virtual false, abstract: false, final false
static inline int32_t WrappedDelta(uint16_t  a, uint16_t  b, int32_t  bits) ;

/// @brief Method WrappedDelta16, addr 0x1805ed650, size 0x20, virtual false, abstract: false, final false
static inline int32_t WrappedDelta16(uint16_t  a, uint16_t  b) ;

/// @brief Method WrappedDelta2, addr 0x1805ed670, size 0x20, virtual false, abstract: false, final false
static inline int32_t WrappedDelta2(uint16_t  a, uint16_t  b) ;

/// @brief Method WrappedDelta7, addr 0x1805ed690, size 0x20, virtual false, abstract: false, final false
static inline int32_t WrappedDelta7(uint16_t  a, uint16_t  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UShortExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UShortExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UShortExtensions(UShortExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UShortExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UShortExtensions(UShortExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16933};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Extensions::UShortExtensions) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Extensions
