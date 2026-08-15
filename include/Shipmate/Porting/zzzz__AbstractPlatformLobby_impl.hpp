#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformLobby.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLobby_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLobby_def.hpp"
#include "Shipmate/Porting/zzzz__LobbyData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::*)()>(&::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181ac7ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::AbstractPlatformLobby__JoinLobby_d__16(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16::AbstractPlatformLobby__JoinLobby_d__16()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::*)()>(&::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac8180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::AbstractPlatformLobby__LeaveLobby_d__21(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21::AbstractPlatformLobby__LeaveLobby_d__21()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::*)()>(&::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac8e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aData", ty: "::Shipmate::Porting::LobbyData*", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::AbstractPlatformLobby__SetLobbyData_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this, ::Shipmate::Porting::LobbyData*  aData) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->aData = aData;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22::AbstractPlatformLobby__SetLobbyData_d__22()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::*)()>(&::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac8e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aData", ty: "::Shipmate::Porting::LobbyData*", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this, ::Shipmate::Porting::LobbyData*  aData) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->aData = aData;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.add_LobbyInviteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformLobby::add_LobbyInviteAccepted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181a8dfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"add_LobbyInviteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.remove_LobbyInviteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformLobby::remove_LobbyInviteAccepted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181a8df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"remove_LobbyInviteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.add_LobbyJoinedSuccesfully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformLobby::add_LobbyJoinedSuccesfully)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fc2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"add_LobbyJoinedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.remove_LobbyJoinedSuccesfully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformLobby::remove_LobbyJoinedSuccesfully)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fc360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"remove_LobbyJoinedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.add_LobbyCreatedSuccesfully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformLobby::add_LobbyCreatedSuccesfully)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"add_LobbyCreatedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.remove_LobbyCreatedSuccesfully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformLobby::remove_LobbyCreatedSuccesfully)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"remove_LobbyCreatedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.CreateLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)(::StringW, bool)>(&::Shipmate::Porting::AbstractPlatformLobby::CreateLobby)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.JoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)(::StringW)>(&::Shipmate::Porting::AbstractPlatformLobby::JoinLobby)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.JoinPendingLobbyInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::JoinPendingLobbyInvite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.ShowInviteFriendInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::ShowInviteFriendInterface)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.GetOnlineFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::GetOnlineFriends)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.GetAllFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::GetAllFriends)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.LeaveLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::LeaveLobby)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac54d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.SetLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)(::Shipmate::Porting::LobbyData*)>(&::Shipmate::Porting::AbstractPlatformLobby::SetLobbyData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.SetLobbyDataPreCreation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)(::Shipmate::Porting::LobbyData*)>(&::Shipmate::Porting::AbstractPlatformLobby::SetLobbyDataPreCreation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.FetchLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::FetchLobbyData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.SetPendingLobbyInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::StringW)>(&::Shipmate::Porting::AbstractPlatformLobby::SetPendingLobbyInvite)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ac55f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"SetPendingLobbyInvite", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.ClearPendingLobbyInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::ClearPendingLobbyInvite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"ClearPendingLobbyInvite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.CanJoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlatformLobby::*)(::StringW)>(&::Shipmate::Porting::AbstractPlatformLobby::CanJoinLobby)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ac5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.JoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::JoinedLobby)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac54a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"JoinedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.CreatedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::CreatedLobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac5410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"CreatedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.get_PendingLobbyInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::get_PendingLobbyInvite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"get_PendingLobbyInvite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.get_CurrentLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::LobbyData* (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::get_CurrentLobbyData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"get_CurrentLobbyData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.get_CreateSoloLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::get_CreateSoloLobby)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.set_IsCrossPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(bool)>(&::Shipmate::Porting::AbstractPlatformLobby::set_IsCrossPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180499eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"set_IsCrossPlatform", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.SetLobbyDataCreationFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::System::Func_1<::Shipmate::Porting::LobbyData*>*)>(&::Shipmate::Porting::AbstractPlatformLobby::SetLobbyDataCreationFunc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"SetLobbyDataCreationFunc", {}, {::i2c::type_of<::System::Func_1<::Shipmate::Porting::LobbyData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.CreateLobbyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::LobbyData* (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::CreateLobbyData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac53d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"CreateLobbyData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.get_DummyLobbyNameToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::get_DummyLobbyNameToUse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"get_DummyLobbyNameToUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby.set_DummyLobbyNameToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)(::StringW)>(&::Shipmate::Porting::AbstractPlatformLobby::set_DummyLobbyNameToUse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"set_DummyLobbyNameToUse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLobby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLobby::*)()>(&::Shipmate::Porting::AbstractPlatformLobby::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_LobbyInviteAccepted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyInviteAccepted;
}
constexpr ::System::Action* const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_LobbyInviteAccepted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyInviteAccepted;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_LobbyInviteAccepted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyInviteAccepted = value;
}
constexpr ::System::Action*& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_LobbyJoinedSuccesfully()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyJoinedSuccesfully;
}
constexpr ::System::Action* const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_LobbyJoinedSuccesfully() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyJoinedSuccesfully;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_LobbyJoinedSuccesfully(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyJoinedSuccesfully = value;
}
constexpr ::System::Action*& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_LobbyCreatedSuccesfully()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyCreatedSuccesfully;
}
constexpr ::System::Action* const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_LobbyCreatedSuccesfully() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyCreatedSuccesfully;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_LobbyCreatedSuccesfully(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyCreatedSuccesfully = value;
}
constexpr bool& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mIsPlayingCrossplatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mIsPlayingCrossplatform;
}
constexpr bool const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mIsPlayingCrossplatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mIsPlayingCrossplatform;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_mIsPlayingCrossplatform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mIsPlayingCrossplatform = value;
}
constexpr ::StringW& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mPendingLobbyInvite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPendingLobbyInvite;
}
constexpr ::StringW const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mPendingLobbyInvite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPendingLobbyInvite;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_mPendingLobbyInvite(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mPendingLobbyInvite = value;
}
constexpr ::Shipmate::Porting::LobbyData*& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mCurrentLobbyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCurrentLobbyData;
}
constexpr ::Shipmate::Porting::LobbyData* const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mCurrentLobbyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCurrentLobbyData;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_mCurrentLobbyData(::Shipmate::Porting::LobbyData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCurrentLobbyData = value;
}
constexpr ::StringW& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mDummyLobbyNameToUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mDummyLobbyNameToUse;
}
constexpr ::StringW const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mDummyLobbyNameToUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mDummyLobbyNameToUse;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_mDummyLobbyNameToUse(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mDummyLobbyNameToUse = value;
}
constexpr ::System::Func_1<::Shipmate::Porting::LobbyData*>*& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mCreateLobbyDataFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCreateLobbyDataFunc;
}
constexpr ::System::Func_1<::Shipmate::Porting::LobbyData*>* const& Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_get_mCreateLobbyDataFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCreateLobbyDataFunc;
}
constexpr void Shipmate::Porting::AbstractPlatformLobby::__cordl_internal_set_mCreateLobbyDataFunc(::System::Func_1<::Shipmate::Porting::LobbyData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCreateLobbyDataFunc = value;
}
inline void Shipmate::Porting::AbstractPlatformLobby::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformLobby*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::AbstractPlatformLobby::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformLobby*>();
}
inline void Shipmate::Porting::AbstractPlatformLobby::add_LobbyInviteAccepted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"add_LobbyInviteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformLobby::remove_LobbyInviteAccepted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"remove_LobbyInviteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformLobby::add_LobbyJoinedSuccesfully(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"add_LobbyJoinedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformLobby::remove_LobbyJoinedSuccesfully(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"remove_LobbyJoinedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformLobby::add_LobbyCreatedSuccesfully(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"add_LobbyCreatedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformLobby::remove_LobbyCreatedSuccesfully(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"remove_LobbyCreatedSuccesfully", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::CreateLobby(::StringW  aLobbyId, bool  aIsPrivate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aLobbyId, aIsPrivate);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::JoinLobby(::StringW  aLobbyId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aLobbyId);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::JoinPendingLobbyInvite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::ShowInviteFriendInterface()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> Shipmate::Porting::AbstractPlatformLobby::GetOnlineFriends()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> Shipmate::Porting::AbstractPlatformLobby::GetAllFriends()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::LeaveLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::SetLobbyData(::Shipmate::Porting::LobbyData*  aData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aData);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::SetLobbyDataPreCreation(::Shipmate::Porting::LobbyData*  aData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aData);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformLobby::FetchLobbyData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby::SetPendingLobbyInvite(::StringW  aPendingLobbyInvite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"SetPendingLobbyInvite", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aPendingLobbyInvite);
}
inline void Shipmate::Porting::AbstractPlatformLobby::ClearPendingLobbyInvite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"ClearPendingLobbyInvite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlatformLobby::CanJoinLobby(::StringW  aLobbyStr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aLobbyStr);
}
inline void Shipmate::Porting::AbstractPlatformLobby::JoinedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"JoinedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby::CreatedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"CreatedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::AbstractPlatformLobby::get_PendingLobbyInvite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"get_PendingLobbyInvite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmate::Porting::LobbyData* Shipmate::Porting::AbstractPlatformLobby::get_CurrentLobbyData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"get_CurrentLobbyData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::LobbyData*>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlatformLobby::get_CreateSoloLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby::set_IsCrossPlatform(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"set_IsCrossPlatform", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformLobby::SetLobbyDataCreationFunc(::System::Func_1<::Shipmate::Porting::LobbyData*>*  aFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"SetLobbyDataCreationFunc", {}, {::i2c::type_of<::System::Func_1<::Shipmate::Porting::LobbyData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aFunc);
}
inline ::Shipmate::Porting::LobbyData* Shipmate::Porting::AbstractPlatformLobby::CreateLobbyData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"CreateLobbyData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::LobbyData*>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::AbstractPlatformLobby::get_DummyLobbyNameToUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"get_DummyLobbyNameToUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformLobby::set_DummyLobbyNameToUse(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {"set_DummyLobbyNameToUse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformLobby::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLobby*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformLobby* Shipmate::Porting::AbstractPlatformLobby::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformLobby*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformLobby::AbstractPlatformLobby()   {
}
