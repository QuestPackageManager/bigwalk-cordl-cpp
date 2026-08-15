#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Decorator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(Decorator)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Decorator;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Decorator*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Decorator*, "WaveHarmonic.Crest", "Decorator");
// Dependencies UnityEngine.PropertyAttribute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Decorator
class CORDL_TYPE Decorator : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Decorator* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Decorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Decorator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Decorator(Decorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decorator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decorator(Decorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Decorator) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
