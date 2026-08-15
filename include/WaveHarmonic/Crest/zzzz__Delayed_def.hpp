#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Delayed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
CORDL_MODULE_EXPORT(Delayed)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Delayed;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Delayed*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Delayed*, "WaveHarmonic.Crest", "Delayed");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Delayed
class CORDL_TYPE Delayed : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Delayed* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Delayed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Delayed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Delayed(Delayed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Delayed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Delayed(Delayed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20088};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Delayed) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
