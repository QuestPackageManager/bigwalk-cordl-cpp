#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IReportsDisplacement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IReportsDisplacement)
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IReportsDisplacement;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IReportsDisplacement*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IReportsDisplacement*, "WaveHarmonic.Crest", "IReportsDisplacement");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IReportsDisplacement
class CORDL_TYPE IReportsDisplacement {
public:
// Declarations
/// @brief Method ReportDisplacement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical) ;

// Ctor Parameters [CppParam { name: "", ty: "IReportsDisplacement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReportsDisplacement(IReportsDisplacement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16694};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
