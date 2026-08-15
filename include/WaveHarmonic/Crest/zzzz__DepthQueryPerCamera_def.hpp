#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthQueryPerCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryPerCameraSimple_1_def.hpp"
CORDL_MODULE_EXPORT(DepthQueryPerCamera)
namespace WaveHarmonic::Crest {
class DepthQuery;
}
namespace WaveHarmonic::Crest {
class IDepthProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DepthQueryPerCamera;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DepthQueryPerCamera*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthQueryPerCamera*, "WaveHarmonic.Crest", "DepthQueryPerCamera");
// Dependencies WaveHarmonic.Crest.QueryPerCameraSimple`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthQueryPerCamera
class CORDL_TYPE DepthQueryPerCamera : public ::WaveHarmonic::Crest::QueryPerCameraSimple_1<::WaveHarmonic::Crest::DepthQuery*> {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IDepthProvider"
constexpr operator  ::WaveHarmonic::Crest::IDepthProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::DepthQueryPerCamera* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method .ctor, addr 0x182574ee0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Convert to "::WaveHarmonic::Crest::IDepthProvider"
constexpr ::WaveHarmonic::Crest::IDepthProvider* i___WaveHarmonic__Crest__IDepthProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthQueryPerCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthQueryPerCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthQueryPerCamera(DepthQueryPerCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthQueryPerCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthQueryPerCamera(DepthQueryPerCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16602};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DepthQueryPerCamera) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
