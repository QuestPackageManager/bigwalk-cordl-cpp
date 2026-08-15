#pragma once
// IWYU pragma private; include "Rewired/InputManager.hpp"
#include "Rewired/zzzz__InputManager_Base_impl.hpp"
#include "Rewired/zzzz__InputManager_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExternalTools_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::Rewired::InputManager.OnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)()>(&::Rewired::InputManager::OnInitialized)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180394a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager*>(),
                    {::i2c::class_of<::Rewired::InputManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.OnDeinitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)()>(&::Rewired::InputManager::OnDeinitialized)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180394a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager*>(),
                    {::i2c::class_of<::Rewired::InputManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.DetectPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)()>(&::Rewired::InputManager::DetectPlatform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803949a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager*>(),
                    {::i2c::class_of<::Rewired::InputManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.CheckRecompile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)()>(&::Rewired::InputManager::CheckRecompile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager*>(),
                    {::i2c::class_of<::Rewired::InputManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.GetExternalTools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IExternalTools* (::Rewired::InputManager::*)()>(&::Rewired::InputManager::GetExternalTools)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803949f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager*>(),
                    {::i2c::class_of<::Rewired::InputManager*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.CheckDeviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager::*)(::StringW, ::StringW, ::StringW)>(&::Rewired::InputManager::CheckDeviceName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180394920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"CheckDeviceName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.SubscribeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)()>(&::Rewired::InputManager::SubscribeEvents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180394a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"SubscribeEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.UnsubscribeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)()>(&::Rewired::InputManager::UnsubscribeEvents)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180394a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"UnsubscribeEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Rewired::InputManager::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180394ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager::*)()>(&::Rewired::InputManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180394ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::InputManager::__cordl_internal_get_ignoreRecompile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreRecompile;
}
constexpr bool const& Rewired::InputManager::__cordl_internal_get_ignoreRecompile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreRecompile;
}
constexpr void Rewired::InputManager::__cordl_internal_set_ignoreRecompile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreRecompile = value;
}
inline void Rewired::InputManager::OnInitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager::OnDeinitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager::DetectPlatform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager::CheckRecompile()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IExternalTools* Rewired::InputManager::GetExternalTools()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IExternalTools*>(this, ___internal_method);
}
inline bool Rewired::InputManager::CheckDeviceName(::StringW  searchPattern, ::StringW  deviceName, ::StringW  deviceModel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"CheckDeviceName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, searchPattern, deviceName, deviceModel);
}
inline void Rewired::InputManager::SubscribeEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"SubscribeEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager::UnsubscribeEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"UnsubscribeEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager::OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void Rewired::InputManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::InputManager* Rewired::InputManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManager*>());
}
// Ctor Parameters []
constexpr ::Rewired::InputManager::InputManager()   {
}
