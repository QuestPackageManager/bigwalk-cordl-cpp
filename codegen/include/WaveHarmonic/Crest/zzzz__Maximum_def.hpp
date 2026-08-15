#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Maximum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Maximum)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Maximum;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Maximum*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Maximum*, "WaveHarmonic.Crest", "Maximum");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Maximum
class CORDL_TYPE Maximum : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Maximum* New_ctor(float_t  maximum) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(float_t  maximum) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Maximum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Maximum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Maximum(Maximum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Maximum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Maximum(Maximum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20104};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Maximum) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
