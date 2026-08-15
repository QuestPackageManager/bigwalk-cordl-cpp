#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleFlowHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SampleFlowHelper)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class SampleFlowHelper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::SampleFlowHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SampleFlowHelper*, "WaveHarmonic.Crest", "SampleFlowHelper");
// Dependencies WaveHarmonic.Crest.Internal.SampleHelper
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SampleFlowHelper
class CORDL_TYPE SampleFlowHelper : public ::WaveHarmonic::Crest::Internal::SampleHelper {
public:
// Declarations
static inline ::WaveHarmonic::Crest::SampleFlowHelper* New_ctor() ;

/// @brief Method Sample, addr 0x18257dd90, size 0x200, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector2>  flow, float_t  minimumLength) ;

/// @brief Method .ctor, addr 0x18257dd80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleFlowHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleFlowHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleFlowHelper(SampleFlowHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleFlowHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleFlowHelper(SampleFlowHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16624};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::SampleFlowHelper) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
