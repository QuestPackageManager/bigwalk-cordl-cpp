#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionQuery.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryBase_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionQuery_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQuery::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CollisionQuery::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182572cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQuery.get_Kernel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQuery::*)()>(&::WaveHarmonic::Crest::CollisionQuery::get_Kernel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQuery.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQuery::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::CollisionQuery::Query)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182572b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQuery.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQuery::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<float_t>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::CollisionQuery::Query)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182572c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::CollisionQuery::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline int32_t WaveHarmonic::Crest::CollisionQuery::get_Kernel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::CollisionQuery::Query(int32_t  ownerHash, float_t  minSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<::UnityEngine::Vector3>  resultDisplacements, ::ArrayW<::UnityEngine::Vector3>  resultNormals, ::ArrayW<::UnityEngine::Vector3>  resultVelocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ownerHash, minSpatialLength, queryPoints, resultDisplacements, resultNormals, resultVelocities, layer, center);
}
inline int32_t WaveHarmonic::Crest::CollisionQuery::Query(int32_t  ownerHash, float_t  minimumSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<float_t>  resultHeights, ::ArrayW<::UnityEngine::Vector3>  resultNormals, ::ArrayW<::UnityEngine::Vector3>  resultVelocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQuery*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ownerHash, minimumSpatialLength, queryPoints, resultHeights, resultNormals, resultVelocities, layer, center);
}
inline ::WaveHarmonic::Crest::CollisionQuery* WaveHarmonic::Crest::CollisionQuery::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CollisionQuery*>(water));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr  WaveHarmonic::Crest::CollisionQuery::operator ::WaveHarmonic::Crest::ICollisionProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::CollisionQuery::i___WaveHarmonic__Crest__ICollisionProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::CollisionQuery::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::CollisionQuery::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CollisionQuery::CollisionQuery()   {
}
