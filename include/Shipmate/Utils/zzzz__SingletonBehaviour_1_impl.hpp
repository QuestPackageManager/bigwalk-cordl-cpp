#pragma once
// IWYU pragma private; include "Shipmate/Utils/SingletonBehaviour_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_def.hpp"
template<typename T>
inline void Shipmate::Utils::SingletonBehaviour_1<T>::setStaticF_mInstance(T  value)  {
::cordl_internals::setStaticField<T, "mInstance", ::Shipmate::Utils::SingletonBehaviour_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T Shipmate::Utils::SingletonBehaviour_1<T>::getStaticF_mInstance()  {
return ::cordl_internals::getStaticField<T, "mInstance", ::Shipmate::Utils::SingletonBehaviour_1<T>*>();
}
template<typename T>
inline void Shipmate::Utils::SingletonBehaviour_1<T>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Utils::SingletonBehaviour_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Shipmate::Utils::SingletonBehaviour_1<T>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Utils::SingletonBehaviour_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Shipmate::Utils::SingletonBehaviour_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::SingletonBehaviour_1<T>*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Shipmate::Utils::SingletonBehaviour_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::SingletonBehaviour_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Shipmate::Utils::SingletonBehaviour_1<T>* Shipmate::Utils::SingletonBehaviour_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Utils::SingletonBehaviour_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Shipmate::Utils::SingletonBehaviour_1<T>::SingletonBehaviour_1()   {
}
