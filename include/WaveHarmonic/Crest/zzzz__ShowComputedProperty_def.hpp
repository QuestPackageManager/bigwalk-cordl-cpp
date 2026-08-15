#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShowComputedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ShowComputedProperty)
// Forward declare root types
namespace WaveHarmonic::Crest {
class ShowComputedProperty;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ShowComputedProperty*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShowComputedProperty*, "WaveHarmonic.Crest", "ShowComputedProperty");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShowComputedProperty
class CORDL_TYPE ShowComputedProperty : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::ShowComputedProperty* New_ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShowComputedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShowComputedProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShowComputedProperty(ShowComputedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShowComputedProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShowComputedProperty(ShowComputedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShowComputedProperty) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
