#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotion_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/zzzz__RedirectRootMotion_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
template<typename T>
constexpr ::UnityW<::UnityEngine::Animator>& Animancer::RedirectRootMotion_1<T>::__cordl_internal_get__Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Animator> const& Animancer::RedirectRootMotion_1<T>::__cordl_internal_get__Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
template<typename T>
constexpr void Animancer::RedirectRootMotion_1<T>::__cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animator = value;
}
template<typename T>
constexpr T& Animancer::RedirectRootMotion_1<T>::__cordl_internal_get__Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
template<typename T>
constexpr T const& Animancer::RedirectRootMotion_1<T>::__cordl_internal_get__Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
template<typename T>
constexpr void Animancer::RedirectRootMotion_1<T>::__cordl_internal_set__Target(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Target = value;
}
template<typename T>
inline ::by_ref<::UnityW<::UnityEngine::Animator>> Animancer::RedirectRootMotion_1<T>::get_Animator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotion_1<T>*>(),
                        {"get_Animator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::Animator>>>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> Animancer::RedirectRootMotion_1<T>::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotion_1<T>*>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline bool Animancer::RedirectRootMotion_1<T>::get_ApplyRootMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotion_1<T>*>(),
                        {"get_ApplyRootMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Animancer::RedirectRootMotion_1<T>::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::RedirectRootMotion_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Animancer::RedirectRootMotion_1<T>::OnAnimatorMove()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::RedirectRootMotion_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Animancer::RedirectRootMotion_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotion_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Animancer::RedirectRootMotion_1<T>* Animancer::RedirectRootMotion_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::RedirectRootMotion_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::RedirectRootMotion_1<T>::RedirectRootMotion_1()   {
}
