#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsMenu.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsMenu_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "GlobalNamespace/zzzz__RebindMenu_def.hpp"
#include "GlobalNamespace/zzzz__SettingsCatagory_def.hpp"
#include "GlobalNamespace/zzzz__SettingsMenu_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu__SelectTask_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu__SelectTask_d__28::*)()>(&::GlobalNamespace::SettingsMenu__SelectTask_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1804441d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu__SelectTask_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu__SelectTask_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu__SelectTask_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SettingsMenu__SelectTask_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu__SelectTask_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsMenu__SelectTask_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu__SelectTask_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu__SelectTask_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu__SelectTask_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SettingsMenu__SelectTask_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsMenu__SelectTask_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "target", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsMenu__SelectTask_d__28::SettingsMenu__SelectTask_d__28(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::UnityEngine::GameObject>  target, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->target = target;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsMenu__SelectTask_d__28::SettingsMenu__SelectTask_d__28()   {
}
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18043eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SwapToCatagory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)(::GlobalNamespace::SettingsCatagory*)>(&::GlobalNamespace::SettingsMenu::SwapToCatagory)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18043eba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SwapToCatagory", {}, {::i2c::type_of<::GlobalNamespace::SettingsCatagory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.GoToPostRebindState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::GoToPostRebindState)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18043e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"GoToPostRebindState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.GoBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::GoBack)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18043e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"GoBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SettingBackEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::SettingBackEvent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18043e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SettingBackEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.GoBackFromCatagory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::GoBackFromCatagory)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18043e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"GoBackFromCatagory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SetToGeneral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::SetToGeneral)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18043e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToGeneral", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SetToGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::SetToGraphics)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18043e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToGraphics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SetToAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::SetToAudio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18043e9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SetToControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::SetToControls)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18043e9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SetToRebinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::SetToRebinding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18043e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToRebinding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.PressCatagoryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)(::GlobalNamespace::SettingsCatagory*)>(&::GlobalNamespace::SettingsMenu::PressCatagoryButton)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18043e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"PressCatagoryButton", {}, {::i2c::type_of<::GlobalNamespace::SettingsCatagory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.SelectTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::SettingsMenu::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::SettingsMenu::SelectTask)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SelectTask", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.NavigateToGeneral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::NavigateToGeneral)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043e600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToGeneral", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.NavigateToGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::NavigateToGraphics)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043e640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToGraphics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.NavigateToAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::NavigateToAudio)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.NavigateToControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::NavigateToControls)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.NavigateToRebind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::NavigateToRebind)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToRebind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.NavigateToCatagory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)(::GlobalNamespace::SettingsCatagory*)>(&::GlobalNamespace::SettingsMenu::NavigateToCatagory)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToCatagory", {}, {::i2c::type_of<::GlobalNamespace::SettingsCatagory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionResetControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionResetControls)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18043dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionResetGeneral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionResetGeneral)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18043de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetGeneral", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionResetAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionResetAudio)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18043dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionResetGraphics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionResetGraphics)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18043df80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetGraphics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionGoToRebindGamepad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionGoToRebindGamepad)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18043db50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindGamepad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionGoToRebindGamepadNmouseL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionGoToRebindGamepadNmouseL)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18043da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindGamepadNmouseL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionGoToRebindGamepadNmouseR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionGoToRebindGamepadNmouseR)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18043daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindGamepadNmouseR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.ActionGoToRebindKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::ActionGoToRebindKeyboard)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18043dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindKeyboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.RefreshAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::RefreshAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"RefreshAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18043e6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18043e6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsMenu::*)()>(&::GlobalNamespace::SettingsMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SettingsMenu::__cordl_internal_get_isInMainMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInMainMenu;
}
constexpr bool const& GlobalNamespace::SettingsMenu::__cordl_internal_get_isInMainMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInMainMenu;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_isInMainMenu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInMainMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryGeneral()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryGeneral;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryGeneral() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryGeneral;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_catagoryGeneral(::UnityW<::GlobalNamespace::SettingsCatagory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catagoryGeneral = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryGraphics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryGraphics;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryGraphics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryGraphics;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_catagoryGraphics(::UnityW<::GlobalNamespace::SettingsCatagory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catagoryGraphics = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryAudio;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryAudio;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_catagoryAudio(::UnityW<::GlobalNamespace::SettingsCatagory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catagoryAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryControls;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryControls;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_catagoryControls(::UnityW<::GlobalNamespace::SettingsCatagory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catagoryControls = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryRebind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryRebind;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_catagoryRebind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryRebind;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_catagoryRebind(::UnityW<::GlobalNamespace::SettingsCatagory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catagoryRebind = value;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu>& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuKeyboard;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuKeyboard;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_rebindMenuKeyboard(::UnityW<::GlobalNamespace::RebindMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindMenuKeyboard = value;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu>& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuGamepad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuGamepad;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuGamepad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuGamepad;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_rebindMenuGamepad(::UnityW<::GlobalNamespace::RebindMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindMenuGamepad = value;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu>& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuGamepadNMouseR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuGamepadNMouseR;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuGamepadNMouseR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuGamepadNMouseR;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_rebindMenuGamepadNMouseR(::UnityW<::GlobalNamespace::RebindMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindMenuGamepadNMouseR = value;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu>& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuGamepadNMouseL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuGamepadNMouseL;
}
constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_rebindMenuGamepadNMouseL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindMenuGamepadNMouseL;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_rebindMenuGamepadNMouseL(::UnityW<::GlobalNamespace::RebindMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindMenuGamepadNMouseL = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SettingsMenu::__cordl_internal_get_contents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contents;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_contents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contents;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_contents(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contents = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>& GlobalNamespace::SettingsMenu::__cordl_internal_get_postRebindDefaultSelections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postRebindDefaultSelections;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_postRebindDefaultSelections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postRebindDefaultSelections;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_postRebindDefaultSelections(::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postRebindDefaultSelections = value;
}
constexpr bool& GlobalNamespace::SettingsMenu::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::SettingsMenu::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& GlobalNamespace::SettingsMenu::__cordl_internal_get_activeCatagory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCatagory;
}
constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_activeCatagory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCatagory;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_activeCatagory(::UnityW<::GlobalNamespace::SettingsCatagory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCatagory = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*& GlobalNamespace::SettingsMenu::__cordl_internal_get_buttonList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>* const& GlobalNamespace::SettingsMenu::__cordl_internal_get_buttonList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonList;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_buttonList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonList = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SettingsMenu::__cordl_internal_get_lastSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSelected;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SettingsMenu::__cordl_internal_get_lastSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSelected;
}
constexpr void GlobalNamespace::SettingsMenu::__cordl_internal_set_lastSelected(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSelected = value;
}
inline void GlobalNamespace::SettingsMenu::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::SwapToCatagory(::GlobalNamespace::SettingsCatagory*  newCatagory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SwapToCatagory", {}, {::i2c::type_of<::GlobalNamespace::SettingsCatagory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCatagory);
}
inline void GlobalNamespace::SettingsMenu::GoToPostRebindState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"GoToPostRebindState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::GoBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"GoBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::SettingBackEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SettingBackEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::GoBackFromCatagory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"GoBackFromCatagory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::SetToGeneral()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToGeneral", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::SetToGraphics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToGraphics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::SetToAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::SetToControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::SetToRebinding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SetToRebinding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::PressCatagoryButton(::GlobalNamespace::SettingsCatagory*  catagory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"PressCatagoryButton", {}, {::i2c::type_of<::GlobalNamespace::SettingsCatagory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, catagory);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::SettingsMenu::SelectTask(::UnityEngine::GameObject*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"SelectTask", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, target);
}
inline void GlobalNamespace::SettingsMenu::NavigateToGeneral()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToGeneral", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::NavigateToGraphics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToGraphics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::NavigateToAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::NavigateToControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::NavigateToRebind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToRebind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::NavigateToCatagory(::GlobalNamespace::SettingsCatagory*  catagory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"NavigateToCatagory", {}, {::i2c::type_of<::GlobalNamespace::SettingsCatagory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, catagory);
}
inline void GlobalNamespace::SettingsMenu::ActionResetControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::ActionResetGeneral()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetGeneral", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::ActionResetAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::ActionResetGraphics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionResetGraphics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::ActionGoToRebindGamepad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindGamepad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::ActionGoToRebindGamepadNmouseL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindGamepadNmouseL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::ActionGoToRebindGamepadNmouseR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindGamepadNmouseR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::ActionGoToRebindKeyboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"ActionGoToRebindKeyboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::RefreshAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"RefreshAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsMenu* GlobalNamespace::SettingsMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsMenu::SettingsMenu()   {
}
