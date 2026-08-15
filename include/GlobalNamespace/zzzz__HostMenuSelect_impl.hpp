#pragma once
// IWYU pragma private; include "GlobalNamespace/HostMenuSelect.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HostMenuSelect_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__GameSlotCard_def.hpp"
#include "GlobalNamespace/zzzz__HostMenuSelect_def.hpp"
#include "GlobalNamespace/zzzz__HouseScroller_def.hpp"
#include "GlobalNamespace/zzzz__IMenuSelectionRefresher_def.hpp"
#include "GlobalNamespace/zzzz__ManagedButton_def.hpp"
#include "GlobalNamespace/zzzz__SaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect___c::*)()>(&::GlobalNamespace::HostMenuSelect___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect___c._Init_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HostMenuSelect___c::*)()>(&::GlobalNamespace::HostMenuSelect___c::_Init_b__13_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180444520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect___c*>(),
                        {"<Init>b__13_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect___c._RefreshSlotCards_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HostMenuSelect___c::*)(::GlobalNamespace::SaveData*, ::GlobalNamespace::SaveData*)>(&::GlobalNamespace::HostMenuSelect___c::_RefreshSlotCards_b__16_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804444b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect___c*>(),
                        {"<RefreshSlotCards>b__16_0", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>(), ::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HostMenuSelect___c::setStaticF___9(::GlobalNamespace::HostMenuSelect___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HostMenuSelect___c*, "<>9", ::GlobalNamespace::HostMenuSelect___c*>(std::forward<::GlobalNamespace::HostMenuSelect___c*>(value));
}
inline ::GlobalNamespace::HostMenuSelect___c* GlobalNamespace::HostMenuSelect___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HostMenuSelect___c*, "<>9", ::GlobalNamespace::HostMenuSelect___c*>();
}
inline void GlobalNamespace::HostMenuSelect___c::setStaticF___9__13_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__13_0", ::GlobalNamespace::HostMenuSelect___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::HostMenuSelect___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__13_0", ::GlobalNamespace::HostMenuSelect___c*>();
}
inline void GlobalNamespace::HostMenuSelect___c::setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::SaveData*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::SaveData*>*, "<>9__16_0", ::GlobalNamespace::HostMenuSelect___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::SaveData*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::SaveData*>* GlobalNamespace::HostMenuSelect___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::SaveData*>*, "<>9__16_0", ::GlobalNamespace::HostMenuSelect___c*>();
}
inline void GlobalNamespace::HostMenuSelect___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HostMenuSelect___c::_Init_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect___c*>(),
                        {"<Init>b__13_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::HostMenuSelect___c::_RefreshSlotCards_b__16_0(::GlobalNamespace::SaveData*  a, ::GlobalNamespace::SaveData*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect___c*>(),
                        {"<RefreshSlotCards>b__16_0", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>(), ::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::HostMenuSelect___c* GlobalNamespace::HostMenuSelect___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HostMenuSelect___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HostMenuSelect___c::HostMenuSelect___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect__Init_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect__Init_d__13::*)()>(&::GlobalNamespace::HostMenuSelect__Init_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x180442a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__Init_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect__Init_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect__Init_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HostMenuSelect__Init_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__Init_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HostMenuSelect__Init_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__Init_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect__Init_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__Init_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::HostMenuSelect__Init_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HostMenuSelect__Init_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HostMenuSelect>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HostMenuSelect__Init_d__13::HostMenuSelect__Init_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::HostMenuSelect>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HostMenuSelect__Init_d__13::HostMenuSelect__Init_d__13()   {
}
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::*)()>(&::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180444690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::HostMenuSelect__ValidateAuth_d__14(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14::HostMenuSelect__ValidateAuth_d__14()   {
}
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804338a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.Back
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::Back)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"Back", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.StartNewGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::StartNewGame)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180433d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"StartNewGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.ResetRequiresAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::ResetRequiresAuth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180433d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ResetRequiresAuth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.RefreshMenuSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::RefreshMenuSelection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"RefreshMenuSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180433780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.ValidateAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::ValidateAuth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180433e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ValidateAuth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.ValidateRequiresAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::ValidateRequiresAuth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180433e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ValidateRequiresAuth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.RefreshSlotCards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::RefreshSlotCards)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x180433910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"RefreshSlotCards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.ActionSelectSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)(::GlobalNamespace::SaveData*)>(&::GlobalNamespace::HostMenuSelect::ActionSelectSaveData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180433690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ActionSelectSaveData", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.AddGameSlotCard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameSlotCard> (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::AddGameSlotCard)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180433740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"AddGameSlotCard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.GoToTitleMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::GoToTitleMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.GoToLoadingMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::GoToLoadingMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"GoToLoadingMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.GoToHostMenuConfirm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::GoToHostMenuConfirm)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180433620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"GoToHostMenuConfirm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect.NavigateRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::NavigateRight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804337f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"NavigateRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenuSelect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenuSelect::*)()>(&::GlobalNamespace::HostMenuSelect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180433ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HostMenuSelect::__cordl_internal_get_slotCardPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_slotCardPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardPrefab;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_slotCardPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotCardPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HostMenuSelect::__cordl_internal_get_slotCardParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_slotCardParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardParent;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_slotCardParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotCardParent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>*& GlobalNamespace::HostMenuSelect::__cordl_internal_get_cards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cards;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>* const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_cards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cards;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_cards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cards = value;
}
constexpr ::UnityW<::GlobalNamespace::HouseScroller>& GlobalNamespace::HostMenuSelect::__cordl_internal_get_scroller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scroller;
}
constexpr ::UnityW<::GlobalNamespace::HouseScroller> const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_scroller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scroller;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_scroller(::UnityW<::GlobalNamespace::HouseScroller>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scroller = value;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton>& GlobalNamespace::HostMenuSelect::__cordl_internal_get_rightHandDefaultSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandDefaultSelection;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_rightHandDefaultSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandDefaultSelection;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_rightHandDefaultSelection(::UnityW<::GlobalNamespace::ManagedButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandDefaultSelection = value;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton>& GlobalNamespace::HostMenuSelect::__cordl_internal_get_leftHandDefaultSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandDefaultSelection;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_leftHandDefaultSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandDefaultSelection;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_leftHandDefaultSelection(::UnityW<::GlobalNamespace::ManagedButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandDefaultSelection = value;
}
constexpr bool& GlobalNamespace::HostMenuSelect::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::HostMenuSelect::__cordl_internal_get_RequiresAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiresAuth;
}
constexpr bool const& GlobalNamespace::HostMenuSelect::__cordl_internal_get_RequiresAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiresAuth;
}
constexpr void GlobalNamespace::HostMenuSelect::__cordl_internal_set_RequiresAuth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequiresAuth = value;
}
inline void GlobalNamespace::HostMenuSelect::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::Back()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"Back", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::StartNewGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"StartNewGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::ResetRequiresAuth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ResetRequiresAuth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::RefreshMenuSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"RefreshMenuSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::HostMenuSelect::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::HostMenuSelect::ValidateAuth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ValidateAuth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool GlobalNamespace::HostMenuSelect::ValidateRequiresAuth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ValidateRequiresAuth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::RefreshSlotCards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"RefreshSlotCards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::ActionSelectSaveData(::GlobalNamespace::SaveData*  saveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"ActionSelectSaveData", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveData);
}
inline ::UnityW<::GlobalNamespace::GameSlotCard> GlobalNamespace::HostMenuSelect::AddGameSlotCard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"AddGameSlotCard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameSlotCard>>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::GoToTitleMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::GoToLoadingMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"GoToLoadingMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::GoToHostMenuConfirm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"GoToHostMenuConfirm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::NavigateRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {"NavigateRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenuSelect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenuSelect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HostMenuSelect* GlobalNamespace::HostMenuSelect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HostMenuSelect*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr  GlobalNamespace::HostMenuSelect::operator ::GlobalNamespace::IMenuSelectionRefresher*() noexcept {
return static_cast<::GlobalNamespace::IMenuSelectionRefresher*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr ::GlobalNamespace::IMenuSelectionRefresher* GlobalNamespace::HostMenuSelect::i___GlobalNamespace__IMenuSelectionRefresher() noexcept {
return static_cast<::GlobalNamespace::IMenuSelectionRefresher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HostMenuSelect::HostMenuSelect()   {
}
