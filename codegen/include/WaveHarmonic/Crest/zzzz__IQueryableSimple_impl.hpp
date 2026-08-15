#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IQueryableSimple.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryableSimple_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryable_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IQueryableSimple.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::IQueryableSimple::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::IQueryableSimple::Query)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IQueryableSimple*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IQueryableSimple*>(), 0}
                ));
    return ___internal_method;
  }
};
inline int32_t WaveHarmonic::Crest::IQueryableSimple::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  queries, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryableSimple*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, queries, results, center);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr  WaveHarmonic::Crest::IQueryableSimple::operator ::WaveHarmonic::Crest::IQueryable*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* WaveHarmonic::Crest::IQueryableSimple::i___WaveHarmonic__Crest__IQueryable() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
