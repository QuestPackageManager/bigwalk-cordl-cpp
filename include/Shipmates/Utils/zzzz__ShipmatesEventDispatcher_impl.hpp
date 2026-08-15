#pragma once
// IWYU pragma private; include "Shipmates/Utils/ShipmatesEventDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/Utils/zzzz__ShipmatesEventDispatcher_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
inline void Shipmates::Utils::ShipmatesEventDispatcher::setStaticF_eventTable(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*, "eventTable", ::Shipmates::Utils::ShipmatesEventDispatcher*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>* Shipmates::Utils::ShipmatesEventDispatcher::getStaticF_eventTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*, "eventTable", ::Shipmates::Utils::ShipmatesEventDispatcher*>();
}
template<typename T>
inline bool Shipmates::Utils::ShipmatesEventDispatcher::IsRegistered(::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  listener)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmates::Utils::ShipmatesEventDispatcher*>(),
                    {"IsRegistered", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, listener);
}
template<typename T>
inline void Shipmates::Utils::ShipmatesEventDispatcher::AddListener(::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  listener)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmates::Utils::ShipmatesEventDispatcher*>(),
                    {"AddListener", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
template<typename T>
inline void Shipmates::Utils::ShipmatesEventDispatcher::RemoveListener(::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  listener)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmates::Utils::ShipmatesEventDispatcher*>(),
                    {"RemoveListener", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Shipmates::Utils::ShipmatesEventDispatcher::Dispatch(T  eventArgs)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmates::Utils::ShipmatesEventDispatcher*>(),
                    {"Dispatch", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, eventArgs);
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::ShipmatesEventDispatcher::ShipmatesEventDispatcher()   {
}
