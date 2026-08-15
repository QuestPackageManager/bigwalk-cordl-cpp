#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryPerCameraSimple_1.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryPerCamera_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryPerCameraSimple_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryableSimple_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryable_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
template<typename T>
inline void WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCameraSimple_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
template<typename T>
inline int32_t WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::Query(int32_t  id, float_t  length, ::ArrayW<::UnityEngine::Vector3>  queries, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCameraSimple_1<T>*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id, length, queries, results, center);
}
template<typename T>
inline ::WaveHarmonic::Crest::QueryPerCameraSimple_1<T>* WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QueryPerCameraSimple_1<T>*>(water));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryableSimple"
template<typename T>
constexpr  WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::operator ::WaveHarmonic::Crest::IQueryableSimple*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryableSimple"
template<typename T>
constexpr ::WaveHarmonic::Crest::IQueryableSimple* WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::i___WaveHarmonic__Crest__IQueryableSimple() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
template<typename T>
constexpr  WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::operator ::WaveHarmonic::Crest::IQueryable*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
template<typename T>
constexpr ::WaveHarmonic::Crest::IQueryable* WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::i___WaveHarmonic__Crest__IQueryable() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::WaveHarmonic::Crest::QueryPerCameraSimple_1<T>::QueryPerCameraSimple_1()   {
}
