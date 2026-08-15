#pragma once
// IWYU pragma private; include "GlobalNamespace/ControlsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ControlsManager_def.hpp"
#include "GlobalNamespace/zzzz__ControlsManager_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ControlsManager_ControlsState::ControlsManager_ControlsState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControlsManager_ControlsState::ControlsManager_ControlsState()   {
}
constexpr ::GlobalNamespace::ControlsManager_ControlsState  GlobalNamespace::ControlsManager_ControlsState::MainMenu{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ControlsManager_ControlsState  GlobalNamespace::ControlsManager_ControlsState::WorldMenu{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ControlsManager_ControlsState  GlobalNamespace::ControlsManager_ControlsState::Gameplay{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ControlsManager_ControlsState  GlobalNamespace::ControlsManager_ControlsState::TextInput{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ControlsManager_ControlsState  GlobalNamespace::ControlsManager_ControlsState::Rebinding{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControlsManager::*)()>(&::GlobalNamespace::ControlsManager::Initialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18041f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager.SetWorldIsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::ControlsManager::SetWorldIsActive)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetWorldIsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager.SetControllerTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ControlsManager::SetControllerTypes)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18041fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetControllerTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager.SetMenuMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::ControlsManager::SetMenuMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18041fc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetMenuMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager.SetTextInputMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::ControlsManager::SetTextInputMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetTextInputMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager.SetRebindMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::ControlsManager::SetRebindMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetRebindMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ControlsManager::Refresh)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x18041f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControlsManager::*)()>(&::GlobalNamespace::ControlsManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControlsManager._Refresh_g__DisableAll_14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ControlsManager::_Refresh_g__DisableAll_14_0)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x18041fde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"<Refresh>g__DisableAll|14_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ControlsManager::setStaticF_inputPlayers(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::Rewired::Player*>*, "inputPlayers", ::GlobalNamespace::ControlsManager*>(std::forward<::System::Collections::Generic::IList_1<::Rewired::Player*>*>(value));
}
inline ::System::Collections::Generic::IList_1<::Rewired::Player*>* GlobalNamespace::ControlsManager::getStaticF_inputPlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::Rewired::Player*>*, "inputPlayers", ::GlobalNamespace::ControlsManager*>();
}
inline void GlobalNamespace::ControlsManager::setStaticF_worldIsActive(bool  value)  {
::cordl_internals::setStaticField<bool, "worldIsActive", ::GlobalNamespace::ControlsManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ControlsManager::getStaticF_worldIsActive()  {
return ::cordl_internals::getStaticField<bool, "worldIsActive", ::GlobalNamespace::ControlsManager*>();
}
inline void GlobalNamespace::ControlsManager::setStaticF_menuModeActive(bool  value)  {
::cordl_internals::setStaticField<bool, "menuModeActive", ::GlobalNamespace::ControlsManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ControlsManager::getStaticF_menuModeActive()  {
return ::cordl_internals::getStaticField<bool, "menuModeActive", ::GlobalNamespace::ControlsManager*>();
}
inline void GlobalNamespace::ControlsManager::setStaticF_textInputModeActive(bool  value)  {
::cordl_internals::setStaticField<bool, "textInputModeActive", ::GlobalNamespace::ControlsManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ControlsManager::getStaticF_textInputModeActive()  {
return ::cordl_internals::getStaticField<bool, "textInputModeActive", ::GlobalNamespace::ControlsManager*>();
}
inline void GlobalNamespace::ControlsManager::setStaticF_rebindModeActive(bool  value)  {
::cordl_internals::setStaticField<bool, "rebindModeActive", ::GlobalNamespace::ControlsManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ControlsManager::getStaticF_rebindModeActive()  {
return ::cordl_internals::getStaticField<bool, "rebindModeActive", ::GlobalNamespace::ControlsManager*>();
}
inline void GlobalNamespace::ControlsManager::setStaticF_MultiplierHeadControl(float_t  value)  {
::cordl_internals::setStaticField<float_t, "MultiplierHeadControl", ::GlobalNamespace::ControlsManager*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::ControlsManager::getStaticF_MultiplierHeadControl()  {
return ::cordl_internals::getStaticField<float_t, "MultiplierHeadControl", ::GlobalNamespace::ControlsManager*>();
}
inline void GlobalNamespace::ControlsManager::setStaticF_controllerTypes(::System::Collections::Generic::List_1<::Rewired::ControllerType>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Rewired::ControllerType>*, "controllerTypes", ::GlobalNamespace::ControlsManager*>(std::forward<::System::Collections::Generic::List_1<::Rewired::ControllerType>*>(value));
}
inline ::System::Collections::Generic::List_1<::Rewired::ControllerType>* GlobalNamespace::ControlsManager::getStaticF_controllerTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Rewired::ControllerType>*, "controllerTypes", ::GlobalNamespace::ControlsManager*>();
}
inline void GlobalNamespace::ControlsManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControlsManager::SetWorldIsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetWorldIsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::ControlsManager::SetControllerTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetControllerTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ControlsManager::SetMenuMode(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetMenuMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::ControlsManager::SetTextInputMode(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetTextInputMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::ControlsManager::SetRebindMode(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"SetRebindMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::ControlsManager::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ControlsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControlsManager::_Refresh_g__DisableAll_14_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControlsManager*>(),
                        {"<Refresh>g__DisableAll|14_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ControlsManager* GlobalNamespace::ControlsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ControlsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControlsManager::ControlsManager()   {
}
