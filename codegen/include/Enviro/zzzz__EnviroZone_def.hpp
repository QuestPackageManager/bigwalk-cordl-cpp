#pragma once
// IWYU pragma private; include "Enviro/EnviroZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroZone)
namespace Enviro {
class EnviroWeatherType;
}
namespace Enviro {
class EnviroZoneWeather;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Enviro {
class EnviroZone;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroZone*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroZone*, "Enviro", "EnviroZone");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroZone
class CORDL_TYPE EnviroZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field autoWeatherChanges, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoWeatherChanges, put=__cordl_internal_set_autoWeatherChanges)) bool  autoWeatherChanges;

/// @brief Field currentWeatherType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentWeatherType, put=__cordl_internal_set_currentWeatherType)) ::UnityW<::Enviro::EnviroWeatherType>  currentWeatherType;

/// @brief Field nextWeatherType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextWeatherType, put=__cordl_internal_set_nextWeatherType)) ::UnityW<::Enviro::EnviroWeatherType>  nextWeatherType;

/// @brief Field nextWeatherUpdate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextWeatherUpdate, put=__cordl_internal_set_nextWeatherUpdate)) double_t  nextWeatherUpdate;

/// @brief Field weatherChangeIntervall, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_weatherChangeIntervall, put=__cordl_internal_set_weatherChangeIntervall)) float_t  weatherChangeIntervall;

/// @brief Field weatherTypeList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherTypeList, put=__cordl_internal_set_weatherTypeList)) ::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>*  weatherTypeList;

/// @brief Field zoneCollider, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneCollider, put=__cordl_internal_set_zoneCollider)) ::UnityW<::UnityEngine::BoxCollider>  zoneCollider;

/// @brief Field zoneGizmoColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_zoneGizmoColor, put=__cordl_internal_set_zoneGizmoColor)) ::UnityEngine::Color  zoneGizmoColor;

/// @brief Field zoneScale, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_zoneScale, put=__cordl_internal_set_zoneScale)) ::UnityEngine::Vector3  zoneScale;

/// @brief Method AddWeatherType, addr 0x180629ba0, size 0xd0, virtual false, abstract: false, final false
inline void AddWeatherType(::Enviro::EnviroWeatherType*  wType) ;

/// @brief Method ChangeZoneWeather, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void ChangeZoneWeather(::Enviro::EnviroWeatherType*  type) ;

/// @brief Method ChangeZoneWeatherInstant, addr 0x180629c70, size 0x100, virtual false, abstract: false, final false
inline void ChangeZoneWeatherInstant(::Enviro::EnviroWeatherType*  type) ;

/// @brief Method ChooseNextWeatherRandom, addr 0x180629d70, size 0x370, virtual false, abstract: false, final false
inline void ChooseNextWeatherRandom() ;

static inline ::Enviro::EnviroZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x18062a0e0, size 0x110, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x18062a1f0, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x18062a340, size 0x260, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x18062a5a0, size 0xb0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  col) ;

/// @brief Method OnTriggerExit, addr 0x18062a650, size 0x150, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  col) ;

/// @brief Method RemoveWeatherZoneType, addr 0x18062a7a0, size 0x30, virtual false, abstract: false, final false
inline void RemoveWeatherZoneType(::Enviro::EnviroZoneWeather*  wType) ;

/// @brief Method Update, addr 0x18062a8c0, size 0x1d0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateZoneScale, addr 0x18062a7d0, size 0x40, virtual false, abstract: false, final false
inline void UpdateZoneScale() ;

/// @brief Method UpdateZoneWeather, addr 0x18062a810, size 0xb0, virtual false, abstract: false, final false
inline void UpdateZoneWeather() ;

constexpr bool const& __cordl_internal_get_autoWeatherChanges() const;

constexpr bool& __cordl_internal_get_autoWeatherChanges() ;

constexpr ::UnityW<::Enviro::EnviroWeatherType> const& __cordl_internal_get_currentWeatherType() const;

constexpr ::UnityW<::Enviro::EnviroWeatherType>& __cordl_internal_get_currentWeatherType() ;

constexpr ::UnityW<::Enviro::EnviroWeatherType> const& __cordl_internal_get_nextWeatherType() const;

constexpr ::UnityW<::Enviro::EnviroWeatherType>& __cordl_internal_get_nextWeatherType() ;

constexpr double_t const& __cordl_internal_get_nextWeatherUpdate() const;

constexpr double_t& __cordl_internal_get_nextWeatherUpdate() ;

constexpr float_t const& __cordl_internal_get_weatherChangeIntervall() const;

constexpr float_t& __cordl_internal_get_weatherChangeIntervall() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>* const& __cordl_internal_get_weatherTypeList() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>*& __cordl_internal_get_weatherTypeList() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_zoneCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_zoneCollider() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_zoneGizmoColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_zoneGizmoColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_zoneScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_zoneScale() ;

constexpr void __cordl_internal_set_autoWeatherChanges(bool  value) ;

constexpr void __cordl_internal_set_currentWeatherType(::UnityW<::Enviro::EnviroWeatherType>  value) ;

constexpr void __cordl_internal_set_nextWeatherType(::UnityW<::Enviro::EnviroWeatherType>  value) ;

constexpr void __cordl_internal_set_nextWeatherUpdate(double_t  value) ;

constexpr void __cordl_internal_set_weatherChangeIntervall(float_t  value) ;

constexpr void __cordl_internal_set_weatherTypeList(::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>*  value) ;

constexpr void __cordl_internal_set_zoneCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_zoneGizmoColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_zoneScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x18062aa90, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroZone(EnviroZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroZone(EnviroZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18524};

/// @brief Field currentWeatherType, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherType>  ___currentWeatherType;

/// @brief Field nextWeatherType, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherType>  ___nextWeatherType;

/// @brief Field autoWeatherChanges, offset: 0x30, size: 0x1, def value: None
 bool  ___autoWeatherChanges;

/// @brief Field weatherChangeIntervall, offset: 0x34, size: 0x4, def value: None
 float_t  ___weatherChangeIntervall;

/// @brief Field nextWeatherUpdate, offset: 0x38, size: 0x8, def value: None
 double_t  ___nextWeatherUpdate;

/// @brief Field weatherTypeList, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroZoneWeather*>*  ___weatherTypeList;

/// @brief Field zoneScale, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___zoneScale;

/// @brief Field zoneGizmoColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ___zoneGizmoColor;

/// @brief Field zoneCollider, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___zoneCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroZone, ___currentWeatherType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___nextWeatherType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___autoWeatherChanges) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___weatherChangeIntervall) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___nextWeatherUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___weatherTypeList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___zoneScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___zoneGizmoColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZone, ___zoneCollider) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroZone) == 0x70, "Size mismatch!");

} // namespace end def Enviro
