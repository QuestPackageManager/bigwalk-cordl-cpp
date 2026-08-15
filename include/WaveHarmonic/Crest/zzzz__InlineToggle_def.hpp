#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/InlineToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
CORDL_MODULE_EXPORT(InlineToggle)
// Forward declare root types
namespace WaveHarmonic::Crest {
class InlineToggle;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::InlineToggle*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::InlineToggle*, "WaveHarmonic.Crest", "InlineToggle");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.InlineToggle
class CORDL_TYPE InlineToggle : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::InlineToggle* New_ctor(bool  fix) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(bool  fix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineToggle(InlineToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineToggle(InlineToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::InlineToggle) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
