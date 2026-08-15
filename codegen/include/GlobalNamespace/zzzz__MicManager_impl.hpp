#pragma once
// IWYU pragma private; include "GlobalNamespace/MicManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MicManager_def.hpp"
#include "GlobalNamespace/zzzz__MicManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MicManager_StopBehavior::MicManager_StopBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MicManager_StopBehavior::MicManager_StopBehavior()   {
}
constexpr ::GlobalNamespace::MicManager_StopBehavior  GlobalNamespace::MicManager_StopBehavior::Keep{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MicManager_StopBehavior  GlobalNamespace::MicManager_StopBehavior::Trim{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MicManager_StopBehavior  GlobalNamespace::MicManager_StopBehavior::Destroy{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::MicManager.get_DeviceClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>* (*)()>(&::GlobalNamespace::MicManager::get_DeviceClips)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a0980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"get_DeviceClips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.get_Devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::GlobalNamespace::MicManager::get_Devices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804a09c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"get_Devices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.ClipKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::MicManager::ClipKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"ClipKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.DeviceLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::MicManager::DeviceLabel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a02b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"DeviceLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, bool, int32_t, int32_t)>(&::GlobalNamespace::MicManager::StartRecording)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1804a0370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"StartRecording", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, ::GlobalNamespace::MicManager_StopBehavior)>(&::GlobalNamespace::MicManager::StopRecording)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804a0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"StopRecording", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MicManager_StopBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.StopAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MicManager_StopBehavior)>(&::GlobalNamespace::MicManager::StopAll)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804a0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"StopAll", {}, {::i2c::type_of<::GlobalNamespace::MicManager_StopBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::MicManager::IsRecording)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"IsRecording", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW)>(&::GlobalNamespace::MicManager::GetClip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804a02c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"GetClip", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicManager.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::MicManager::GetPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a0330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"GetPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MicManager::setStaticF__deviceClips(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*, "_deviceClips", ::GlobalNamespace::MicManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::MicManager::getStaticF__deviceClips()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*, "_deviceClips", ::GlobalNamespace::MicManager*>();
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::MicManager::get_DeviceClips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"get_DeviceClips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::MicManager::get_Devices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"get_Devices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::MicManager::ClipKey(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"ClipKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, deviceName);
}
inline ::StringW GlobalNamespace::MicManager::DeviceLabel(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"DeviceLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, deviceName);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::MicManager::StartRecording(::StringW  deviceName, bool  loop, int32_t  lengthSec, int32_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"StartRecording", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, deviceName, loop, lengthSec, frequency);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::MicManager::StopRecording(::StringW  deviceName, ::GlobalNamespace::MicManager_StopBehavior  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"StopRecording", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MicManager_StopBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, deviceName, behavior);
}
inline void GlobalNamespace::MicManager::StopAll(::GlobalNamespace::MicManager_StopBehavior  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"StopAll", {}, {::i2c::type_of<::GlobalNamespace::MicManager_StopBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behavior);
}
inline bool GlobalNamespace::MicManager::IsRecording(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"IsRecording", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceName);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::MicManager::GetClip(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"GetClip", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, deviceName);
}
inline int32_t GlobalNamespace::MicManager::GetPosition(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicManager*>(),
                        {"GetPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, deviceName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MicManager::MicManager()   {
}
