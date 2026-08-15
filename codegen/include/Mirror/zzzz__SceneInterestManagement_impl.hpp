#pragma once
// IWYU pragma private; include "Mirror/SceneInterestManagement.hpp"
#include "Mirror/zzzz__InterestManagement_impl.hpp"
#include "Mirror/zzzz__SceneInterestManagement_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::Mirror::SceneInterestManagement.OnSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SceneInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::SceneInterestManagement::OnSpawned)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18152e440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                    {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SceneInterestManagement.OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SceneInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::SceneInterestManagement::OnDestroyed)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18152e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                    {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SceneInterestManagement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SceneInterestManagement::*)()>(&::Mirror::SceneInterestManagement::Update)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18152e630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SceneInterestManagement.RebuildSceneObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SceneInterestManagement::*)(::UnityEngine::SceneManagement::Scene)>(&::Mirror::SceneInterestManagement::RebuildSceneObservers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18152e570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                        {"RebuildSceneObservers", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SceneInterestManagement.OnCheckObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SceneInterestManagement::*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::SceneInterestManagement::OnCheckObserver)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18152e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                    {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SceneInterestManagement.OnRebuildObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SceneInterestManagement::*)(::Mirror::NetworkIdentity*, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::SceneInterestManagement::OnRebuildObservers)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18152e320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                    {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SceneInterestManagement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SceneInterestManagement::*)()>(&::Mirror::SceneInterestManagement::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18152e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*& Mirror::SceneInterestManagement::__cordl_internal_get_sceneObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>* const& Mirror::SceneInterestManagement::__cordl_internal_get_sceneObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneObjects;
}
constexpr void Mirror::SceneInterestManagement::__cordl_internal_set_sceneObjects(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>*& Mirror::SceneInterestManagement::__cordl_internal_get_lastObjectScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastObjectScene;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>* const& Mirror::SceneInterestManagement::__cordl_internal_get_lastObjectScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastObjectScene;
}
constexpr void Mirror::SceneInterestManagement::__cordl_internal_set_lastObjectScene(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastObjectScene = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>*& Mirror::SceneInterestManagement::__cordl_internal_get_dirtyScenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyScenes;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>* const& Mirror::SceneInterestManagement::__cordl_internal_get_dirtyScenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyScenes;
}
constexpr void Mirror::SceneInterestManagement::__cordl_internal_set_dirtyScenes(::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirtyScenes = value;
}
inline void Mirror::SceneInterestManagement::OnSpawned(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::SceneInterestManagement::OnDestroyed(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::SceneInterestManagement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SceneInterestManagement::RebuildSceneObservers(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                        {"RebuildSceneObservers", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline bool Mirror::SceneInterestManagement::OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identity, newObserver);
}
inline void Mirror::SceneInterestManagement::OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SceneInterestManagement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, newObservers);
}
inline void Mirror::SceneInterestManagement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SceneInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SceneInterestManagement* Mirror::SceneInterestManagement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SceneInterestManagement*>());
}
// Ctor Parameters []
constexpr ::Mirror::SceneInterestManagement::SceneInterestManagement()   {
}
