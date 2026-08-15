#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/Spawner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/Examples/MultipleAdditiveScenes/zzzz__Spawner_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Spawner.InitialSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::Mirror::Examples::MultipleAdditiveScenes::Spawner::InitialSpawn)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181563e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Spawner*>(),
                        {"InitialSpawn", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Spawner.SpawnReward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::Mirror::Examples::MultipleAdditiveScenes::Spawner::SpawnReward)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181564000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Spawner*>(),
                        {"SpawnReward", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::Spawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::Spawner::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::Spawner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Spawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::MultipleAdditiveScenes::Spawner::InitialSpawn(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Spawner*>(),
                        {"InitialSpawn", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void Mirror::Examples::MultipleAdditiveScenes::Spawner::SpawnReward(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Spawner*>(),
                        {"SpawnReward", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void Mirror::Examples::MultipleAdditiveScenes::Spawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::Spawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleAdditiveScenes::Spawner* Mirror::Examples::MultipleAdditiveScenes::Spawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleAdditiveScenes::Spawner*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleAdditiveScenes::Spawner::Spawner()   {
}
