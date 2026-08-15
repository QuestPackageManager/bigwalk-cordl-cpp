#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ScatteringTextureLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_def.hpp"
CORDL_MODULE_EXPORT(ScatteringTextureLodInputData)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ScatteringTextureLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ScatteringTextureLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ScatteringTextureLodInputData*, "WaveHarmonic.Crest", "ScatteringTextureLodInputData");
// Dependencies WaveHarmonic.Crest.TextureLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ScatteringTextureLodInputData
class CORDL_TYPE ScatteringTextureLodInputData : public ::WaveHarmonic::Crest::TextureLodInputData {
public:
// Declarations
 __declspec(property(get=get_TextureShader)) ::UnityW<::UnityEngine::ComputeShader>  TextureShader;

static inline ::WaveHarmonic::Crest::ScatteringTextureLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x1825501c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TextureShader, addr 0x18255c390, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_TextureShader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatteringTextureLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatteringTextureLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatteringTextureLodInputData(ScatteringTextureLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatteringTextureLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatteringTextureLodInputData(ScatteringTextureLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16539};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ScatteringTextureLodInputData) == 0x68, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
