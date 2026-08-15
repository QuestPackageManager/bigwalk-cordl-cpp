#pragma once
// IWYU pragma private; include "GlobalNamespace/FmStationIndicators.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FmStationIndicators_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FmStationIndicators.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmStationIndicators::*)()>(&::GlobalNamespace::FmStationIndicators::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803fd940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmStationIndicators.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmStationIndicators::*)()>(&::GlobalNamespace::FmStationIndicators::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803fd850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmStationIndicators.OnManagerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmStationIndicators::*)()>(&::GlobalNamespace::FmStationIndicators::OnManagerChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fda30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"OnManagerChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmStationIndicators.RefreshStationLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmStationIndicators::*)()>(&::GlobalNamespace::FmStationIndicators::RefreshStationLights)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803fda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"RefreshStationLights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmStationIndicators._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmStationIndicators::*)()>(&::GlobalNamespace::FmStationIndicators::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fdb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FmStationIndicators::__cordl_internal_get_emissionLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionLevel;
}
constexpr float_t const& GlobalNamespace::FmStationIndicators::__cordl_internal_get_emissionLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionLevel;
}
constexpr void GlobalNamespace::FmStationIndicators::__cordl_internal_set_emissionLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionLevel = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& GlobalNamespace::FmStationIndicators::__cordl_internal_get_propertyBlockHelpers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelpers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& GlobalNamespace::FmStationIndicators::__cordl_internal_get_propertyBlockHelpers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelpers;
}
constexpr void GlobalNamespace::FmStationIndicators::__cordl_internal_set_propertyBlockHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelpers = value;
}
constexpr bool& GlobalNamespace::FmStationIndicators::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::FmStationIndicators::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::FmStationIndicators::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::FmStationIndicators::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmStationIndicators::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmStationIndicators::OnManagerChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"OnManagerChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmStationIndicators::RefreshStationLights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {"RefreshStationLights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmStationIndicators::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmStationIndicators*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FmStationIndicators* GlobalNamespace::FmStationIndicators::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FmStationIndicators*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FmStationIndicators::FmStationIndicators()   {
}
