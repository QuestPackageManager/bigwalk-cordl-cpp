#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Lod_1.hpp"
#include "WaveHarmonic/Crest/zzzz__LodQuerySource_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryableLod_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodQuerySource_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
template<typename T>
constexpr ::WaveHarmonic::Crest::LodQuerySource& WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_get__QuerySource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QuerySource;
}
template<typename T>
constexpr ::WaveHarmonic::Crest::LodQuerySource const& WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_get__QuerySource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QuerySource;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_set__QuerySource(::WaveHarmonic::Crest::LodQuerySource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QuerySource = value;
}
template<typename T>
constexpr int32_t& WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_get__MaximumQueryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumQueryCount;
}
template<typename T>
constexpr int32_t const& WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_get__MaximumQueryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumQueryCount;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_set__MaximumQueryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumQueryCount = value;
}
template<typename T>
constexpr T& WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_get__Provider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Provider_k__BackingField;
}
template<typename T>
constexpr T const& WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_get__Provider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Provider_k__BackingField;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Lod_1<T>::__cordl_internal_set__Provider_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Provider_k__BackingField = value;
}
template<typename T>
inline T WaveHarmonic::Crest::Lod_1<T>::get_Provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"get_Provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Lod_1<T>::set_Provider(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"set_Provider", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::UnityW<::WaveHarmonic::Crest::WaterRenderer> WaveHarmonic::Crest::Lod_1<T>::WaveHarmonic_Crest_IQueryableLod_T__get_Water()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"WaveHarmonic.Crest.IQueryableLod<T>.get_Water", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>(this, ___internal_method);
}
template<typename T>
inline ::StringW WaveHarmonic::Crest::Lod_1<T>::WaveHarmonic_Crest_IQueryableLod_T__get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"WaveHarmonic.Crest.IQueryableLod<T>.get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline float_t WaveHarmonic::Crest::Lod_1<T>::WaveHarmonic_Crest_IQueryableLod_T__get_Texel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"WaveHarmonic.Crest.IQueryableLod<T>.get_Texel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline T WaveHarmonic::Crest::Lod_1<T>::CreateProvider(bool  onEnable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, onEnable);
}
template<typename T>
inline void WaveHarmonic::Crest::Lod_1<T>::SetGlobals(bool  onEnable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onEnable);
}
template<typename T>
inline void WaveHarmonic::Crest::Lod_1<T>::InitializeProvider(bool  onEnable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"InitializeProvider", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onEnable);
}
template<typename T>
inline void WaveHarmonic::Crest::Lod_1<T>::AfterExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t WaveHarmonic::Crest::Lod_1<T>::get_MaximumQueryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"get_MaximumQueryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::WaveHarmonic::Crest::LodQuerySource WaveHarmonic::Crest::Lod_1<T>::get_QuerySource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"get_QuerySource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodQuerySource>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Lod_1<T>::set_QuerySource(::WaveHarmonic::Crest::LodQuerySource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {"set_QuerySource", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodQuerySource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void WaveHarmonic::Crest::Lod_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::WaveHarmonic::Crest::Lod_1<T>* WaveHarmonic::Crest::Lod_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Lod_1<T>*>());
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryableLod_1<T>"
template<typename T>
constexpr  WaveHarmonic::Crest::Lod_1<T>::operator ::WaveHarmonic::Crest::IQueryableLod_1<T>*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryableLod_1<T>"
template<typename T>
constexpr ::WaveHarmonic::Crest::IQueryableLod_1<T>* WaveHarmonic::Crest::Lod_1<T>::i___WaveHarmonic__Crest__IQueryableLod_1_T_() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::WaveHarmonic::Crest::Lod_1<T>::Lod_1()   {
}
