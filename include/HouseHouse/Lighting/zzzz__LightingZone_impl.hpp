#pragma once
// IWYU pragma private; include "HouseHouse/Lighting/LightingZone.hpp"
#include "Enviro/zzzz__LobbyLighting_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HouseHouse/Lighting/zzzz__LightingZone_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HouseHouse::Lighting::LightingZone.InverseLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::HouseHouse::Lighting::LightingZone::InverseLerp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803cd180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"InverseLerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingZone.GetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HouseHouse::Lighting::LightingZone::*)(::Unity::Mathematics::float3)>(&::HouseHouse::Lighting::LightingZone::GetDepth)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803ccfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"GetDepth", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingZone.UpdateOnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingZone::*)(::Unity::Mathematics::float3)>(&::HouseHouse::Lighting::LightingZone::UpdateOnExit)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803cd3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"UpdateOnExit", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingZone.UpdateForPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingZone::*)(::Unity::Mathematics::float3)>(&::HouseHouse::Lighting::LightingZone::UpdateForPosition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803cd320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"UpdateForPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingZone.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingZone::*)()>(&::HouseHouse::Lighting::LightingZone::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803cd210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Lighting::LightingZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Lighting::LightingZone::*)()>(&::HouseHouse::Lighting::LightingZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& HouseHouse::Lighting::LightingZone::__cordl_internal_get_samplePositionOutside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplePositionOutside;
}
constexpr ::UnityEngine::Vector3 const& HouseHouse::Lighting::LightingZone::__cordl_internal_get_samplePositionOutside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplePositionOutside;
}
constexpr void HouseHouse::Lighting::LightingZone::__cordl_internal_set_samplePositionOutside(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplePositionOutside = value;
}
constexpr ::UnityEngine::Vector3& HouseHouse::Lighting::LightingZone::__cordl_internal_get_samplePositionInside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplePositionInside;
}
constexpr ::UnityEngine::Vector3 const& HouseHouse::Lighting::LightingZone::__cordl_internal_get_samplePositionInside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplePositionInside;
}
constexpr void HouseHouse::Lighting::LightingZone::__cordl_internal_set_samplePositionInside(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplePositionInside = value;
}
constexpr ::Enviro::LobbyLighting_AreaType& HouseHouse::Lighting::LightingZone::__cordl_internal_get_areaType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaType;
}
constexpr ::Enviro::LobbyLighting_AreaType const& HouseHouse::Lighting::LightingZone::__cordl_internal_get_areaType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaType;
}
constexpr void HouseHouse::Lighting::LightingZone::__cordl_internal_set_areaType(::Enviro::LobbyLighting_AreaType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areaType = value;
}
constexpr float_t& HouseHouse::Lighting::LightingZone::__cordl_internal_get_maxStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStrength;
}
constexpr float_t const& HouseHouse::Lighting::LightingZone::__cordl_internal_get_maxStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStrength;
}
constexpr void HouseHouse::Lighting::LightingZone::__cordl_internal_set_maxStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxStrength = value;
}
constexpr bool& HouseHouse::Lighting::LightingZone::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& HouseHouse::Lighting::LightingZone::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void HouseHouse::Lighting::LightingZone::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline float_t HouseHouse::Lighting::LightingZone::InverseLerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"InverseLerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, t);
}
inline float_t HouseHouse::Lighting::LightingZone::GetDepth(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"GetDepth", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, position);
}
inline void HouseHouse::Lighting::LightingZone::UpdateOnExit(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"UpdateOnExit", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void HouseHouse::Lighting::LightingZone::UpdateForPosition(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"UpdateForPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void HouseHouse::Lighting::LightingZone::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Lighting::LightingZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Lighting::LightingZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Lighting::LightingZone* HouseHouse::Lighting::LightingZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Lighting::LightingZone*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Lighting::LightingZone::LightingZone()   {
}
