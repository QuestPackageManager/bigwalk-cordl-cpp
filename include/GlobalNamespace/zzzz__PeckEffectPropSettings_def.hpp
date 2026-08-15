#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__PropSaveType_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PeckEffectPropSettings)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectPropSettings_PropSetting;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectPropSettings;
}
namespace GlobalNamespace {
struct PeckEffectPropSettings_PropSetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectPropSettings*);
MARK_VAL_T(::GlobalNamespace::PeckEffectPropSettings_PropSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPropSettings*, "", "PeckEffectPropSettings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPropSettings_PropSetting, "", "PeckEffectPropSettings/PropSetting");
// Dependencies PropGroup, PropSaveType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectPropSettings/PropSetting
struct CORDL_TYPE PeckEffectPropSettings_PropSetting {
public:
// Declarations
/// @brief Method Apply, addr 0x1804543e0, size 0x3f0, virtual false, abstract: false, final false
inline void Apply(::GlobalNamespace::Prop*  prop) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPropSettings_PropSetting() ;

// Ctor Parameters [CppParam { name: "blockRemovingFromHomesMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockRemovingFromHomesValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockRaisingMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockRaisingValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "removePropGroups", ty: "::ArrayW<::GlobalNamespace::PropGroup>", modifiers: "", def_value: None }, CppParam { name: "addPropGroups", ty: "::ArrayW<::GlobalNamespace::PropGroup>", modifiers: "", def_value: None }, CppParam { name: "saveTypeMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saveTypeValue", ty: "::GlobalNamespace::PropSaveType", modifiers: "", def_value: None }]
constexpr PeckEffectPropSettings_PropSetting(bool  blockRemovingFromHomesMask, bool  blockRemovingFromHomesValue, bool  blockRaisingMask, bool  blockRaisingValue, ::ArrayW<::GlobalNamespace::PropGroup>  removePropGroups, ::ArrayW<::GlobalNamespace::PropGroup>  addPropGroups, bool  saveTypeMask, ::GlobalNamespace::PropSaveType  saveTypeValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field blockRemovingFromHomesMask, offset: 0x0, size: 0x1, def value: None
 bool  blockRemovingFromHomesMask;

/// @brief Field blockRemovingFromHomesValue, offset: 0x1, size: 0x1, def value: None
 bool  blockRemovingFromHomesValue;

/// @brief Field blockRaisingMask, offset: 0x2, size: 0x1, def value: None
 bool  blockRaisingMask;

/// @brief Field blockRaisingValue, offset: 0x3, size: 0x1, def value: None
 bool  blockRaisingValue;

/// @brief Field removePropGroups, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropGroup>  removePropGroups;

/// @brief Field addPropGroups, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropGroup>  addPropGroups;

/// @brief Field saveTypeMask, offset: 0x18, size: 0x1, def value: None
 bool  saveTypeMask;

/// @brief Field saveTypeValue, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::PropSaveType  saveTypeValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, blockRemovingFromHomesMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, blockRemovingFromHomesValue) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, blockRaisingMask) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, blockRaisingValue) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, removePropGroups) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, addPropGroups) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, saveTypeMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings_PropSetting, saveTypeValue) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPropSettings_PropSetting) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectPropSettings::PropSetting, PeckPropReference, PeckSystemReference, Prop, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPropSettings
class CORDL_TYPE PeckEffectPropSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PropSetting = ::GlobalNamespace::PeckEffectPropSettings_PropSetting;

/// @brief Field additionalProps, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_additionalProps, put=__cordl_internal_set_additionalProps)) ::ArrayW<::UnityW<::GlobalNamespace::Prop>>  additionalProps;

/// @brief Field propReference, offset 0x20, size 0x38 
 __declspec(property(get=__cordl_internal_get_propReference, put=__cordl_internal_set_propReference)) ::GlobalNamespace::PeckPropReference  propReference;

/// @brief Field settingsPerState, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsPerState, put=__cordl_internal_set_settingsPerState)) ::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting>  settingsPerState;

/// @brief Field systemReference, offset 0x60, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x18044c0c0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectPropSettings* New_ctor() ;

/// @brief Method OnPeck, addr 0x18044c160, size 0x3f0, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>> const& __cordl_internal_get_additionalProps() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>>& __cordl_internal_get_additionalProps() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_propReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_propReference() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting> const& __cordl_internal_get_settingsPerState() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting>& __cordl_internal_get_settingsPerState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_additionalProps(::ArrayW<::UnityW<::GlobalNamespace::Prop>>  value) ;

constexpr void __cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPropSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPropSettings(PeckEffectPropSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPropSettings(PeckEffectPropSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5406};

/// @brief Field propReference, offset: 0x20, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___propReference;

/// @brief Field additionalProps, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::Prop>>  ___additionalProps;

/// @brief Field systemReference, offset: 0x60, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field settingsPerState, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting>  ___settingsPerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings, ___propReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings, ___additionalProps) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings, ___systemReference) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropSettings, ___settingsPerState) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPropSettings) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
