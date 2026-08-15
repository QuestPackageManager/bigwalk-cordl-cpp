#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
CORDL_MODULE_EXPORT(WaterCamera)
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class WaterCamera;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::WaterCamera*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterCamera*, "WaveHarmonic.Crest", "WaterCamera");
// Dependencies WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterCamera
class CORDL_TYPE WaterCamera : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
static inline ::WaveHarmonic::Crest::WaterCamera* New_ctor() ;

/// @brief Method .ctor, addr 0x18256fed0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterCamera(WaterCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterCamera(WaterCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16708};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::WaterCamera) == 0x50, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
