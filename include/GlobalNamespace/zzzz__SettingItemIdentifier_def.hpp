#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingItemIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SettingItemIdentifier)
namespace GlobalNamespace {
class SettingsRow;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingItemIdentifier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SettingItemIdentifier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingItemIdentifier*, "", "SettingItemIdentifier");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingItemIdentifier
class CORDL_TYPE SettingItemIdentifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_SettingRow)) ::UnityW<::GlobalNamespace::SettingsRow>  SettingRow;

/// @brief Field settingRow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingRow, put=__cordl_internal_set_settingRow)) ::UnityW<::GlobalNamespace::SettingsRow>  settingRow;

/// @brief Method Awake, addr 0x1803898f0, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SettingItemIdentifier* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::SettingsRow> const& __cordl_internal_get_settingRow() const;

constexpr ::UnityW<::GlobalNamespace::SettingsRow>& __cordl_internal_get_settingRow() ;

constexpr void __cordl_internal_set_settingRow(::UnityW<::GlobalNamespace::SettingsRow>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SettingRow, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SettingsRow> get_SettingRow() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingItemIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingItemIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingItemIdentifier(SettingItemIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingItemIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingItemIdentifier(SettingItemIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5563};

/// @brief Field settingRow, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsRow>  ___settingRow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingItemIdentifier, ___settingRow) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingItemIdentifier) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
