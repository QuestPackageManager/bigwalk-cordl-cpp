#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DecoratedField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
CORDL_MODULE_EXPORT(DecoratedField)
// Forward declare root types
namespace WaveHarmonic::Crest {
class DecoratedField;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DecoratedField*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DecoratedField*, "WaveHarmonic.Crest", "DecoratedField");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DecoratedField
class CORDL_TYPE DecoratedField : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::DecoratedField* New_ctor(bool  isCustomFoldout) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(bool  isCustomFoldout) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoratedField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoratedField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoratedField(DecoratedField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoratedField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoratedField(DecoratedField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20097};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DecoratedField) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
