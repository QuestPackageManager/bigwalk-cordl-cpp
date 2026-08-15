#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PrefabField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PrefabField)
// Forward declare root types
namespace WaveHarmonic::Crest {
class PrefabField;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::PrefabField*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PrefabField*, "WaveHarmonic.Crest", "PrefabField");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.PrefabField
class CORDL_TYPE PrefabField : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::PrefabField* New_ctor(::StringW  title, ::StringW  name) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  title, ::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrefabField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrefabField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrefabField(PrefabField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrefabField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrefabField(PrefabField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::PrefabField) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
