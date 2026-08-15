#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformUsers.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformUsers_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlatformUsers_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__AuthTypes_def.hpp"
#include "Shipmate/Porting/zzzz__BaseAuthValues_def.hpp"
#include "Shipmate/Porting/zzzz__EUserFetchingType_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.FetchMainUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)(::Shipmate::Porting::EUserFetchingType)>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::FetchMainUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.RevokeMainUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::RevokeMainUser)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.get_MainUserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::get_MainUserName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.get_HasUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::get_HasUser)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.GetAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*> (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)(bool, ::System::Threading::CancellationToken, bool)>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::GetAuth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ac9910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.CleanupAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::CleanupAuth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.get_LocalPlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AuthTypes (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::get_LocalPlatformType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::get_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformUsers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformUsers::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformUsers::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlatformUsers::FetchMainUser(::Shipmate::Porting::EUserFetchingType  aRequestAccountPicker)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aRequestAccountPicker);
}
inline void Shipmate::Porting::Mocked::MockedPlatformUsers::RevokeMainUser()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::Mocked::MockedPlatformUsers::get_MainUserName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Shipmate::Porting::Mocked::MockedPlatformUsers::get_HasUser()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*> Shipmate::Porting::Mocked::MockedPlatformUsers::GetAuth(bool  aRequireOnlineAccount, ::System::Threading::CancellationToken  cancellationToken, bool  skipUpsell)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*>>(this, ___internal_method, aRequireOnlineAccount, cancellationToken, skipUpsell);
}
inline void Shipmate::Porting::Mocked::MockedPlatformUsers::CleanupAuth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AuthTypes Shipmate::Porting::Mocked::MockedPlatformUsers::get_LocalPlatformType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AuthTypes>(this, ___internal_method);
}
inline uint64_t Shipmate::Porting::Mocked::MockedPlatformUsers::get_UserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Shipmate::Porting::Mocked::MockedPlatformUsers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformUsers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Mocked::MockedPlatformUsers* Shipmate::Porting::Mocked::MockedPlatformUsers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlatformUsers*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlatformUsers::MockedPlatformUsers()   {
}
