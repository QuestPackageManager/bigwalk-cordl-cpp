#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryPerCamera_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryPerCamera_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryable_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
template<typename T>
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::QueryPerCamera_1<T>::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
template<typename T>
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::QueryPerCamera_1<T>::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
template<typename T>
constexpr void WaveHarmonic::Crest::QueryPerCamera_1<T>::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>*& WaveHarmonic::Crest::QueryPerCamera_1<T>::__cordl_internal_get__Providers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Providers;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>* const& WaveHarmonic::Crest::QueryPerCamera_1<T>::__cordl_internal_get__Providers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Providers;
}
template<typename T>
constexpr void WaveHarmonic::Crest::QueryPerCamera_1<T>::__cordl_internal_set__Providers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Providers = value;
}
template<typename T>
inline void WaveHarmonic::Crest::QueryPerCamera_1<T>::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
template<typename T>
inline int32_t WaveHarmonic::Crest::QueryPerCamera_1<T>::get_ResultGuidCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"get_ResultGuidCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t WaveHarmonic::Crest::QueryPerCamera_1<T>::get_RequestCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"get_RequestCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t WaveHarmonic::Crest::QueryPerCamera_1<T>::get_QueryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"get_QueryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::QueryPerCamera_1<T>::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"CleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::QueryPerCamera_1<T>::Initialize(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"Initialize", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
template<typename T>
inline void WaveHarmonic::Crest::QueryPerCamera_1<T>::SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
template<typename T>
inline void WaveHarmonic::Crest::QueryPerCamera_1<T>::UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
template<typename T>
inline ::UnityEngine::Vector2 WaveHarmonic::Crest::QueryPerCamera_1<T>::FindCenter(::ArrayW<::UnityEngine::Vector3>  queries, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(),
                        {"FindCenter", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, queries, center);
}
template<typename T>
inline ::WaveHarmonic::Crest::QueryPerCamera_1<T>* WaveHarmonic::Crest::QueryPerCamera_1<T>::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QueryPerCamera_1<T>*>(water));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
template<typename T>
constexpr  WaveHarmonic::Crest::QueryPerCamera_1<T>::operator ::WaveHarmonic::Crest::IQueryable*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
template<typename T>
constexpr ::WaveHarmonic::Crest::IQueryable* WaveHarmonic::Crest::QueryPerCamera_1<T>::i___WaveHarmonic__Crest__IQueryable() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::WaveHarmonic::Crest::QueryPerCamera_1<T>::QueryPerCamera_1()   {
}
