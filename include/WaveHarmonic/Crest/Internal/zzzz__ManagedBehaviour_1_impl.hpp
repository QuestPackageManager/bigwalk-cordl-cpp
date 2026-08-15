#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/ManagedBehaviour_1.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomBehaviour_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr ::System::Action_1<T>*& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnUpdate;
}
template<typename T>
constexpr ::System::Action_1<T>* const& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnUpdate;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_set__OnUpdate(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnUpdate = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnLateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnLateUpdate;
}
template<typename T>
constexpr ::System::Action_1<T>* const& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnLateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnLateUpdate;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_set__OnLateUpdate(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnLateUpdate = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnFixedUpdate;
}
template<typename T>
constexpr ::System::Action_1<T>* const& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnFixedUpdate;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_set__OnFixedUpdate(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnFixedUpdate = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnEnable;
}
template<typename T>
constexpr ::System::Action_1<T>* const& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnEnable;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_set__OnEnable(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnEnable = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnDisable;
}
template<typename T>
constexpr ::System::Action_1<T>* const& WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_get__OnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnDisable;
}
template<typename T>
constexpr void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::__cordl_internal_set__OnDisable(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnDisable = value;
}
template<typename T>
inline ::System::Action_1<T>* WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Action_1<T>* WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::get_OnLateUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Action_1<T>* WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::get_OnFixedUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Action_1<T>* WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::get_OnEnableMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Action_1<T>* WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::get_OnDisableMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::UpdateSubscription(bool  listen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>(),
                        {"UpdateSubscription", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listen);
}
template<typename T>
inline ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>* WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>::ManagedBehaviour_1()   {
}
