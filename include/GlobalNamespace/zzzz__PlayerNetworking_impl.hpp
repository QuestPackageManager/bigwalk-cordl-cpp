#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerNetworking.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "GlobalNamespace/zzzz__Platforms_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_impl.hpp"
#include "GlobalNamespace/zzzz__ShellReferenceWithActionNumber_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerNetworking_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__Platforms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLooks_def.hpp"
#include "GlobalNamespace/zzzz__PlayerNetworking_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "GlobalNamespace/zzzz__ShellReferenceWithActionNumber_def.hpp"
#include "HouseHouse/Dream/zzzz__DreamController_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__SyncHashSet_1_def.hpp"
#include "Mirror/zzzz__SyncSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking___c::*)()>(&::GlobalNamespace::PlayerNetworking___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking___c._InitCounterBlockWatch_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking___c::*)()>(&::GlobalNamespace::PlayerNetworking___c::_InitCounterBlockWatch_b__60_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18038e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking___c*>(),
                        {"<InitCounterBlockWatch>b__60_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerNetworking___c::setStaticF___9(::GlobalNamespace::PlayerNetworking___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PlayerNetworking___c*, "<>9", ::GlobalNamespace::PlayerNetworking___c*>(std::forward<::GlobalNamespace::PlayerNetworking___c*>(value));
}
inline ::GlobalNamespace::PlayerNetworking___c* GlobalNamespace::PlayerNetworking___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PlayerNetworking___c*, "<>9", ::GlobalNamespace::PlayerNetworking___c*>();
}
inline void GlobalNamespace::PlayerNetworking___c::setStaticF___9__60_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__60_0", ::GlobalNamespace::PlayerNetworking___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::PlayerNetworking___c::getStaticF___9__60_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__60_0", ::GlobalNamespace::PlayerNetworking___c*>();
}
inline void GlobalNamespace::PlayerNetworking___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerNetworking___c::_InitCounterBlockWatch_b__60_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking___c*>(),
                        {"<InitCounterBlockWatch>b__60_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerNetworking___c* GlobalNamespace::PlayerNetworking___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerNetworking___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerNetworking___c::PlayerNetworking___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::*)()>(&::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180389f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerNetworking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::PlayerNetworking__AsyncKickUser_d__93(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93::PlayerNetworking__AsyncKickUser_d__93()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::*)()>(&::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18038b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerNetworking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::PlayerNetworking__InitCounterBlockWatch_d__60(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60::PlayerNetworking__InitCounterBlockWatch_d__60()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::*)()>(&::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18038d490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "newModerationName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerNetworking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::PlayerNetworking__SanitizeModerationName_d__63(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::StringW  newModerationName, ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->newModerationName = newModerationName;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63::PlayerNetworking__SanitizeModerationName_d__63()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.add_PlatformUserIdChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::PlayerNetworking::add_PlatformUserIdChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803715a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"add_PlatformUserIdChanged", {}, {::i2c::type_of<::System::Action_1<uint64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.remove_PlatformUserIdChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::PlayerNetworking::remove_PlatformUserIdChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180371840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"remove_PlatformUserIdChanged", {}, {::i2c::type_of<::System::Action_1<uint64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_moderationNameSanitized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_moderationNameSanitized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_moderationNameSanitized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::Start)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18036c640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::OnStartClient)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18036a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnBlockedUserListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::Mirror::SyncSet_1_Operation<uint64_t>, uint64_t)>(&::GlobalNamespace::PlayerNetworking::OnBlockedUserListChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180368d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnBlockedUserListChanged", {}, {::i2c::type_of<::Mirror::SyncSet_1_Operation<uint64_t>>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::OnStopClient)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036a2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180368e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetLookHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerNetworking::OnSetLookHead)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180369900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetLookHead", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetLookTorso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerNetworking::OnSetLookTorso)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180369900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetLookTorso", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetLookLegs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerNetworking::OnSetLookLegs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180369900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetLookLegs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PlayerHeldInformation, ::GlobalNamespace::PlayerHeldInformation)>(&::GlobalNamespace::PlayerNetworking::OnSetHeld)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x180369580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetHeld", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>(), ::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::ShellReferenceWithActionNumber, ::GlobalNamespace::ShellReferenceWithActionNumber)>(&::GlobalNamespace::PlayerNetworking::OnSetPose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180369dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetPose", {}, {::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>(), ::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool, bool)>(&::GlobalNamespace::PlayerNetworking::OnSetGhost)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180369300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetGhost", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetAudioGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool, bool)>(&::GlobalNamespace::PlayerNetworking::OnSetAudioGhost)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803692a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetAudioGhost", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSet2DVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool, bool)>(&::GlobalNamespace::PlayerNetworking::OnSet2DVoice)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180369250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSet2DVoice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetUsername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::StringW, ::StringW)>(&::GlobalNamespace::PlayerNetworking::OnSetUsername)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180369f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetUsername", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnModerationNameChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::StringW, ::StringW)>(&::GlobalNamespace::PlayerNetworking::OnModerationNameChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803690f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnModerationNameChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnPlatformUserIdSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(uint64_t, uint64_t)>(&::GlobalNamespace::PlayerNetworking::OnPlatformUserIdSet)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180369130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnPlatformUserIdSet", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnLocalBlockListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::OnLocalBlockListChanged)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180368f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnLocalBlockListChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InitCounterBlockWatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::InitCounterBlockWatch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180364300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InitCounterBlockWatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdAddToSyncedBlockList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(uint64_t)>(&::GlobalNamespace::PlayerNetworking::CmdAddToSyncedBlockList)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180360a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdAddToSyncedBlockList", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdRemoveFromSyncedBlockList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(uint64_t)>(&::GlobalNamespace::PlayerNetworking::CmdRemoveFromSyncedBlockList)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdRemoveFromSyncedBlockList", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.SanitizeModerationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::PlayerNetworking::*)(::StringW)>(&::GlobalNamespace::PlayerNetworking::SanitizeModerationName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"SanitizeModerationName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetHeldSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::ShellReferenceWithActionNumber, ::GlobalNamespace::ShellReferenceWithActionNumber)>(&::GlobalNamespace::PlayerNetworking::OnSetHeldSwitch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180369500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetHeldSwitch", {}, {::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>(), ::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdPickUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PlayerHeldInformation)>(&::GlobalNamespace::PlayerNetworking::CmdPickUp)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180361200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPickUp", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ProcessPickUpPropKnockons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerNetworking::ProcessPickUpPropKnockons)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18036a3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ProcessPickUpPropKnockons", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerPickUpPropAutomatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerNetworking::ServerPickUpPropAutomatic)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18036bf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerPickUpPropAutomatic", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerDropPropAutomatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::ServerDropPropAutomatic)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18036b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerDropPropAutomatic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerDropPropFromSnatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::ServerDropPropFromSnatch)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18036ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerDropPropFromSnatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdEnterPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference, int32_t)>(&::GlobalNamespace::PlayerNetworking::CmdEnterPose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180360e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdEnterPose", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdPlaceHeldPlayerIntoPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::CmdPlaceHeldPlayerIntoPose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803612f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPlaceHeldPlayerIntoPose", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdPickUpPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerNetworking::CmdPickUpPlayer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPickUpPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerEnterPoseAuto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::ServerEnterPoseAuto)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18036bbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerEnterPoseAuto", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdExitPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t)>(&::GlobalNamespace::PlayerNetworking::CmdExitPose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180360f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdExitPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdDropHeldPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdDropHeldPlayer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180360c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdDropHeldPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerExitPoseAuto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::ServerExitPoseAuto)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18036bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerExitPoseAuto", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerNetworking::CmdUseHeld)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180362a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUseHeld", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdUseHeldUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerNetworking::CmdUseHeldUp)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180362980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUseHeldUp", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdUseHeldAsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerNetworking::CmdUseHeldAsKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803628a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUseHeldAsKey", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetCrouchness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(float_t)>(&::GlobalNamespace::PlayerNetworking::CmdSetCrouchness)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetCrouchness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetGestureLeftWave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetGestureLeftWave)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureLeftWave", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetGestureRightWave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetGestureRightWave)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureRightWave", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetGestureLeftPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetGestureLeftPoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureLeftPoint", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetGestureRightPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetGestureRightPoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureRightPoint", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetControlsVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerNetworking::CmdSetControlsVelocity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180361990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetControlsVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetHeadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::PlayerNetworking::CmdSetHeadState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180361fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetHeadState", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdUsePeckSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext, int32_t)>(&::GlobalNamespace::PlayerNetworking::CmdUsePeckSwitch)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180362b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUsePeckSwitch", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdReleaseHeldSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext, int32_t)>(&::GlobalNamespace::PlayerNetworking::CmdReleaseHeldSwitch)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180361570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdReleaseHeldSwitch", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdChangeLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, ::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerNetworking::CmdChangeLook)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180360b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdChangeLook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerSetLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, ::GlobalNamespace::PlayerLooks_LookPart, bool)>(&::GlobalNamespace::PlayerNetworking::ServerSetLook)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18036c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerSetLook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RPCPuff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, ::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerNetworking::RPCPuff)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18036a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCPuff", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RPCKickUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::RPCKickUser)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18036a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCKickUser", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.AsyncKickUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::AsyncKickUser)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180360a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"AsyncKickUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetGhost)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGhost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetAudioGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetAudioGhost)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803618d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetAudioGhost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSet2DVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSet2DVoice)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSet2DVoice", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetWindUpStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(double_t)>(&::GlobalNamespace::PlayerNetworking::CmdSetWindUpStartTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803625c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetWindUpStartTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdDudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdDudUseHeld)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180360d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdDudUseHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetSleeping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetSleeping)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180362500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetSleeping", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcDudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RpcDudUseHeld)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcDudUseHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdFellToFar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdFellToFar)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180360fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdFellToFar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcFellTooFar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RpcFellTooFar)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcFellTooFar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerForceLetGoSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::ServerForceLetGoSwitch)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18036be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerForceLetGoSwitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetMenuEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetMenuEyes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180362140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetMenuEyes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetMenuEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool, bool)>(&::GlobalNamespace::PlayerNetworking::OnSetMenuEyes)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180369930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetMenuEyes", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetMute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180362200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetMute", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool, bool)>(&::GlobalNamespace::PlayerNetworking::OnSetMute)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180369b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetMute", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSendTextChatMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::StringW)>(&::GlobalNamespace::PlayerNetworking::CmdSendTextChatMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSendTextChatMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdPlaceInHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::CmdPlaceInHome)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803613d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPlaceInHome", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetSitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetSitting)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180362440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetSitting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcTextChatMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::StringW)>(&::GlobalNamespace::PlayerNetworking::RpcTextChatMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18036b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcTextChatMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcReactToCarrySnatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RpcReactToCarrySnatch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcReactToCarrySnatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcReactToCarryEscape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RpcReactToCarryEscape)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036ae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcReactToCarryEscape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcReactToBeingPickedUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerNetworking::RpcReactToBeingPickedUp)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18036ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcReactToBeingPickedUp", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcShowSwitchTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::RpcShowSwitchTap)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18036b060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcShowSwitchTap", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdTextInputStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdTextInputStroke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803627f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdTextInputStroke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RPCTextInputStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RPCTextInputStroke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036a9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCTextInputStroke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdTextInputErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdTextInputErase)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180362740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdTextInputErase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RPCTextInputErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RPCTextInputErase)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCTextInputErase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetIsTextChatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetIsTextChatting)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180362080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetIsTextChatting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetTextChatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool, bool)>(&::GlobalNamespace::PlayerNetworking::OnSetTextChatting)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180369eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetTextChatting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdTextChatStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdTextChatStroke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180362680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RPCTextChatStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::RPCTextChatStroke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18036a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdDudJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdDudJump)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180360cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdDudJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RPCDudJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RPCDudJump)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCDudJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdRecordProvenWalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdRecordProvenWalking)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803614c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdRecordProvenWalking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RPCSetInitialHasLearnedWalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::RPCSetInitialHasLearnedWalking)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18036a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCSetInitialHasLearnedWalking", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetEchoAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(float_t)>(&::GlobalNamespace::PlayerNetworking::CmdSetEchoAmount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180361b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetEchoAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetOutdoorness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(float_t)>(&::GlobalNamespace::PlayerNetworking::CmdSetOutdoorness)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803622c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetOutdoorness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdSetPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::CmdSetPending)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180362380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetPending", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnChangeIsPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool, bool)>(&::GlobalNamespace::PlayerNetworking::OnChangeIsPending)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180368e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnChangeIsPending", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.SeverPoseDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::SeverPoseDrop)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18036c520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"SeverPoseDrop", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcPoseDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::RpcPoseDrop)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18036ac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcPoseDrop", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.CmdOnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::CmdOnJump)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180361090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdOnJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcOnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::RpcOnJump)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036abd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcOnJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.ServerSetDream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::HouseHouse::Dream::DreamController*, bool)>(&::GlobalNamespace::PlayerNetworking::ServerSetDream)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18036c0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerSetDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.RpcSetDream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::HouseHouse::Dream::DreamController*, bool)>(&::GlobalNamespace::PlayerNetworking::RpcSetDream)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18036af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcSetDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.SetInitialPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::Platforms, ::StringW, uint64_t, ::StringW)>(&::GlobalNamespace::PlayerNetworking::SetInitialPlayerData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18036c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"SetInitialPlayerData", {}, {::i2c::type_of<::GlobalNamespace::Platforms>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.OnSetIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::StringW, ::StringW)>(&::GlobalNamespace::PlayerNetworking::OnSetIdentifier)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803698d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetIdentifier", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180371530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworklookIdHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworklookIdHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworklookIdHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworklookIdHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PlayerNetworking::set_NetworklookIdHead)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180371af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworklookIdHead", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworklookIdTorso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworklookIdTorso)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworklookIdTorso", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworklookIdTorso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PlayerNetworking::set_NetworklookIdTorso)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180371bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworklookIdTorso", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworklookIdLegs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworklookIdLegs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworklookIdLegs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworklookIdLegs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PlayerNetworking::set_NetworklookIdLegs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180371b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworklookIdLegs", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkplayerHeldInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerHeldInformation (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkplayerHeldInformation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180371790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkplayerHeldInformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkplayerHeldInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::GlobalNamespace::PlayerHeldInformation>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkplayerHeldInformation)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180371d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkplayerHeldInformation", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::PlayerHeldInformation>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkposeReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ShellReferenceWithActionNumber (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkposeReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803717d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkposeReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkposeReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkposeReference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180371f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkposeReference", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworktrueCrouchness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworktrueCrouchness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworktrueCrouchness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworktrueCrouchness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::PlayerNetworking::set_NetworktrueCrouchness)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036dfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworktrueCrouchness", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkleftArmWaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkleftArmWaving)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkleftArmWaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkleftArmWaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkleftArmWaving)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkleftArmWaving", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkrightArmWaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkrightArmWaving)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803717f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkrightArmWaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkrightArmWaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkrightArmWaving)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkrightArmWaving", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkleftArmPointing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkleftArmPointing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkleftArmPointing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkleftArmPointing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkleftArmPointing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkleftArmPointing", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkrightArmPointing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkrightArmPointing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803717e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkrightArmPointing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkrightArmPointing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkrightArmPointing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkrightArmPointing", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkcontrolsVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkcontrolsVelocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180371630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkcontrolsVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkcontrolsVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::UnityEngine::Vector3>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkcontrolsVelocity)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkcontrolsVelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkheadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkheadState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkheadState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkheadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::UnityEngine::Vector2>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkheadState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkheadState", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisGhost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisGhost)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisGhost", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisAudioGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisAudioGhost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisAudioGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisAudioGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisAudioGhost)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisAudioGhost", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_Networkis2DVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_Networkis2DVoice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkis2DVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_Networkis2DVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_Networkis2DVoice)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkis2DVoice", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_Networkusername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_Networkusername)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkusername", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_Networkusername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::StringW>)>(&::GlobalNamespace::PlayerNetworking::set_Networkusername)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803720f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkusername", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_Networkidentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_Networkidentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkidentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_Networkidentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::StringW>)>(&::GlobalNamespace::PlayerNetworking::set_Networkidentifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803719e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkidentifier", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkmoderationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkmoderationName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkmoderationName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkmoderationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::StringW>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkmoderationName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180371c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkmoderationName", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkuserPlatformId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkuserPlatformId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkuserPlatformId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkuserPlatformId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<uint64_t>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkuserPlatformId)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180371fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkuserPlatformId", {}, {::i2c::type_of<::ByRefConst<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkepicUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkepicUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkepicUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkepicUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::StringW>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkepicUserId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803718d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkepicUserId", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisHost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisHost)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180371a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisHost", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkwindUpStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkwindUpStartTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkwindUpStartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkwindUpStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<double_t>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkwindUpStartTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180372170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkwindUpStartTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkheldSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ShellReferenceWithActionNumber (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkheldSwitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkheldSwitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkheldSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkheldSwitch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180371960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkheldSwitch", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisSleeping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisSleeping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisSleeping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisSleeping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisSleeping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisSleeping", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkhasMenuEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkhasMenuEyes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkhasMenuEyes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkhasMenuEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkhasMenuEyes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkhasMenuEyes", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisMuted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisMuted", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisSitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisSitting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisSitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisSitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisSitting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisSitting", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisTextChatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisTextChatting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisTextChatting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisTextChatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisTextChatting)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisTextChatting", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkechoAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkechoAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkechoAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkechoAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkechoAmount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkechoAmount", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_Networkoutdoorness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_Networkoutdoorness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkoutdoorness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_Networkoutdoorness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::PlayerNetworking::set_Networkoutdoorness)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkoutdoorness", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_NetworkisPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_NetworkisPending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803716e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_NetworkisPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PlayerNetworking::set_NetworkisPending)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisPending", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.get_Networkplatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Platforms (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::get_Networkplatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkplatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.set_Networkplatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::ByRefConst<::GlobalNamespace::Platforms>)>(&::GlobalNamespace::PlayerNetworking::set_Networkplatform)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180371cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkplatform", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::Platforms>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdAddToSyncedBlockList__UInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(uint64_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdAddToSyncedBlockList__UInt64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18036c990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdAddToSyncedBlockList__UInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdAddToSyncedBlockList__UInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdAddToSyncedBlockList__UInt64)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180364370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdAddToSyncedBlockList__UInt64", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdRemoveFromSyncedBlockList__UInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(uint64_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdRemoveFromSyncedBlockList__UInt64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18036ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdRemoveFromSyncedBlockList__UInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdRemoveFromSyncedBlockList__UInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdRemoveFromSyncedBlockList__UInt64)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180365680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdRemoveFromSyncedBlockList__UInt64", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdPickUp__PlayerHeldInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PlayerHeldInformation)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdPickUp__PlayerHeldInformation)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x18036d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPickUp__PlayerHeldInformation", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdPickUp__PlayerHeldInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPickUp__PlayerHeldInformation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180364fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPickUp__PlayerHeldInformation", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdEnterPose__ShellReference__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference, int32_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdEnterPose__ShellReference__Int32)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18036cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdEnterPose__ShellReference__Int32", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdEnterPose__ShellReference__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdEnterPose__ShellReference__Int32)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803649f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdEnterPose__ShellReference__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdPlaceHeldPlayerIntoPose__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdPlaceHeldPlayerIntoPose__ShellReference)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18036d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPlaceHeldPlayerIntoPose__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdPlaceHeldPlayerIntoPose__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPlaceHeldPlayerIntoPose__ShellReference)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180365120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPlaceHeldPlayerIntoPose__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdPickUpPlayer__PlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdPickUpPlayer__PlayerCharacter)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18036d0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPickUpPlayer__PlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdPickUpPlayer__PlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPickUpPlayer__PlayerCharacter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180364ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPickUpPlayer__PlayerCharacter", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdExitPose__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdExitPose__Int32)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18036cdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdExitPose__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdExitPose__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdExitPose__Int32)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180364b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdExitPose__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdDropHeldPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdDropHeldPlayer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdDropHeldPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdDropHeldPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdDropHeldPlayer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180364650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdDropHeldPlayer", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdUseHeld__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdUseHeld__PeckContext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18036ea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUseHeld__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdUseHeld__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUseHeld__PeckContext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803679c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUseHeld__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdUseHeldUp__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdUseHeldUp__PeckContext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18036e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUseHeldUp__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdUseHeldUp__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUseHeldUp__PeckContext)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180367800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUseHeldUp__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdUseHeldAsKey__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdUseHeldAsKey__PeckContext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUseHeldAsKey__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdUseHeldAsKey__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUseHeldAsKey__PeckContext)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180367680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUseHeldAsKey__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetCrouchness__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(float_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetCrouchness__Single)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036dfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetCrouchness__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetCrouchness__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetCrouchness__Single)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180365cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetCrouchness__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetGestureLeftWave__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureLeftWave__Boolean)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureLeftWave__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetGestureLeftWave__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureLeftWave__Boolean)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803660f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureLeftWave__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetGestureRightWave__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureRightWave__Boolean)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureRightWave__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetGestureRightWave__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureRightWave__Boolean)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803663b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureRightWave__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetGestureLeftPoint__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureLeftPoint__Boolean)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureLeftPoint__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetGestureLeftPoint__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureLeftPoint__Boolean)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180365f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureLeftPoint__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetGestureRightPoint__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureRightPoint__Boolean)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureRightPoint__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetGestureRightPoint__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureRightPoint__Boolean)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180366250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureRightPoint__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetControlsVelocity__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetControlsVelocity__Vector3)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetControlsVelocity__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetControlsVelocity__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetControlsVelocity__Vector3)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180365b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetControlsVelocity__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetHeadState__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetHeadState__Vector2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetHeadState__Vector2", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetHeadState__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetHeadState__Vector2)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180366660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetHeadState__Vector2", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext, int32_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18036eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180367bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext, int32_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18036dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803654f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdChangeLook__Int32__LookPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, ::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdChangeLook__Int32__LookPart)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18036c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdChangeLook__Int32__LookPart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdChangeLook__Int32__LookPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdChangeLook__Int32__LookPart)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180364440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdChangeLook__Int32__LookPart", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RPCPuff__Int32__LookPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(int32_t, ::GlobalNamespace::PlayerLooks_LookPart)>(&::GlobalNamespace::PlayerNetworking::UserCode_RPCPuff__Int32__LookPart)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18036ef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCPuff__Int32__LookPart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RPCPuff__Int32__LookPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCPuff__Int32__LookPart)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180367ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCPuff__Int32__LookPart", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RPCKickUser__NetworkConnectionToClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::UserCode_RPCKickUser__NetworkConnectionToClient)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCKickUser__NetworkConnectionToClient", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RPCKickUser__NetworkConnectionToClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCKickUser__NetworkConnectionToClient)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180367de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCKickUser__NetworkConnectionToClient", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetGhost__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetGhost__Boolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGhost__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetGhost__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGhost__Boolean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180366510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGhost__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetAudioGhost__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetAudioGhost__Boolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetAudioGhost__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetAudioGhost__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetAudioGhost__Boolean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180365a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetAudioGhost__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSet2DVoice__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSet2DVoice__Boolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSet2DVoice__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSet2DVoice__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSet2DVoice__Boolean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803658b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSet2DVoice__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetWindUpStartTime__Double
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(double_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetWindUpStartTime__Double)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18036e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetWindUpStartTime__Double", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetWindUpStartTime__Double
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetWindUpStartTime__Double)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180367110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetWindUpStartTime__Double", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdDudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdDudUseHeld)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdDudUseHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdDudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdDudUseHeld)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803648c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdDudUseHeld", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetSleeping__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetSleeping__Boolean)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetSleeping__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetSleeping__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetSleeping__Boolean)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180366fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetSleeping__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcDudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcDudUseHeld)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18036f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcDudUseHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcDudUseHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcDudUseHeld)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803682a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcDudUseHeld", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdFellToFar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdFellToFar)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18036cfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdFellToFar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdFellToFar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdFellToFar)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180364c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdFellToFar", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcFellTooFar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcFellTooFar)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18036f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcFellTooFar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcFellTooFar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcFellTooFar)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180368370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcFellTooFar", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetMenuEyes__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetMenuEyes__Boolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetMenuEyes__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetMenuEyes__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetMenuEyes__Boolean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180366910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetMenuEyes__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetMute__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetMute__Boolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetMute__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetMute__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetMute__Boolean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180366a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetMute__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSendTextChatMessage__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::StringW)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSendTextChatMessage__String)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18036b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSendTextChatMessage__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSendTextChatMessage__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSendTextChatMessage__String)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180365750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSendTextChatMessage__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdPlaceInHome__Prop__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdPlaceInHome__Prop__ShellReference)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18036d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPlaceInHome__Prop__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdPlaceInHome__Prop__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPlaceInHome__Prop__ShellReference)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803652c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPlaceInHome__Prop__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetSitting__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetSitting__Boolean)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetSitting__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetSitting__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetSitting__Boolean)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180366e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetSitting__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcTextChatMessage__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::StringW)>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcTextChatMessage__String)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18036ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcTextChatMessage__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcTextChatMessage__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcTextChatMessage__String)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180368a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcTextChatMessage__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcReactToCarrySnatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcReactToCarrySnatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcReactToCarrySnatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcReactToCarrySnatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcReactToCarrySnatch)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180368720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcReactToCarrySnatch", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcReactToCarryEscape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcReactToCarryEscape)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x18036f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcReactToCarryEscape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcReactToCarryEscape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcReactToCarryEscape)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180368680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcReactToCarryEscape", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcReactToBeingPickedUp__PlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcReactToBeingPickedUp__PlayerCharacter)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18036f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcReactToBeingPickedUp__PlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcReactToBeingPickedUp__PlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcReactToBeingPickedUp__PlayerCharacter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803685a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcReactToBeingPickedUp__PlayerCharacter", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcShowSwitchTap__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcShowSwitchTap__ShellReference)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18036fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcShowSwitchTap__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcShowSwitchTap__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcShowSwitchTap__ShellReference)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803688e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcShowSwitchTap__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdTextInputStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdTextInputStroke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036a9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdTextInputStroke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdTextInputStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdTextInputStroke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180367550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdTextInputStroke", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RPCTextInputStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RPCTextInputStroke)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18036f060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCTextInputStroke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RPCTextInputStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCTextInputStroke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180368200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCTextInputStroke", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdTextInputErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdTextInputErase)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdTextInputErase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdTextInputErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdTextInputErase)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180367420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdTextInputErase", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RPCTextInputErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RPCTextInputErase)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18036f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCTextInputErase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RPCTextInputErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCTextInputErase)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180368160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCTextInputErase", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetIsTextChatting__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetIsTextChatting__Boolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetIsTextChatting__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetIsTextChatting__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetIsTextChatting__Boolean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803667c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetIsTextChatting__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdTextChatStroke__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdTextChatStroke__Boolean)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18036a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdTextChatStroke__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdTextChatStroke__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdTextChatStroke__Boolean)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803672c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdTextChatStroke__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RPCTextChatStroke__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_RPCTextChatStroke__Boolean)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18036efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCTextChatStroke__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RPCTextChatStroke__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCTextChatStroke__Boolean)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803680a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCTextChatStroke__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdDudJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdDudJump)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdDudJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdDudJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdDudJump)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180364790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdDudJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RPCDudJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RPCDudJump)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18036ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCDudJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RPCDudJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCDudJump)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180367d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCDudJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdRecordProvenWalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdRecordProvenWalking)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18036db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdRecordProvenWalking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdRecordProvenWalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdRecordProvenWalking)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803653f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdRecordProvenWalking", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RPCSetInitialHasLearnedWalking__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_RPCSetInitialHasLearnedWalking__Boolean)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18036ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCSetInitialHasLearnedWalking__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RPCSetInitialHasLearnedWalking__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCSetInitialHasLearnedWalking__Boolean)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180367fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCSetInitialHasLearnedWalking__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetEchoAmount__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(float_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetEchoAmount__Single)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetEchoAmount__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetEchoAmount__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetEchoAmount__Single)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180365e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetEchoAmount__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetOutdoorness__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(float_t)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetOutdoorness__Single)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18036e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetOutdoorness__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetOutdoorness__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetOutdoorness__Single)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180366bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetOutdoorness__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdSetPending__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdSetPending__Boolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18036e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetPending__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdSetPending__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetPending__Boolean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180366d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetPending__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcPoseDrop__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcPoseDrop__ShellReference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18036f180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcPoseDrop__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcPoseDrop__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcPoseDrop__ShellReference)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180368490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcPoseDrop__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_CmdOnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_CmdOnJump)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18036abd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdOnJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_CmdOnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdOnJump)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180364db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdOnJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcOnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)()>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcOnJump)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18036f150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcOnJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcOnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcOnJump)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180368400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcOnJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_RpcSetDream__DreamController__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::HouseHouse::Dream::DreamController*, bool)>(&::GlobalNamespace::PlayerNetworking::UserCode_RpcSetDream__DreamController__Boolean)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18036fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcSetDream__DreamController__Boolean", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_RpcSetDream__DreamController__Boolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcSetDream__DreamController__Boolean)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180368800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcSetDream__DreamController__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.UserCode_SetInitialPlayerData__Platforms__String__UInt64__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::GlobalNamespace::Platforms, ::StringW, uint64_t, ::StringW)>(&::GlobalNamespace::PlayerNetworking::UserCode_SetInitialPlayerData__Platforms__String__UInt64__String)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803700b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_SetInitialPlayerData__Platforms__String__UInt64__String", {}, {::i2c::type_of<::GlobalNamespace::Platforms>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.InvokeUserCode_SetInitialPlayerData__Platforms__String__UInt64__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PlayerNetworking::InvokeUserCode_SetInitialPlayerData__Platforms__String__UInt64__String)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180368bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_SetInitialPlayerData__Platforms__String__UInt64__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::PlayerNetworking::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x18036b290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerNetworking.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerNetworking::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::PlayerNetworking::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x16a0;
  constexpr static std::size_t addrs = 0x180362c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<uint64_t>*& GlobalNamespace::PlayerNetworking::__cordl_internal_get_PlatformUserIdChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformUserIdChanged;
}
constexpr ::System::Action_1<uint64_t>* const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_PlatformUserIdChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformUserIdChanged;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_PlatformUserIdChanged(::System::Action_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlatformUserIdChanged = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerNetworking::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_useExperimentalFixes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useExperimentalFixes;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_useExperimentalFixes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useExperimentalFixes;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_useExperimentalFixes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useExperimentalFixes = value;
}
constexpr int32_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_lookIdHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookIdHead;
}
constexpr int32_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_lookIdHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookIdHead;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_lookIdHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookIdHead = value;
}
constexpr int32_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_lookIdTorso()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookIdTorso;
}
constexpr int32_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_lookIdTorso() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookIdTorso;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_lookIdTorso(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookIdTorso = value;
}
constexpr int32_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_lookIdLegs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookIdLegs;
}
constexpr int32_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_lookIdLegs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookIdLegs;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_lookIdLegs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookIdLegs = value;
}
constexpr ::GlobalNamespace::PlayerHeldInformation& GlobalNamespace::PlayerNetworking::__cordl_internal_get_playerHeldInformation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHeldInformation;
}
constexpr ::GlobalNamespace::PlayerHeldInformation const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_playerHeldInformation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHeldInformation;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_playerHeldInformation(::GlobalNamespace::PlayerHeldInformation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerHeldInformation = value;
}
constexpr ::GlobalNamespace::ShellReferenceWithActionNumber& GlobalNamespace::PlayerNetworking::__cordl_internal_get_poseReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseReference;
}
constexpr ::GlobalNamespace::ShellReferenceWithActionNumber const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_poseReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseReference;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_poseReference(::GlobalNamespace::ShellReferenceWithActionNumber  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseReference = value;
}
constexpr float_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_trueCrouchness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trueCrouchness;
}
constexpr float_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_trueCrouchness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trueCrouchness;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_trueCrouchness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trueCrouchness = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_leftArmWaving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmWaving;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_leftArmWaving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmWaving;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_leftArmWaving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmWaving = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_rightArmWaving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmWaving;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_rightArmWaving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmWaving;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_rightArmWaving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmWaving = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_leftArmPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmPointing;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_leftArmPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmPointing;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_leftArmPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmPointing = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_rightArmPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmPointing;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_rightArmPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmPointing;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_rightArmPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmPointing = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerNetworking::__cordl_internal_get_controlsVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlsVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_controlsVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlsVelocity;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_controlsVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlsVelocity = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlayerNetworking::__cordl_internal_get_headState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headState;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_headState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headState;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_headState(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headState = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isGhost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGhost;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isGhost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGhost;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isGhost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGhost = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isAudioGhost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAudioGhost;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isAudioGhost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAudioGhost;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isAudioGhost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAudioGhost = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_is2DVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is2DVoice;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_is2DVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is2DVoice;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_is2DVoice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___is2DVoice = value;
}
constexpr ::StringW& GlobalNamespace::PlayerNetworking::__cordl_internal_get_username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr ::StringW const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___username = value;
}
constexpr ::StringW& GlobalNamespace::PlayerNetworking::__cordl_internal_get_identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifier;
}
constexpr ::StringW const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifier;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_identifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___identifier = value;
}
constexpr ::StringW& GlobalNamespace::PlayerNetworking::__cordl_internal_get_moderationName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationName;
}
constexpr ::StringW const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_moderationName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationName;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_moderationName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationName = value;
}
constexpr uint64_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_userPlatformId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userPlatformId;
}
constexpr uint64_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_userPlatformId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userPlatformId;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_userPlatformId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userPlatformId = value;
}
constexpr ::Mirror::SyncHashSet_1<uint64_t>*& GlobalNamespace::PlayerNetworking::__cordl_internal_get_inGameBlockedUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGameBlockedUsers;
}
constexpr ::Mirror::SyncHashSet_1<uint64_t>* const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_inGameBlockedUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGameBlockedUsers;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_inGameBlockedUsers(::Mirror::SyncHashSet_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inGameBlockedUsers = value;
}
constexpr ::StringW& GlobalNamespace::PlayerNetworking::__cordl_internal_get_epicUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicUserId;
}
constexpr ::StringW const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_epicUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicUserId;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_epicUserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicUserId = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHost;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHost;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isHost(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHost = value;
}
constexpr double_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_windUpStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windUpStartTime;
}
constexpr double_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_windUpStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windUpStartTime;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_windUpStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windUpStartTime = value;
}
constexpr ::GlobalNamespace::ShellReferenceWithActionNumber& GlobalNamespace::PlayerNetworking::__cordl_internal_get_heldSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldSwitch;
}
constexpr ::GlobalNamespace::ShellReferenceWithActionNumber const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_heldSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldSwitch;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_heldSwitch(::GlobalNamespace::ShellReferenceWithActionNumber  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldSwitch = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSleeping;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSleeping;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isSleeping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSleeping = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_hasMenuEyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMenuEyes;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_hasMenuEyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMenuEyes;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_hasMenuEyes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasMenuEyes = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMuted;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMuted;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMuted = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isSitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSitting;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isSitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSitting;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isSitting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSitting = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isTextChatting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTextChatting;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isTextChatting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTextChatting;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isTextChatting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTextChatting = value;
}
constexpr float_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_echoAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___echoAmount;
}
constexpr float_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_echoAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___echoAmount;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_echoAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___echoAmount = value;
}
constexpr float_t& GlobalNamespace::PlayerNetworking::__cordl_internal_get_outdoorness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outdoorness;
}
constexpr float_t const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_outdoorness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outdoorness;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_outdoorness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outdoorness = value;
}
constexpr bool& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPending;
}
constexpr bool const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_isPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPending;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_isPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPending = value;
}
constexpr ::GlobalNamespace::Platforms& GlobalNamespace::PlayerNetworking::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::GlobalNamespace::Platforms const& GlobalNamespace::PlayerNetworking::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set_platform(::GlobalNamespace::Platforms  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::StringW& GlobalNamespace::PlayerNetworking::__cordl_internal_get__moderationNameSanitized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moderationNameSanitized;
}
constexpr ::StringW const& GlobalNamespace::PlayerNetworking::__cordl_internal_get__moderationNameSanitized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moderationNameSanitized;
}
constexpr void GlobalNamespace::PlayerNetworking::__cordl_internal_set__moderationNameSanitized(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moderationNameSanitized = value;
}
inline void GlobalNamespace::PlayerNetworking::setStaticF_playerCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "playerCount", ::GlobalNamespace::PlayerNetworking*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlayerNetworking::getStaticF_playerCount()  {
return ::cordl_internals::getStaticField<int32_t, "playerCount", ::GlobalNamespace::PlayerNetworking*>();
}
inline void GlobalNamespace::PlayerNetworking::add_PlatformUserIdChanged(::System::Action_1<uint64_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"add_PlatformUserIdChanged", {}, {::i2c::type_of<::System::Action_1<uint64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerNetworking::remove_PlatformUserIdChanged(::System::Action_1<uint64_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"remove_PlatformUserIdChanged", {}, {::i2c::type_of<::System::Action_1<uint64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerNetworking::get_moderationNameSanitized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_moderationNameSanitized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::OnBlockedUserListChanged(::Mirror::SyncSet_1_Operation<uint64_t>  op, uint64_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnBlockedUserListChanged", {}, {::i2c::type_of<::Mirror::SyncSet_1_Operation<uint64_t>>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, item);
}
inline void GlobalNamespace::PlayerNetworking::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::OnSetLookHead(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetLookHead", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSetLookTorso(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetLookTorso", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSetLookLegs(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetLookLegs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSetHeld(::GlobalNamespace::PlayerHeldInformation  oldValue, ::GlobalNamespace::PlayerHeldInformation  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetHeld", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>(), ::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSetPose(::GlobalNamespace::ShellReferenceWithActionNumber  oldValue, ::GlobalNamespace::ShellReferenceWithActionNumber  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetPose", {}, {::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>(), ::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSetGhost(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetGhost", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSetAudioGhost(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetAudioGhost", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSet2DVoice(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSet2DVoice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnSetUsername(::StringW  oldValue, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetUsername", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnModerationNameChanged(::StringW  oldValue, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnModerationNameChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnPlatformUserIdSet(uint64_t  oldValue, uint64_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnPlatformUserIdSet", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnLocalBlockListChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnLocalBlockListChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::PlayerNetworking::InitCounterBlockWatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InitCounterBlockWatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdAddToSyncedBlockList(uint64_t  blockedUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdAddToSyncedBlockList", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockedUser);
}
inline void GlobalNamespace::PlayerNetworking::CmdRemoveFromSyncedBlockList(uint64_t  blockedUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdRemoveFromSyncedBlockList", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockedUser);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::PlayerNetworking::SanitizeModerationName(::StringW  newModerationName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"SanitizeModerationName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, newModerationName);
}
inline void GlobalNamespace::PlayerNetworking::OnSetHeldSwitch(::GlobalNamespace::ShellReferenceWithActionNumber  oldValue, ::GlobalNamespace::ShellReferenceWithActionNumber  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetHeldSwitch", {}, {::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>(), ::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::CmdPickUp(::GlobalNamespace::PlayerHeldInformation  heldInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPickUp", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, heldInformation);
}
inline void GlobalNamespace::PlayerNetworking::ProcessPickUpPropKnockons(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ProcessPickUpPropKnockons", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerNetworking::ServerPickUpPropAutomatic(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerPickUpPropAutomatic", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerNetworking::ServerDropPropAutomatic(bool  incrementPlayerNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerDropPropAutomatic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, incrementPlayerNumber);
}
inline void GlobalNamespace::PlayerNetworking::ServerDropPropFromSnatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerDropPropFromSnatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdEnterPose(::GlobalNamespace::SeaShell_ShellReference  poseShellReference, int32_t  poseActionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdEnterPose", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseShellReference, poseActionNumber);
}
inline void GlobalNamespace::PlayerNetworking::CmdPlaceHeldPlayerIntoPose(::GlobalNamespace::SeaShell_ShellReference  poseShellReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPlaceHeldPlayerIntoPose", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseShellReference);
}
inline void GlobalNamespace::PlayerNetworking::CmdPickUpPlayer(::GlobalNamespace::PlayerCharacter*  pickedUpCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPickUpPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pickedUpCharacter);
}
inline void GlobalNamespace::PlayerNetworking::ServerEnterPoseAuto(::GlobalNamespace::SeaShell_ShellReference  poseShellReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerEnterPoseAuto", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseShellReference);
}
inline void GlobalNamespace::PlayerNetworking::CmdExitPose(int32_t  poseActionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdExitPose", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseActionNumber);
}
inline void GlobalNamespace::PlayerNetworking::CmdDropHeldPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdDropHeldPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::ServerExitPoseAuto()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerExitPoseAuto", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdUseHeld(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUseHeld", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PlayerNetworking::CmdUseHeldUp(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUseHeldUp", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PlayerNetworking::CmdUseHeldAsKey(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUseHeldAsKey", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetCrouchness(float_t  crouchness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetCrouchness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crouchness);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetGestureLeftWave(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureLeftWave", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetGestureRightWave(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureRightWave", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetGestureLeftPoint(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureLeftPoint", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetGestureRightPoint(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGestureRightPoint", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetControlsVelocity(::UnityEngine::Vector3  controlsVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetControlsVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlsVelocity);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetHeadState(::UnityEngine::Vector2  headState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetHeadState", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headState);
}
inline void GlobalNamespace::PlayerNetworking::CmdUsePeckSwitch(::GlobalNamespace::SeaShell_ShellReference  switchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdUsePeckSwitch", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, switchReference, peckContext, actionNumber);
}
inline void GlobalNamespace::PlayerNetworking::CmdReleaseHeldSwitch(::GlobalNamespace::SeaShell_ShellReference  peckSwitchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdReleaseHeldSwitch", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckSwitchReference, peckContext, actionNumber);
}
inline void GlobalNamespace::PlayerNetworking::CmdChangeLook(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdChangeLook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookId, lookPart);
}
inline void GlobalNamespace::PlayerNetworking::ServerSetLook(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart, bool  saveChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerSetLook", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookId, lookPart, saveChange);
}
inline void GlobalNamespace::PlayerNetworking::RPCPuff(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCPuff", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookId, lookPart);
}
inline void GlobalNamespace::PlayerNetworking::RPCKickUser(::Mirror::NetworkConnectionToClient*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCKickUser", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::PlayerNetworking::AsyncKickUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"AsyncKickUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetGhost(bool  isGhost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetGhost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGhost);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetAudioGhost(bool  isAudioGhost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetAudioGhost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isAudioGhost);
}
inline void GlobalNamespace::PlayerNetworking::CmdSet2DVoice(bool  is2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSet2DVoice", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, is2D);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetWindUpStartTime(double_t  windUpStartTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetWindUpStartTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windUpStartTime);
}
inline void GlobalNamespace::PlayerNetworking::CmdDudUseHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdDudUseHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetSleeping(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetSleeping", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerNetworking::RpcDudUseHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcDudUseHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdFellToFar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdFellToFar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RpcFellTooFar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcFellTooFar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::ServerForceLetGoSwitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerForceLetGoSwitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetMenuEyes(bool  hasMenuEyes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetMenuEyes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasMenuEyes);
}
inline void GlobalNamespace::PlayerNetworking::OnSetMenuEyes(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetMenuEyes", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetMute(bool  isMute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetMute", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isMute);
}
inline void GlobalNamespace::PlayerNetworking::OnSetMute(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetMute", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::CmdSendTextChatMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSendTextChatMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlayerNetworking::CmdPlaceInHome(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::SeaShell_ShellReference  propHomeReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdPlaceInHome", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, propHomeReference);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetSitting(bool  isSitting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetSitting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSitting);
}
inline void GlobalNamespace::PlayerNetworking::RpcTextChatMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcTextChatMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlayerNetworking::RpcReactToCarrySnatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcReactToCarrySnatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RpcReactToCarryEscape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcReactToCarryEscape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RpcReactToBeingPickedUp(::GlobalNamespace::PlayerCharacter*  playerWhoPickedUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcReactToBeingPickedUp", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerWhoPickedUp);
}
inline void GlobalNamespace::PlayerNetworking::RpcShowSwitchTap(::GlobalNamespace::SeaShell_ShellReference  shellReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcShowSwitchTap", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shellReference);
}
inline void GlobalNamespace::PlayerNetworking::CmdTextInputStroke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdTextInputStroke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RPCTextInputStroke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCTextInputStroke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdTextInputErase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdTextInputErase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RPCTextInputErase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCTextInputErase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetIsTextChatting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetIsTextChatting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerNetworking::OnSetTextChatting(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetTextChatting", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::CmdTextChatStroke(bool  isDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDelete);
}
inline void GlobalNamespace::PlayerNetworking::RPCTextChatStroke(bool  isDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDelete);
}
inline void GlobalNamespace::PlayerNetworking::CmdDudJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdDudJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RPCDudJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCDudJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::CmdRecordProvenWalking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdRecordProvenWalking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RPCSetInitialHasLearnedWalking(bool  hasLearnedWalking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RPCSetInitialHasLearnedWalking", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasLearnedWalking);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetEchoAmount(float_t  echoValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetEchoAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, echoValue);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetOutdoorness(float_t  outdoornessValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetOutdoorness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outdoornessValue);
}
inline void GlobalNamespace::PlayerNetworking::CmdSetPending(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdSetPending", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::PlayerNetworking::OnChangeIsPending(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnChangeIsPending", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::SeverPoseDrop(::GlobalNamespace::SeaShell_ShellReference  playerPoseReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"SeverPoseDrop", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerPoseReference);
}
inline void GlobalNamespace::PlayerNetworking::RpcPoseDrop(::GlobalNamespace::SeaShell_ShellReference  playerPoseReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcPoseDrop", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerPoseReference);
}
inline void GlobalNamespace::PlayerNetworking::CmdOnJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"CmdOnJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::RpcOnJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcOnJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::ServerSetDream(::HouseHouse::Dream::DreamController*  dreamController, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"ServerSetDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dreamController, active);
}
inline void GlobalNamespace::PlayerNetworking::RpcSetDream(::HouseHouse::Dream::DreamController*  dreamController, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"RpcSetDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dreamController, active);
}
inline void GlobalNamespace::PlayerNetworking::SetInitialPlayerData(::GlobalNamespace::Platforms  newPlatform, ::StringW  newModerationName, uint64_t  platformId, ::StringW  eosProductUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"SetInitialPlayerData", {}, {::i2c::type_of<::GlobalNamespace::Platforms>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlatform, newModerationName, platformId, eosProductUserId);
}
inline void GlobalNamespace::PlayerNetworking::OnSetIdentifier(::StringW  oldValue, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"OnSetIdentifier", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerNetworking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerNetworking::get_NetworklookIdHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworklookIdHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworklookIdHead(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworklookIdHead", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerNetworking::get_NetworklookIdTorso()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworklookIdTorso", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworklookIdTorso(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworklookIdTorso", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerNetworking::get_NetworklookIdLegs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworklookIdLegs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworklookIdLegs(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworklookIdLegs", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerHeldInformation GlobalNamespace::PlayerNetworking::get_NetworkplayerHeldInformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkplayerHeldInformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerHeldInformation>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkplayerHeldInformation(::ByRefConst<::GlobalNamespace::PlayerHeldInformation>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkplayerHeldInformation", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::PlayerHeldInformation>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ShellReferenceWithActionNumber GlobalNamespace::PlayerNetworking::get_NetworkposeReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkposeReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ShellReferenceWithActionNumber>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkposeReference(::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkposeReference", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerNetworking::get_NetworktrueCrouchness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworktrueCrouchness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworktrueCrouchness(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworktrueCrouchness", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkleftArmWaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkleftArmWaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkleftArmWaving(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkleftArmWaving", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkrightArmWaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkrightArmWaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkrightArmWaving(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkrightArmWaving", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkleftArmPointing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkleftArmPointing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkleftArmPointing(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkleftArmPointing", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkrightArmPointing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkrightArmPointing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkrightArmPointing(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkrightArmPointing", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerNetworking::get_NetworkcontrolsVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkcontrolsVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkcontrolsVelocity(::ByRefConst<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkcontrolsVelocity", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PlayerNetworking::get_NetworkheadState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkheadState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkheadState(::ByRefConst<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkheadState", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisGhost(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisGhost", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisAudioGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisAudioGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisAudioGhost(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisAudioGhost", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_Networkis2DVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkis2DVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_Networkis2DVoice(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkis2DVoice", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerNetworking::get_Networkusername()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkusername", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_Networkusername(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkusername", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerNetworking::get_Networkidentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkidentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_Networkidentifier(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkidentifier", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerNetworking::get_NetworkmoderationName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkmoderationName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkmoderationName(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkmoderationName", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t GlobalNamespace::PlayerNetworking::get_NetworkuserPlatformId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkuserPlatformId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkuserPlatformId(::ByRefConst<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkuserPlatformId", {}, {::i2c::type_of<::ByRefConst<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerNetworking::get_NetworkepicUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkepicUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkepicUserId(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkepicUserId", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisHost(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisHost", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t GlobalNamespace::PlayerNetworking::get_NetworkwindUpStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkwindUpStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkwindUpStartTime(::ByRefConst<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkwindUpStartTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ShellReferenceWithActionNumber GlobalNamespace::PlayerNetworking::get_NetworkheldSwitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkheldSwitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ShellReferenceWithActionNumber>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkheldSwitch(::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkheldSwitch", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisSleeping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisSleeping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisSleeping(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisSleeping", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkhasMenuEyes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkhasMenuEyes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkhasMenuEyes(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkhasMenuEyes", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisMuted(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisMuted", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisSitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisSitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisSitting(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisSitting", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisTextChatting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisTextChatting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisTextChatting(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisTextChatting", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerNetworking::get_NetworkechoAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkechoAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkechoAmount(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkechoAmount", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerNetworking::get_Networkoutdoorness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkoutdoorness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_Networkoutdoorness(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkoutdoorness", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerNetworking::get_NetworkisPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_NetworkisPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_NetworkisPending(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_NetworkisPending", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Platforms GlobalNamespace::PlayerNetworking::get_Networkplatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"get_Networkplatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Platforms>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::set_Networkplatform(::ByRefConst<::GlobalNamespace::Platforms>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"set_Networkplatform", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::Platforms>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdAddToSyncedBlockList__UInt64(uint64_t  blockedUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdAddToSyncedBlockList__UInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockedUser);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdAddToSyncedBlockList__UInt64(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdAddToSyncedBlockList__UInt64", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdRemoveFromSyncedBlockList__UInt64(uint64_t  blockedUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdRemoveFromSyncedBlockList__UInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockedUser);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdRemoveFromSyncedBlockList__UInt64(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdRemoveFromSyncedBlockList__UInt64", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdPickUp__PlayerHeldInformation(::GlobalNamespace::PlayerHeldInformation  heldInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPickUp__PlayerHeldInformation", {}, {::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, heldInformation);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPickUp__PlayerHeldInformation(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPickUp__PlayerHeldInformation", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdEnterPose__ShellReference__Int32(::GlobalNamespace::SeaShell_ShellReference  poseShellReference, int32_t  poseActionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdEnterPose__ShellReference__Int32", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseShellReference, poseActionNumber);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdEnterPose__ShellReference__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdEnterPose__ShellReference__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdPlaceHeldPlayerIntoPose__ShellReference(::GlobalNamespace::SeaShell_ShellReference  poseShellReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPlaceHeldPlayerIntoPose__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseShellReference);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPlaceHeldPlayerIntoPose__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPlaceHeldPlayerIntoPose__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdPickUpPlayer__PlayerCharacter(::GlobalNamespace::PlayerCharacter*  pickedUpCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPickUpPlayer__PlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pickedUpCharacter);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPickUpPlayer__PlayerCharacter(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPickUpPlayer__PlayerCharacter", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdExitPose__Int32(int32_t  poseActionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdExitPose__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseActionNumber);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdExitPose__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdExitPose__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdDropHeldPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdDropHeldPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdDropHeldPlayer(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdDropHeldPlayer", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdUseHeld__PeckContext(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUseHeld__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUseHeld__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUseHeld__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdUseHeldUp__PeckContext(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUseHeldUp__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUseHeldUp__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUseHeldUp__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdUseHeldAsKey__PeckContext(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUseHeldAsKey__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUseHeldAsKey__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUseHeldAsKey__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetCrouchness__Single(float_t  crouchness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetCrouchness__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crouchness);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetCrouchness__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetCrouchness__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureLeftWave__Boolean(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureLeftWave__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureLeftWave__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureLeftWave__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureRightWave__Boolean(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureRightWave__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureRightWave__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureRightWave__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureLeftPoint__Boolean(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureLeftPoint__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureLeftPoint__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureLeftPoint__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetGestureRightPoint__Boolean(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGestureRightPoint__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGestureRightPoint__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGestureRightPoint__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetControlsVelocity__Vector3(::UnityEngine::Vector3  controlsVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetControlsVelocity__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlsVelocity);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetControlsVelocity__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetControlsVelocity__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetHeadState__Vector2(::UnityEngine::Vector2  headState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetHeadState__Vector2", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headState);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetHeadState__Vector2(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetHeadState__Vector2", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32(::GlobalNamespace::SeaShell_ShellReference  switchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, switchReference, peckContext, actionNumber);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32(::GlobalNamespace::SeaShell_ShellReference  peckSwitchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckSwitchReference, peckContext, actionNumber);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdChangeLook__Int32__LookPart(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdChangeLook__Int32__LookPart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookId, lookPart);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdChangeLook__Int32__LookPart(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdChangeLook__Int32__LookPart", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RPCPuff__Int32__LookPart(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCPuff__Int32__LookPart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookId, lookPart);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCPuff__Int32__LookPart(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCPuff__Int32__LookPart", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RPCKickUser__NetworkConnectionToClient(::Mirror::NetworkConnectionToClient*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCKickUser__NetworkConnectionToClient", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCKickUser__NetworkConnectionToClient(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCKickUser__NetworkConnectionToClient", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetGhost__Boolean(bool  isGhost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetGhost__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGhost);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetGhost__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetGhost__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetAudioGhost__Boolean(bool  isAudioGhost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetAudioGhost__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isAudioGhost);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetAudioGhost__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetAudioGhost__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSet2DVoice__Boolean(bool  is2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSet2DVoice__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, is2D);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSet2DVoice__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSet2DVoice__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetWindUpStartTime__Double(double_t  windUpStartTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetWindUpStartTime__Double", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windUpStartTime);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetWindUpStartTime__Double(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetWindUpStartTime__Double", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdDudUseHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdDudUseHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdDudUseHeld(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdDudUseHeld", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetSleeping__Boolean(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetSleeping__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetSleeping__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetSleeping__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcDudUseHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcDudUseHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcDudUseHeld(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcDudUseHeld", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdFellToFar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdFellToFar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdFellToFar(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdFellToFar", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcFellTooFar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcFellTooFar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcFellTooFar(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcFellTooFar", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetMenuEyes__Boolean(bool  hasMenuEyes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetMenuEyes__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasMenuEyes);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetMenuEyes__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetMenuEyes__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetMute__Boolean(bool  isMute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetMute__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isMute);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetMute__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetMute__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSendTextChatMessage__String(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSendTextChatMessage__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSendTextChatMessage__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSendTextChatMessage__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdPlaceInHome__Prop__ShellReference(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::SeaShell_ShellReference  propHomeReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdPlaceInHome__Prop__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, propHomeReference);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdPlaceInHome__Prop__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdPlaceInHome__Prop__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetSitting__Boolean(bool  isSitting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetSitting__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSitting);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetSitting__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetSitting__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcTextChatMessage__String(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcTextChatMessage__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcTextChatMessage__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcTextChatMessage__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcReactToCarrySnatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcReactToCarrySnatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcReactToCarrySnatch(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcReactToCarrySnatch", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcReactToCarryEscape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcReactToCarryEscape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcReactToCarryEscape(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcReactToCarryEscape", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcReactToBeingPickedUp__PlayerCharacter(::GlobalNamespace::PlayerCharacter*  playerWhoPickedUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcReactToBeingPickedUp__PlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerWhoPickedUp);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcReactToBeingPickedUp__PlayerCharacter(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcReactToBeingPickedUp__PlayerCharacter", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcShowSwitchTap__ShellReference(::GlobalNamespace::SeaShell_ShellReference  shellReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcShowSwitchTap__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shellReference);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcShowSwitchTap__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcShowSwitchTap__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdTextInputStroke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdTextInputStroke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdTextInputStroke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdTextInputStroke", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RPCTextInputStroke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCTextInputStroke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCTextInputStroke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCTextInputStroke", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdTextInputErase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdTextInputErase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdTextInputErase(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdTextInputErase", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RPCTextInputErase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCTextInputErase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCTextInputErase(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCTextInputErase", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetIsTextChatting__Boolean(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetIsTextChatting__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetIsTextChatting__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetIsTextChatting__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdTextChatStroke__Boolean(bool  isDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdTextChatStroke__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDelete);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdTextChatStroke__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdTextChatStroke__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RPCTextChatStroke__Boolean(bool  isDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCTextChatStroke__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDelete);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCTextChatStroke__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCTextChatStroke__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdDudJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdDudJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdDudJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdDudJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RPCDudJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCDudJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCDudJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCDudJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdRecordProvenWalking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdRecordProvenWalking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdRecordProvenWalking(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdRecordProvenWalking", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RPCSetInitialHasLearnedWalking__Boolean(bool  hasLearnedWalking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RPCSetInitialHasLearnedWalking__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasLearnedWalking);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RPCSetInitialHasLearnedWalking__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RPCSetInitialHasLearnedWalking__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetEchoAmount__Single(float_t  echoValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetEchoAmount__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, echoValue);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetEchoAmount__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetEchoAmount__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetOutdoorness__Single(float_t  outdoornessValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetOutdoorness__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outdoornessValue);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetOutdoorness__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetOutdoorness__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdSetPending__Boolean(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdSetPending__Boolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdSetPending__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdSetPending__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcPoseDrop__ShellReference(::GlobalNamespace::SeaShell_ShellReference  playerPoseReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcPoseDrop__ShellReference", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerPoseReference);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcPoseDrop__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcPoseDrop__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_CmdOnJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_CmdOnJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_CmdOnJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_CmdOnJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcOnJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcOnJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcOnJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcOnJump", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_RpcSetDream__DreamController__Boolean(::HouseHouse::Dream::DreamController*  dreamController, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_RpcSetDream__DreamController__Boolean", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dreamController, active);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_RpcSetDream__DreamController__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_RpcSetDream__DreamController__Boolean", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::UserCode_SetInitialPlayerData__Platforms__String__UInt64__String(::GlobalNamespace::Platforms  newPlatform, ::StringW  newModerationName, uint64_t  platformId, ::StringW  eosProductUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"UserCode_SetInitialPlayerData__Platforms__String__UInt64__String", {}, {::i2c::type_of<::GlobalNamespace::Platforms>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlatform, newModerationName, platformId, eosProductUserId);
}
inline void GlobalNamespace::PlayerNetworking::InvokeUserCode_SetInitialPlayerData__Platforms__String__UInt64__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(),
                        {"InvokeUserCode_SetInitialPlayerData__Platforms__String__UInt64__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PlayerNetworking::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::PlayerNetworking::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerNetworking*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::PlayerNetworking* GlobalNamespace::PlayerNetworking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerNetworking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerNetworking::PlayerNetworking()   {
}
