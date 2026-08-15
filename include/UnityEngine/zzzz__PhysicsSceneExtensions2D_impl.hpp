#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsSceneExtensions2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PhysicsSceneExtensions2D_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsSceneExtensions2D.GetPhysicsScene2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene2D (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::PhysicsSceneExtensions2D::GetPhysicsScene2D)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822f7b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions2D*>(),
                        {"GetPhysicsScene2D", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsSceneExtensions2D.GetPhysicsScene_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene2D (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::PhysicsSceneExtensions2D::GetPhysicsScene_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822f7c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions2D*>(),
                        {"GetPhysicsScene_Internal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsSceneExtensions2D.GetPhysicsScene_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::SceneManagement::Scene>, ::by_ref<::UnityEngine::PhysicsScene2D>)>(&::UnityEngine::PhysicsSceneExtensions2D::GetPhysicsScene_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f7c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions2D*>(),
                        {"GetPhysicsScene_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>(), ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::PhysicsScene2D UnityEngine::PhysicsSceneExtensions2D::GetPhysicsScene2D(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions2D*>(),
                        {"GetPhysicsScene2D", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene2D>(nullptr, ___internal_method, scene);
}
inline ::UnityEngine::PhysicsScene2D UnityEngine::PhysicsSceneExtensions2D::GetPhysicsScene_Internal(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions2D*>(),
                        {"GetPhysicsScene_Internal", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene2D>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::PhysicsSceneExtensions2D::GetPhysicsScene_Internal_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  scene, ::by_ref<::UnityEngine::PhysicsScene2D>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions2D*>(),
                        {"GetPhysicsScene_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>(), ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsSceneExtensions2D::PhysicsSceneExtensions2D()   {
}
