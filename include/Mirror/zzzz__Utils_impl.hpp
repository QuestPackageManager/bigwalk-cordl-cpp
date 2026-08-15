#pragma once
// IWYU pragma private; include "Mirror/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Utils_def.hpp"
#include "Mirror/zzzz__LocalConnectionToClient_def.hpp"
#include "Mirror/zzzz__LocalConnectionToServer_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Mirror::Utils.GetTrueRandomUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Mirror::Utils::GetTrueRandomUInt)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181598a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"GetTrueRandomUInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.IsPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::Mirror::Utils::IsPrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.IsSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkIdentity*)>(&::Mirror::Utils::IsSceneObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181598d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsSceneObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.IsSceneObjectWithPrefabParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::by_ref<::UnityEngine::GameObject*>)>(&::Mirror::Utils::IsSceneObjectWithPrefabParent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181598c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsSceneObjectWithPrefabParent", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.IsPointInScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2)>(&::Mirror::Utils::IsPointInScreen)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181598b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsPointInScreen", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.PrettyBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::Mirror::Utils::PrettyBytes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181587bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"PrettyBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.PrettySeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t)>(&::Mirror::Utils::PrettySeconds)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181598e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"PrettySeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.GetSpawnedInServerOrClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)(uint32_t)>(&::Mirror::Utils::GetSpawnedInServerOrClient)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815989b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"GetSpawnedInServerOrClient", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.KeepInScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect)>(&::Mirror::Utils::KeepInScreen)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181598d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"KeepInScreen", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.CreateLocalConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Mirror::LocalConnectionToClient*>, ::by_ref<::Mirror::LocalConnectionToServer*>)>(&::Mirror::Utils::CreateLocalConnections)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181598900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"CreateLocalConnections", {}, {::i2c::type_of<::by_ref<::Mirror::LocalConnectionToClient*>>(), ::i2c::type_of<::by_ref<::Mirror::LocalConnectionToServer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Utils.IsSceneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mirror::Utils::IsSceneActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181598c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsSceneActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Mirror::Utils::GetTrueRandomUInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"GetTrueRandomUInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool Mirror::Utils::IsPrefab(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Mirror::Utils::IsSceneObject(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsSceneObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identity);
}
inline bool Mirror::Utils::IsSceneObjectWithPrefabParent(::UnityEngine::GameObject*  gameObject, ::by_ref<::UnityEngine::GameObject*>  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsSceneObjectWithPrefabParent", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameObject, prefab);
}
inline bool Mirror::Utils::IsPointInScreen(::UnityEngine::Vector2  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsPointInScreen", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point);
}
inline ::StringW Mirror::Utils::PrettyBytes(int64_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"PrettyBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::StringW Mirror::Utils::PrettySeconds(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"PrettySeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, seconds);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::Utils::GetSpawnedInServerOrClient(uint32_t  netId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"GetSpawnedInServerOrClient", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method, netId);
}
inline ::UnityEngine::Rect Mirror::Utils::KeepInScreen(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"KeepInScreen", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, rect);
}
inline void Mirror::Utils::CreateLocalConnections(::by_ref<::Mirror::LocalConnectionToClient*>  connectionToClient, ::by_ref<::Mirror::LocalConnectionToServer*>  connectionToServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"CreateLocalConnections", {}, {::i2c::type_of<::by_ref<::Mirror::LocalConnectionToClient*>>(), ::i2c::type_of<::by_ref<::Mirror::LocalConnectionToServer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionToClient, connectionToServer);
}
inline bool Mirror::Utils::IsSceneActive(::StringW  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Utils*>(),
                        {"IsSceneActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene);
}
// Ctor Parameters []
constexpr ::Mirror::Utils::Utils()   {
}
