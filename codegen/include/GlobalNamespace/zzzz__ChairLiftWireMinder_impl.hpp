#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairLiftWireMinder.hpp"
#include "GlobalNamespace/zzzz__ChairLiftPole_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ChairLiftWireMinder_def.hpp"
#include "GlobalNamespace/zzzz__ChairLiftWireMinder_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ChairLiftWireMinder_TravelDirection::ChairLiftWireMinder_TravelDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChairLiftWireMinder_TravelDirection::ChairLiftWireMinder_TravelDirection()   {
}
constexpr ::GlobalNamespace::ChairLiftWireMinder_TravelDirection  GlobalNamespace::ChairLiftWireMinder_TravelDirection::To{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ChairLiftWireMinder_TravelDirection  GlobalNamespace::ChairLiftWireMinder_TravelDirection::Fro{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::ChairLiftWireMinder.SpinTowers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairLiftWireMinder::*)()>(&::GlobalNamespace::ChairLiftWireMinder::SpinTowers)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180409c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {"SpinTowers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChairLiftWireMinder.SetSplines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairLiftWireMinder::*)()>(&::GlobalNamespace::ChairLiftWireMinder::SetSplines)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x1804096c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {"SetSplines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChairLiftWireMinder.CreateCatenaryKnot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (::GlobalNamespace::ChairLiftWireMinder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::GlobalNamespace::ChairLiftWireMinder::CreateCatenaryKnot)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1804093c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {"CreateCatenaryKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChairLiftWireMinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairLiftWireMinder::*)()>(&::GlobalNamespace::ChairLiftWireMinder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>>& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_poles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poles;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>> const& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_poles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poles;
}
constexpr void GlobalNamespace::ChairLiftWireMinder::__cordl_internal_set_poles(::ArrayW<::UnityW<::GlobalNamespace::ChairLiftPole>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poles = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_toSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSpline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_toSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSpline;
}
constexpr void GlobalNamespace::ChairLiftWireMinder::__cordl_internal_set_toSpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toSpline = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_froSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___froSpline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_froSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___froSpline;
}
constexpr void GlobalNamespace::ChairLiftWireMinder::__cordl_internal_set_froSpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___froSpline = value;
}
constexpr float_t& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr float_t const& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr void GlobalNamespace::ChairLiftWireMinder::__cordl_internal_set_minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistance = value;
}
constexpr float_t& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::ChairLiftWireMinder::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr float_t& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_sagAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sagAmount;
}
constexpr float_t const& GlobalNamespace::ChairLiftWireMinder::__cordl_internal_get_sagAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sagAmount;
}
constexpr void GlobalNamespace::ChairLiftWireMinder::__cordl_internal_set_sagAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sagAmount = value;
}
inline void GlobalNamespace::ChairLiftWireMinder::SpinTowers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {"SpinTowers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ChairLiftWireMinder::SetSplines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {"SetSplines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::BezierKnot GlobalNamespace::ChairLiftWireMinder::CreateCatenaryKnot(::Unity::Mathematics::float3  thisPoint, ::Unity::Mathematics::float3  previousPoint, ::Unity::Mathematics::float3  nextPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {"CreateCatenaryKnot", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(this, ___internal_method, thisPoint, previousPoint, nextPoint);
}
inline void GlobalNamespace::ChairLiftWireMinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairLiftWireMinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChairLiftWireMinder* GlobalNamespace::ChairLiftWireMinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChairLiftWireMinder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChairLiftWireMinder::ChairLiftWireMinder()   {
}
