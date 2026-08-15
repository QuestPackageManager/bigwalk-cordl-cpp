#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairLiftPole.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ChairLiftPole_def.hpp"
#include "GlobalNamespace/zzzz__ChairLiftWireMinder_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChairLiftPole.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ChairLiftPole::*)(::GlobalNamespace::ChairLiftWireMinder_TravelDirection)>(&::GlobalNamespace::ChairLiftPole::GetPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180409380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftPole*>(),
                        {"GetPosition", {}, {::i2c::type_of<::GlobalNamespace::ChairLiftWireMinder_TravelDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChairLiftPole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairLiftPole::*)()>(&::GlobalNamespace::ChairLiftPole::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftPole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ChairLiftPole::__cordl_internal_get_toPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ChairLiftPole::__cordl_internal_get_toPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toPoint;
}
constexpr void GlobalNamespace::ChairLiftPole::__cordl_internal_set_toPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ChairLiftPole::__cordl_internal_get_froPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___froPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ChairLiftPole::__cordl_internal_get_froPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___froPoint;
}
constexpr void GlobalNamespace::ChairLiftPole::__cordl_internal_set_froPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___froPoint = value;
}
constexpr bool& GlobalNamespace::ChairLiftPole::__cordl_internal_get_noAutoRotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noAutoRotate;
}
constexpr bool const& GlobalNamespace::ChairLiftPole::__cordl_internal_get_noAutoRotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noAutoRotate;
}
constexpr void GlobalNamespace::ChairLiftPole::__cordl_internal_set_noAutoRotate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noAutoRotate = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::ChairLiftPole::GetPosition(::GlobalNamespace::ChairLiftWireMinder_TravelDirection  travelDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftPole*>(),
                        {"GetPosition", {}, {::i2c::type_of<::GlobalNamespace::ChairLiftWireMinder_TravelDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, travelDirection);
}
inline void GlobalNamespace::ChairLiftPole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftPole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChairLiftPole* GlobalNamespace::ChairLiftPole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChairLiftPole*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChairLiftPole::ChairLiftPole()   {
}
