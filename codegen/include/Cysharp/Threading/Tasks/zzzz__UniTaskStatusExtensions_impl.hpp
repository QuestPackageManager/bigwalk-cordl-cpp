#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskStatusExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatusExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskStatusExtensions.IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Cysharp::Threading::Tasks::UniTaskStatus)>(&::Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816a1270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsCompleted", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskStatusExtensions.IsCompletedSuccessfully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Cysharp::Threading::Tasks::UniTaskStatus)>(&::Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsCompletedSuccessfully)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e6c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsCompletedSuccessfully", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskStatusExtensions.IsCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Cysharp::Threading::Tasks::UniTaskStatus)>(&::Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e6c660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsCanceled", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskStatusExtensions.IsFaulted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Cysharp::Threading::Tasks::UniTaskStatus)>(&::Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsFaulted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e6c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsFaulted", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsCompleted(::Cysharp::Threading::Tasks::UniTaskStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsCompleted", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, status);
}
inline bool Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsCompletedSuccessfully(::Cysharp::Threading::Tasks::UniTaskStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsCompletedSuccessfully", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, status);
}
inline bool Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsCanceled(::Cysharp::Threading::Tasks::UniTaskStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsCanceled", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, status);
}
inline bool Cysharp::Threading::Tasks::UniTaskStatusExtensions::IsFaulted(::Cysharp::Threading::Tasks::UniTaskStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskStatusExtensions*>(),
                        {"IsFaulted", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, status);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskStatusExtensions::UniTaskStatusExtensions()   {
}
