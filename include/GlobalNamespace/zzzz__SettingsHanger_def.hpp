#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsHanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsHanger)
namespace GlobalNamespace {
class ISettingsHanger;
}
namespace GlobalNamespace {
struct SettingsType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsHanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SettingsHanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsHanger*, "", "SettingsHanger");
// Dependencies SettingsType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsHanger
class CORDL_TYPE SettingsHanger : public ::System::Object {
public:
// Declarations
/// @brief Field <settingsType>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__settingsType_k__BackingField, put=__cordl_internal_set__settingsType_k__BackingField)) ::GlobalNamespace::SettingsType  _settingsType_k__BackingField;

/// @brief Field <value>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__value_k__BackingField, put=__cordl_internal_set__value_k__BackingField)) int32_t  _value_k__BackingField;

/// @brief Field defaultValue, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultValue, put=__cordl_internal_set_defaultValue)) int32_t  defaultValue;

/// @brief Field lastSavedValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSavedValue, put=__cordl_internal_set_lastSavedValue)) int32_t  lastSavedValue;

/// @brief Field onApply, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onApply, put=__cordl_internal_set_onApply)) ::System::Action_1<int32_t>*  onApply;

/// @brief Field possibleValues, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_possibleValues, put=__cordl_internal_set_possibleValues)) ::System::Collections::Generic::List_1<int32_t>*  possibleValues;

/// @brief Field saveKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveKey, put=__cordl_internal_set_saveKey)) ::StringW  saveKey;

 __declspec(property(get=get_settingsType, put=set_settingsType)) ::GlobalNamespace::SettingsType  settingsType;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

 __declspec(property(get=get_valueIndex, put=set_valueIndex)) int32_t  valueIndex;

/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr operator  ::GlobalNamespace::ISettingsHanger*() noexcept;

/// @brief Method Apply, addr 0x180399040, size 0x30, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Cycle, addr 0x180399070, size 0x80, virtual true, abstract: false, final true
inline void Cycle(int32_t  delta) ;

/// @brief Method IsAtMaxValue, addr 0x1803990f0, size 0x30, virtual true, abstract: false, final true
inline bool IsAtMaxValue() ;

/// @brief Method IsAtMinValue, addr 0x180399120, size 0x30, virtual true, abstract: false, final true
inline bool IsAtMinValue() ;

/// @brief Method Load, addr 0x180399150, size 0x50, virtual true, abstract: false, final true
inline void Load() ;

static inline ::GlobalNamespace::SettingsHanger* New_ctor(::StringW  saveKey, int32_t  defaultValue, ::System::Action_1<int32_t>*  onApply) ;

/// @brief Method ResetToDefault, addr 0x1803991a0, size 0x30, virtual true, abstract: false, final true
inline void ResetToDefault() ;

/// @brief Method Save, addr 0x1803991d0, size 0x40, virtual true, abstract: false, final true
inline void Save() ;

/// @brief Method SetValueByIndex, addr 0x180399210, size 0x80, virtual true, abstract: false, final true
inline void SetValueByIndex(int32_t  valueIndex) ;

constexpr ::GlobalNamespace::SettingsType const& __cordl_internal_get__settingsType_k__BackingField() const;

constexpr ::GlobalNamespace::SettingsType& __cordl_internal_get__settingsType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__value_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__value_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_defaultValue() const;

constexpr int32_t& __cordl_internal_get_defaultValue() ;

constexpr int32_t const& __cordl_internal_get_lastSavedValue() const;

constexpr int32_t& __cordl_internal_get_lastSavedValue() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_onApply() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_onApply() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_possibleValues() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_possibleValues() ;

constexpr ::StringW const& __cordl_internal_get_saveKey() const;

constexpr ::StringW& __cordl_internal_get_saveKey() ;

constexpr void __cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value) ;

constexpr void __cordl_internal_set__value_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_defaultValue(int32_t  value) ;

constexpr void __cordl_internal_set_lastSavedValue(int32_t  value) ;

constexpr void __cordl_internal_set_onApply(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_possibleValues(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_saveKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x180399290, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  saveKey, int32_t  defaultValue, ::System::Action_1<int32_t>*  onApply) ;

/// @brief Method get_settingsType, addr 0x180392fe0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::SettingsType get_settingsType() ;

/// @brief Method get_value, addr 0x1802f42c0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_value() ;

/// @brief Method get_valueIndex, addr 0x1803992e0, size 0x30, virtual true, abstract: false, final true
inline int32_t get_valueIndex() ;

/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* i___GlobalNamespace__ISettingsHanger() noexcept;

/// @brief Method set_settingsType, addr 0x180393000, size 0x10, virtual true, abstract: false, final true
inline void set_settingsType(::GlobalNamespace::SettingsType  value) ;

/// @brief Method set_value, addr 0x1802f43d0, size 0x10, virtual true, abstract: false, final true
inline void set_value(int32_t  value) ;

/// @brief Method set_valueIndex, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void set_valueIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsHanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsHanger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsHanger(SettingsHanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsHanger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsHanger(SettingsHanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5610};

/// @brief Field saveKey, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___saveKey;

/// @brief Field defaultValue, offset: 0x18, size: 0x4, def value: None
 int32_t  ___defaultValue;

/// @brief Field <value>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____value_k__BackingField;

/// @brief Field lastSavedValue, offset: 0x20, size: 0x4, def value: None
 int32_t  ___lastSavedValue;

/// @brief Field onApply, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___onApply;

/// @brief Field possibleValues, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___possibleValues;

/// @brief Field <settingsType>k__BackingField, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::SettingsType  ____settingsType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsHanger, ___saveKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsHanger, ___defaultValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsHanger, ____value_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsHanger, ___lastSavedValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsHanger, ___onApply) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsHanger, ___possibleValues) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsHanger, ____settingsType_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsHanger) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
