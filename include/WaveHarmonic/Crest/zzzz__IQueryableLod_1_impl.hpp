#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IQueryableLod_1.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryableLod_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodQuerySource_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
template<typename T>
inline ::StringW WaveHarmonic::Crest::IQueryableLod_1<T>::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline bool WaveHarmonic::Crest::IQueryableLod_1<T>::get_Enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::UnityW<::WaveHarmonic::Crest::WaterRenderer> WaveHarmonic::Crest::IQueryableLod_1<T>::get_Water()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>(this, ___internal_method);
}
template<typename T>
inline int32_t WaveHarmonic::Crest::IQueryableLod_1<T>::get_MaximumQueryCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline float_t WaveHarmonic::Crest::IQueryableLod_1<T>::get_Texel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline ::WaveHarmonic::Crest::LodQuerySource WaveHarmonic::Crest::IQueryableLod_1<T>::get_QuerySource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IQueryableLod_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodQuerySource>(this, ___internal_method);
}
