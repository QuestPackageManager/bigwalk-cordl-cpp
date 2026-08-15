#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Required.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(Required)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Required;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Required*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Required*, "WaveHarmonic.Crest", "Required");
// Dependencies System.Attribute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Required
class CORDL_TYPE Required : public ::System::Attribute {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Required* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Required() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Required", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Required(Required && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Required", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Required(Required const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Required) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
