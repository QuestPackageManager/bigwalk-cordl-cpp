#pragma once
// IWYU pragma private; include "HouseHouse/Medal/HomeMedal.hpp"
#include "HouseHouse/Medal/zzzz__MedalType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HouseHouse/Medal/zzzz__HomeMedal_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::HouseHouse::Medal::HomeMedal.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::HomeMedal::*)()>(&::HouseHouse::Medal::HomeMedal::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803c7000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::HomeMedal.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::HomeMedal::*)()>(&::HouseHouse::Medal::HomeMedal::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803c6f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::HomeMedal.OnChangeLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::HomeMedal::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::HouseHouse::Medal::HomeMedal::OnChangeLocal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c6ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {"OnChangeLocal", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::HomeMedal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::HomeMedal::*)()>(&::HouseHouse::Medal::HomeMedal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHome>& HouseHouse::Medal::HomeMedal::__cordl_internal_get_propHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& HouseHouse::Medal::HomeMedal::__cordl_internal_get_propHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr void HouseHouse::Medal::HomeMedal::__cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHome = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& HouseHouse::Medal::HomeMedal::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& HouseHouse::Medal::HomeMedal::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void HouseHouse::Medal::HomeMedal::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::HouseHouse::Medal::MedalType& HouseHouse::Medal::HomeMedal::__cordl_internal_get_medalType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr ::HouseHouse::Medal::MedalType const& HouseHouse::Medal::HomeMedal::__cordl_internal_get_medalType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr void HouseHouse::Medal::HomeMedal::__cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___medalType = value;
}
inline void HouseHouse::Medal::HomeMedal::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Medal::HomeMedal::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Medal::HomeMedal::OnChangeLocal(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  old, ::GlobalNamespace::Prop*  newProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {"OnChangeLocal", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, old, newProp);
}
inline void HouseHouse::Medal::HomeMedal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::HomeMedal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Medal::HomeMedal* HouseHouse::Medal::HomeMedal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Medal::HomeMedal*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Medal::HomeMedal::HomeMedal()   {
}
