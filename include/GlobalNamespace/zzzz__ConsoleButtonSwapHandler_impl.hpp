#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleButtonSwapHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleButtonSwapHandler_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleButtonSwapHandler_def.hpp"
#include "Rewired/zzzz__ControllerStatusChangedEventArgs_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons.get_ActionNameA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::get_ActionNameA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>(),
                        {"get_ActionNameA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons.get_ActionNameB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::get_ActionNameB)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>(),
                        {"get_ActionNameB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::__cordl_internal_get_actionNameA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionNameA;
}
constexpr ::StringW const& GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::__cordl_internal_get_actionNameA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionNameA;
}
constexpr void GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::__cordl_internal_set_actionNameA(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionNameA = value;
}
constexpr ::StringW& GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::__cordl_internal_get_actionNameB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionNameB;
}
constexpr ::StringW const& GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::__cordl_internal_get_actionNameB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionNameB;
}
constexpr void GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::__cordl_internal_set_actionNameB(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionNameB = value;
}
inline ::StringW GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::get_ActionNameA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>(),
                        {"get_ActionNameA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::get_ActionNameB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>(),
                        {"get_ActionNameB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons* GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons::ConsoleButtonSwapHandler_SwapButtons()   {
}
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleButtonSwapHandler::*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler::Start)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18037c920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleButtonSwapHandler::*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18037c700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler.Swap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleButtonSwapHandler::*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler::Swap)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18037caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"Swap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler.ReInputOnControllerConnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleButtonSwapHandler::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::GlobalNamespace::ConsoleButtonSwapHandler::ReInputOnControllerConnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18037c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"ReInputOnControllerConnectedEvent", {}, {::i2c::type_of<::Rewired::ControllerStatusChangedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler.SwapButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Controller*, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*)>(&::GlobalNamespace::ConsoleButtonSwapHandler::SwapButton)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18037ca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"SwapButton", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler::Refresh)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18037c8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleButtonSwapHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleButtonSwapHandler::*)()>(&::GlobalNamespace::ConsoleButtonSwapHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18037cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*& GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_get_swapButtonsPS5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swapButtonsPS5;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>* const& GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_get_swapButtonsPS5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swapButtonsPS5;
}
constexpr void GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_set_swapButtonsPS5(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swapButtonsPS5 = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*& GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_get_swapButtonsNintendo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swapButtonsNintendo;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>* const& GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_get_swapButtonsNintendo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swapButtonsNintendo;
}
constexpr void GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_set_swapButtonsNintendo(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swapButtonsNintendo = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*& GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_get_consoleSwapButtonsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleSwapButtonsList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>* const& GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_get_consoleSwapButtonsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleSwapButtonsList;
}
constexpr void GlobalNamespace::ConsoleButtonSwapHandler::__cordl_internal_set_consoleSwapButtonsList(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___consoleSwapButtonsList = value;
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::setStaticF_OnSwapTrigger(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnSwapTrigger", ::GlobalNamespace::ConsoleButtonSwapHandler*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::ConsoleButtonSwapHandler::getStaticF_OnSwapTrigger()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnSwapTrigger", ::GlobalNamespace::ConsoleButtonSwapHandler*>();
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::Swap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"Swap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::ReInputOnControllerConnectedEvent(::Rewired::ControllerStatusChangedEventArgs*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"ReInputOnControllerConnectedEvent", {}, {::i2c::type_of<::Rewired::ControllerStatusChangedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::SwapButton(::Rewired::Controller*  controller, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  buttonsToSwap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"SwapButton", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller, buttonsToSwap);
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConsoleButtonSwapHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsoleButtonSwapHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsoleButtonSwapHandler* GlobalNamespace::ConsoleButtonSwapHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsoleButtonSwapHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleButtonSwapHandler::ConsoleButtonSwapHandler()   {
}
