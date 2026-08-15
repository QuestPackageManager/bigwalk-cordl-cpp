#pragma once
// IWYU pragma private; include "GlobalNamespace/TerrainQualityManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_impl.hpp"
#include "GlobalNamespace/zzzz__HouseFloraQualityData_impl.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Terrain_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__TerrainQualityManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__HouseFloraQualityData_def.hpp"
#include "GlobalNamespace/zzzz__LodAdjuster_def.hpp"
#include "GlobalNamespace/zzzz__TerrainQualityManager_def.hpp"
#include "MA/Flora/zzzz__FloraRenderSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__LODGroup_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "drawDetails", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "detailsImportance", ty: "::GlobalNamespace::HouseFloraQualityData_Importance", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodThresholdScalar", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "grassFade", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "vegShadowDitherDistanceMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vegShadowDitherDistanceMax", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableAdditionalLightCullingPassOnVegetation", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting::TerrainQualityManager_TerrainQualitySetting(bool  drawDetails, ::GlobalNamespace::HouseFloraQualityData_Importance  detailsImportance, float_t  lodThresholdScalar, ::UnityEngine::Vector4  grassFade, float_t  vegShadowDitherDistanceMin, float_t  vegShadowDitherDistanceMax, bool  disableAdditionalLightCullingPassOnVegetation) noexcept  {
this->drawDetails = drawDetails;
this->detailsImportance = detailsImportance;
this->lodThresholdScalar = lodThresholdScalar;
this->grassFade = grassFade;
this->vegShadowDitherDistanceMin = vegShadowDitherDistanceMin;
this->vegShadowDitherDistanceMax = vegShadowDitherDistanceMax;
this->disableAdditionalLightCullingPassOnVegetation = disableAdditionalLightCullingPassOnVegetation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting::TerrainQualityManager_TerrainQualitySetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::*)()>(&::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x18042bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TerrainQualityManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "qualityLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_newQuality_5__2", ty: "::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::TerrainQualityManager__ApplyQualityEffects_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this, int32_t  qualityLevel, ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting  _newQuality_5__2, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->qualityLevel = qualityLevel;
this->_newQuality_5__2 = _newQuality_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainQualityManager__ApplyQualityEffects_d__18::TerrainQualityManager__ApplyQualityEffects_d__18()   {
}
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::*)()>(&::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x18042e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TerrainQualityManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15::TerrainQualityManager__ForceFlushAllTerrainProviders_d__15()   {
}
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::*)()>(&::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x18042e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::TerrainQualityManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawDetails", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodAdjustmentLevel", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_terrain_5__3", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::TerrainQualityManager__ProcessTerrains_d__25(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::TerrainQualityManager>  __4__this, bool  drawDetails, ::System::Nullable_1<float_t>  lodAdjustmentLevel, int32_t  _i_5__2, ::UnityW<::UnityEngine::Terrain>  _terrain_5__3, ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->drawDetails = drawDetails;
this->lodAdjustmentLevel = lodAdjustmentLevel;
this->_i_5__2 = _i_5__2;
this->_terrain_5__3 = _terrain_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainQualityManager__ProcessTerrains_d__25::TerrainQualityManager__ProcessTerrains_d__25()   {
}
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18042aa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.SetDetailsRenderDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)(float_t)>(&::GlobalNamespace::TerrainQualityManager::SetDetailsRenderDistance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18042b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"SetDetailsRenderDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ForceFlushAllTerrainProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::ForceFlushAllTerrainProviders)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18042ade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ForceFlushAllTerrainProviders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::Initialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18042af40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ReplaceTreePrototypesWithInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::ReplaceTreePrototypesWithInstances)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18042b3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ReplaceTreePrototypesWithInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ApplyQualityEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)(int32_t)>(&::GlobalNamespace::TerrainQualityManager::ApplyQualityEffects)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18042a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ClearAnimateCrossfadeFromVegetation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::ClearAnimateCrossfadeFromVegetation)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18042ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ClearAnimateCrossfadeFromVegetation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.RemoveCrossfadeFromLodGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)(::UnityEngine::LODGroup*)>(&::GlobalNamespace::TerrainQualityManager::RemoveCrossfadeFromLodGroup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18042b350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"RemoveCrossfadeFromLodGroup", {}, {::i2c::type_of<::UnityEngine::LODGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.HandleShadowDistanceOnVegetation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)(int32_t)>(&::GlobalNamespace::TerrainQualityManager::HandleShadowDistanceOnVegetation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18042ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"HandleShadowDistanceOnVegetation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ApplyFloraAdditionalLightShadow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)(bool)>(&::GlobalNamespace::TerrainQualityManager::ApplyFloraAdditionalLightShadow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18042a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyFloraAdditionalLightShadow", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.GetFloraRenderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MA::Flora::FloraRenderSettings> (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::GetFloraRenderSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"GetFloraRenderSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ApplyVegetationShadowDither
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)(float_t, float_t, ::GlobalNamespace::HouseFloraQualityData*)>(&::GlobalNamespace::TerrainQualityManager::ApplyVegetationShadowDither)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18042a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyVegetationShadowDither", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::HouseFloraQualityData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ProcessTerrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::TerrainQualityManager::*)(::System::Nullable_1<float_t>, bool)>(&::GlobalNamespace::TerrainQualityManager::ProcessTerrains)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18042b2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ProcessTerrains", {}, {::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18042b6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.SetZoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::TerrainQualityManager::SetZoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18042b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"SetZoom", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.ApplyGrassFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector4)>(&::GlobalNamespace::TerrainQualityManager::ApplyGrassFade)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18042a780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyGrassFade", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18042aff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18042b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18042b0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainQualityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainQualityManager::*)()>(&::GlobalNamespace::TerrainQualityManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_terrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_terrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_terrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrains = value;
}
constexpr ::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>>& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_microSplatObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microSplatObjects;
}
constexpr ::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>> const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_microSplatObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microSplatObjects;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_microSplatObjects(::ArrayW<::UnityW<::JBooth::MicroSplat::MicroSplatObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___microSplatObjects = value;
}
constexpr float_t& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_originalObjectDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalObjectDensity;
}
constexpr float_t const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_originalObjectDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalObjectDensity;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_originalObjectDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalObjectDensity = value;
}
constexpr ::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting>& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_qualitySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qualitySettings;
}
constexpr ::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting> const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_qualitySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qualitySettings;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_qualitySettings(::ArrayW<::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qualitySettings = value;
}
constexpr float_t& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_currentLodThresholdScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLodThresholdScalar;
}
constexpr float_t const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_currentLodThresholdScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLodThresholdScalar;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_currentLodThresholdScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLodThresholdScalar = value;
}
constexpr bool& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_currentShadowsValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentShadowsValue;
}
constexpr bool const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_currentShadowsValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentShadowsValue;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_currentShadowsValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentShadowsValue = value;
}
constexpr bool& GlobalNamespace::TerrainQualityManager::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_needsAdjusting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsAdjusting;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>* const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_needsAdjusting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsAdjusting;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_needsAdjusting(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needsAdjusting = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_needsCleaning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsCleaning;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>* const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_needsCleaning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsCleaning;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_needsCleaning(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LodAdjuster>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needsCleaning = value;
}
constexpr ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting& GlobalNamespace::TerrainQualityManager::__cordl_internal_get__previousQualitySetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousQualitySetting;
}
constexpr ::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get__previousQualitySetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousQualitySetting;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set__previousQualitySetting(::GlobalNamespace::TerrainQualityManager_TerrainQualitySetting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousQualitySetting = value;
}
constexpr ::UnityW<::GlobalNamespace::HouseFloraQualityData>& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_floraQualityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floraQualityData;
}
constexpr ::UnityW<::GlobalNamespace::HouseFloraQualityData> const& GlobalNamespace::TerrainQualityManager::__cordl_internal_get_floraQualityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floraQualityData;
}
constexpr void GlobalNamespace::TerrainQualityManager::__cordl_internal_set_floraQualityData(::UnityW<::GlobalNamespace::HouseFloraQualityData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floraQualityData = value;
}
inline void GlobalNamespace::TerrainQualityManager::setStaticF_instance(::UnityW<::GlobalNamespace::TerrainQualityManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::TerrainQualityManager>, "instance", ::GlobalNamespace::TerrainQualityManager*>(std::forward<::UnityW<::GlobalNamespace::TerrainQualityManager>>(value));
}
inline ::UnityW<::GlobalNamespace::TerrainQualityManager> GlobalNamespace::TerrainQualityManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::TerrainQualityManager>, "instance", ::GlobalNamespace::TerrainQualityManager*>();
}
inline void GlobalNamespace::TerrainQualityManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::SetDetailsRenderDistance(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"SetDetailsRenderDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::TerrainQualityManager::ForceFlushAllTerrainProviders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ForceFlushAllTerrainProviders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::ReplaceTreePrototypesWithInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ReplaceTreePrototypesWithInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::ApplyQualityEffects(int32_t  qualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityLevel);
}
inline void GlobalNamespace::TerrainQualityManager::ClearAnimateCrossfadeFromVegetation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ClearAnimateCrossfadeFromVegetation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::RemoveCrossfadeFromLodGroup(::UnityEngine::LODGroup*  lodGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"RemoveCrossfadeFromLodGroup", {}, {::i2c::type_of<::UnityEngine::LODGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodGroup);
}
inline void GlobalNamespace::TerrainQualityManager::HandleShadowDistanceOnVegetation(int32_t  qualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"HandleShadowDistanceOnVegetation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityLevel);
}
inline void GlobalNamespace::TerrainQualityManager::ApplyFloraAdditionalLightShadow(bool  disableAdditionalLightShadow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyFloraAdditionalLightShadow", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disableAdditionalLightShadow);
}
inline ::UnityW<::MA::Flora::FloraRenderSettings> GlobalNamespace::TerrainQualityManager::GetFloraRenderSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"GetFloraRenderSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MA::Flora::FloraRenderSettings>>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::ApplyVegetationShadowDither(float_t  minDistance, float_t  maxDistance, ::GlobalNamespace::HouseFloraQualityData*  floraQualityData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyVegetationShadowDither", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::HouseFloraQualityData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minDistance, maxDistance, floraQualityData);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::TerrainQualityManager::ProcessTerrains(::System::Nullable_1<float_t>  lodAdjustmentLevel, bool  drawDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ProcessTerrains", {}, {::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, lodAdjustmentLevel, drawDetails);
}
inline void GlobalNamespace::TerrainQualityManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::SetZoom(float_t  zoomLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"SetZoom", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zoomLevel);
}
inline void GlobalNamespace::TerrainQualityManager::ApplyGrassFade(::UnityEngine::Vector4  grassFade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"ApplyGrassFade", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, grassFade);
}
inline void GlobalNamespace::TerrainQualityManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainQualityManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TerrainQualityManager* GlobalNamespace::TerrainQualityManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TerrainQualityManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainQualityManager::TerrainQualityManager()   {
}
