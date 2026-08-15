#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCancellationExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCancellationExtensions_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCancellationExtensions.GetCancellationTokenOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)(::UnityEngine::MonoBehaviour*)>(&::Cysharp::Threading::Tasks::UniTaskCancellationExtensions::GetCancellationTokenOnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e69610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*>(),
                        {"GetCancellationTokenOnDestroy", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCancellationExtensions.GetCancellationTokenOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)(::UnityEngine::GameObject*)>(&::Cysharp::Threading::Tasks::UniTaskCancellationExtensions::GetCancellationTokenOnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e69690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*>(),
                        {"GetCancellationTokenOnDestroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCancellationExtensions.GetCancellationTokenOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)(::UnityEngine::Component*)>(&::Cysharp::Threading::Tasks::UniTaskCancellationExtensions::GetCancellationTokenOnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e69630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*>(),
                        {"GetCancellationTokenOnDestroy", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::UniTaskCancellationExtensions::GetCancellationTokenOnDestroy(::UnityEngine::MonoBehaviour*  monoBehaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*>(),
                        {"GetCancellationTokenOnDestroy", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, monoBehaviour);
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::UniTaskCancellationExtensions::GetCancellationTokenOnDestroy(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*>(),
                        {"GetCancellationTokenOnDestroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, gameObject);
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::UniTaskCancellationExtensions::GetCancellationTokenOnDestroy(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*>(),
                        {"GetCancellationTokenOnDestroy", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, component);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskCancellationExtensions::UniTaskCancellationExtensions()   {
}
