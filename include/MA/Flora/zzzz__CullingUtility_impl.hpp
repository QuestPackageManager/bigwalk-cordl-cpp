#pragma once
// IWYU pragma private; include "MA/Flora/CullingUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__CullingUtility_def.hpp"
#include "MA/Flora/zzzz__StaticLightingRenderMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::MA::Flora::CullingUtility.SceneHasLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::CullingUtility::SceneHasLightProbes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814ba1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"SceneHasLightProbes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.GetBillboardMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::MA::Flora::CullingUtility::GetBillboardMesh)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1814b9b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetBillboardMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.GetTerrainDetailBillboardMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::MA::Flora::CullingUtility::GetTerrainDetailBillboardMesh)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1814b9e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetTerrainDetailBillboardMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.GetSceneCullingMaskFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::UnityEngine::Camera*)>(&::MA::Flora::CullingUtility::GetSceneCullingMaskFromCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetSceneCullingMaskFromCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.GetMaximumShadowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Camera*)>(&::MA::Flora::CullingUtility::GetMaximumShadowDistance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814b9d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetMaximumShadowDistance", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.StaticLightingModeFromRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::StaticLightingRenderMode (*)(::UnityEngine::Renderer*)>(&::MA::Flora::CullingUtility::StaticLightingModeFromRenderer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ba240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"StaticLightingModeFromRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.CalculateMeshLodConstant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rendering::LODParameters, float_t, float_t)>(&::MA::Flora::CullingUtility::CalculateMeshLodConstant)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814b97b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateMeshLodConstant", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.CalculateFOVHalfAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::MA::Flora::CullingUtility::CalculateFOVHalfAngle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814b95c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateFOVHalfAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.CalculateScreenRelativeMetricNoBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rendering::LODParameters)>(&::MA::Flora::CullingUtility::CalculateScreenRelativeMetricNoBias)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814b97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateScreenRelativeMetricNoBias", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.CalculateLODScreenRelativeMetric
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rendering::LODParameters, float_t)>(&::MA::Flora::CullingUtility::CalculateLODScreenRelativeMetric)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814b95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateLODScreenRelativeMetric", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.get_NumFramesInFlight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::CullingUtility::get_NumFramesInFlight)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814ba270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"get_NumFramesInFlight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.CalculateWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::GameObject*)>(&::MA::Flora::CullingUtility::CalculateWorldBounds)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1814b9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingUtility.CalculateLocalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::GameObject*)>(&::MA::Flora::CullingUtility::CalculateLocalBounds)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814b9660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateLocalBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingUtility::setStaticF_s_BillboardMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_BillboardMesh", ::MA::Flora::CullingUtility*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> MA::Flora::CullingUtility::getStaticF_s_BillboardMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_BillboardMesh", ::MA::Flora::CullingUtility*>();
}
inline void MA::Flora::CullingUtility::setStaticF_s_TerrainDetailBillboardMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_TerrainDetailBillboardMesh", ::MA::Flora::CullingUtility*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> MA::Flora::CullingUtility::getStaticF_s_TerrainDetailBillboardMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_TerrainDetailBillboardMesh", ::MA::Flora::CullingUtility*>();
}
inline bool MA::Flora::CullingUtility::SceneHasLightProbes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"SceneHasLightProbes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> MA::Flora::CullingUtility::GetBillboardMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetBillboardMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> MA::Flora::CullingUtility::GetTerrainDetailBillboardMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetTerrainDetailBillboardMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline uint64_t MA::Flora::CullingUtility::GetSceneCullingMaskFromCamera(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetSceneCullingMaskFromCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, camera);
}
inline float_t MA::Flora::CullingUtility::GetMaximumShadowDistance(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"GetMaximumShadowDistance", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, camera);
}
inline ::MA::Flora::StaticLightingRenderMode MA::Flora::CullingUtility::StaticLightingModeFromRenderer(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"StaticLightingModeFromRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::StaticLightingRenderMode>(nullptr, ___internal_method, renderer);
}
inline float_t MA::Flora::CullingUtility::CalculateMeshLodConstant(::UnityEngine::Rendering::LODParameters  lodParams, float_t  screenRelativeMetric, float_t  meshLodThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateMeshLodConstant", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodParams, screenRelativeMetric, meshLodThreshold);
}
inline float_t MA::Flora::CullingUtility::CalculateFOVHalfAngle(float_t  fieldOfView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateFOVHalfAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, fieldOfView);
}
inline float_t MA::Flora::CullingUtility::CalculateScreenRelativeMetricNoBias(::UnityEngine::Rendering::LODParameters  lodParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateScreenRelativeMetricNoBias", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodParams);
}
inline float_t MA::Flora::CullingUtility::CalculateLODScreenRelativeMetric(::UnityEngine::Rendering::LODParameters  lodParams, float_t  lodBias)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateLODScreenRelativeMetric", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodParams, lodBias);
}
inline int32_t MA::Flora::CullingUtility::get_NumFramesInFlight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"get_NumFramesInFlight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Bounds MA::Flora::CullingUtility::CalculateWorldBounds(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, gameObject);
}
inline ::UnityEngine::Bounds MA::Flora::CullingUtility::CalculateLocalBounds(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingUtility*>(),
                        {"CalculateLocalBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, gameObject);
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingUtility::CullingUtility()   {
}
