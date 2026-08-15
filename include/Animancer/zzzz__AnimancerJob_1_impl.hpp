#pragma once
// IWYU pragma private; include "Animancer/AnimancerJob_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_impl.hpp"
#include "Animancer/zzzz__AnimancerJob_1_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
template<typename T>
constexpr T& Animancer::AnimancerJob_1<T>::__cordl_internal_get__Job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Job;
}
template<typename T>
constexpr T const& Animancer::AnimancerJob_1<T>::__cordl_internal_get__Job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Job;
}
template<typename T>
constexpr void Animancer::AnimancerJob_1<T>::__cordl_internal_set__Job(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Job = value;
}
template<typename T>
constexpr ::UnityEngine::Animations::AnimationScriptPlayable& Animancer::AnimancerJob_1<T>::__cordl_internal_get__Playable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
template<typename T>
constexpr ::UnityEngine::Animations::AnimationScriptPlayable const& Animancer::AnimancerJob_1<T>::__cordl_internal_get__Playable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
template<typename T>
constexpr void Animancer::AnimancerJob_1<T>::__cordl_internal_set__Playable(::UnityEngine::Animations::AnimationScriptPlayable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Playable = value;
}
template<typename T>
inline void Animancer::AnimancerJob_1<T>::CreatePlayable(::Animancer::AnimancerPlayable*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerJob_1<T>*>(),
                        {"CreatePlayable", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer);
}
template<typename T>
inline void Animancer::AnimancerJob_1<T>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerJob_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Animancer::AnimancerJob_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerJob_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Animancer::AnimancerJob_1<T>* Animancer::AnimancerJob_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerJob_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::AnimancerJob_1<T>::AnimancerJob_1()   {
}
