#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IReportsHeight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IReportsHeight)
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IReportsHeight;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IReportsHeight*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IReportsHeight*, "WaveHarmonic.Crest", "IReportsHeight");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IReportsHeight
class CORDL_TYPE IReportsHeight {
public:
// Declarations
/// @brief Method ReportHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ReportHeight(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  minimum, ::by_ref<float_t>  maximum) ;

// Ctor Parameters [CppParam { name: "", ty: "IReportsHeight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReportsHeight(IReportsHeight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
