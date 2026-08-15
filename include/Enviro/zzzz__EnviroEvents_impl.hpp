#pragma once
// IWYU pragma private; include "Enviro/EnviroEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "Enviro/zzzz__EnviroEvents_def.hpp"
#include "Enviro/zzzz__EnviroEvents_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroEvents_EnviroActionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEvents_EnviroActionEvent::*)()>(&::Enviro::EnviroEvents_EnviroActionEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEvents_EnviroActionEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Enviro::EnviroEvents_EnviroActionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEvents_EnviroActionEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEvents_EnviroActionEvent* Enviro::EnviroEvents_EnviroActionEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEvents_EnviroActionEvent*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEvents_EnviroActionEvent::EnviroEvents_EnviroActionEvent()   {
}
//  Writing Method size for method: ::Enviro::EnviroEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEvents::*)()>(&::Enviro::EnviroEvents::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18060dd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onHourPassedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHourPassedActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onHourPassedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHourPassedActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onHourPassedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHourPassedActions = value;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onDayPassedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDayPassedActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onDayPassedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDayPassedActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onDayPassedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDayPassedActions = value;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onYearPassedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onYearPassedActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onYearPassedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onYearPassedActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onYearPassedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onYearPassedActions = value;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onWeatherChangedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWeatherChangedActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onWeatherChangedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWeatherChangedActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onWeatherChangedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onWeatherChangedActions = value;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onSeasonChangedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSeasonChangedActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onSeasonChangedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSeasonChangedActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onSeasonChangedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSeasonChangedActions = value;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onNightActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNightActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onNightActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNightActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onNightActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onNightActions = value;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onDayActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDayActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onDayActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDayActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onDayActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDayActions = value;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& Enviro::EnviroEvents::__cordl_internal_get_onZoneChangedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneChangedActions;
}
constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& Enviro::EnviroEvents::__cordl_internal_get_onZoneChangedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneChangedActions;
}
constexpr void Enviro::EnviroEvents::__cordl_internal_set_onZoneChangedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onZoneChangedActions = value;
}
inline void Enviro::EnviroEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEvents* Enviro::EnviroEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEvents*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEvents::EnviroEvents()   {
}
