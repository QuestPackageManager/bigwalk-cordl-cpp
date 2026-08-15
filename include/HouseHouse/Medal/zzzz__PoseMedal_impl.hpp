#pragma once
// IWYU pragma private; include "HouseHouse/Medal/PoseMedal.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "HouseHouse/Medal/zzzz__MedalType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HouseHouse/Medal/zzzz__PoseMedal_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
//  Writing Method size for method: ::HouseHouse::Medal::PoseMedal.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::PoseMedal::*)()>(&::HouseHouse::Medal::PoseMedal::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803d0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::PoseMedal.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::PoseMedal::*)()>(&::HouseHouse::Medal::PoseMedal::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803d0190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::PoseMedal.OnEnterPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::PoseMedal::*)()>(&::HouseHouse::Medal::PoseMedal::OnEnterPose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d03a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"OnEnterPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::PoseMedal.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::PoseMedal::*)(::GlobalNamespace::PeckContext)>(&::HouseHouse::Medal::PoseMedal::Peck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d03a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::PoseMedal.CheckAndAward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::PoseMedal::*)()>(&::HouseHouse::Medal::PoseMedal::CheckAndAward)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803d00c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"CheckAndAward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::PoseMedal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::PoseMedal::*)()>(&::HouseHouse::Medal::PoseMedal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& HouseHouse::Medal::PoseMedal::__cordl_internal_get_playerPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& HouseHouse::Medal::PoseMedal::__cordl_internal_get_playerPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPose;
}
constexpr void HouseHouse::Medal::PoseMedal::__cordl_internal_set_playerPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPose = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& HouseHouse::Medal::PoseMedal::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& HouseHouse::Medal::PoseMedal::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void HouseHouse::Medal::PoseMedal::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& HouseHouse::Medal::PoseMedal::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& HouseHouse::Medal::PoseMedal::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void HouseHouse::Medal::PoseMedal::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
constexpr ::HouseHouse::Medal::MedalType& HouseHouse::Medal::PoseMedal::__cordl_internal_get_medalType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr ::HouseHouse::Medal::MedalType const& HouseHouse::Medal::PoseMedal::__cordl_internal_get_medalType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr void HouseHouse::Medal::PoseMedal::__cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___medalType = value;
}
inline void HouseHouse::Medal::PoseMedal::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Medal::PoseMedal::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Medal::PoseMedal::OnEnterPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"OnEnterPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Medal::PoseMedal::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void HouseHouse::Medal::PoseMedal::CheckAndAward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {"CheckAndAward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Medal::PoseMedal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::PoseMedal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Medal::PoseMedal* HouseHouse::Medal::PoseMedal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Medal::PoseMedal*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Medal::PoseMedal::PoseMedal()   {
}
