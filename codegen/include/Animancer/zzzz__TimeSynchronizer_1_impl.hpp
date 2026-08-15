#pragma once
// IWYU pragma private; include "Animancer/TimeSynchronizer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__TimeSynchronizer_1_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
template<typename T>
constexpr T& Animancer::TimeSynchronizer_1<T>::__cordl_internal_get__CurrentGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentGroup_k__BackingField;
}
template<typename T>
constexpr T const& Animancer::TimeSynchronizer_1<T>::__cordl_internal_get__CurrentGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentGroup_k__BackingField;
}
template<typename T>
constexpr void Animancer::TimeSynchronizer_1<T>::__cordl_internal_set__CurrentGroup_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentGroup_k__BackingField = value;
}
template<typename T>
constexpr bool& Animancer::TimeSynchronizer_1<T>::__cordl_internal_get__SynchronizeDefaultGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynchronizeDefaultGroup_k__BackingField;
}
template<typename T>
constexpr bool const& Animancer::TimeSynchronizer_1<T>::__cordl_internal_get__SynchronizeDefaultGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynchronizeDefaultGroup_k__BackingField;
}
template<typename T>
constexpr void Animancer::TimeSynchronizer_1<T>::__cordl_internal_set__SynchronizeDefaultGroup_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SynchronizeDefaultGroup_k__BackingField = value;
}
template<typename T>
constexpr double_t& Animancer::TimeSynchronizer_1<T>::__cordl_internal_get__NormalizedTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedTime_k__BackingField;
}
template<typename T>
constexpr double_t const& Animancer::TimeSynchronizer_1<T>::__cordl_internal_get__NormalizedTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedTime_k__BackingField;
}
template<typename T>
constexpr void Animancer::TimeSynchronizer_1<T>::__cordl_internal_set__NormalizedTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NormalizedTime_k__BackingField = value;
}
template<typename T>
inline T Animancer::TimeSynchronizer_1<T>::get_CurrentGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"get_CurrentGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Animancer::TimeSynchronizer_1<T>::set_CurrentGroup(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"set_CurrentGroup", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool Animancer::TimeSynchronizer_1<T>::get_SynchronizeDefaultGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"get_SynchronizeDefaultGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Animancer::TimeSynchronizer_1<T>::set_SynchronizeDefaultGroup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"set_SynchronizeDefaultGroup", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline double_t Animancer::TimeSynchronizer_1<T>::get_NormalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
template<typename T>
inline void Animancer::TimeSynchronizer_1<T>::set_NormalizedTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Animancer::TimeSynchronizer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Animancer::TimeSynchronizer_1<T>::_ctor(T  group, bool  synchronizeDefaultGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, synchronizeDefaultGroup);
}
template<typename T>
inline void Animancer::TimeSynchronizer_1<T>::StoreTime(::Animancer::AnimancerLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"StoreTime", {}, {::i2c::type_of<::Animancer::AnimancerLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layer);
}
template<typename T>
inline void Animancer::TimeSynchronizer_1<T>::StoreTime(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"StoreTime", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename T>
inline bool Animancer::TimeSynchronizer_1<T>::SyncTime(::Animancer::AnimancerLayer*  layer, T  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"SyncTime", {}, {::i2c::type_of<::Animancer::AnimancerLayer*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer, group);
}
template<typename T>
inline bool Animancer::TimeSynchronizer_1<T>::SyncTime(::Animancer::AnimancerLayer*  layer, T  group, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"SyncTime", {}, {::i2c::type_of<::Animancer::AnimancerLayer*>(), ::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer, group, deltaTime);
}
template<typename T>
inline bool Animancer::TimeSynchronizer_1<T>::SyncTime(::Animancer::AnimancerState*  state, T  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"SyncTime", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state, group);
}
template<typename T>
inline bool Animancer::TimeSynchronizer_1<T>::SyncTime(::Animancer::AnimancerState*  state, T  group, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizer_1<T>*>(),
                        {"SyncTime", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state, group, deltaTime);
}
template<typename T>
inline ::Animancer::TimeSynchronizer_1<T>* Animancer::TimeSynchronizer_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::TimeSynchronizer_1<T>*>());
}
template<typename T>
inline ::Animancer::TimeSynchronizer_1<T>* Animancer::TimeSynchronizer_1<T>::New_ctor(T  group, bool  synchronizeDefaultGroup)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::TimeSynchronizer_1<T>*>(group, synchronizeDefaultGroup));
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::TimeSynchronizer_1<T>::TimeSynchronizer_1()   {
}
