#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IReportWaveDisplacement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IReportWaveDisplacement)
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IReportWaveDisplacement;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IReportWaveDisplacement*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IReportWaveDisplacement*, "WaveHarmonic.Crest", "IReportWaveDisplacement");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IReportWaveDisplacement
class CORDL_TYPE IReportWaveDisplacement {
public:
// Declarations
/// @brief Method ReportWaveDisplacement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement) ;

// Ctor Parameters [CppParam { name: "", ty: "IReportWaveDisplacement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReportWaveDisplacement(IReportWaveDisplacement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16713};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
