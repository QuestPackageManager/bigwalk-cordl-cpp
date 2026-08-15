#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEffectRenderer_1.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
template<typename T>
constexpr T& UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::__cordl_internal_get__settings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings_k__BackingField;
}
template<typename T>
constexpr T const& UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::__cordl_internal_get__settings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings_k__BackingField;
}
template<typename T>
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::__cordl_internal_set__settings_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings_k__BackingField = value;
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>*>(),
                        {"get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::set_settings(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>*>(),
                        {"set_settings", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::SetSettings(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>* UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>::PostProcessEffectRenderer_1()   {
}
