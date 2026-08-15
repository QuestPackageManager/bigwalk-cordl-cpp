#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceManagerSpawner.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceManagerSpawner_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerProfile_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformanceSettings_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner.get_ManagerGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::get_ManagerGameObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"get_ManagerGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182219290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::*)(bool)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::Initialize)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x182218de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner.Deinitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::Deinitialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182218d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"Deinitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner.InstallScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*, ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::InstallScalers)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x182219100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"InstallScalers", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::__cordl_internal_get_m_ManagerGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManagerGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::__cordl_internal_get_m_ManagerGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManagerGameObject;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::__cordl_internal_set_m_ManagerGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManagerGameObject = value;
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::get_ManagerGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"get_ManagerGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::Initialize(bool  isCheckingProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCheckingProvider);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::Deinitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"Deinitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::InstallScalers(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  profile, ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {"InstallScalers", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profile, settings);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner* UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner::AdaptivePerformanceManagerSpawner()   {
}
