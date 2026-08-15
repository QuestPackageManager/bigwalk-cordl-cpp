#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplineArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__SplinePath_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineArea)
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class Noise;
}
namespace JBooth::MicroVerseCore {
struct SplineArea_ClosedMode;
}
namespace JBooth::MicroVerseCore {
class SplineRenderer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct SplineArea_ClosedMode;
}
namespace JBooth::MicroVerseCore {
class SplineArea;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::SplineArea_ClosedMode);
MARK_REF_T(::JBooth::MicroVerseCore::SplineArea*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplineArea_ClosedMode, "JBooth.MicroVerseCore", "SplineArea/ClosedMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplineArea*, "JBooth.MicroVerseCore", "SplineArea");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.SplineArea/ClosedMode
struct CORDL_TYPE SplineArea_ClosedMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineArea_ClosedMode_Unwrapped
enum struct __SplineArea_ClosedMode_Unwrapped : int32_t {
__E_Area = static_cast<int32_t>(0x1),
__E_Path = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineArea_ClosedMode_Unwrapped () const noexcept {
return static_cast<__SplineArea_ClosedMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineArea_ClosedMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineArea_ClosedMode(int32_t  value__) noexcept;

/// @brief Field Area value: I32(1)
static ::JBooth::MicroVerseCore::SplineArea_ClosedMode const Area;

/// @brief Field Path value: I32(0)
static ::JBooth::MicroVerseCore::SplineArea_ClosedMode const Path;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17964};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea_ClosedMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplineArea_ClosedMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.SplineArea::ClosedMode, JBooth.MicroVerseCore.SplinePath::SDFRes, JBooth.MicroVerseCore.Stamp, UnityEngine.Bounds
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SplineArea
class CORDL_TYPE SplineArea : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using ClosedMode = ::JBooth::MicroVerseCore::SplineArea_ClosedMode;

/// @brief Field bounds, offset 0x54, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field closedMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_closedMode, put=__cordl_internal_set_closedMode)) ::JBooth::MicroVerseCore::SplineArea_ClosedMode  closedMode;

/// @brief Field maxSDF, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSDF, put=__cordl_internal_set_maxSDF)) float_t  maxSDF;

/// @brief Field positionNoise, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionNoise, put=__cordl_internal_set_positionNoise)) ::JBooth::MicroVerseCore::Noise*  positionNoise;

/// @brief Field sdfRes, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sdfRes, put=__cordl_internal_set_sdfRes)) ::JBooth::MicroVerseCore::SplinePath_SDFRes  sdfRes;

/// @brief Field spline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  spline;

/// @brief Field splineRenderers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineRenderers, put=__cordl_internal_set_splineRenderers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  splineRenderers;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ClearSplineRenders, addr 0x18141ef70, size 0x110, virtual false, abstract: false, final false
inline void ClearSplineRenders() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x18141f080, size 0x1b0, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetSDF, addr 0x18141f230, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method GetSplineRenderer, addr 0x18141f250, size 0x220, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::SplineRenderer* GetSplineRenderer(::UnityEngine::Terrain*  terrain) ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method NeedCurvatureMap, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool NeedCurvatureMap() ;

static inline ::JBooth::MicroVerseCore::SplineArea* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18141f470, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18141f480, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18141f4a0, size 0x50, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateSplineSDFs, addr 0x18141f4f0, size 0xc0, virtual false, abstract: false, final false
inline void UpdateSplineSDFs() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode const& __cordl_internal_get_closedMode() const;

constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode& __cordl_internal_get_closedMode() ;

constexpr float_t const& __cordl_internal_get_maxSDF() const;

constexpr float_t& __cordl_internal_get_maxSDF() ;

constexpr ::JBooth::MicroVerseCore::Noise* const& __cordl_internal_get_positionNoise() const;

constexpr ::JBooth::MicroVerseCore::Noise*& __cordl_internal_get_positionNoise() ;

constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes const& __cordl_internal_get_sdfRes() const;

constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes& __cordl_internal_get_sdfRes() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_spline() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>* const& __cordl_internal_get_splineRenderers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*& __cordl_internal_get_splineRenderers() ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_closedMode(::JBooth::MicroVerseCore::SplineArea_ClosedMode  value) ;

constexpr void __cordl_internal_set_maxSDF(float_t  value) ;

constexpr void __cordl_internal_set_positionNoise(::JBooth::MicroVerseCore::Noise*  value) ;

constexpr void __cordl_internal_set_sdfRes(::JBooth::MicroVerseCore::SplinePath_SDFRes  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_splineRenderers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  value) ;

/// @brief Method .ctor, addr 0x18141f5b0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineArea", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineArea(SplineArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineArea", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineArea(SplineArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17965};

/// @brief Field spline, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___spline;

/// @brief Field sdfRes, offset: 0x38, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::SplinePath_SDFRes  ___sdfRes;

/// @brief Field maxSDF, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxSDF;

/// @brief Field positionNoise, offset: 0x40, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  ___positionNoise;

/// @brief Field splineRenderers, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  ___splineRenderers;

/// @brief Field closedMode, offset: 0x50, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::SplineArea_ClosedMode  ___closedMode;

/// @brief Field bounds, offset: 0x54, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea, ___spline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea, ___sdfRes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea, ___maxSDF) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea, ___positionNoise) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea, ___splineRenderers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea, ___closedMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineArea, ___bounds) == 0x54, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplineArea) == 0x70, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
