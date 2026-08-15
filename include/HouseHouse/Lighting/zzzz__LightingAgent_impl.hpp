#pragma once
// IWYU pragma private; include "HouseHouse/Lighting/LightingAgent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HouseHouse/Lighting/zzzz__LightingAgent_def.hpp"
#include "HouseHouse/Lighting/zzzz__LightingZone_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::HouseHouse::Lighting::LightingAgent.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingAgent::*)()>(&::HouseHouse::Lighting::LightingAgent::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cc9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingAgent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingAgent::*)()>(&::HouseHouse::Lighting::LightingAgent::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cc730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingAgent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingAgent::*)()>(&::HouseHouse::Lighting::LightingAgent::Update)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803cce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingAgent.HardRefreshLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::HouseHouse::Lighting::LightingAgent::HardRefreshLighting)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1803cc760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"HardRefreshLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingAgent.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingAgent::*)(::UnityEngine::Collider*)>(&::HouseHouse::Lighting::LightingAgent::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1803cca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingAgent.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingAgent::*)(::UnityEngine::Collider*)>(&::HouseHouse::Lighting::LightingAgent::OnTriggerExit)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1803ccbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingAgent::*)()>(&::HouseHouse::Lighting::LightingAgent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>*& HouseHouse::Lighting::LightingAgent::__cordl_internal_get_acitveLightingZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acitveLightingZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>* const& HouseHouse::Lighting::LightingAgent::__cordl_internal_get_acitveLightingZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acitveLightingZones;
}
constexpr void HouseHouse::Lighting::LightingAgent::__cordl_internal_set_acitveLightingZones(::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acitveLightingZones = value;
}
inline void HouseHouse::Lighting::LightingAgent::setStaticF_Instance(::UnityW<::HouseHouse::Lighting::LightingAgent>  value)  {
::cordl_internals::setStaticField<::UnityW<::HouseHouse::Lighting::LightingAgent>, "Instance", ::HouseHouse::Lighting::LightingAgent*>(std::forward<::UnityW<::HouseHouse::Lighting::LightingAgent>>(value));
}
inline ::UnityW<::HouseHouse::Lighting::LightingAgent> HouseHouse::Lighting::LightingAgent::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::HouseHouse::Lighting::LightingAgent>, "Instance", ::HouseHouse::Lighting::LightingAgent*>();
}
inline void HouseHouse::Lighting::LightingAgent::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Lighting::LightingAgent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Lighting::LightingAgent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Lighting::LightingAgent::HardRefreshLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"HardRefreshLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void HouseHouse::Lighting::LightingAgent::OnTriggerEnter(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void HouseHouse::Lighting::LightingAgent::OnTriggerExit(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void HouseHouse::Lighting::LightingAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Lighting::LightingAgent* HouseHouse::Lighting::LightingAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Lighting::LightingAgent*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Lighting::LightingAgent::LightingAgent()   {
}
