#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AlbedoRendererLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__RendererLodInputData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AlbedoRendererLodInputData)
// Forward declare root types
namespace WaveHarmonic::Crest {
class AlbedoRendererLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::AlbedoRendererLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AlbedoRendererLodInputData*, "WaveHarmonic.Crest", "AlbedoRendererLodInputData");
// Dependencies WaveHarmonic.Crest.RendererLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AlbedoRendererLodInputData
class CORDL_TYPE AlbedoRendererLodInputData : public ::WaveHarmonic::Crest::RendererLodInputData {
public:
// Declarations
 __declspec(property(get=get_ShaderPrefix)) ::StringW  ShaderPrefix;

static inline ::WaveHarmonic::Crest::AlbedoRendererLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x182550150, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ShaderPrefix, addr 0x182550410, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ShaderPrefix() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlbedoRendererLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlbedoRendererLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlbedoRendererLodInputData(AlbedoRendererLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlbedoRendererLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlbedoRendererLodInputData(AlbedoRendererLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::AlbedoRendererLodInputData) == 0x78, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
