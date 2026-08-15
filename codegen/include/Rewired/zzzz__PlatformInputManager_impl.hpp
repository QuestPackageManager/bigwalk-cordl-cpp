#pragma once
// IWYU pragma private; include "Rewired/PlatformInputManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__PlatformInputManager_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedKeyboardSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedMouseSource_def.hpp"
#include "Rewired/zzzz__BridgedController_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__ControllerDisconnectedEventArgs_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__UpdateControllerInfoEventArgs_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Rewired::PlatformInputManager.add_DeviceConnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action_1<::Rewired::BridgedController*>*)>(&::Rewired::PlatformInputManager::add_DeviceConnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818461e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_DeviceConnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::BridgedController*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.remove_DeviceConnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action_1<::Rewired::BridgedController*>*)>(&::Rewired::PlatformInputManager::remove_DeviceConnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818464b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_DeviceConnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::BridgedController*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.add_DeviceDisconnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*)>(&::Rewired::PlatformInputManager::add_DeviceDisconnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181846270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_DeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.remove_DeviceDisconnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*)>(&::Rewired::PlatformInputManager::remove_DeviceDisconnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181846540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_DeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.add_UpdateControllerInfoEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*)>(&::Rewired::PlatformInputManager::add_UpdateControllerInfoEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181846420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_UpdateControllerInfoEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.remove_UpdateControllerInfoEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*)>(&::Rewired::PlatformInputManager::remove_UpdateControllerInfoEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818466f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_UpdateControllerInfoEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.add_SystemDeviceConnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action*)>(&::Rewired::PlatformInputManager::add_SystemDeviceConnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181846300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_SystemDeviceConnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.remove_SystemDeviceConnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action*)>(&::Rewired::PlatformInputManager::remove_SystemDeviceConnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818465d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_SystemDeviceConnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.add_SystemDeviceDisconnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action*)>(&::Rewired::PlatformInputManager::add_SystemDeviceDisconnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181846390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_SystemDeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.remove_SystemDeviceDisconnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::System::Action*)>(&::Rewired::PlatformInputManager::remove_SystemDeviceDisconnectedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181846660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_SystemDeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.get_deviceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::get_deviceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.get_primaryInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlatformInputManager* (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::get_primaryInputManager)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.get_inputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IInputSource* (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::get_inputSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.get_inputSourceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputSource (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::get_inputSourceType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(::Rewired::UpdateLoopType)>(&::Rewired::PlatformInputManager::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.SystemDeviceConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::SystemDeviceConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.SystemDeviceDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::SystemDeviceDisconnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.UpdateControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(int32_t, ::Rewired::ControllerDataUpdater*)>(&::Rewired::PlatformInputManager::UpdateControllerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.GetInputDataUpdateDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::GetInputDataUpdateDelegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.SetUnityJoystickId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)(int32_t, int32_t)>(&::Rewired::PlatformInputManager::SetUnityJoystickId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.GetUnifiedMouseSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IUnifiedMouseSource* (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::GetUnifiedMouseSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager.GetUnifiedKeyboardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IUnifiedKeyboardSource* (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::GetUnifiedKeyboardSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                    {::i2c::class_of<::Rewired::PlatformInputManager*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInputManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInputManager::*)()>(&::Rewired::PlatformInputManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Rewired::BridgedController*>*& Rewired::PlatformInputManager::__cordl_internal_get__DeviceConnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeviceConnectedEvent;
}
constexpr ::System::Action_1<::Rewired::BridgedController*>* const& Rewired::PlatformInputManager::__cordl_internal_get__DeviceConnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeviceConnectedEvent;
}
constexpr void Rewired::PlatformInputManager::__cordl_internal_set__DeviceConnectedEvent(::System::Action_1<::Rewired::BridgedController*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeviceConnectedEvent = value;
}
constexpr ::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*& Rewired::PlatformInputManager::__cordl_internal_get__DeviceDisconnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeviceDisconnectedEvent;
}
constexpr ::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>* const& Rewired::PlatformInputManager::__cordl_internal_get__DeviceDisconnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeviceDisconnectedEvent;
}
constexpr void Rewired::PlatformInputManager::__cordl_internal_set__DeviceDisconnectedEvent(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeviceDisconnectedEvent = value;
}
constexpr ::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*& Rewired::PlatformInputManager::__cordl_internal_get__UpdateControllerInfoEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateControllerInfoEvent;
}
constexpr ::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>* const& Rewired::PlatformInputManager::__cordl_internal_get__UpdateControllerInfoEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateControllerInfoEvent;
}
constexpr void Rewired::PlatformInputManager::__cordl_internal_set__UpdateControllerInfoEvent(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateControllerInfoEvent = value;
}
constexpr ::System::Action*& Rewired::PlatformInputManager::__cordl_internal_get__SystemDeviceConnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SystemDeviceConnectedEvent;
}
constexpr ::System::Action* const& Rewired::PlatformInputManager::__cordl_internal_get__SystemDeviceConnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SystemDeviceConnectedEvent;
}
constexpr void Rewired::PlatformInputManager::__cordl_internal_set__SystemDeviceConnectedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SystemDeviceConnectedEvent = value;
}
constexpr ::System::Action*& Rewired::PlatformInputManager::__cordl_internal_get__SystemDeviceDisconnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SystemDeviceDisconnectedEvent;
}
constexpr ::System::Action* const& Rewired::PlatformInputManager::__cordl_internal_get__SystemDeviceDisconnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SystemDeviceDisconnectedEvent;
}
constexpr void Rewired::PlatformInputManager::__cordl_internal_set__SystemDeviceDisconnectedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SystemDeviceDisconnectedEvent = value;
}
inline void Rewired::PlatformInputManager::add_DeviceConnectedEvent(::System::Action_1<::Rewired::BridgedController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_DeviceConnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::BridgedController*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::remove_DeviceConnectedEvent(::System::Action_1<::Rewired::BridgedController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_DeviceConnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::BridgedController*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::add_DeviceDisconnectedEvent(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_DeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::remove_DeviceDisconnectedEvent(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_DeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::add_UpdateControllerInfoEvent(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_UpdateControllerInfoEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::remove_UpdateControllerInfoEvent(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_UpdateControllerInfoEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::add_SystemDeviceConnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_SystemDeviceConnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::remove_SystemDeviceConnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_SystemDeviceConnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::add_SystemDeviceDisconnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"add_SystemDeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlatformInputManager::remove_SystemDeviceDisconnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {"remove_SystemDeviceDisconnectedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::PlatformInputManager::get_deviceCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::PlatformInputManager* Rewired::PlatformInputManager::get_primaryInputManager()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlatformInputManager*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IInputSource* Rewired::PlatformInputManager::get_inputSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IInputSource*>(this, ___internal_method);
}
inline ::Rewired::InputSource Rewired::PlatformInputManager::get_inputSourceType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputSource>(this, ___internal_method);
}
inline void Rewired::PlatformInputManager::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlatformInputManager::Update(::Rewired::UpdateLoopType  currentUpdateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentUpdateLoop);
}
inline void Rewired::PlatformInputManager::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlatformInputManager::SystemDeviceConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlatformInputManager::SystemDeviceDisconnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlatformInputManager::UpdateControllerData(int32_t  controllerId, ::Rewired::ControllerDataUpdater*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerId, data);
}
inline ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* Rewired::PlatformInputManager::GetInputDataUpdateDelegate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*>(this, ___internal_method);
}
inline void Rewired::PlatformInputManager::SetUnityJoystickId(int32_t  joystickId, int32_t  unityJoystickId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystickId, unityJoystickId);
}
inline ::Rewired::Interfaces::IUnifiedMouseSource* Rewired::PlatformInputManager::GetUnifiedMouseSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IUnifiedMouseSource*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IUnifiedKeyboardSource* Rewired::PlatformInputManager::GetUnifiedKeyboardSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInputManager*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IUnifiedKeyboardSource*>(this, ___internal_method);
}
inline void Rewired::PlatformInputManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInputManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlatformInputManager* Rewired::PlatformInputManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlatformInputManager*>());
}
// Ctor Parameters []
constexpr ::Rewired::PlatformInputManager::PlatformInputManager()   {
}
