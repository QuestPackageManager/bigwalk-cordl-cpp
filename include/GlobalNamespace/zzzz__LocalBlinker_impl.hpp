#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalBlinker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalBlinker_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectToggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalBlinker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalBlinker::*)()>(&::GlobalNamespace::LocalBlinker::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180402320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalBlinker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalBlinker.SetPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalBlinker::*)(bool)>(&::GlobalNamespace::LocalBlinker::SetPulse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180402240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalBlinker*>(),
                        {"SetPulse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalBlinker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalBlinker::*)()>(&::GlobalNamespace::LocalBlinker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalBlinker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PeckEffectToggle>& GlobalNamespace::LocalBlinker::__cordl_internal_get_toggler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggler;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectToggle> const& GlobalNamespace::LocalBlinker::__cordl_internal_get_toggler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggler;
}
constexpr void GlobalNamespace::LocalBlinker::__cordl_internal_set_toggler(::UnityW<::GlobalNamespace::PeckEffectToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggler = value;
}
constexpr float_t& GlobalNamespace::LocalBlinker::__cordl_internal_get_downTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTime;
}
constexpr float_t const& GlobalNamespace::LocalBlinker::__cordl_internal_get_downTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downTime;
}
constexpr void GlobalNamespace::LocalBlinker::__cordl_internal_set_downTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downTime = value;
}
constexpr float_t& GlobalNamespace::LocalBlinker::__cordl_internal_get_upTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTime;
}
constexpr float_t const& GlobalNamespace::LocalBlinker::__cordl_internal_get_upTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upTime;
}
constexpr void GlobalNamespace::LocalBlinker::__cordl_internal_set_upTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upTime = value;
}
constexpr bool& GlobalNamespace::LocalBlinker::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::LocalBlinker::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::LocalBlinker::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr double_t& GlobalNamespace::LocalBlinker::__cordl_internal_get_timeNextChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeNextChange;
}
constexpr double_t const& GlobalNamespace::LocalBlinker::__cordl_internal_get_timeNextChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeNextChange;
}
constexpr void GlobalNamespace::LocalBlinker::__cordl_internal_set_timeNextChange(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeNextChange = value;
}
inline void GlobalNamespace::LocalBlinker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalBlinker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalBlinker::SetPulse(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalBlinker*>(),
                        {"SetPulse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::LocalBlinker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalBlinker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalBlinker* GlobalNamespace::LocalBlinker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalBlinker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalBlinker::LocalBlinker()   {
}
