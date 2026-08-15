#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WarnIfAbove.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WarnIfAbove)
// Forward declare root types
namespace WaveHarmonic::Crest {
class WarnIfAbove;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::WarnIfAbove*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WarnIfAbove*, "WaveHarmonic.Crest", "WarnIfAbove");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WarnIfAbove
class CORDL_TYPE WarnIfAbove : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::WarnIfAbove* New_ctor(float_t  maximum) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(float_t  maximum) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WarnIfAbove() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WarnIfAbove", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WarnIfAbove(WarnIfAbove && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WarnIfAbove", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WarnIfAbove(WarnIfAbove const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20105};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::WarnIfAbove) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
