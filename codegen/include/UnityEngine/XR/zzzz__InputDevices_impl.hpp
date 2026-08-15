#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevices_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__ConnectionChangeType_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.InvokeConnectionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::UnityEngine::XR::ConnectionChangeType)>(&::UnityEngine::XR::InputDevices::InvokeConnectionEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18254e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"InvokeConnectionEvent", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::ConnectionChangeType>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::UnityEngine::XR::InputDevices*>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConnected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::UnityEngine::XR::InputDevices*>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::UnityEngine::XR::InputDevices*>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceDisconnected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::UnityEngine::XR::InputDevices*>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::UnityEngine::XR::InputDevices*>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConfigChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::UnityEngine::XR::InputDevices*>();
}
inline void UnityEngine::XR::InputDevices::InvokeConnectionEvent(uint64_t  deviceId, ::UnityEngine::XR::ConnectionChangeType  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"InvokeConnectionEvent", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::ConnectionChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, change);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDevices::InputDevices()   {
}
