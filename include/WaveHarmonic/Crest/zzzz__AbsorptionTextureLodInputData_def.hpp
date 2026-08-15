#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AbsorptionTextureLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_def.hpp"
CORDL_MODULE_EXPORT(AbsorptionTextureLodInputData)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class AbsorptionTextureLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::AbsorptionTextureLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AbsorptionTextureLodInputData*, "WaveHarmonic.Crest", "AbsorptionTextureLodInputData");
// Dependencies WaveHarmonic.Crest.TextureLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AbsorptionTextureLodInputData
class CORDL_TYPE AbsorptionTextureLodInputData : public ::WaveHarmonic::Crest::TextureLodInputData {
public:
// Declarations
 __declspec(property(get=get_TextureShader)) ::UnityW<::UnityEngine::ComputeShader>  TextureShader;

static inline ::WaveHarmonic::Crest::AbsorptionTextureLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x1825501c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TextureShader, addr 0x1825501d0, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_TextureShader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbsorptionTextureLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionTextureLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbsorptionTextureLodInputData(AbsorptionTextureLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionTextureLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbsorptionTextureLodInputData(AbsorptionTextureLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16521};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::AbsorptionTextureLodInputData) == 0x68, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
