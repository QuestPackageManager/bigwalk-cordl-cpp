#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleDepthHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleDepthHelper)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class SampleDepthHelper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::SampleDepthHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SampleDepthHelper*, "WaveHarmonic.Crest", "SampleDepthHelper");
// Dependencies WaveHarmonic.Crest.Internal.SampleHelper
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SampleDepthHelper
class CORDL_TYPE SampleDepthHelper : public ::WaveHarmonic::Crest::Internal::SampleHelper {
public:
// Declarations
static inline ::WaveHarmonic::Crest::SampleDepthHelper* New_ctor() ;

/// @brief Method Sample, addr 0x18257dbb0, size 0x1d0, virtual false, abstract: false, final false
inline bool Sample(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector2>  result, bool  allowMultipleCallsPerFrame) ;

/// @brief Method Sample, addr 0x18257daa0, size 0xa0, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  depth, ::by_ref<float_t>  distance) ;

/// @brief Method Sample, addr 0x18257db40, size 0x70, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector2>  result) ;

/// @brief Method SampleDistanceToWaterEdge, addr 0x18257d9d0, size 0x50, virtual false, abstract: false, final false
inline bool SampleDistanceToWaterEdge(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  distance) ;

/// @brief Method SampleDistanceToWaterEdge, addr 0x18257d950, size 0x80, virtual false, abstract: false, final false
inline bool SampleDistanceToWaterEdge(::UnityEngine::Vector3  position, ::by_ref<float_t>  distance) ;

/// @brief Method SampleWaterDepth, addr 0x18257da20, size 0x80, virtual false, abstract: false, final false
inline bool SampleWaterDepth(::UnityEngine::Vector3  position, ::by_ref<float_t>  depth) ;

/// @brief Method .ctor, addr 0x18257dd80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleDepthHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleDepthHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleDepthHelper(SampleDepthHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleDepthHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleDepthHelper(SampleDepthHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16625};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::SampleDepthHelper) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
