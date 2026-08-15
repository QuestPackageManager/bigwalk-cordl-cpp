#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenEqualityComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenEqualityComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x18098c7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e5d720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::*)()>(&::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::setStaticF_Default(::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*, "Default", ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>* Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*, "Default", ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>();
}
inline bool Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::Equals(::System::Threading::CancellationToken  x, ::System::Threading::CancellationToken  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::GetHashCode(::System::Threading::CancellationToken  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer* Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>"
constexpr  Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>* Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Threading__CancellationToken_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer::CancellationTokenEqualityComparer()   {
}
