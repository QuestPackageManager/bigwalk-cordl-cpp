#pragma once
// IWYU pragma private; include "GlobalNamespace/TerrainQualityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_def.hpp"
#include "GlobalNamespace/zzzz__HouseFloraQualityData_def.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainQualityManager)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class HouseFloraQualityData;
}
namespace GlobalNamespace {
class LodAdjuster;
}
namespace GlobalNamespace {
struct TerrainQualityManager_TerrainQualitySetting;
}
namespace GlobalNamespace {
struct TerrainQualityManager__ApplyQualityEffects_d__18;
}
namespace GlobalNamespace {
struct TerrainQualityManager__ForceFlushAllTerrainProviders_d__15;
}
namespace GlobalNamespace {
struct TerrainQualityManager__ProcessTerrains_d__25;
}
namespace MA::Flora {
class FloraRenderSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class LODGroup;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class TerrainQualityManager;
}
namespace GlobalNamespace {
struct TerrainQualityManager_TerrainQualitySetting;
}
namespace GlobalNamespace {
struct TerrainQualityManager__ApplyQualityEffects_d__18;
}
namespace GlobalNamespace {
struct TerrainQualityManager__ForceFlushAllTerrainProviders_d__15;
}
namespace GlobalNamespace {
struct TerrainQualityManager__ProcessTerrains_d__25;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TerrainQualityManager*);
MARK_VAL_T(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting);
MARK_VAL_T(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18);
MARK_VAL_T(::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15);
MARK_VAL_T(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainQualityManager*, "", "TerrainQualityManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, "", "TerrainQualityManager/TerrainQualitySetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18, "", "TerrainQualityManager/<ApplyQualityEffects>d__18");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15, "", "TerrainQualityManager/<ForceFlushAllTerrainProviders>d__15");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, "", "TerrainQualityManager/<ProcessTerrains>d__25");
// Dependencies HouseFloraQualityData::Importance, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: TerrainQualityManager/TerrainQualitySetting
struct CORDL_TYPE TerrainQualityManager_TerrainQualitySetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TerrainQualityManager_TerrainQualitySetting() ;

// Ctor Parameters [CppParam { name: "drawDetails", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "detailsImportance", ty: "::GlobalNamespace::HouseFloraQualityData_Importance", modifiers: "", def_value: None }, CppParam { name: "lodThresholdScalar", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "grassFade", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "vegShadowDitherDistanceMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vegShadowDitherDistanceMax", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "disableAdditionalLightCullingPassOnVegetation", ty: "bool", modifiers: "", def_value: None }]
constexpr TerrainQualityManager_TerrainQualitySetting(bool  drawDetails, ::GlobalNamespace::HouseFloraQualityData_Importance  detailsImportance, float_t  lodThresholdScalar, ::UnityEngine::Vector4  grassFade, float_t  vegShadowDitherDistanceMin, float_t  vegShadowDitherDistanceMax, bool  disableAdditionalLightCullingPassOnVegetation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field drawDetails, offset: 0x0, size: 0x1, def value: None
 bool  drawDetails;

/// @brief Field detailsImportance, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::HouseFloraQualityData_Importance  detailsImportance;

/// @brief Field lodThresholdScalar, offset: 0x8, size: 0x4, def value: None
 float_t  lodThresholdScalar;

/// @brief Field grassFade, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Vector4  grassFade;

/// @brief Field vegShadowDitherDistanceMin, offset: 0x1c, size: 0x4, def value: None
 float_t  vegShadowDitherDistanceMin;

/// @brief Field vegShadowDitherDistanceMax, offset: 0x20, size: 0x4, def value: None
 float_t  vegShadowDitherDistanceMax;

/// @brief Field disableAdditionalLightCullingPassOnVegetation, offset: 0x24, size: 0x1, def value: None
 bool  disableAdditionalLightCullingPassOnVegetation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, drawDetails) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, detailsImportance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, lodThresholdScalar) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, grassFade) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, vegShadowDitherDistanceMin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, vegShadowDitherDistanceMax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting, disableAdditionalLightCullingPassOnVegetation) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.UniTask::Awaiter, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, TerrainQualityManager::TerrainQualitySetting
namespace GlobalNamespace {
// Is value type: true
// CS Name: TerrainQualityManager/<ApplyQualityEffects>d__18
struct CORDL_TYPE TerrainQualityManager__ApplyQualityEffects_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042bb20, size 0x7b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainQualityManager__ApplyQualityEffects_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TerrainQualityManager>", modifiers: "", def_value: None }, CppParam { name: "qualityLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_newQuality_5__2", ty: "::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr TerrainQualityManager__ApplyQualityEffects_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this, int32_t  qualityLevel, ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting  _newQuality_5__2, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5202};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this;

/// @brief Field qualityLevel, offset: 0x30, size: 0x4, def value: None
 int32_t  qualityLevel;

/// @brief Field <newQuality>5__2, offset: 0x34, size: 0x28, def value: None
 ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting  _newQuality_5__2;

/// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18, qualityLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18, _newQuality_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18, __u__1) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: TerrainQualityManager/<ForceFlushAllTerrainProviders>d__15
struct CORDL_TYPE TerrainQualityManager__ForceFlushAllTerrainProviders_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042e210, size 0x3d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainQualityManager__ForceFlushAllTerrainProviders_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TerrainQualityManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr TerrainQualityManager__ForceFlushAllTerrainProviders_d__15(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.YieldAwaitable::Awaiter, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: TerrainQualityManager/<ProcessTerrains>d__25
struct CORDL_TYPE TerrainQualityManager__ProcessTerrains_d__25 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042e910, size 0x430, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainQualityManager__ProcessTerrains_d__25() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TerrainQualityManager>", modifiers: "", def_value: None }, CppParam { name: "drawDetails", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lodAdjustmentLevel", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_terrain_5__3", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter", modifiers: "", def_value: None }]
constexpr TerrainQualityManager__ProcessTerrains_d__25(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this, bool  drawDetails, ::System::Nullable_1<float_t>  lodAdjustmentLevel, int32_t  _i_5__2, ::UnityW<::UnityEngine::Terrain>  _terrain_5__3, ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this;

/// @brief Field drawDetails, offset: 0x20, size: 0x1, def value: None
 bool  drawDetails;

/// @brief Field lodAdjustmentLevel, offset: 0x24, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  lodAdjustmentLevel;

/// @brief Field <i>5__2, offset: 0x2c, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <terrain>5__3, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  _terrain_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, drawDetails) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, lodAdjustmentLevel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, _i_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, _terrain_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies JBooth.MicroSplat.MicroSplatObject, TerrainQualityManager::TerrainQualitySetting, UnityEngine.MonoBehaviour, UnityEngine.Terrain
namespace GlobalNamespace {
// Is value type: false
// CS Name: TerrainQualityManager
class CORDL_TYPE TerrainQualityManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TerrainQualitySetting = ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting;

using _ApplyQualityEffects_d__18 = ::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18;

using _ForceFlushAllTerrainProviders_d__15 = ::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15;

using _ProcessTerrains_d__25 = ::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25;

/// @brief Field _initialized, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _previousQualitySetting, offset 0x58, size 0x28 
 __declspec(property(get=__cordl_internal_get__previousQualitySetting, put=__cordl_internal_set__previousQualitySetting)) ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting  _previousQualitySetting;

/// @brief Field currentLodThresholdScalar, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLodThresholdScalar, put=__cordl_internal_set_currentLodThresholdScalar)) float_t  currentLodThresholdScalar;

/// @brief Field currentShadowsValue, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentShadowsValue, put=__cordl_internal_set_currentShadowsValue)) bool  currentShadowsValue;

/// @brief Field floraQualityData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_floraQualityData, put=__cordl_internal_set_floraQualityData)) ::UnityW<::GlobalNamespace::HouseFloraQualityData>  floraQualityData;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::TerrainQualityManager>  instance;

/// @brief Field microSplatObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_microSplatObjects, put=__cordl_internal_set_microSplatObjects)) ::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>>  microSplatObjects;

/// @brief Field needsAdjusting, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_needsAdjusting, put=__cordl_internal_set_needsAdjusting)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  needsAdjusting;

/// @brief Field needsCleaning, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_needsCleaning, put=__cordl_internal_set_needsCleaning)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  needsCleaning;

/// @brief Field originalObjectDensity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_originalObjectDensity, put=__cordl_internal_set_originalObjectDensity)) float_t  originalObjectDensity;

/// @brief Field qualitySettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_qualitySettings, put=__cordl_internal_set_qualitySettings)) ::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting>  qualitySettings;

/// @brief Field terrains, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrains, put=__cordl_internal_set_terrains)) ::ArrayW<::UnityW<::UnityEngine::Terrain>>  terrains;

/// @brief Method ApplyFloraAdditionalLightShadow, addr 0x18042a730, size 0x50, virtual false, abstract: false, final false
inline void ApplyFloraAdditionalLightShadow(bool  disableAdditionalLightShadow) ;

/// @brief Method ApplyGrassFade, addr 0x18042a780, size 0xc0, virtual false, abstract: false, final false
static inline void ApplyGrassFade(::UnityEngine::Vector4  grassFade) ;

/// @brief Method ApplyQualityEffects, addr 0x18042a840, size 0xa0, virtual false, abstract: false, final false
inline void ApplyQualityEffects(int32_t  qualityLevel) ;

/// @brief Method ApplyVegetationShadowDither, addr 0x18042a8e0, size 0x120, virtual false, abstract: false, final false
inline void ApplyVegetationShadowDither(float_t  minDistance, float_t  maxDistance, ::GlobalNamespace::HouseFloraQualityData*  floraQualityData) ;

/// @brief Method Awake, addr 0x18042aa00, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearAnimateCrossfadeFromVegetation, addr 0x18042ab80, size 0x260, virtual false, abstract: false, final false
inline void ClearAnimateCrossfadeFromVegetation() ;

/// @brief Method ForceFlushAllTerrainProviders, addr 0x18042ade0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ForceFlushAllTerrainProviders() ;

/// @brief Method GetFloraRenderSettings, addr 0x18041dae0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::MA::Flora::FloraRenderSettings> GetFloraRenderSettings() ;

/// @brief Method HandleShadowDistanceOnVegetation, addr 0x18042ae60, size 0xe0, virtual false, abstract: false, final false
inline void HandleShadowDistanceOnVegetation(int32_t  qualityLevel) ;

/// @brief Method Initialize, addr 0x18042af40, size 0xb0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::TerrainQualityManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18042aff0, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18042b0c0, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18042b1b0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessTerrains, addr 0x18042b2a0, size 0xb0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ProcessTerrains(::System::Nullable_1<float_t>  lodAdjustmentLevel, bool  drawDetails) ;

/// @brief Method RemoveCrossfadeFromLodGroup, addr 0x18042b350, size 0x60, virtual false, abstract: false, final false
inline void RemoveCrossfadeFromLodGroup(::UnityEngine::LODGroup*  lodGroup) ;

/// @brief Method ReplaceTreePrototypesWithInstances, addr 0x18042b3b0, size 0x230, virtual false, abstract: false, final false
inline void ReplaceTreePrototypesWithInstances() ;

/// @brief Method SetDetailsRenderDistance, addr 0x18042b5e0, size 0x70, virtual false, abstract: false, final false
inline void SetDetailsRenderDistance(float_t  distance) ;

/// @brief Method SetZoom, addr 0x18042b650, size 0x90, virtual false, abstract: false, final false
static inline void SetZoom(float_t  zoomLevel) ;

/// @brief Method Update, addr 0x18042b6e0, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting const& __cordl_internal_get__previousQualitySetting() const;

constexpr ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting& __cordl_internal_get__previousQualitySetting() ;

constexpr float_t const& __cordl_internal_get_currentLodThresholdScalar() const;

constexpr float_t& __cordl_internal_get_currentLodThresholdScalar() ;

constexpr bool const& __cordl_internal_get_currentShadowsValue() const;

constexpr bool& __cordl_internal_get_currentShadowsValue() ;

constexpr ::UnityW<::GlobalNamespace::HouseFloraQualityData> const& __cordl_internal_get_floraQualityData() const;

constexpr ::UnityW<::GlobalNamespace::HouseFloraQualityData>& __cordl_internal_get_floraQualityData() ;

constexpr ::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>> const& __cordl_internal_get_microSplatObjects() const;

constexpr ::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>>& __cordl_internal_get_microSplatObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>* const& __cordl_internal_get_needsAdjusting() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*& __cordl_internal_get_needsAdjusting() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>* const& __cordl_internal_get_needsCleaning() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*& __cordl_internal_get_needsCleaning() ;

constexpr float_t const& __cordl_internal_get_originalObjectDensity() const;

constexpr float_t& __cordl_internal_get_originalObjectDensity() ;

constexpr ::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting> const& __cordl_internal_get_qualitySettings() const;

constexpr ::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting>& __cordl_internal_get_qualitySettings() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& __cordl_internal_get_terrains() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& __cordl_internal_get_terrains() ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__previousQualitySetting(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting  value) ;

constexpr void __cordl_internal_set_currentLodThresholdScalar(float_t  value) ;

constexpr void __cordl_internal_set_currentShadowsValue(bool  value) ;

constexpr void __cordl_internal_set_floraQualityData(::UnityW<::GlobalNamespace::HouseFloraQualityData>  value) ;

constexpr void __cordl_internal_set_microSplatObjects(::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>>  value) ;

constexpr void __cordl_internal_set_needsAdjusting(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  value) ;

constexpr void __cordl_internal_set_needsCleaning(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  value) ;

constexpr void __cordl_internal_set_originalObjectDensity(float_t  value) ;

constexpr void __cordl_internal_set_qualitySettings(::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting>  value) ;

constexpr void __cordl_internal_set_terrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::TerrainQualityManager> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::TerrainQualityManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainQualityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainQualityManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainQualityManager(TerrainQualityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainQualityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainQualityManager(TerrainQualityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5205};

/// @brief Field terrains, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Terrain>>  ___terrains;

/// @brief Field microSplatObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>>  ___microSplatObjects;

/// @brief Field originalObjectDensity, offset: 0x30, size: 0x4, def value: None
 float_t  ___originalObjectDensity;

/// @brief Field qualitySettings, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting>  ___qualitySettings;

/// @brief Field currentLodThresholdScalar, offset: 0x40, size: 0x4, def value: None
 float_t  ___currentLodThresholdScalar;

/// @brief Field currentShadowsValue, offset: 0x44, size: 0x1, def value: None
 bool  ___currentShadowsValue;

/// @brief Field _initialized, offset: 0x45, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field needsAdjusting, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  ___needsAdjusting;

/// @brief Field needsCleaning, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  ___needsCleaning;

/// @brief Field _previousQualitySetting, offset: 0x58, size: 0x28, def value: None
 ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting  ____previousQualitySetting;

/// @brief Field floraQualityData, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HouseFloraQualityData>  ___floraQualityData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___terrains) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___microSplatObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___originalObjectDensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___qualitySettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___currentLodThresholdScalar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___currentShadowsValue) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ____initialized) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___needsAdjusting) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___needsCleaning) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ____previousQualitySetting) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainQualityManager, ___floraQualityData) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainQualityManager) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
