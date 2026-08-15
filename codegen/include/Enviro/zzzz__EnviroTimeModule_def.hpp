#pragma once
// IWYU pragma private; include "Enviro/EnviroTimeModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroTimeModule)
namespace Enviro {
class EnviroTime;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Enviro {
class EnviroTimeModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroTimeModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroTimeModule*, "Enviro", "EnviroTimeModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroTimeModule
class CORDL_TYPE EnviroTimeModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field LST, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_LST, put=__cordl_internal_set_LST)) float_t  LST;

/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroTime*  Settings;

 __declspec(property(get=get_days, put=set_days)) int32_t  days;

 __declspec(property(get=get_hours, put=set_hours)) int32_t  hours;

/// @brief Field internalTimeOverflow, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_internalTimeOverflow, put=__cordl_internal_set_internalTimeOverflow)) float_t  internalTimeOverflow;

 __declspec(property(get=get_minutes, put=set_minutes)) int32_t  minutes;

 __declspec(property(get=get_months, put=set_months)) int32_t  months;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroTimeModule>  preset;

 __declspec(property(get=get_seconds, put=set_seconds)) int32_t  seconds;

/// @brief Field showLocationControls, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_showLocationControls, put=__cordl_internal_set_showLocationControls)) bool  showLocationControls;

/// @brief Field showTimeControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showTimeControls, put=__cordl_internal_set_showTimeControls)) bool  showTimeControls;

 __declspec(property(get=get_years, put=set_years)) int32_t  years;

/// @brief Method CalculateMoonPosition, addr 0x18061d410, size 0x550, virtual false, abstract: false, final false
inline void CalculateMoonPosition(float_t  d, float_t  ecl) ;

/// @brief Method CalculateStarsPosition, addr 0x18061d960, size 0x2b0, virtual false, abstract: false, final false
inline void CalculateStarsPosition(float_t  siderealTime) ;

/// @brief Method CalculateSunPosition, addr 0x18061dc10, size 0x730, virtual false, abstract: false, final false
inline void CalculateSunPosition(float_t  d, float_t  ecl, bool  simpleMoon) ;

/// @brief Method GetDateInHours, addr 0x18061e340, size 0x180, virtual false, abstract: false, final false
inline double_t GetDateInHours() ;

/// @brief Method GetTimeOfDay, addr 0x18061e4c0, size 0x20, virtual false, abstract: false, final false
inline float_t GetTimeOfDay() ;

/// @brief Method GetTimeString, addr 0x18061e5d0, size 0xb0, virtual false, abstract: false, final false
inline ::StringW GetTimeString() ;

/// @brief Method GetTimeStringWithSeconds, addr 0x18061e4e0, size 0xf0, virtual false, abstract: false, final false
inline ::StringW GetTimeStringWithSeconds() ;

/// @brief Method GetUniversalTimeOfDay, addr 0x18061e680, size 0x30, virtual false, abstract: false, final false
inline float_t GetUniversalTimeOfDay() ;

/// @brief Method LoadModuleValues, addr 0x18061e6b0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroTimeModule* New_ctor() ;

/// @brief Method OrbitalToLocal, addr 0x18061e720, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 OrbitalToLocal(float_t  theta, float_t  phi) ;

/// @brief Method Remap, addr 0x18061e7a0, size 0x30, virtual false, abstract: false, final false
inline float_t Remap(float_t  value, float_t  from1, float_t  to1, float_t  from2, float_t  to2) ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x18061e7d0, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroTimeModule*  _cordl_module) ;

/// @brief Method SetDateTime, addr 0x18061e820, size 0x700, virtual false, abstract: false, final false
inline void SetDateTime(int32_t  sec, int32_t  min, int32_t  hours, int32_t  day, int32_t  month, int32_t  year) ;

/// @brief Method SetTimeOfDay, addr 0x18061ef20, size 0x170, virtual false, abstract: false, final false
inline void SetTimeOfDay(float_t  tod) ;

/// @brief Method UpdateCustomSunAndMoonPosition, addr 0x18061f090, size 0x390, virtual false, abstract: false, final false
inline void UpdateCustomSunAndMoonPosition() ;

/// @brief Method UpdateModule, addr 0x18061f420, size 0x170, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateSunAndMoonPosition, addr 0x18061f590, size 0x270, virtual false, abstract: false, final false
inline void UpdateSunAndMoonPosition() ;

constexpr float_t const& __cordl_internal_get_LST() const;

constexpr float_t& __cordl_internal_get_LST() ;

constexpr ::Enviro::EnviroTime* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroTime*& __cordl_internal_get_Settings() ;

constexpr float_t const& __cordl_internal_get_internalTimeOverflow() const;

constexpr float_t& __cordl_internal_get_internalTimeOverflow() ;

constexpr ::UnityW<::Enviro::EnviroTimeModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroTimeModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showLocationControls() const;

constexpr bool& __cordl_internal_get_showLocationControls() ;

constexpr bool const& __cordl_internal_get_showTimeControls() const;

constexpr bool& __cordl_internal_get_showTimeControls() ;

constexpr void __cordl_internal_set_LST(float_t  value) ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroTime*  value) ;

constexpr void __cordl_internal_set_internalTimeOverflow(float_t  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroTimeModule>  value) ;

constexpr void __cordl_internal_set_showLocationControls(bool  value) ;

constexpr void __cordl_internal_set_showTimeControls(bool  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_days, addr 0x18061f800, size 0x40, virtual false, abstract: false, final false
inline int32_t get_days() ;

/// @brief Method get_hours, addr 0x18061f840, size 0x40, virtual false, abstract: false, final false
inline int32_t get_hours() ;

/// @brief Method get_minutes, addr 0x18061f880, size 0x40, virtual false, abstract: false, final false
inline int32_t get_minutes() ;

/// @brief Method get_months, addr 0x18061f8c0, size 0x40, virtual false, abstract: false, final false
inline int32_t get_months() ;

/// @brief Method get_seconds, addr 0x18061f900, size 0x40, virtual false, abstract: false, final false
inline int32_t get_seconds() ;

/// @brief Method get_years, addr 0x18061f940, size 0x40, virtual false, abstract: false, final false
inline int32_t get_years() ;

/// @brief Method set_days, addr 0x18061f980, size 0x50, virtual false, abstract: false, final false
inline void set_days(int32_t  value) ;

/// @brief Method set_hours, addr 0x18061f9d0, size 0x50, virtual false, abstract: false, final false
inline void set_hours(int32_t  value) ;

/// @brief Method set_minutes, addr 0x18061fa20, size 0x50, virtual false, abstract: false, final false
inline void set_minutes(int32_t  value) ;

/// @brief Method set_months, addr 0x18061fa70, size 0x50, virtual false, abstract: false, final false
inline void set_months(int32_t  value) ;

/// @brief Method set_seconds, addr 0x18061fac0, size 0x50, virtual false, abstract: false, final false
inline void set_seconds(int32_t  value) ;

/// @brief Method set_years, addr 0x18061fb10, size 0x50, virtual false, abstract: false, final false
inline void set_years(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroTimeModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroTimeModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroTimeModule(EnviroTimeModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroTimeModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroTimeModule(EnviroTimeModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18500};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroTime*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroTimeModule>  ___preset;

/// @brief Field showTimeControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showTimeControls;

/// @brief Field showLocationControls, offset: 0x31, size: 0x1, def value: None
 bool  ___showLocationControls;

/// @brief Field LST, offset: 0x34, size: 0x4, def value: None
 float_t  ___LST;

/// @brief Field internalTimeOverflow, offset: 0x38, size: 0x4, def value: None
 float_t  ___internalTimeOverflow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroTimeModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTimeModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTimeModule, ___showTimeControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTimeModule, ___showLocationControls) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTimeModule, ___LST) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroTimeModule, ___internalTimeOverflow) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroTimeModule) == 0x40, "Size mismatch!");

} // namespace end def Enviro
