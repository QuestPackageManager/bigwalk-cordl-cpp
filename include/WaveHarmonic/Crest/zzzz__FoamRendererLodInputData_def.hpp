#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FoamRendererLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__RendererLodInputData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FoamRendererLodInputData)
// Forward declare root types
namespace WaveHarmonic::Crest {
class FoamRendererLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FoamRendererLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FoamRendererLodInputData*, "WaveHarmonic.Crest", "FoamRendererLodInputData");
// Dependencies WaveHarmonic.Crest.RendererLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FoamRendererLodInputData
class CORDL_TYPE FoamRendererLodInputData : public ::WaveHarmonic::Crest::RendererLodInputData {
public:
// Declarations
 __declspec(property(get=get_ShaderPrefix)) ::StringW  ShaderPrefix;

static inline ::WaveHarmonic::Crest::FoamRendererLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x182550150, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ShaderPrefix, addr 0x182559010, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ShaderPrefix() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamRendererLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamRendererLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamRendererLodInputData(FoamRendererLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamRendererLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamRendererLodInputData(FoamRendererLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FoamRendererLodInputData) == 0x78, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
