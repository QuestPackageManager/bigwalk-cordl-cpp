#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FoamTextureLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_def.hpp"
CORDL_MODULE_EXPORT(FoamTextureLodInputData)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FoamTextureLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FoamTextureLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FoamTextureLodInputData*, "WaveHarmonic.Crest", "FoamTextureLodInputData");
// Dependencies WaveHarmonic.Crest.TextureLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FoamTextureLodInputData
class CORDL_TYPE FoamTextureLodInputData : public ::WaveHarmonic::Crest::TextureLodInputData {
public:
// Declarations
 __declspec(property(get=get_TextureShader)) ::UnityW<::UnityEngine::ComputeShader>  TextureShader;

static inline ::WaveHarmonic::Crest::FoamTextureLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x1825501c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TextureShader, addr 0x182559020, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_TextureShader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamTextureLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamTextureLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamTextureLodInputData(FoamTextureLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamTextureLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamTextureLodInputData(FoamTextureLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16532};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FoamTextureLodInputData) == 0x68, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
