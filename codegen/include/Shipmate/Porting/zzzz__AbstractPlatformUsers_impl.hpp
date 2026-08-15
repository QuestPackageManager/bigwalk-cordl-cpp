#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformUsers.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformUsers_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformUsers_def.hpp"
#include "Shipmate/Porting/zzzz__AuthTypes_def.hpp"
#include "Shipmate/Porting/zzzz__BaseAuthValues_def.hpp"
#include "Shipmate/Porting/zzzz__EUserFetchingType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::*)()>(&::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181ac7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformUsers*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::AbstractPlatformUsers__DispatchLogout_d__14(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformUsers*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14::AbstractPlatformUsers__DispatchLogout_d__14()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.add_UserLoggedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers::*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*)>(&::Shipmate::Porting::AbstractPlatformUsers::add_UserLoggedOut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"add_UserLoggedOut", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.remove_UserLoggedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers::*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*)>(&::Shipmate::Porting::AbstractPlatformUsers::remove_UserLoggedOut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac6260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"remove_UserLoggedOut", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.FetchMainUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformUsers::*)(::Shipmate::Porting::EUserFetchingType)>(&::Shipmate::Porting::AbstractPlatformUsers::FetchMainUser)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.RevokeMainUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::RevokeMainUser)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.get_MainUserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::get_MainUserName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::get_UserId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.get_HasUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::get_HasUser)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.GetAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*> (::Shipmate::Porting::AbstractPlatformUsers::*)(bool, ::System::Threading::CancellationToken, bool)>(&::Shipmate::Porting::AbstractPlatformUsers::GetAuth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.CleanupAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::CleanupAuth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.DispatchLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::DispatchLogout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac6110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"DispatchLogout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.HasCrossplayPrivilege
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::HasCrossplayPrivilege)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.RefreshPriviledges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::RefreshPriviledges)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.HasUGCPriviledges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::HasUGCPriviledges)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.set_ShouldWatchForUserChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers::*)(bool)>(&::Shipmate::Porting::AbstractPlatformUsers::set_ShouldWatchForUserChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"set_ShouldWatchForUserChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers.get_LocalPlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AuthTypes (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::get_LocalPlatformType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformUsers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformUsers::*)()>(&::Shipmate::Porting::AbstractPlatformUsers::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*& Shipmate::Porting::AbstractPlatformUsers::__cordl_internal_get_UserLoggedOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserLoggedOut;
}
constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* const& Shipmate::Porting::AbstractPlatformUsers::__cordl_internal_get_UserLoggedOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserLoggedOut;
}
constexpr void Shipmate::Porting::AbstractPlatformUsers::__cordl_internal_set_UserLoggedOut(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserLoggedOut = value;
}
constexpr bool& Shipmate::Porting::AbstractPlatformUsers::__cordl_internal_get_mShouldWatchForUserChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mShouldWatchForUserChange;
}
constexpr bool const& Shipmate::Porting::AbstractPlatformUsers::__cordl_internal_get_mShouldWatchForUserChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mShouldWatchForUserChange;
}
constexpr void Shipmate::Porting::AbstractPlatformUsers::__cordl_internal_set_mShouldWatchForUserChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mShouldWatchForUserChange = value;
}
inline void Shipmate::Porting::AbstractPlatformUsers::add_UserLoggedOut(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"add_UserLoggedOut", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformUsers::remove_UserLoggedOut(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"remove_UserLoggedOut", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformUsers::FetchMainUser(::Shipmate::Porting::EUserFetchingType  aRequestAccountPicker)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aRequestAccountPicker);
}
inline void Shipmate::Porting::AbstractPlatformUsers::RevokeMainUser()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::AbstractPlatformUsers::get_MainUserName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint64_t Shipmate::Porting::AbstractPlatformUsers::get_UserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlatformUsers::get_HasUser()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*> Shipmate::Porting::AbstractPlatformUsers::GetAuth(bool  aRequireOnlineAccount, ::System::Threading::CancellationToken  cancellationToken, bool  skipUpsell)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*>>(this, ___internal_method, aRequireOnlineAccount, cancellationToken, skipUpsell);
}
inline void Shipmate::Porting::AbstractPlatformUsers::CleanupAuth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformUsers::DispatchLogout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"DispatchLogout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlatformUsers::HasCrossplayPrivilege()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformUsers::RefreshPriviledges()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlatformUsers::HasUGCPriviledges()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformUsers::set_ShouldWatchForUserChange(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {"set_ShouldWatchForUserChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Shipmate::Porting::AuthTypes Shipmate::Porting::AbstractPlatformUsers::get_LocalPlatformType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AuthTypes>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformUsers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformUsers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformUsers* Shipmate::Porting::AbstractPlatformUsers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformUsers*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformUsers::AbstractPlatformUsers()   {
}
