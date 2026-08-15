#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplinePointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
CORDL_MODULE_EXPORT(SplinePointData)
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class SplinePointData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::SplinePointData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::SplinePointData*, "WaveHarmonic.Crest.Splines", "SplinePointData");
// Dependencies WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.SplinePointData
class CORDL_TYPE SplinePointData : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
/// @brief Method GetData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 GetData(::UnityEngine::Vector4  data) ;

static inline ::WaveHarmonic::Crest::Splines::SplinePointData* New_ctor() ;

/// @brief Method .ctor, addr 0x18256fed0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePointData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePointData(SplinePointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePointData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePointData(SplinePointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21097};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Splines::SplinePointData) == 0x50, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
