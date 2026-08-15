#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IQueryProvider.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IQueryProvider.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, int32_t, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::IQueryProvider::Query)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825759e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::IQueryProvider*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::IQueryProvider.RetrieveSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::IQueryProvider::*)(int32_t)>(&::WaveHarmonic::Crest::IQueryProvider::RetrieveSucceeded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182575a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IQueryProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IQueryProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline int32_t WaveHarmonic::Crest::IQueryProvider::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, int32_t  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, minimumLength, points, layer, center);
}
inline bool WaveHarmonic::Crest::IQueryProvider::RetrieveSucceeded(int32_t  status)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
