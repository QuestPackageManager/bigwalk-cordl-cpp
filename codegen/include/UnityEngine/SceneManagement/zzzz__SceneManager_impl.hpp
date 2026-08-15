#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneManager_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.get_sceneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SceneManagement::SceneManager::get_sceneCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822867c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"get_sceneCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetActiveScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)()>(&::UnityEngine::SceneManagement::SceneManager::GetActiveScene)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182285cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetActiveScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneByPath)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182285e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneByName)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182285d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)(int32_t)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182285d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182286380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsyncInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadSceneAsyncNameIndexInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&::UnityEngine::SceneManagement::SceneManager::LoadSceneAsyncNameIndexInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182286080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsyncNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneNameIndexInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, bool, ::UnityEngine::SceneManagement::UnloadSceneOptions, ::by_ref<bool>)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneNameIndexInternal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182286570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.MoveGameObjectToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::MoveGameObjectToScene)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182286320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadFirstScene_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(bool)>(&::UnityEngine::SceneManagement::SceneManager::LoadFirstScene_Internal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182286010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadFirstScene_Internal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.add_sceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*)>(&::UnityEngine::SceneManagement::SceneManager::add_sceneLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182286660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"add_sceneLoaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.remove_sceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*)>(&::UnityEngine::SceneManagement::SceneManager::remove_sceneLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822867d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"remove_sceneLoaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.add_sceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*)>(&::UnityEngine::SceneManagement::SceneManager::add_sceneUnloaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182286710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"add_sceneUnloaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.remove_sceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*)>(&::UnityEngine::SceneManagement::SceneManager::remove_sceneUnloaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182286880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"remove_sceneUnloaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneManager::LoadScene)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822862c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneParameters)>(&::UnityEngine::SceneManagement::SceneManager::LoadScene)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182286270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::SceneManagement::SceneManager::LoadScene)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822861d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters)>(&::UnityEngine::SceneManagement::SceneManager::LoadScene)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182286220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182286140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182286170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneParameters)>(&::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822861a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822864b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182286470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsync", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822863b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.Internal_SceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::SceneManager::Internal_SceneLoaded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182285fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"Internal_SceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.Internal_SceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::Internal_SceneUnloaded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182285fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"Internal_SceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.Internal_ActiveSceneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::SceneManagement::SceneManager::Internal_ActiveSceneChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182285f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"Internal_ActiveSceneChanged", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetActiveScene_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::GetActiveScene_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182285cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetActiveScene_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneByPath_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneByPath_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182285e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneByName_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneByName_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182285d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByName_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.GetSceneAt_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::GetSceneAt_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182285cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneAt_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.UnloadSceneAsyncInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::SceneManagement::Scene>, ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsyncInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManager.MoveGameObjectToScene_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManager::MoveGameObjectToScene_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182286310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"MoveGameObjectToScene_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_s_AllowLoadScene(bool  value)  {
::cordl_internals::setStaticField<bool, "s_AllowLoadScene", ::UnityEngine::SceneManagement::SceneManager*>(std::forward<bool>(value));
}
inline bool UnityEngine::SceneManagement::SceneManager::getStaticF_s_AllowLoadScene()  {
return ::cordl_internals::getStaticField<bool, "s_AllowLoadScene", ::UnityEngine::SceneManagement::SceneManager*>();
}
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*, "sceneLoaded", ::UnityEngine::SceneManagement::SceneManager*>(std::forward<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>(value));
}
inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>* UnityEngine::SceneManagement::SceneManager::getStaticF_sceneLoaded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*, "sceneLoaded", ::UnityEngine::SceneManagement::SceneManager*>();
}
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*, "sceneUnloaded", ::UnityEngine::SceneManagement::SceneManager*>(std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* UnityEngine::SceneManagement::SceneManager::getStaticF_sceneUnloaded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*, "sceneUnloaded", ::UnityEngine::SceneManagement::SceneManager*>();
}
inline void UnityEngine::SceneManagement::SceneManager::setStaticF_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*, "activeSceneChanged", ::UnityEngine::SceneManagement::SceneManager*>(std::forward<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*>(value));
}
inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>* UnityEngine::SceneManagement::SceneManager::getStaticF_activeSceneChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*, "activeSceneChanged", ::UnityEngine::SceneManagement::SceneManager*>();
}
inline int32_t UnityEngine::SceneManagement::SceneManager::get_sceneCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"get_sceneCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetActiveScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetActiveScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetSceneByPath(::StringW  scenePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method, scenePath);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetSceneByName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::GetSceneAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method, index);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsyncInternal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, scene, options);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsyncNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  mustCompleteNextFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsyncNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, bool  immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions  options, ::by_ref<bool>  outSuccess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, sceneBuildIndex, immediately, options, outSuccess);
}
inline void UnityEngine::SceneManagement::SceneManager::MoveGameObjectToScene(::UnityEngine::GameObject*  go, ::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, scene);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadFirstScene_Internal(bool  async)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadFirstScene_Internal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, async);
}
inline void UnityEngine::SceneManagement::SceneManager::add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"add_sceneLoaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::SceneManagement::SceneManager::remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"remove_sceneLoaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::SceneManagement::SceneManager::add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"add_sceneUnloaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::SceneManagement::SceneManager::remove_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"remove_sceneUnloaded", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::SceneManagement::SceneManager::LoadScene(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method, sceneName, parameters);
}
inline void UnityEngine::SceneManagement::SceneManager::LoadScene(int32_t  sceneBuildIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneBuildIndex);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManager::LoadScene(int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadScene", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method, sceneBuildIndex, parameters);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, mode);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, parameters);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsync", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, scene);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::UnloadSceneOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, options);
}
inline void UnityEngine::SceneManagement::SceneManager::Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"Internal_SceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, mode);
}
inline void UnityEngine::SceneManagement::SceneManager::Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"Internal_SceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::SceneManagement::SceneManager::Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene  previousActiveScene, ::UnityEngine::SceneManagement::Scene  newActiveScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"Internal_ActiveSceneChanged", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousActiveScene, newActiveScene);
}
inline void UnityEngine::SceneManagement::SceneManager::GetActiveScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetActiveScene_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::SceneManagement::SceneManager::GetSceneByPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  scenePath, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scenePath, ret);
}
inline void UnityEngine::SceneManagement::SceneManager::GetSceneByName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneByName_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::SceneManagement::SceneManager::GetSceneAt_Injected(int32_t  index, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"GetSceneAt_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, ret);
}
inline ::System::IntPtr UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"UnloadSceneAsyncInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, scene, options);
}
inline void UnityEngine::SceneManagement::SceneManager::MoveGameObjectToScene_Injected(::System::IntPtr  go, ::by_ref<::UnityEngine::SceneManagement::Scene>  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManager*>(),
                        {"MoveGameObjectToScene_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, scene);
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneManager::SceneManager()   {
}
