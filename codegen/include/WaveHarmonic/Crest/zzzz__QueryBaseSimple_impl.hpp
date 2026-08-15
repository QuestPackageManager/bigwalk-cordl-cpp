#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryBaseSimple.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryBase_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryBaseSimple_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryableLod_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryableSimple_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryable_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBaseSimple._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBaseSimple::*)(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*)>(&::WaveHarmonic::Crest::QueryBaseSimple::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182579c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBaseSimple*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBaseSimple.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QueryBaseSimple::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::QueryBaseSimple::Query)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182579bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::QueryBaseSimple*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::QueryBaseSimple*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::QueryBaseSimple::_ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBaseSimple*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod);
}
inline int32_t WaveHarmonic::Crest::QueryBaseSimple::Query(int32_t  ownerHash, float_t  minSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::QueryBaseSimple*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ownerHash, minSpatialLength, queryPoints, results, center);
}
inline ::WaveHarmonic::Crest::QueryBaseSimple* WaveHarmonic::Crest::QueryBaseSimple::New_ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QueryBaseSimple*>(lod));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryableSimple"
constexpr  WaveHarmonic::Crest::QueryBaseSimple::operator ::WaveHarmonic::Crest::IQueryableSimple*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryableSimple"
constexpr ::WaveHarmonic::Crest::IQueryableSimple* WaveHarmonic::Crest::QueryBaseSimple::i___WaveHarmonic__Crest__IQueryableSimple() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr  WaveHarmonic::Crest::QueryBaseSimple::operator ::WaveHarmonic::Crest::IQueryable*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* WaveHarmonic::Crest::QueryBaseSimple::i___WaveHarmonic__Crest__IQueryable() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryBaseSimple::QueryBaseSimple()   {
}
