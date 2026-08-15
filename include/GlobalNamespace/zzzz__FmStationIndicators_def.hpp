#pragma once
// IWYU pragma private; include "GlobalNamespace/FmStationIndicators.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FmStationIndicators)
// Forward declare root types
namespace GlobalNamespace {
class FmStationIndicators;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FmStationIndicators*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FmStationIndicators*, "", "FmStationIndicators");
// Dependencies PropertyBlockHelper, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FmStationIndicators
class CORDL_TYPE FmStationIndicators : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field emissionLevel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_emissionLevel, put=__cordl_internal_set_emissionLevel)) float_t  emissionLevel;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field propertyBlockHelpers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelpers, put=__cordl_internal_set_propertyBlockHelpers)) ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  propertyBlockHelpers;

static inline ::GlobalNamespace::FmStationIndicators* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803fd850, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803fd940, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnManagerChange, addr 0x1803fda30, size 0x10, virtual false, abstract: false, final false
inline void OnManagerChange() ;

/// @brief Method RefreshStationLights, addr 0x1803fda40, size 0x130, virtual false, abstract: false, final false
inline void RefreshStationLights() ;

constexpr float_t const& __cordl_internal_get_emissionLevel() const;

constexpr float_t& __cordl_internal_get_emissionLevel() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& __cordl_internal_get_propertyBlockHelpers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& __cordl_internal_get_propertyBlockHelpers() ;

constexpr void __cordl_internal_set_emissionLevel(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_propertyBlockHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value) ;

/// @brief Method .ctor, addr 0x1803fdb70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FmStationIndicators() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FmStationIndicators", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FmStationIndicators(FmStationIndicators && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FmStationIndicators", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FmStationIndicators(FmStationIndicators const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5052};

/// @brief Field emissionLevel, offset: 0x20, size: 0x4, def value: None
 float_t  ___emissionLevel;

/// @brief Field propertyBlockHelpers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  ___propertyBlockHelpers;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FmStationIndicators, ___emissionLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmStationIndicators, ___propertyBlockHelpers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmStationIndicators, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FmStationIndicators) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
