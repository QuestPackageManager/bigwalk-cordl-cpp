#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Samples/EventSystemManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Samples/zzzz__EventSystemManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::*)()>(&::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::*)()>(&::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::__cordl_internal_get_inputSystemPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSystemPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::__cordl_internal_get_inputSystemPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSystemPrefab;
}
constexpr void PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::__cordl_internal_set_inputSystemPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputSystemPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::__cordl_internal_get_inputManagerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputManagerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::__cordl_internal_get_inputManagerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputManagerPrefab;
}
constexpr void PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::__cordl_internal_set_inputManagerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputManagerPrefab = value;
}
inline void PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager* PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager::EventSystemManager()   {
}
