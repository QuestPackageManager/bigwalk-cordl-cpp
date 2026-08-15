#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ICollisionProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ICollisionProvider_NoneProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::ICollisionProvider_NoneProvider::Query)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182578910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ICollisionProvider_NoneProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<float_t>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::ICollisionProvider_NoneProvider::Query)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1825789e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ICollisionProvider_NoneProvider::*)()>(&::WaveHarmonic::Crest::ICollisionProvider_NoneProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t WaveHarmonic::Crest::ICollisionProvider_NoneProvider::Query(int32_t  _0, float_t  _1, ::ArrayW<::UnityEngine::Vector3>  _2, ::ArrayW<::UnityEngine::Vector3>  result0, ::ArrayW<::UnityEngine::Vector3>  result1, ::ArrayW<::UnityEngine::Vector3>  result2, ::WaveHarmonic::Crest::CollisionLayer  _3, ::System::Nullable_1<::UnityEngine::Vector3>  _4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _0, _1, _2, result0, result1, result2, _3, _4);
}
inline int32_t WaveHarmonic::Crest::ICollisionProvider_NoneProvider::Query(int32_t  _0, float_t  _1, ::ArrayW<::UnityEngine::Vector3>  _2, ::ArrayW<float_t>  result0, ::ArrayW<::UnityEngine::Vector3>  result1, ::ArrayW<::UnityEngine::Vector3>  result2, ::WaveHarmonic::Crest::CollisionLayer  _3, ::System::Nullable_1<::UnityEngine::Vector3>  _4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _0, _1, _2, result0, result1, result2, _3, _4);
}
inline void WaveHarmonic::Crest::ICollisionProvider_NoneProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider* WaveHarmonic::Crest::ICollisionProvider_NoneProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>());
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr  WaveHarmonic::Crest::ICollisionProvider_NoneProvider::operator ::WaveHarmonic::Crest::ICollisionProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::ICollisionProvider_NoneProvider::i___WaveHarmonic__Crest__ICollisionProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::ICollisionProvider_NoneProvider::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::ICollisionProvider_NoneProvider::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider::ICollisionProvider_NoneProvider()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::ICollisionProvider.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider* (*)()>(&::WaveHarmonic::Crest::ICollisionProvider::get_None)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825757a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ICollisionProvider.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ICollisionProvider* (*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ICollisionProvider::Create)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182575640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(),
                        {"Create", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ICollisionProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ICollisionProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<float_t>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::ICollisionProvider::Query)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ICollisionProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ICollisionProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::ICollisionProvider::Query)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::ICollisionProvider::setStaticF__None_k__BackingField(::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*, "<None>k__BackingField", ::WaveHarmonic::Crest::ICollisionProvider*>(std::forward<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(value));
}
inline ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider* WaveHarmonic::Crest::ICollisionProvider::getStaticF__None_k__BackingField()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*, "<None>k__BackingField", ::WaveHarmonic::Crest::ICollisionProvider*>();
}
inline ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider* WaveHarmonic::Crest::ICollisionProvider::get_None()  {
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*>(nullptr, ___internal_method);
}
inline ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::ICollisionProvider::Create(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ICollisionProvider*>(nullptr, ___internal_method, water);
}
inline int32_t WaveHarmonic::Crest::ICollisionProvider::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, heights, normals, velocities, layer, center);
}
inline int32_t WaveHarmonic::Crest::ICollisionProvider::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ICollisionProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, displacements, normals, velocities, layer, center);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::ICollisionProvider::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::ICollisionProvider::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
