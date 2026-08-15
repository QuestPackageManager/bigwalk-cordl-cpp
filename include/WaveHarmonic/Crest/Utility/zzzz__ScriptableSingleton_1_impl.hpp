#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/ScriptableSingleton_1.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__ScriptableSingleton_1_def.hpp"
template<typename T>
inline void WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>::setStaticF__Instance_k__BackingField(T  value)  {
::cordl_internals::setStaticField<T, "<Instance>k__BackingField", ::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<T, "<Instance>k__BackingField", ::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>*>();
}
template<typename T>
inline T WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>::set_Instance(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>*>(),
                        {"set_Instance", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline void WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>* WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<T>::ScriptableSingleton_1()   {
}
