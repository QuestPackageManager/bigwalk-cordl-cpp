#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlayablePlatform.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlayablePlatform_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__AbstractPlatformEnvironment_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformAchievements_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformCore_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLeaderboards_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLobby_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformMarketplace_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformRichPresence_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformUsers_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlayablePlatform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181ac6d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "aLogic", ty: "::Shipmate::Porting::AbstractPlatformLogic*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::AbstractPlayablePlatform__AddLogic_d__14(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLogic*  aLogic, ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aLogic = aLogic;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14::AbstractPlayablePlatform__AddLogic_d__14()   {
}
template<typename T>
inline void Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aManager", ty: "::UnityW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>::AbstractPlayablePlatform__Init_d__15_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this, ::UnityW<T>  aManager, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->aManager = aManager;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>::AbstractPlayablePlatform__Init_d__15_1()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x181ac83e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::AbstractPlayablePlatform__RegisterLogics_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13::AbstractPlayablePlatform__RegisterLogics_d__13()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.RegisterLogics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::RegisterLogics)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac6440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.AddLogic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlayablePlatform::*)(::Shipmate::Porting::AbstractPlatformLogic*)>(&::Shipmate::Porting::AbstractPlayablePlatform::AddLogic)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac62f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"AddLogic", {}, {::i2c::type_of<::Shipmate::Porting::AbstractPlatformLogic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac64c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ac6390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Core
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformCore* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Core)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Core", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Achievements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformAchievements* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Achievements)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Achievements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Market
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformMarketplace* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Market)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Market", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Storage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformStorage* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Storage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Storage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_RichPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformRichPresence* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_RichPresence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_RichPresence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Environment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AbstractPlatformEnvironment* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Environment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Environment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Users
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformUsers* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Users)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Users", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Lobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformLobby* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Lobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Lobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_Leaderboards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::AbstractPlatformLeaderboards* (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_Leaderboards)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Leaderboards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_IsSecondaryPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_IsSecondaryPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_IsSecondaryPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform.get_FullyInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::get_FullyInit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815f5410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_FullyInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlayablePlatform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlayablePlatform::*)()>(&::Shipmate::Porting::AbstractPlayablePlatform::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmate::Porting::AbstractPlatformCore*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mPlatformCore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPlatformCore;
}
constexpr ::Shipmate::Porting::AbstractPlatformCore* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mPlatformCore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPlatformCore;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mPlatformCore(::Shipmate::Porting::AbstractPlatformCore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mPlatformCore = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformMarketplace*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mMarketplace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mMarketplace;
}
constexpr ::Shipmate::Porting::AbstractPlatformMarketplace* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mMarketplace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mMarketplace;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mMarketplace(::Shipmate::Porting::AbstractPlatformMarketplace*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mMarketplace = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformAchievements*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mAchievements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAchievements;
}
constexpr ::Shipmate::Porting::AbstractPlatformAchievements* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mAchievements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAchievements;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mAchievements(::Shipmate::Porting::AbstractPlatformAchievements*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mAchievements = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformStorage*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mStorage;
}
constexpr ::Shipmate::Porting::AbstractPlatformStorage* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mStorage;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mStorage(::Shipmate::Porting::AbstractPlatformStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mStorage = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformRichPresence*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mRichPresence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRichPresence;
}
constexpr ::Shipmate::Porting::AbstractPlatformRichPresence* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mRichPresence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRichPresence;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mRichPresence(::Shipmate::Porting::AbstractPlatformRichPresence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mRichPresence = value;
}
constexpr ::GlobalNamespace::AbstractPlatformEnvironment*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mEnvironment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEnvironment;
}
constexpr ::GlobalNamespace::AbstractPlatformEnvironment* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mEnvironment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEnvironment;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mEnvironment(::GlobalNamespace::AbstractPlatformEnvironment*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mEnvironment = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformUsers*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUsers;
}
constexpr ::Shipmate::Porting::AbstractPlatformUsers* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUsers;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mUsers(::Shipmate::Porting::AbstractPlatformUsers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mUsers = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformLobby*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLobby;
}
constexpr ::Shipmate::Porting::AbstractPlatformLobby* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLobby;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mLobby(::Shipmate::Porting::AbstractPlatformLobby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mLobby = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformLeaderboards*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mLeaderboards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLeaderboards;
}
constexpr ::Shipmate::Porting::AbstractPlatformLeaderboards* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mLeaderboards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLeaderboards;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mLeaderboards(::Shipmate::Porting::AbstractPlatformLeaderboards*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mLeaderboards = value;
}
constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>*& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mAllLogics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAllLogics;
}
constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>* const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mAllLogics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAllLogics;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mAllLogics(::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mAllLogics = value;
}
constexpr bool& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mIsSecondaryPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mIsSecondaryPlatform;
}
constexpr bool const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mIsSecondaryPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mIsSecondaryPlatform;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mIsSecondaryPlatform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mIsSecondaryPlatform = value;
}
constexpr bool& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mInitializationComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mInitializationComplete;
}
constexpr bool const& Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_get_mInitializationComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mInitializationComplete;
}
constexpr void Shipmate::Porting::AbstractPlayablePlatform::__cordl_internal_set_mInitializationComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mInitializationComplete = value;
}
inline void Shipmate::Porting::AbstractPlayablePlatform::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlayablePlatform*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::AbstractPlayablePlatform::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlayablePlatform*>();
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlayablePlatform::RegisterLogics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlayablePlatform::AddLogic(::Shipmate::Porting::AbstractPlatformLogic*  aLogic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"AddLogic", {}, {::i2c::type_of<::Shipmate::Porting::AbstractPlatformLogic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aLogic);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlayablePlatform::Init(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(), 5}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aManager);
}
inline void Shipmate::Porting::AbstractPlayablePlatform::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlayablePlatform::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformCore* Shipmate::Porting::AbstractPlayablePlatform::get_Core()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Core", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformCore*>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformAchievements* Shipmate::Porting::AbstractPlayablePlatform::get_Achievements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Achievements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformAchievements*>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformMarketplace* Shipmate::Porting::AbstractPlayablePlatform::get_Market()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Market", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformMarketplace*>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformStorage* Shipmate::Porting::AbstractPlayablePlatform::get_Storage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Storage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformStorage*>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformRichPresence* Shipmate::Porting::AbstractPlayablePlatform::get_RichPresence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_RichPresence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformRichPresence*>(this, ___internal_method);
}
inline ::GlobalNamespace::AbstractPlatformEnvironment* Shipmate::Porting::AbstractPlayablePlatform::get_Environment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Environment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AbstractPlatformEnvironment*>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformUsers* Shipmate::Porting::AbstractPlayablePlatform::get_Users()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Users", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformUsers*>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformLobby* Shipmate::Porting::AbstractPlayablePlatform::get_Lobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Lobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformLobby*>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformLeaderboards* Shipmate::Porting::AbstractPlayablePlatform::get_Leaderboards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_Leaderboards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformLeaderboards*>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlayablePlatform::get_IsSecondaryPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_IsSecondaryPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlayablePlatform::get_FullyInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {"get_FullyInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlayablePlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlayablePlatform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlayablePlatform* Shipmate::Porting::AbstractPlayablePlatform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlayablePlatform*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlayablePlatform::AbstractPlayablePlatform()   {
}
