#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PropertyWrapperConstants)
// Forward declare root types
namespace WaveHarmonic::Crest {
class PropertyWrapperConstants;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::PropertyWrapperConstants*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PropertyWrapperConstants*, "WaveHarmonic.Crest", "PropertyWrapperConstants");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.PropertyWrapperConstants
class CORDL_TYPE PropertyWrapperConstants : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyWrapperConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyWrapperConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyWrapperConstants(PropertyWrapperConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyWrapperConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyWrapperConstants(PropertyWrapperConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20137};

/// @brief Field k_NoShaderMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  k_NoShaderMessage{u"Cannot create required material because shader <i>{0}</i> could not be found or loaded. Try right clicking the Crest folder in the Project view and selecting Reimport, and checking for errors."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::PropertyWrapperConstants) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
