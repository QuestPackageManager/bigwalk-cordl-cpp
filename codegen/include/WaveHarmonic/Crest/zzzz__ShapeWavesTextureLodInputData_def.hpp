#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeWavesTextureLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__DirectionalTextureLodInputData_def.hpp"
CORDL_MODULE_EXPORT(ShapeWavesTextureLodInputData)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ShapeWavesTextureLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ShapeWavesTextureLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeWavesTextureLodInputData*, "WaveHarmonic.Crest", "ShapeWavesTextureLodInputData");
// Dependencies WaveHarmonic.Crest.DirectionalTextureLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShapeWavesTextureLodInputData
class CORDL_TYPE ShapeWavesTextureLodInputData : public ::WaveHarmonic::Crest::DirectionalTextureLodInputData {
public:
// Declarations
 __declspec(property(get=get_TextureShader)) ::UnityW<::UnityEngine::ComputeShader>  TextureShader;

static inline ::WaveHarmonic::Crest::ShapeWavesTextureLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x1825501c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TextureShader, addr 0x182561670, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_TextureShader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeWavesTextureLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeWavesTextureLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeWavesTextureLodInputData(ShapeWavesTextureLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeWavesTextureLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeWavesTextureLodInputData(ShapeWavesTextureLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16548};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShapeWavesTextureLodInputData) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
