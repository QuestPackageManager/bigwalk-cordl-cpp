#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LevelTextureLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_def.hpp"
CORDL_MODULE_EXPORT(LevelTextureLodInputData)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class LevelTextureLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LevelTextureLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LevelTextureLodInputData*, "WaveHarmonic.Crest", "LevelTextureLodInputData");
// Dependencies WaveHarmonic.Crest.TextureLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LevelTextureLodInputData
class CORDL_TYPE LevelTextureLodInputData : public ::WaveHarmonic::Crest::TextureLodInputData {
public:
// Declarations
 __declspec(property(get=get_TextureShader)) ::UnityW<::UnityEngine::ComputeShader>  TextureShader;

/// @brief Field _UseCatmullRomFiltering, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseCatmullRomFiltering, put=__cordl_internal_set__UseCatmullRomFiltering)) bool  _UseCatmullRomFiltering;

static inline ::WaveHarmonic::Crest::LevelTextureLodInputData* New_ctor() ;

constexpr bool const& __cordl_internal_get__UseCatmullRomFiltering() const;

constexpr bool& __cordl_internal_get__UseCatmullRomFiltering() ;

constexpr void __cordl_internal_set__UseCatmullRomFiltering(bool  value) ;

/// @brief Method .ctor, addr 0x1825501c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TextureShader, addr 0x18255a600, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_TextureShader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelTextureLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelTextureLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelTextureLodInputData(LevelTextureLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelTextureLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelTextureLodInputData(LevelTextureLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16536};

/// @brief Field _UseCatmullRomFiltering, offset: 0x68, size: 0x1, def value: None
 bool  ____UseCatmullRomFiltering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LevelTextureLodInputData, ____UseCatmullRomFiltering) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LevelTextureLodInputData) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
