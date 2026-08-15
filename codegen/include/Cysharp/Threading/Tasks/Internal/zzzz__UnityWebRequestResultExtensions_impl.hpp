#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/UnityWebRequestResultExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__UnityWebRequestResultExtensions_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions.IsError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions::IsError)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e88c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions*>(),
                        {"IsError", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions::IsError(::UnityEngine::Networking::UnityWebRequest*  unityWebRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions*>(),
                        {"IsError", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unityWebRequest);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions::UnityWebRequestResultExtensions()   {
}
