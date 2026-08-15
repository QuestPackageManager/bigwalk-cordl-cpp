#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaterialField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MaterialField)
// Forward declare root types
namespace WaveHarmonic::Crest {
class MaterialField;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::MaterialField*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaterialField*, "WaveHarmonic.Crest", "MaterialField");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaterialField
class CORDL_TYPE MaterialField : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::MaterialField* New_ctor(::StringW  shader, ::StringW  title, ::StringW  name, ::StringW  parent) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  shader, ::StringW  title, ::StringW  name, ::StringW  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialField(MaterialField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialField(MaterialField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::MaterialField) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
