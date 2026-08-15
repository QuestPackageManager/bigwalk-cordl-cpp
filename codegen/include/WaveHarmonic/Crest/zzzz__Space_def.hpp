#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Space.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Space)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Space;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Space*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Space*, "WaveHarmonic.Crest", "Space");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Space
class CORDL_TYPE Space : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Space* New_ctor(float_t  height, bool  isAlwaysVisible) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(float_t  height, bool  isAlwaysVisible) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Space() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Space", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Space(Space && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Space", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Space(Space const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Space) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
