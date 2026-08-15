#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IFlowProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__IFlowProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IFlowProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IFlowProvider_NoneProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::IFlowProvider_NoneProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::IFlowProvider_NoneProvider::Query)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825789b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::IFlowProvider_NoneProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::IFlowProvider_NoneProvider::*)()>(&::WaveHarmonic::Crest::IFlowProvider_NoneProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t WaveHarmonic::Crest::IFlowProvider_NoneProvider::Query(int32_t  _0, float_t  _1, ::ArrayW<::UnityEngine::Vector3>  _2, ::ArrayW<::UnityEngine::Vector3>  result, ::System::Nullable_1<::UnityEngine::Vector3>  _3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _0, _1, _2, result, _3);
}
inline void WaveHarmonic::Crest::IFlowProvider_NoneProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IFlowProvider_NoneProvider* WaveHarmonic::Crest::IFlowProvider_NoneProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*>());
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IFlowProvider"
constexpr  WaveHarmonic::Crest::IFlowProvider_NoneProvider::operator ::WaveHarmonic::Crest::IFlowProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IFlowProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IFlowProvider"
constexpr ::WaveHarmonic::Crest::IFlowProvider* WaveHarmonic::Crest::IFlowProvider_NoneProvider::i___WaveHarmonic__Crest__IFlowProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IFlowProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::IFlowProvider_NoneProvider::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::IFlowProvider_NoneProvider::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::IFlowProvider_NoneProvider::IFlowProvider_NoneProvider()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::IFlowProvider.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IFlowProvider_NoneProvider* (*)()>(&::WaveHarmonic::Crest::IFlowProvider::get_None)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825759a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider*>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::IFlowProvider.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IFlowProvider* (*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::IFlowProvider::Create)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825758e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider*>(),
                        {"Create", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::IFlowProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::IFlowProvider::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::IFlowProvider::Query)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::IFlowProvider::setStaticF__None_k__BackingField(::WaveHarmonic::Crest::IFlowProvider_NoneProvider*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*, "<None>k__BackingField", ::WaveHarmonic::Crest::IFlowProvider*>(std::forward<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*>(value));
}
inline ::WaveHarmonic::Crest::IFlowProvider_NoneProvider* WaveHarmonic::Crest::IFlowProvider::getStaticF__None_k__BackingField()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*, "<None>k__BackingField", ::WaveHarmonic::Crest::IFlowProvider*>();
}
inline ::WaveHarmonic::Crest::IFlowProvider_NoneProvider* WaveHarmonic::Crest::IFlowProvider::get_None()  {
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IFlowProvider_NoneProvider*>(nullptr, ___internal_method);
}
inline ::WaveHarmonic::Crest::IFlowProvider* WaveHarmonic::Crest::IFlowProvider::Create(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IFlowProvider*>(nullptr, ___internal_method, water);
}
inline int32_t WaveHarmonic::Crest::IFlowProvider::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IFlowProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, results, center);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::IFlowProvider::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::IFlowProvider::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
