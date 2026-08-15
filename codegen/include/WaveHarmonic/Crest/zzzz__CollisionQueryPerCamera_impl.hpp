#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionQueryPerCamera.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryPerCamera_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionQueryPerCamera_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayers_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionQueryWithPasses_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryPerCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryPerCamera::*)()>(&::WaveHarmonic::Crest::CollisionQueryPerCamera::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182572340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryPerCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryPerCamera::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CollisionQueryPerCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182572330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryPerCamera.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQueryPerCamera::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<float_t>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::CollisionQueryPerCamera::Query)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x182571e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryPerCamera.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQueryPerCamera::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::CollisionQueryPerCamera::Query)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x182571a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryPerCamera.SendReadBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryPerCamera::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::CollisionLayers)>(&::WaveHarmonic::Crest::CollisionQueryPerCamera::SendReadBack)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182572220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryPerCamera.UpdateQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryPerCamera::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::CollisionQueryPerCamera::UpdateQueries)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825722b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::CollisionQueryPerCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CollisionQueryPerCamera::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline int32_t WaveHarmonic::Crest::CollisionQueryPerCamera::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, heights, normals, velocities, layer, center);
}
inline int32_t WaveHarmonic::Crest::CollisionQueryPerCamera::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, displacements, normals, velocities, layer, center);
}
inline void WaveHarmonic::Crest::CollisionQueryPerCamera::SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayers  layers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, layers);
}
inline void WaveHarmonic::Crest::CollisionQueryPerCamera::UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, layer);
}
inline ::WaveHarmonic::Crest::CollisionQueryPerCamera* WaveHarmonic::Crest::CollisionQueryPerCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CollisionQueryPerCamera*>());
}
inline ::WaveHarmonic::Crest::CollisionQueryPerCamera* WaveHarmonic::Crest::CollisionQueryPerCamera::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CollisionQueryPerCamera*>(water));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr  WaveHarmonic::Crest::CollisionQueryPerCamera::operator ::WaveHarmonic::Crest::ICollisionProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::CollisionQueryPerCamera::i___WaveHarmonic__Crest__ICollisionProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::CollisionQueryPerCamera::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::CollisionQueryPerCamera::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CollisionQueryPerCamera::CollisionQueryPerCamera()   {
}
