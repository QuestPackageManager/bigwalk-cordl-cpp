#pragma once
// IWYU pragma private; include "Enviro/EnviroZone.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroZone_def.hpp"
#include "Enviro/zzzz__EnviroWeatherType_def.hpp"
#include "Enviro/zzzz__EnviroZoneWeather_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::OnEnable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18062a340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::OnDisable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18062a0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.UpdateZoneScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::UpdateZoneScale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18062a7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"UpdateZoneScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.AddWeatherType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)(::Enviro::EnviroWeatherType*)>(&::Enviro::EnviroZone::AddWeatherType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180629ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"AddWeatherType", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.RemoveWeatherZoneType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)(::Enviro::EnviroZoneWeather*)>(&::Enviro::EnviroZone::RemoveWeatherZoneType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18062a7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"RemoveWeatherZoneType", {}, {::i2c::type_of<::Enviro::EnviroZoneWeather*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.ChangeZoneWeatherInstant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)(::Enviro::EnviroWeatherType*)>(&::Enviro::EnviroZone::ChangeZoneWeatherInstant)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180629c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"ChangeZoneWeatherInstant", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.ChangeZoneWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)(::Enviro::EnviroWeatherType*)>(&::Enviro::EnviroZone::ChangeZoneWeather)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"ChangeZoneWeather", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.ChooseNextWeatherRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::ChooseNextWeatherRandom)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x180629d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"ChooseNextWeatherRandom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.UpdateZoneWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::UpdateZoneWeather)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18062a810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"UpdateZoneWeather", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::Update)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18062a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)(::UnityEngine::Collider*)>(&::Enviro::EnviroZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18062a5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)(::UnityEngine::Collider*)>(&::Enviro::EnviroZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18062a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18062a1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroZone::*)()>(&::Enviro::EnviroZone::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062aa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Enviro::EnviroWeatherType>& Enviro::EnviroZone::__cordl_internal_get_currentWeatherType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWeatherType;
}
constexpr ::UnityW<::Enviro::EnviroWeatherType> const& Enviro::EnviroZone::__cordl_internal_get_currentWeatherType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWeatherType;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_currentWeatherType(::UnityW<::Enviro::EnviroWeatherType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWeatherType = value;
}
constexpr ::UnityW<::Enviro::EnviroWeatherType>& Enviro::EnviroZone::__cordl_internal_get_nextWeatherType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWeatherType;
}
constexpr ::UnityW<::Enviro::EnviroWeatherType> const& Enviro::EnviroZone::__cordl_internal_get_nextWeatherType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWeatherType;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_nextWeatherType(::UnityW<::Enviro::EnviroWeatherType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextWeatherType = value;
}
constexpr bool& Enviro::EnviroZone::__cordl_internal_get_autoWeatherChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoWeatherChanges;
}
constexpr bool const& Enviro::EnviroZone::__cordl_internal_get_autoWeatherChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoWeatherChanges;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_autoWeatherChanges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoWeatherChanges = value;
}
constexpr float_t& Enviro::EnviroZone::__cordl_internal_get_weatherChangeIntervall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherChangeIntervall;
}
constexpr float_t const& Enviro::EnviroZone::__cordl_internal_get_weatherChangeIntervall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherChangeIntervall;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_weatherChangeIntervall(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherChangeIntervall = value;
}
constexpr double_t& Enviro::EnviroZone::__cordl_internal_get_nextWeatherUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWeatherUpdate;
}
constexpr double_t const& Enviro::EnviroZone::__cordl_internal_get_nextWeatherUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWeatherUpdate;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_nextWeatherUpdate(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextWeatherUpdate = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>*& Enviro::EnviroZone::__cordl_internal_get_weatherTypeList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherTypeList;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>* const& Enviro::EnviroZone::__cordl_internal_get_weatherTypeList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherTypeList;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_weatherTypeList(::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherTypeList = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroZone::__cordl_internal_get_zoneScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneScale;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroZone::__cordl_internal_get_zoneScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneScale;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_zoneScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneScale = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroZone::__cordl_internal_get_zoneGizmoColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneGizmoColor;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroZone::__cordl_internal_get_zoneGizmoColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneGizmoColor;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_zoneGizmoColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneGizmoColor = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& Enviro::EnviroZone::__cordl_internal_get_zoneCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& Enviro::EnviroZone::__cordl_internal_get_zoneCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCollider;
}
constexpr void Enviro::EnviroZone::__cordl_internal_set_zoneCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneCollider = value;
}
inline void Enviro::EnviroZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroZone::UpdateZoneScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"UpdateZoneScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroZone::AddWeatherType(::Enviro::EnviroWeatherType*  wType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"AddWeatherType", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wType);
}
inline void Enviro::EnviroZone::RemoveWeatherZoneType(::Enviro::EnviroZoneWeather*  wType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"RemoveWeatherZoneType", {}, {::i2c::type_of<::Enviro::EnviroZoneWeather*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wType);
}
inline void Enviro::EnviroZone::ChangeZoneWeatherInstant(::Enviro::EnviroWeatherType*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"ChangeZoneWeatherInstant", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Enviro::EnviroZone::ChangeZoneWeather(::Enviro::EnviroWeatherType*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"ChangeZoneWeather", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Enviro::EnviroZone::ChooseNextWeatherRandom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"ChooseNextWeatherRandom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroZone::UpdateZoneWeather()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"UpdateZoneWeather", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroZone::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroZone::OnTriggerEnter(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void Enviro::EnviroZone::OnTriggerExit(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void Enviro::EnviroZone::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroZone* Enviro::EnviroZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroZone*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroZone::EnviroZone()   {
}
