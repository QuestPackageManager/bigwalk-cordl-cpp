#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanQualityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OceanQualityManager)
namespace GlobalNamespace {
struct OceanQualityManager_OceanQualitySetting;
}
namespace GlobalNamespace {
struct OceanQualityManager__DelayedLodChange_d__8;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Transform;
}
namespace WaveHarmonic::Crest {
class ShapeGerstner;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OceanQualityManager;
}
namespace GlobalNamespace {
struct OceanQualityManager_OceanQualitySetting;
}
namespace GlobalNamespace {
struct OceanQualityManager__DelayedLodChange_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OceanQualityManager*);
MARK_VAL_T(::GlobalNamespace::OceanQualityManager_OceanQualitySetting);
MARK_VAL_T(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OceanQualityManager*, "", "OceanQualityManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OceanQualityManager_OceanQualitySetting, "", "OceanQualityManager/OceanQualitySetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, "", "OceanQualityManager/<DelayedLodChange>d__8");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OceanQualityManager/OceanQualitySetting
struct CORDL_TYPE OceanQualityManager_OceanQualitySetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OceanQualityManager_OceanQualitySetting() ;

// Ctor Parameters [CppParam { name: "lodLevels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minLodScale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "simplifyWater", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "waveResolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "enableReadbacks", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beachSplines", ty: "bool", modifiers: "", def_value: None }]
constexpr OceanQualityManager_OceanQualitySetting(int32_t  lodLevels, int32_t  minLodScale, bool  simplifyWater, int32_t  waveResolution, bool  enableReadbacks, bool  beachSplines) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field lodLevels, offset: 0x0, size: 0x4, def value: None
 int32_t  lodLevels;

/// @brief Field minLodScale, offset: 0x4, size: 0x4, def value: None
 int32_t  minLodScale;

/// @brief Field simplifyWater, offset: 0x8, size: 0x1, def value: None
 bool  simplifyWater;

/// @brief Field waveResolution, offset: 0xc, size: 0x4, def value: None
 int32_t  waveResolution;

/// @brief Field enableReadbacks, offset: 0x10, size: 0x1, def value: None
 bool  enableReadbacks;

/// @brief Field beachSplines, offset: 0x11, size: 0x1, def value: None
 bool  beachSplines;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OceanQualityManager_OceanQualitySetting, lodLevels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager_OceanQualitySetting, minLodScale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager_OceanQualitySetting, simplifyWater) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager_OceanQualitySetting, waveResolution) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager_OceanQualitySetting, enableReadbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager_OceanQualitySetting, beachSplines) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OceanQualityManager_OceanQualitySetting) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: OceanQualityManager/<DelayedLodChange>d__8
struct CORDL_TYPE OceanQualityManager__DelayedLodChange_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042d460, size 0x2f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OceanQualityManager__DelayedLodChange_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OceanQualityManager>", modifiers: "", def_value: None }, CppParam { name: "simplifyWater", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "waveResolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "enableReadbacks", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lodLevels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minLodScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr OceanQualityManager__DelayedLodChange_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::OceanQualityManager>  __4__this, bool  simplifyWater, int32_t  waveResolution, bool  enableReadbacks, int32_t  lodLevels, float_t  minLodScale, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OceanQualityManager>  __4__this;

/// @brief Field simplifyWater, offset: 0x30, size: 0x1, def value: None
 bool  simplifyWater;

/// @brief Field waveResolution, offset: 0x34, size: 0x4, def value: None
 int32_t  waveResolution;

/// @brief Field enableReadbacks, offset: 0x38, size: 0x1, def value: None
 bool  enableReadbacks;

/// @brief Field lodLevels, offset: 0x3c, size: 0x4, def value: None
 int32_t  lodLevels;

/// @brief Field minLodScale, offset: 0x40, size: 0x4, def value: None
 float_t  minLodScale;

/// @brief Field <>u__1, offset: 0x44, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, simplifyWater) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, waveResolution) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, enableReadbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, lodLevels) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, minLodScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8, __u__1) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OceanQualityManager::OceanQualitySetting, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OceanQualityManager
class CORDL_TYPE OceanQualityManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OceanQualitySetting = ::GlobalNamespace::OceanQualityManager_OceanQualitySetting;

using _DelayedLodChange_d__8 = ::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8;

/// @brief Field _currentSetting, offset 0x28, size 0x14 
 __declspec(property(get=__cordl_internal_get__currentSetting, put=__cordl_internal_set__currentSetting)) ::GlobalNamespace::OceanQualityManager_OceanQualitySetting  _currentSetting;

/// @brief Field beachSplineTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_beachSplineTransform, put=__cordl_internal_set_beachSplineTransform)) ::UnityW<::UnityEngine::Transform>  beachSplineTransform;

/// @brief Field qualitySettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_qualitySettings, put=__cordl_internal_set_qualitySettings)) ::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting>  qualitySettings;

/// @brief Field waterRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterRenderer, put=__cordl_internal_set_waterRenderer)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  waterRenderer;

/// @brief Field waveSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_waveSettings, put=__cordl_internal_set_waveSettings)) ::UnityW<::WaveHarmonic::Crest::ShapeGerstner>  waveSettings;

/// @brief Method ApplyQualityEffects, addr 0x180427130, size 0x1b0, virtual false, abstract: false, final false
inline void ApplyQualityEffects(int32_t  qualityLevel) ;

/// @brief Method DelayedLodChange, addr 0x1804272e0, size 0xe0, virtual false, abstract: false, final false
inline void DelayedLodChange(int32_t  lodLevels, float_t  minLodScale, bool  simplifyWater, bool  enableReadbacks, int32_t  waveResolution) ;

static inline ::GlobalNamespace::OceanQualityManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804273c0, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804274b0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x1804275a0, size 0x210, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::OceanQualityManager_OceanQualitySetting const& __cordl_internal_get__currentSetting() const;

constexpr ::GlobalNamespace::OceanQualityManager_OceanQualitySetting& __cordl_internal_get__currentSetting() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_beachSplineTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_beachSplineTransform() ;

constexpr ::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting> const& __cordl_internal_get_qualitySettings() const;

constexpr ::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting>& __cordl_internal_get_qualitySettings() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get_waterRenderer() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get_waterRenderer() ;

constexpr ::UnityW<::WaveHarmonic::Crest::ShapeGerstner> const& __cordl_internal_get_waveSettings() const;

constexpr ::UnityW<::WaveHarmonic::Crest::ShapeGerstner>& __cordl_internal_get_waveSettings() ;

constexpr void __cordl_internal_set__currentSetting(::GlobalNamespace::OceanQualityManager_OceanQualitySetting  value) ;

constexpr void __cordl_internal_set_beachSplineTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_qualitySettings(::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting>  value) ;

constexpr void __cordl_internal_set_waterRenderer(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

constexpr void __cordl_internal_set_waveSettings(::UnityW<::WaveHarmonic::Crest::ShapeGerstner>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OceanQualityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OceanQualityManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OceanQualityManager(OceanQualityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OceanQualityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OceanQualityManager(OceanQualityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5189};

/// @brief Field qualitySettings, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting>  ___qualitySettings;

/// @brief Field _currentSetting, offset: 0x28, size: 0x14, def value: None
 ::GlobalNamespace::OceanQualityManager_OceanQualitySetting  ____currentSetting;

/// @brief Field beachSplineTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___beachSplineTransform;

/// @brief Field waveSettings, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::ShapeGerstner>  ___waveSettings;

/// @brief Field waterRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ___waterRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OceanQualityManager, ___qualitySettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager, ____currentSetting) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager, ___beachSplineTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager, ___waveSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanQualityManager, ___waterRenderer) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OceanQualityManager) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
