#pragma once
// IWYU pragma private; include "Animancer/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__ObjectPool_1_def.hpp"
#include "Animancer/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void Animancer::ObjectPool_1_Disposable<T>::_ctor(::by_ref<T>  item, ::System::Action_1<T>*  onRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1_Disposable<T>>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, onRelease);
}
template<typename T>
inline void Animancer::ObjectPool_1_Disposable<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1_Disposable<T>>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Animancer::ObjectPool_1_Disposable<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Animancer::ObjectPool_1_Disposable<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "OnRelease", ty: "::System::Action_1<T>*", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Animancer::ObjectPool_1_Disposable<T>::ObjectPool_1_Disposable(T  Item, ::System::Action_1<T>*  OnRelease) noexcept  {
this->Item = Item;
this->OnRelease = OnRelease;
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::ObjectPool_1_Disposable<T>::ObjectPool_1_Disposable()   {
}
template<typename T>
inline void Animancer::ObjectPool_1<T>::setStaticF_Items(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<T>*, "Items", ::Animancer::ObjectPool_1<T>*>(std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Animancer::ObjectPool_1<T>::getStaticF_Items()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<T>*, "Items", ::Animancer::ObjectPool_1<T>*>();
}
template<typename T>
inline int32_t Animancer::ObjectPool_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template<typename T>
inline void Animancer::ObjectPool_1<T>::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline void Animancer::ObjectPool_1<T>::IncreaseCountTo(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"IncreaseCountTo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count);
}
template<typename T>
inline int32_t Animancer::ObjectPool_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template<typename T>
inline void Animancer::ObjectPool_1<T>::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline void Animancer::ObjectPool_1<T>::IncreaseCapacityTo(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"IncreaseCapacityTo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, capacity);
}
template<typename T>
inline T Animancer::ObjectPool_1<T>::Acquire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"Acquire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Animancer::ObjectPool_1<T>::Release(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
template<typename T>
inline ::StringW Animancer::ObjectPool_1<T>::GetDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_1<T>*>(),
                        {"GetDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::ObjectPool_1<T>::ObjectPool_1()   {
}
