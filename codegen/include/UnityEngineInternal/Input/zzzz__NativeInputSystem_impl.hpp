#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputSystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeUpdateCallback_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyBeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&::UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822ed2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"NotifyBeforeUpdate", {}, {::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::IntPtr)>(&::UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822ed360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"NotifyUpdate", {}, {::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.NotifyDeviceDiscovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822ed300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"NotifyDeviceDiscovered", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.ShouldRunUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::by_ref<bool>)>(&::UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822ed3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"ShouldRunUpdate", {}, {::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeInputSystem.set_hasDeviceDiscoveredCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822ed480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"set_hasDeviceDiscoveredCallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngineInternal::Input::NativeUpdateCallback*, "onUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>(std::forward<::UnityEngineInternal::Input::NativeUpdateCallback*>(value));
}
inline ::UnityEngineInternal::Input::NativeUpdateCallback* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onUpdate()  {
return ::cordl_internals::getStaticField<::UnityEngineInternal::Input::NativeUpdateCallback*, "onUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*, "onBeforeUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>(std::forward<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*>(value));
}
inline ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onBeforeUpdate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>*, "onBeforeUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>*, "onShouldRunUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>(std::forward<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>*>(value));
}
inline ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_onShouldRunUpdate()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType,bool>*, "onShouldRunUpdate", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::setStaticF_s_OnDeviceDiscoveredCallback(::System::Action_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<int32_t,::StringW>*, "s_OnDeviceDiscoveredCallback", ::UnityEngineInternal::Input::NativeInputSystem*>(std::forward<::System::Action_2<int32_t,::StringW>*>(value));
}
inline ::System::Action_2<int32_t,::StringW>* UnityEngineInternal::Input::NativeInputSystem::getStaticF_s_OnDeviceDiscoveredCallback()  {
return ::cordl_internals::getStaticField<::System::Action_2<int32_t,::StringW>*, "s_OnDeviceDiscoveredCallback", ::UnityEngineInternal::Input::NativeInputSystem*>();
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType  updateType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"NotifyBeforeUpdate", {}, {::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType  updateType, ::System::IntPtr  eventBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"NotifyUpdate", {}, {::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType, eventBuffer);
}
inline void UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered(int32_t  deviceId, ::StringW  deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"NotifyDeviceDiscovered", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, deviceDescriptor);
}
inline void UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType  updateType, ::by_ref<bool>  retval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"ShouldRunUpdate", {}, {::i2c::type_of<::UnityEngineInternal::Input::NativeInputUpdateType>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType, retval);
}
inline void UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngineInternal::Input::NativeInputSystem*>(),
                        {"set_hasDeviceDiscoveredCallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputSystem::NativeInputSystem()   {
}
