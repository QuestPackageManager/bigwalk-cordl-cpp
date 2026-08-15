#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TriggerEvent_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TriggerEvent_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITriggerHandler_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::TriggerEvent_1<T>::LogError(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TriggerEvent_1<T>>(),
                        {"LogError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ex);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TriggerEvent_1<T>::SetResult(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TriggerEvent_1<T>>(),
                        {"SetResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TriggerEvent_1<T>::SetCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TriggerEvent_1<T>>(),
                        {"SetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TriggerEvent_1<T>::SetCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TriggerEvent_1<T>>(),
                        {"SetCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TriggerEvent_1<T>::SetError(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TriggerEvent_1<T>>(),
                        {"SetError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TriggerEvent_1<T>::Add(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TriggerEvent_1<T>>(),
                        {"Add", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handler);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TriggerEvent_1<T>::Remove(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TriggerEvent_1<T>>(),
                        {"Remove", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handler);
}
// Ctor Parameters [CppParam { name: "head", ty: "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "iteratingHead", ty: "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "iteratingNode", ty: "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T>::TriggerEvent_1(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  head, ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  iteratingHead, ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  iteratingNode) noexcept  {
this->head = head;
this->iteratingHead = iteratingHead;
this->iteratingNode = iteratingNode;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T>::TriggerEvent_1()   {
}
