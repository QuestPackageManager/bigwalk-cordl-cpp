#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectRemovalZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroEffectRemovalZone_def.hpp"
#include "Enviro/zzzz__EnviroEffectRemovalZone_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroEffectRemovalZone_Mode::EnviroEffectRemovalZone_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffectRemovalZone_Mode::EnviroEffectRemovalZone_Mode()   {
}
constexpr ::Enviro::EnviroEffectRemovalZone_Mode  Enviro::EnviroEffectRemovalZone_Mode::Spherical{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroEffectRemovalZone_Mode  Enviro::EnviroEffectRemovalZone_Mode::Cubical{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::OnEnable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805fe5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805fe2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805fe2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone.AddToZoneToManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::AddToZoneToManager)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805fe1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"AddToZoneToManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone.RemoveZoneFromManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::RemoveZoneFromManager)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805fe6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"RemoveZoneFromManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805fe870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1805fe300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectRemovalZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectRemovalZone::*)()>(&::Enviro::EnviroEffectRemovalZone::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805fe8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroEffectRemovalZone_Mode& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::Enviro::EnviroEffectRemovalZone_Mode const& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Enviro::EnviroEffectRemovalZone::__cordl_internal_set_type(::Enviro::EnviroEffectRemovalZone_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr float_t& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr float_t const& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr void Enviro::EnviroEffectRemovalZone::__cordl_internal_set_density(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___density = value;
}
constexpr float_t& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void Enviro::EnviroEffectRemovalZone::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_stretch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretch;
}
constexpr float_t const& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_stretch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretch;
}
constexpr void Enviro::EnviroEffectRemovalZone::__cordl_internal_set_stretch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretch = value;
}
constexpr float_t& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_feather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feather;
}
constexpr float_t const& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_feather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feather;
}
constexpr void Enviro::EnviroEffectRemovalZone::__cordl_internal_set_feather(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___feather = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroEffectRemovalZone::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void Enviro::EnviroEffectRemovalZone::__cordl_internal_set_size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
inline void Enviro::EnviroEffectRemovalZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectRemovalZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectRemovalZone::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectRemovalZone::AddToZoneToManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"AddToZoneToManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectRemovalZone::RemoveZoneFromManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"RemoveZoneFromManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectRemovalZone::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectRemovalZone::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectRemovalZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectRemovalZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEffectRemovalZone* Enviro::EnviroEffectRemovalZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEffectRemovalZone*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffectRemovalZone::EnviroEffectRemovalZone()   {
}
