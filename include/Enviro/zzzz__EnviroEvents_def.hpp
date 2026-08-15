#pragma once
// IWYU pragma private; include "Enviro/EnviroEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
CORDL_MODULE_EXPORT(EnviroEvents)
namespace Enviro {
class EnviroEvents_EnviroActionEvent;
}
// Forward declare root types
namespace Enviro {
class EnviroEvents;
}
namespace Enviro {
class EnviroEvents_EnviroActionEvent;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroEvents*);
MARK_REF_T(::Enviro::EnviroEvents_EnviroActionEvent*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEvents*, "Enviro", "EnviroEvents");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEvents_EnviroActionEvent*, "Enviro", "EnviroEvents/EnviroActionEvent");
// Dependencies UnityEngine.Events.UnityEvent
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEvents/EnviroActionEvent
class CORDL_TYPE EnviroEvents_EnviroActionEvent : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Enviro::EnviroEvents_EnviroActionEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEvents_EnviroActionEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEvents_EnviroActionEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEvents_EnviroActionEvent(EnviroEvents_EnviroActionEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEvents_EnviroActionEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEvents_EnviroActionEvent(EnviroEvents_EnviroActionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18449};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroEvents_EnviroActionEvent) == 0x30, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEvents
class CORDL_TYPE EnviroEvents : public ::System::Object {
public:
// Declarations
using EnviroActionEvent = ::Enviro::EnviroEvents_EnviroActionEvent;

/// @brief Field onDayActions, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDayActions, put=__cordl_internal_set_onDayActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onDayActions;

/// @brief Field onDayPassedActions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDayPassedActions, put=__cordl_internal_set_onDayPassedActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onDayPassedActions;

/// @brief Field onHourPassedActions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHourPassedActions, put=__cordl_internal_set_onHourPassedActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onHourPassedActions;

/// @brief Field onNightActions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onNightActions, put=__cordl_internal_set_onNightActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onNightActions;

/// @brief Field onSeasonChangedActions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSeasonChangedActions, put=__cordl_internal_set_onSeasonChangedActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onSeasonChangedActions;

/// @brief Field onWeatherChangedActions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onWeatherChangedActions, put=__cordl_internal_set_onWeatherChangedActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onWeatherChangedActions;

/// @brief Field onYearPassedActions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onYearPassedActions, put=__cordl_internal_set_onYearPassedActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onYearPassedActions;

/// @brief Field onZoneChangedActions, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onZoneChangedActions, put=__cordl_internal_set_onZoneChangedActions)) ::Enviro::EnviroEvents_EnviroActionEvent*  onZoneChangedActions;

static inline ::Enviro::EnviroEvents* New_ctor() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onDayActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onDayActions() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onDayPassedActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onDayPassedActions() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onHourPassedActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onHourPassedActions() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onNightActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onNightActions() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onSeasonChangedActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onSeasonChangedActions() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onWeatherChangedActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onWeatherChangedActions() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onYearPassedActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onYearPassedActions() ;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent* const& __cordl_internal_get_onZoneChangedActions() const;

constexpr ::Enviro::EnviroEvents_EnviroActionEvent*& __cordl_internal_get_onZoneChangedActions() ;

constexpr void __cordl_internal_set_onDayActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

constexpr void __cordl_internal_set_onDayPassedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

constexpr void __cordl_internal_set_onHourPassedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

constexpr void __cordl_internal_set_onNightActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

constexpr void __cordl_internal_set_onSeasonChangedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

constexpr void __cordl_internal_set_onWeatherChangedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

constexpr void __cordl_internal_set_onYearPassedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

constexpr void __cordl_internal_set_onZoneChangedActions(::Enviro::EnviroEvents_EnviroActionEvent*  value) ;

/// @brief Method .ctor, addr 0x18060dd50, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEvents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEvents(EnviroEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEvents(EnviroEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18450};

/// @brief Field onHourPassedActions, offset: 0x10, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onHourPassedActions;

/// @brief Field onDayPassedActions, offset: 0x18, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onDayPassedActions;

/// @brief Field onYearPassedActions, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onYearPassedActions;

/// @brief Field onWeatherChangedActions, offset: 0x28, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onWeatherChangedActions;

/// @brief Field onSeasonChangedActions, offset: 0x30, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onSeasonChangedActions;

/// @brief Field onNightActions, offset: 0x38, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onNightActions;

/// @brief Field onDayActions, offset: 0x40, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onDayActions;

/// @brief Field onZoneChangedActions, offset: 0x48, size: 0x8, def value: None
 ::Enviro::EnviroEvents_EnviroActionEvent*  ___onZoneChangedActions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEvents, ___onHourPassedActions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEvents, ___onDayPassedActions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEvents, ___onYearPassedActions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEvents, ___onWeatherChangedActions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEvents, ___onSeasonChangedActions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEvents, ___onNightActions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEvents, ___onDayActions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEvents, ___onZoneChangedActions) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEvents) == 0x50, "Size mismatch!");

} // namespace end def Enviro
