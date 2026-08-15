#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IDepthProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__IDepthProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IDepthProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IDepthProvider_NoneProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::IDepthProvider_NoneProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::IDepthProvider_NoneProvider::Query)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825789b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::IDepthProvider_NoneProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::IDepthProvider_NoneProvider::*)()>(&::WaveHarmonic::Crest::IDepthProvider_NoneProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t WaveHarmonic::Crest::IDepthProvider_NoneProvider::Query(int32_t  _0, float_t  _1, ::ArrayW<::UnityEngine::Vector3>  _2, ::ArrayW<::UnityEngine::Vector3>  result, ::System::Nullable_1<::UnityEngine::Vector3>  _3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _0, _1, _2, result, _3);
}
inline void WaveHarmonic::Crest::IDepthProvider_NoneProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IDepthProvider_NoneProvider* WaveHarmonic::Crest::IDepthProvider_NoneProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*>());
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IDepthProvider"
constexpr  WaveHarmonic::Crest::IDepthProvider_NoneProvider::operator ::WaveHarmonic::Crest::IDepthProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IDepthProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IDepthProvider"
constexpr ::WaveHarmonic::Crest::IDepthProvider* WaveHarmonic::Crest::IDepthProvider_NoneProvider::i___WaveHarmonic__Crest__IDepthProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IDepthProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::IDepthProvider_NoneProvider::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::IDepthProvider_NoneProvider::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::IDepthProvider_NoneProvider::IDepthProvider_NoneProvider()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::IDepthProvider.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IDepthProvider_NoneProvider* (*)()>(&::WaveHarmonic::Crest::IDepthProvider::get_None)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825758a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider*>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::IDepthProvider.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IDepthProvider* (*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::IDepthProvider::Create)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825757e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider*>(),
                        {"Create", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::IDepthProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::IDepthProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::IDepthProvider::Query)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::IDepthProvider::setStaticF__None_k__BackingField(::WaveHarmonic::Crest::IDepthProvider_NoneProvider*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*, "<None>k__BackingField", ::WaveHarmonic::Crest::IDepthProvider*>(std::forward<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*>(value));
}
inline ::WaveHarmonic::Crest::IDepthProvider_NoneProvider* WaveHarmonic::Crest::IDepthProvider::getStaticF__None_k__BackingField()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*, "<None>k__BackingField", ::WaveHarmonic::Crest::IDepthProvider*>();
}
inline ::WaveHarmonic::Crest::IDepthProvider_NoneProvider* WaveHarmonic::Crest::IDepthProvider::get_None()  {
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IDepthProvider_NoneProvider*>(nullptr, ___internal_method);
}
inline ::WaveHarmonic::Crest::IDepthProvider* WaveHarmonic::Crest::IDepthProvider::Create(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IDepthProvider*>(nullptr, ___internal_method, water);
}
inline int32_t WaveHarmonic::Crest::IDepthProvider::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IDepthProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, results, center);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::IDepthProvider::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::IDepthProvider::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
