#pragma once
// IWYU pragma private; include "GlobalNamespace/Rebinder.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Rebinder_def.hpp"
#include "GlobalNamespace/zzzz__RebindAction_def.hpp"
#include "GlobalNamespace/zzzz__Rebinder_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerStatusChangedEventArgs_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__InputMapper_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Rebinder_RebindType::Rebinder_RebindType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Rebinder_RebindType::Rebinder_RebindType()   {
}
constexpr ::GlobalNamespace::Rebinder_RebindType  GlobalNamespace::Rebinder_RebindType::Joystick{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Rebinder_RebindType  GlobalNamespace::Rebinder_RebindType::KeyboardMouse{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Rebinder_LayoutType::Rebinder_LayoutType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Rebinder_LayoutType::Rebinder_LayoutType()   {
}
constexpr ::GlobalNamespace::Rebinder_LayoutType  GlobalNamespace::Rebinder_LayoutType::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Rebinder_LayoutType  GlobalNamespace::Rebinder_LayoutType::NmouseR{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Rebinder_LayoutType  GlobalNamespace::Rebinder_LayoutType::NmouseL{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.get_IsBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Rebinder::*)()>(&::GlobalNamespace::Rebinder::get_IsBinding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"get_IsBinding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.set_IsBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(bool)>(&::GlobalNamespace::Rebinder::set_IsBinding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"set_IsBinding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::GlobalNamespace::Rebinder::*)()>(&::GlobalNamespace::Rebinder::get_player)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.set_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(::Rewired::Player*)>(&::GlobalNamespace::Rebinder::set_player)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180456130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"set_player", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(::GlobalNamespace::Rebinder_LayoutType, ::GlobalNamespace::Rebinder_RebindType, ::Rewired::Player*)>(&::GlobalNamespace::Rebinder::_ctor)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x180455c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Rebinder_LayoutType>(), ::i2c::type_of<::GlobalNamespace::Rebinder_RebindType>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.SetLayoutName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)()>(&::GlobalNamespace::Rebinder::SetLayoutName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804559b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"SetLayoutName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)()>(&::GlobalNamespace::Rebinder::Finalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180454ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                    {::i2c::class_of<::GlobalNamespace::Rebinder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)()>(&::GlobalNamespace::Rebinder::CleanUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180454b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"CleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.ClearAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Controller*, int32_t, ::Rewired::AxisRange)>(&::GlobalNamespace::Rebinder::ClearAction)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x180454c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"ClearAction", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.StartRebind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(::GlobalNamespace::RebindAction*, ::Rewired::Controller*)>(&::GlobalNamespace::Rebinder::StartRebind)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180455a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"StartRebind", {}, {::i2c::type_of<::GlobalNamespace::RebindAction*>(), ::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.GetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Context* (::GlobalNamespace::Rebinder::*)(::Rewired::ControllerType, ::Rewired::Controller*, int32_t, ::Rewired::AxisRange)>(&::GlobalNamespace::Rebinder::GetContext)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180455020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"GetContext", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.OnControllerPreDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(::Rewired::ControllerStatusChangedEventArgs*)>(&::GlobalNamespace::Rebinder::OnControllerPreDisconnect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180455510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnControllerPreDisconnect", {}, {::i2c::type_of<::Rewired::ControllerStatusChangedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.OnInputMapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(::Rewired::InputMapper_InputMappedEventData*)>(&::GlobalNamespace::Rebinder::OnInputMapped)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180455580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnInputMapped", {}, {::i2c::type_of<::Rewired::InputMapper_InputMappedEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.OnStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(::Rewired::InputMapper_StoppedEventData*)>(&::GlobalNamespace::Rebinder::OnStopped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180455710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnStopped", {}, {::i2c::type_of<::Rewired::InputMapper_StoppedEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.FinishRebind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(bool)>(&::GlobalNamespace::Rebinder::FinishRebind)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180454f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"FinishRebind", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.CancelBind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)()>(&::GlobalNamespace::Rebinder::CancelBind)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180454840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"CancelBind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.OnConflictFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Rebinder::*)(::Rewired::InputMapper_ConflictFoundEventData*)>(&::GlobalNamespace::Rebinder::OnConflictFound)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1804551c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnConflictFound", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictFoundEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.CheckAgainstAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Rebinder::*)(::Rewired::ControllerPollingInfo, int32_t)>(&::GlobalNamespace::Rebinder::CheckAgainstAction)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804548e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"CheckAgainstAction", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.OnIsElementAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Rebinder::*)(::Rewired::ControllerPollingInfo)>(&::GlobalNamespace::Rebinder::OnIsElementAllowed)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1804555c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnIsElementAllowed", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rebinder.RemoveStickConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Rebinder::*)(int32_t, ::Rewired::Controller*)>(&::GlobalNamespace::Rebinder::RemoveStickConflicts)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180455720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"RemoveStickConflicts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::Rebinder::__cordl_internal_get__IsBinding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsBinding_k__BackingField;
}
constexpr bool const& GlobalNamespace::Rebinder::__cordl_internal_get__IsBinding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsBinding_k__BackingField;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set__IsBinding_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsBinding_k__BackingField = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::Rebinder::__cordl_internal_get_onRebindFinishedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRebindFinishedEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::Rebinder::__cordl_internal_get_onRebindFinishedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRebindFinishedEvent;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_onRebindFinishedEvent(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRebindFinishedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::Rebinder::__cordl_internal_get_onDisallowedElementPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisallowedElementPressed;
}
constexpr ::System::Action* const& GlobalNamespace::Rebinder::__cordl_internal_get_onDisallowedElementPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisallowedElementPressed;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_onDisallowedElementPressed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDisallowedElementPressed = value;
}
constexpr ::GlobalNamespace::Rebinder_RebindType& GlobalNamespace::Rebinder::__cordl_internal_get_rebindType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindType;
}
constexpr ::GlobalNamespace::Rebinder_RebindType const& GlobalNamespace::Rebinder::__cordl_internal_get_rebindType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindType;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_rebindType(::GlobalNamespace::Rebinder_RebindType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindType = value;
}
constexpr ::GlobalNamespace::Rebinder_LayoutType& GlobalNamespace::Rebinder::__cordl_internal_get_layoutType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layoutType;
}
constexpr ::GlobalNamespace::Rebinder_LayoutType const& GlobalNamespace::Rebinder::__cordl_internal_get_layoutType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layoutType;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_layoutType(::GlobalNamespace::Rebinder_LayoutType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layoutType = value;
}
constexpr ::Rewired::InputMapper_ConflictFoundEventData*& GlobalNamespace::Rebinder::__cordl_internal_get_conflictFoundEventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conflictFoundEventData;
}
constexpr ::Rewired::InputMapper_ConflictFoundEventData* const& GlobalNamespace::Rebinder::__cordl_internal_get_conflictFoundEventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conflictFoundEventData;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_conflictFoundEventData(::Rewired::InputMapper_ConflictFoundEventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conflictFoundEventData = value;
}
constexpr ::Rewired::Controller*& GlobalNamespace::Rebinder::__cordl_internal_get_bindJoystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindJoystick;
}
constexpr ::Rewired::Controller* const& GlobalNamespace::Rebinder::__cordl_internal_get_bindJoystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindJoystick;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_bindJoystick(::Rewired::Controller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bindJoystick = value;
}
constexpr ::GlobalNamespace::RebindAction*& GlobalNamespace::Rebinder::__cordl_internal_get_rebindOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindOption;
}
constexpr ::GlobalNamespace::RebindAction* const& GlobalNamespace::Rebinder::__cordl_internal_get_rebindOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindOption;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_rebindOption(::GlobalNamespace::RebindAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindOption = value;
}
constexpr ::Rewired::InputMapper*& GlobalNamespace::Rebinder::__cordl_internal_get_inputMapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMapper;
}
constexpr ::Rewired::InputMapper* const& GlobalNamespace::Rebinder::__cordl_internal_get_inputMapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMapper;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_inputMapper(::Rewired::InputMapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputMapper = value;
}
constexpr ::Rewired::InputMapper*& GlobalNamespace::Rebinder::__cordl_internal_get_keyboardInputMapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardInputMapper;
}
constexpr ::Rewired::InputMapper* const& GlobalNamespace::Rebinder::__cordl_internal_get_keyboardInputMapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardInputMapper;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_keyboardInputMapper(::Rewired::InputMapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyboardInputMapper = value;
}
constexpr int32_t& GlobalNamespace::Rebinder::__cordl_internal_get_lastDisallowedElementIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisallowedElementIndex;
}
constexpr int32_t const& GlobalNamespace::Rebinder::__cordl_internal_get_lastDisallowedElementIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisallowedElementIndex;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_lastDisallowedElementIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDisallowedElementIndex = value;
}
constexpr ::Rewired::Pole& GlobalNamespace::Rebinder::__cordl_internal_get_lastDisallowedAxisPole()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisallowedAxisPole;
}
constexpr ::Rewired::Pole const& GlobalNamespace::Rebinder::__cordl_internal_get_lastDisallowedAxisPole() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisallowedAxisPole;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set_lastDisallowedAxisPole(::Rewired::Pole  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDisallowedAxisPole = value;
}
constexpr ::Rewired::Player*& GlobalNamespace::Rebinder::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::Rewired::Player* const& GlobalNamespace::Rebinder::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void GlobalNamespace::Rebinder::__cordl_internal_set__player(::Rewired::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
inline void GlobalNamespace::Rebinder::setStaticF_layoutName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "layoutName", ::GlobalNamespace::Rebinder*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::Rebinder::getStaticF_layoutName()  {
return ::cordl_internals::getStaticField<::StringW, "layoutName", ::GlobalNamespace::Rebinder*>();
}
inline bool GlobalNamespace::Rebinder::get_IsBinding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"get_IsBinding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Rebinder::set_IsBinding(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"set_IsBinding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Player* GlobalNamespace::Rebinder::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline void GlobalNamespace::Rebinder::set_player(::Rewired::Player*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"set_player", {}, {::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Rebinder::_ctor(::GlobalNamespace::Rebinder_LayoutType  layout, ::GlobalNamespace::Rebinder_RebindType  rebindControllerType, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Rebinder_LayoutType>(), ::i2c::type_of<::GlobalNamespace::Rebinder_RebindType>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layout, rebindControllerType, player);
}
inline void GlobalNamespace::Rebinder::SetLayoutName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"SetLayoutName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Rebinder::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Rebinder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Rebinder::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"CleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Rebinder::ClearAction(::Rewired::Controller*  controller, int32_t  actionID, ::Rewired::AxisRange  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"ClearAction", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller, actionID, range);
}
inline void GlobalNamespace::Rebinder::StartRebind(::GlobalNamespace::RebindAction*  rebindable, ::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"StartRebind", {}, {::i2c::type_of<::GlobalNamespace::RebindAction*>(), ::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rebindable, controller);
}
inline ::Rewired::InputMapper_Context* GlobalNamespace::Rebinder::GetContext(::Rewired::ControllerType  controllerType, ::Rewired::Controller*  joystick, int32_t  action, ::Rewired::AxisRange  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"GetContext", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Context*>(this, ___internal_method, controllerType, joystick, action, range);
}
inline void GlobalNamespace::Rebinder::OnControllerPreDisconnect(::Rewired::ControllerStatusChangedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnControllerPreDisconnect", {}, {::i2c::type_of<::Rewired::ControllerStatusChangedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::Rebinder::OnInputMapped(::Rewired::InputMapper_InputMappedEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnInputMapped", {}, {::i2c::type_of<::Rewired::InputMapper_InputMappedEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::Rebinder::OnStopped(::Rewired::InputMapper_StoppedEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnStopped", {}, {::i2c::type_of<::Rewired::InputMapper_StoppedEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::Rebinder::FinishRebind(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"FinishRebind", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::Rebinder::CancelBind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"CancelBind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Rebinder::OnConflictFound(::Rewired::InputMapper_ConflictFoundEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnConflictFound", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictFoundEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool GlobalNamespace::Rebinder::CheckAgainstAction(::Rewired::ControllerPollingInfo  info, int32_t  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"CheckAgainstAction", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info, action);
}
inline bool GlobalNamespace::Rebinder::OnIsElementAllowed(::Rewired::ControllerPollingInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"OnIsElementAllowed", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline bool GlobalNamespace::Rebinder::RemoveStickConflicts(int32_t  stickMapCatID, ::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Rebinder*>(),
                        {"RemoveStickConflicts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stickMapCatID, controller);
}
inline ::GlobalNamespace::Rebinder* GlobalNamespace::Rebinder::New_ctor(::GlobalNamespace::Rebinder_LayoutType  layout, ::GlobalNamespace::Rebinder_RebindType  rebindControllerType, ::Rewired::Player*  player)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Rebinder*>(layout, rebindControllerType, player));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Rebinder::Rebinder()   {
}
