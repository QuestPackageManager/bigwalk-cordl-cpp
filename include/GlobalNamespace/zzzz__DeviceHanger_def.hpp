#pragma once
// IWYU pragma private; include "GlobalNamespace/DeviceHanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceHanger)
namespace GlobalNamespace {
class ISettingsHanger;
}
namespace GlobalNamespace {
struct LocalizedText_DisplayType;
}
namespace GlobalNamespace {
struct SettingsType;
}
// Forward declare root types
namespace GlobalNamespace {
class DeviceHanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeviceHanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeviceHanger*, "", "DeviceHanger");
// Dependencies SettingsType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeviceHanger
class CORDL_TYPE DeviceHanger : public ::System::Object {
public:
// Declarations
/// @brief Field <settingsType>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__settingsType_k__BackingField, put=__cordl_internal_set__settingsType_k__BackingField)) ::GlobalNamespace::SettingsType  _settingsType_k__BackingField;

/// @brief Field <valueIndex>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueIndex_k__BackingField, put=__cordl_internal_set__valueIndex_k__BackingField)) int32_t  _valueIndex_k__BackingField;

/// @brief Field <value>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__value_k__BackingField, put=__cordl_internal_set__value_k__BackingField)) int32_t  _value_k__BackingField;

 __declspec(property(get=get_deviceName)) ::StringW  deviceName;

/// @brief Field lastSavedValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSavedValue, put=__cordl_internal_set_lastSavedValue)) ::StringW  lastSavedValue;

/// @brief Field nullValueString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nullValueString, put=__cordl_internal_set_nullValueString)) ::StringW  nullValueString;

/// @brief Field saveKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveKey, put=__cordl_internal_set_saveKey)) ::StringW  saveKey;

/// @brief Field selectedDeviceName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedDeviceName, put=__cordl_internal_set_selectedDeviceName)) ::StringW  selectedDeviceName;

 __declspec(property(get=get_settingsType, put=set_settingsType)) ::GlobalNamespace::SettingsType  settingsType;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

 __declspec(property(get=get_valueIndex, put=set_valueIndex)) int32_t  valueIndex;

/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr operator  ::GlobalNamespace::ISettingsHanger*() noexcept;

/// @brief Method Apply, addr 0x180392810, size 0x70, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Cycle, addr 0x180392880, size 0x4b0, virtual true, abstract: false, final true
inline void Cycle(int32_t  delta) ;

/// @brief Method GetLabel, addr 0x180392d30, size 0x50, virtual false, abstract: false, final false
inline ::StringW GetLabel(::by_ref<::GlobalNamespace::LocalizedText_DisplayType>  displayType) ;

/// @brief Method IsAtMaxValue, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool IsAtMaxValue() ;

/// @brief Method IsAtMinValue, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool IsAtMinValue() ;

/// @brief Method Load, addr 0x180392d80, size 0x130, virtual true, abstract: false, final true
inline void Load() ;

static inline ::GlobalNamespace::DeviceHanger* New_ctor() ;

/// @brief Method ResetToDefault, addr 0x180392eb0, size 0x80, virtual true, abstract: false, final true
inline void ResetToDefault() ;

/// @brief Method Save, addr 0x180392f30, size 0x50, virtual true, abstract: false, final true
inline void Save() ;

/// @brief Method SetValueByIndex, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetValueByIndex(int32_t  valueIndex) ;

constexpr ::GlobalNamespace::SettingsType const& __cordl_internal_get__settingsType_k__BackingField() const;

constexpr ::GlobalNamespace::SettingsType& __cordl_internal_get__settingsType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__valueIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__valueIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__value_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__value_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_lastSavedValue() const;

constexpr ::StringW& __cordl_internal_get_lastSavedValue() ;

constexpr ::StringW const& __cordl_internal_get_nullValueString() const;

constexpr ::StringW& __cordl_internal_get_nullValueString() ;

constexpr ::StringW const& __cordl_internal_get_saveKey() const;

constexpr ::StringW& __cordl_internal_get_saveKey() ;

constexpr ::StringW const& __cordl_internal_get_selectedDeviceName() const;

constexpr ::StringW& __cordl_internal_get_selectedDeviceName() ;

constexpr void __cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value) ;

constexpr void __cordl_internal_set__valueIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__value_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_lastSavedValue(::StringW  value) ;

constexpr void __cordl_internal_set_nullValueString(::StringW  value) ;

constexpr void __cordl_internal_set_saveKey(::StringW  value) ;

constexpr void __cordl_internal_set_selectedDeviceName(::StringW  value) ;

/// @brief Method .ctor, addr 0x180392f80, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_deviceName, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_deviceName() ;

/// @brief Method get_settingsType, addr 0x1802e2ba0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::SettingsType get_settingsType() ;

/// @brief Method get_value, addr 0x180392ff0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_value() ;

/// @brief Method get_valueIndex, addr 0x180392fe0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_valueIndex() ;

/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* i___GlobalNamespace__ISettingsHanger() noexcept;

/// @brief Method set_settingsType, addr 0x1802e2f70, size 0x10, virtual true, abstract: false, final true
inline void set_settingsType(::GlobalNamespace::SettingsType  value) ;

/// @brief Method set_value, addr 0x180393010, size 0x10, virtual true, abstract: false, final true
inline void set_value(int32_t  value) ;

/// @brief Method set_valueIndex, addr 0x180393000, size 0x10, virtual true, abstract: false, final true
inline void set_valueIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceHanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceHanger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceHanger(DeviceHanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceHanger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceHanger(DeviceHanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5607};

/// @brief Field saveKey, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___saveKey;

/// @brief Field nullValueString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___nullValueString;

/// @brief Field lastSavedValue, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___lastSavedValue;

/// @brief Field selectedDeviceName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___selectedDeviceName;

/// @brief Field <settingsType>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::SettingsType  ____settingsType_k__BackingField;

/// @brief Field <value>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  ____value_k__BackingField;

/// @brief Field <valueIndex>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____valueIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeviceHanger, ___saveKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeviceHanger, ___nullValueString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeviceHanger, ___lastSavedValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeviceHanger, ___selectedDeviceName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeviceHanger, ____settingsType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeviceHanger, ____value_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeviceHanger, ____valueIndex_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeviceHanger) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
