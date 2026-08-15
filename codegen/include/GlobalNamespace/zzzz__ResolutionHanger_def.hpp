#pragma once
// IWYU pragma private; include "GlobalNamespace/ResolutionHanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResolutionHanger)
namespace GlobalNamespace {
class ISettingsHanger;
}
namespace GlobalNamespace {
struct SettingsType;
}
namespace UnityEngine {
struct Resolution;
}
// Forward declare root types
namespace GlobalNamespace {
class ResolutionHanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ResolutionHanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ResolutionHanger*, "", "ResolutionHanger");
// Dependencies SettingsType, System.Object, UnityEngine.Resolution
namespace GlobalNamespace {
// Is value type: false
// CS Name: ResolutionHanger
class CORDL_TYPE ResolutionHanger : public ::System::Object {
public:
// Declarations
/// @brief Field <settingsType>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__settingsType_k__BackingField, put=__cordl_internal_set__settingsType_k__BackingField)) ::GlobalNamespace::SettingsType  _settingsType_k__BackingField;

/// @brief Field <valueIndex>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueIndex_k__BackingField, put=__cordl_internal_set__valueIndex_k__BackingField)) int32_t  _valueIndex_k__BackingField;

/// @brief Field <value>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__value_k__BackingField, put=__cordl_internal_set__value_k__BackingField)) int32_t  _value_k__BackingField;

/// @brief Field resolutionValue, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_resolutionValue, put=__cordl_internal_set_resolutionValue)) ::UnityEngine::Resolution  resolutionValue;

 __declspec(property(get=get_settingsType, put=set_settingsType)) ::GlobalNamespace::SettingsType  settingsType;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

 __declspec(property(get=get_valueIndex, put=set_valueIndex)) int32_t  valueIndex;

/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr operator  ::GlobalNamespace::ISettingsHanger*() noexcept;

/// @brief Method Apply, addr 0x180396870, size 0x50, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Cycle, addr 0x1803968c0, size 0x160, virtual true, abstract: false, final true
inline void Cycle(int32_t  delta) ;

/// @brief Method GetLabel, addr 0x180396a20, size 0x70, virtual false, abstract: false, final false
inline ::StringW GetLabel() ;

/// @brief Method IsAtMaxValue, addr 0x180396a90, size 0x1b0, virtual true, abstract: false, final true
inline bool IsAtMaxValue() ;

/// @brief Method IsAtMinValue, addr 0x180396c40, size 0xb0, virtual true, abstract: false, final true
inline bool IsAtMinValue() ;

/// @brief Method Load, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Load() ;

/// @brief Method MatchesHeightAndWidth, addr 0x180396cf0, size 0x70, virtual false, abstract: false, final false
inline bool MatchesHeightAndWidth(::UnityEngine::Resolution  a, ::UnityEngine::Resolution  b) ;

static inline ::GlobalNamespace::ResolutionHanger* New_ctor() ;

/// @brief Method ResetAfterAspectChange, addr 0x180396d60, size 0x150, virtual false, abstract: false, final false
inline void ResetAfterAspectChange() ;

/// @brief Method ResetToDefault, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ResetToDefault() ;

/// @brief Method ResolutionMatchesFilter, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool ResolutionMatchesFilter(::UnityEngine::Resolution  resolution) ;

/// @brief Method Save, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Save() ;

/// @brief Method SetValueByIndex, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetValueByIndex(int32_t  valueIndex) ;

constexpr ::GlobalNamespace::SettingsType const& __cordl_internal_get__settingsType_k__BackingField() const;

constexpr ::GlobalNamespace::SettingsType& __cordl_internal_get__settingsType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__valueIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__valueIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__value_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__value_k__BackingField() ;

constexpr ::UnityEngine::Resolution const& __cordl_internal_get_resolutionValue() const;

constexpr ::UnityEngine::Resolution& __cordl_internal_get_resolutionValue() ;

constexpr void __cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value) ;

constexpr void __cordl_internal_set__valueIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__value_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_resolutionValue(::UnityEngine::Resolution  value) ;

/// @brief Method .ctor, addr 0x180396eb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_settingsType, addr 0x180396ee0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::SettingsType get_settingsType() ;

/// @brief Method get_value, addr 0x180396ef0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_value() ;

/// @brief Method get_valueIndex, addr 0x1803914a0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_valueIndex() ;

/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* i___GlobalNamespace__ISettingsHanger() noexcept;

/// @brief Method set_settingsType, addr 0x1803164e0, size 0x10, virtual true, abstract: false, final true
inline void set_settingsType(::GlobalNamespace::SettingsType  value) ;

/// @brief Method set_value, addr 0x180396f00, size 0x10, virtual true, abstract: false, final true
inline void set_value(int32_t  value) ;

/// @brief Method set_valueIndex, addr 0x1803914c0, size 0x10, virtual true, abstract: false, final true
inline void set_valueIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResolutionHanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResolutionHanger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResolutionHanger(ResolutionHanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResolutionHanger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResolutionHanger(ResolutionHanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5609};

/// @brief Field resolutionValue, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Resolution  ___resolutionValue;

/// @brief Field <settingsType>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SettingsType  ____settingsType_k__BackingField;

/// @brief Field <value>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____value_k__BackingField;

/// @brief Field <valueIndex>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____valueIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResolutionHanger, ___resolutionValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResolutionHanger, ____settingsType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResolutionHanger, ____value_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResolutionHanger, ____valueIndex_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ResolutionHanger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
