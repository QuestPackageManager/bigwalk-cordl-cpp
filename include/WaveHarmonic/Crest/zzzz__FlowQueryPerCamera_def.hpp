#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FlowQueryPerCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryPerCameraSimple_1_def.hpp"
CORDL_MODULE_EXPORT(FlowQueryPerCamera)
namespace WaveHarmonic::Crest {
class FlowQuery;
}
namespace WaveHarmonic::Crest {
class IFlowProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FlowQueryPerCamera;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FlowQueryPerCamera*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FlowQueryPerCamera*, "WaveHarmonic.Crest", "FlowQueryPerCamera");
// Dependencies WaveHarmonic.Crest.QueryPerCameraSimple`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FlowQueryPerCamera
class CORDL_TYPE FlowQueryPerCamera : public ::WaveHarmonic::Crest::QueryPerCameraSimple_1<::WaveHarmonic::Crest::FlowQuery*> {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IFlowProvider"
constexpr operator  ::WaveHarmonic::Crest::IFlowProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::FlowQueryPerCamera* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method .ctor, addr 0x182575530, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Convert to "::WaveHarmonic::Crest::IFlowProvider"
constexpr ::WaveHarmonic::Crest::IFlowProvider* i___WaveHarmonic__Crest__IFlowProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowQueryPerCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowQueryPerCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowQueryPerCamera(FlowQueryPerCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowQueryPerCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowQueryPerCamera(FlowQueryPerCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FlowQueryPerCamera) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
