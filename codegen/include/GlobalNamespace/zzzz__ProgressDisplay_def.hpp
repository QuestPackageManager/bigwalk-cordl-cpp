#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressDisplay)
namespace GlobalNamespace {
class DotMatrixSharedData;
}
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
struct ProgressDisplay_ProgressBarState;
}
namespace GlobalNamespace {
class ProgressTracker;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProgressDisplay_ProgressBarState;
}
namespace GlobalNamespace {
class ProgressDisplay;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressDisplay_ProgressBarState);
MARK_REF_T(::GlobalNamespace::ProgressDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressDisplay_ProgressBarState, "", "ProgressDisplay/ProgressBarState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressDisplay*, "", "ProgressDisplay");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressDisplay/ProgressBarState
struct CORDL_TYPE ProgressDisplay_ProgressBarState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProgressDisplay_ProgressBarState_Unwrapped
enum struct __ProgressDisplay_ProgressBarState_Unwrapped : int32_t {
__E_Standard = static_cast<int32_t>(0x0),
__E_Failure = static_cast<int32_t>(0x1),
__E_Increment = static_cast<int32_t>(0x2),
__E_Victory = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProgressDisplay_ProgressBarState_Unwrapped () const noexcept {
return static_cast<__ProgressDisplay_ProgressBarState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProgressDisplay_ProgressBarState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProgressDisplay_ProgressBarState(int32_t  value__) noexcept;

/// @brief Field Failure value: I32(1)
static ::GlobalNamespace::ProgressDisplay_ProgressBarState const Failure;

/// @brief Field Increment value: I32(2)
static ::GlobalNamespace::ProgressDisplay_ProgressBarState const Increment;

/// @brief Field Standard value: I32(0)
static ::GlobalNamespace::ProgressDisplay_ProgressBarState const Standard;

/// @brief Field Victory value: I32(3)
static ::GlobalNamespace::ProgressDisplay_ProgressBarState const Victory;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5107};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressDisplay_ProgressBarState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressDisplay_ProgressBarState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ProgressDisplay::ProgressBarState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressDisplay
class CORDL_TYPE ProgressDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ProgressBarState = ::GlobalNamespace::ProgressDisplay_ProgressBarState;

/// @brief Field _materialInstance, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field aimProgress, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_aimProgress, put=__cordl_internal_set_aimProgress)) float_t  aimProgress;

/// @brief Field audioPosition, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioPosition, put=__cordl_internal_set_audioPosition)) ::UnityW<::UnityEngine::Transform>  audioPosition;

/// @brief Field currentState, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::ProgressDisplay_ProgressBarState  currentState;

/// @brief Field dampedProgress, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampedProgress, put=__cordl_internal_set_dampedProgress)) float_t  dampedProgress;

/// @brief Field dampedProgressAtChange, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampedProgressAtChange, put=__cordl_internal_set_dampedProgressAtChange)) float_t  dampedProgressAtChange;

/// @brief Field dampedProgressVel, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampedProgressVel, put=__cordl_internal_set_dampedProgressVel)) float_t  dampedProgressVel;

/// @brief Field gridSizeX, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridSizeX, put=__cordl_internal_set_gridSizeX)) int32_t  gridSizeX;

/// @brief Field gridSizeY, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridSizeY, put=__cordl_internal_set_gridSizeY)) int32_t  gridSizeY;

/// @brief Field incrementCount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_incrementCount, put=__cordl_internal_set_incrementCount)) int32_t  incrementCount;

/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field occasionalPartner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field progressTracker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressTracker, put=__cordl_internal_set_progressTracker)) ::UnityW<::GlobalNamespace::ProgressTracker>  progressTracker;

/// @brief Field sharedData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedData, put=__cordl_internal_set_sharedData)) ::UnityW<::GlobalNamespace::DotMatrixSharedData>  sharedData;

/// @brief Field submeshIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_submeshIndex, put=__cordl_internal_set_submeshIndex)) int32_t  submeshIndex;

/// @brief Field targetRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  targetRenderer;

/// @brief Field timeAtChange, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtChange, put=__cordl_internal_set_timeAtChange)) float_t  timeAtChange;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x180410870, size 0x240, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoTransition, addr 0x180410ab0, size 0x330, virtual false, abstract: false, final false
inline void DoTransition(float_t  newNormalizedValue, ::GlobalNamespace::ProgressDisplay_ProgressBarState  newState) ;

static inline ::GlobalNamespace::ProgressDisplay* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x180410de0, size 0x360, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnDestroy, addr 0x180411140, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetMaterialProperties, addr 0x180411150, size 0xe0, virtual false, abstract: false, final false
inline void SetMaterialProperties(float_t  normalizedValue, ::GlobalNamespace::ProgressDisplay_ProgressBarState  progressBarColors) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr float_t const& __cordl_internal_get_aimProgress() const;

constexpr float_t& __cordl_internal_get_aimProgress() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_audioPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_audioPosition() ;

constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_dampedProgress() const;

constexpr float_t& __cordl_internal_get_dampedProgress() ;

constexpr float_t const& __cordl_internal_get_dampedProgressAtChange() const;

constexpr float_t& __cordl_internal_get_dampedProgressAtChange() ;

constexpr float_t const& __cordl_internal_get_dampedProgressVel() const;

constexpr float_t& __cordl_internal_get_dampedProgressVel() ;

constexpr int32_t const& __cordl_internal_get_gridSizeX() const;

constexpr int32_t& __cordl_internal_get_gridSizeX() ;

constexpr int32_t const& __cordl_internal_get_gridSizeY() const;

constexpr int32_t& __cordl_internal_get_gridSizeY() ;

constexpr int32_t const& __cordl_internal_get_incrementCount() const;

constexpr int32_t& __cordl_internal_get_incrementCount() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::UnityW<::GlobalNamespace::ProgressTracker> const& __cordl_internal_get_progressTracker() const;

constexpr ::UnityW<::GlobalNamespace::ProgressTracker>& __cordl_internal_get_progressTracker() ;

constexpr ::UnityW<::GlobalNamespace::DotMatrixSharedData> const& __cordl_internal_get_sharedData() const;

constexpr ::UnityW<::GlobalNamespace::DotMatrixSharedData>& __cordl_internal_get_sharedData() ;

constexpr int32_t const& __cordl_internal_get_submeshIndex() const;

constexpr int32_t& __cordl_internal_get_submeshIndex() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_targetRenderer() ;

constexpr float_t const& __cordl_internal_get_timeAtChange() const;

constexpr float_t& __cordl_internal_get_timeAtChange() ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_aimProgress(float_t  value) ;

constexpr void __cordl_internal_set_audioPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::ProgressDisplay_ProgressBarState  value) ;

constexpr void __cordl_internal_set_dampedProgress(float_t  value) ;

constexpr void __cordl_internal_set_dampedProgressAtChange(float_t  value) ;

constexpr void __cordl_internal_set_dampedProgressVel(float_t  value) ;

constexpr void __cordl_internal_set_gridSizeX(int32_t  value) ;

constexpr void __cordl_internal_set_gridSizeY(int32_t  value) ;

constexpr void __cordl_internal_set_incrementCount(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_progressTracker(::UnityW<::GlobalNamespace::ProgressTracker>  value) ;

constexpr void __cordl_internal_set_sharedData(::UnityW<::GlobalNamespace::DotMatrixSharedData>  value) ;

constexpr void __cordl_internal_set_submeshIndex(int32_t  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_timeAtChange(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressDisplay(ProgressDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressDisplay(ProgressDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5108};

/// @brief Field sharedData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DotMatrixSharedData>  ___sharedData;

/// @brief Field progressTracker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressTracker>  ___progressTracker;

/// @brief Field occasionalPartner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field targetRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___targetRenderer;

/// @brief Field submeshIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___submeshIndex;

/// @brief Field gridSizeX, offset: 0x44, size: 0x4, def value: None
 int32_t  ___gridSizeX;

/// @brief Field gridSizeY, offset: 0x48, size: 0x4, def value: None
 int32_t  ___gridSizeY;

/// @brief Field audioPosition, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___audioPosition;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _materialInstance, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

/// @brief Field dampedProgress, offset: 0x68, size: 0x4, def value: None
 float_t  ___dampedProgress;

/// @brief Field dampedProgressVel, offset: 0x6c, size: 0x4, def value: None
 float_t  ___dampedProgressVel;

/// @brief Field aimProgress, offset: 0x70, size: 0x4, def value: None
 float_t  ___aimProgress;

/// @brief Field dampedProgressAtChange, offset: 0x74, size: 0x4, def value: None
 float_t  ___dampedProgressAtChange;

/// @brief Field timeAtChange, offset: 0x78, size: 0x4, def value: None
 float_t  ___timeAtChange;

/// @brief Field currentState, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::ProgressDisplay_ProgressBarState  ___currentState;

/// @brief Field incrementCount, offset: 0x80, size: 0x4, def value: None
 int32_t  ___incrementCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___sharedData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___progressTracker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___occasionalPartner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___targetRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___submeshIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___gridSizeX) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___gridSizeY) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___audioPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ____materialInstance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___dampedProgress) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___dampedProgressVel) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___aimProgress) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___dampedProgressAtChange) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___timeAtChange) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___currentState) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___incrementCount) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressDisplay) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
