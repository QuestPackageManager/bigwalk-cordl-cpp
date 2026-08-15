#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerUseWeaponOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponData_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogPlayerUseWeaponOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseWeaponData;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseWeaponOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerUseWeaponOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.LogPlayerUseWeaponData, System.Nullable`1<T>
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerUseWeaponOptions
struct CORDL_TYPE LogPlayerUseWeaponOptions {
public:
// Declarations
 __declspec(property(get=get_UseWeaponData, put=set_UseWeaponData)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  UseWeaponData;

/// @brief Method get_UseWeaponData, addr 0x180511600, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData> get_UseWeaponData() ;

/// @brief Method set_UseWeaponData, addr 0x18051ea00, size 0x30, virtual false, abstract: false, final false
inline void set_UseWeaponData(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerUseWeaponOptions() ;

// Ctor Parameters [CppParam { name: "_UseWeaponData_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>", modifiers: "", def_value: None }]
constexpr LogPlayerUseWeaponOptions(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  _UseWeaponData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9372};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <UseWeaponData>k__BackingField, offset: 0x0, size: 0x40, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  _UseWeaponData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions, _UseWeaponData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
