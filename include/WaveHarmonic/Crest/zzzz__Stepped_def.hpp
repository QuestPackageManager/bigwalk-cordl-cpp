#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Stepped.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Stepped)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Stepped;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Stepped*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Stepped*, "WaveHarmonic.Crest", "Stepped");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Stepped
class CORDL_TYPE Stepped : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Stepped* New_ctor(int32_t  minimum, int32_t  maximum, int32_t  step, bool  power) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(int32_t  minimum, int32_t  maximum, int32_t  step, bool  power) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stepped() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stepped", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stepped(Stepped && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stepped", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stepped(Stepped const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Stepped) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
