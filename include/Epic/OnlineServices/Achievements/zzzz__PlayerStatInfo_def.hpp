#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/PlayerStatInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatInfo)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct PlayerStatInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::PlayerStatInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::PlayerStatInfo, "Epic.OnlineServices.Achievements", "PlayerStatInfo");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.PlayerStatInfo
struct CORDL_TYPE PlayerStatInfo {
public:
// Declarations
 __declspec(property(get=get_CurrentValue, put=set_CurrentValue)) int32_t  CurrentValue;

 __declspec(property(get=get_Name, put=set_Name)) ::Epic::OnlineServices::Utf8String*  Name;

 __declspec(property(get=get_ThresholdValue, put=set_ThresholdValue)) int32_t  ThresholdValue;

/// @brief Method get_CurrentValue, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CurrentValue() ;

/// @brief Method get_Name, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Name() ;

/// @brief Method get_ThresholdValue, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ThresholdValue() ;

/// @brief Method set_CurrentValue, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentValue(int32_t  value) ;

/// @brief Method set_Name, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Name(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ThresholdValue, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_ThresholdValue(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerStatInfo() ;

// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_CurrentValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_ThresholdValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerStatInfo(::Epic::OnlineServices::Utf8String*  _Name_k__BackingField, int32_t  _CurrentValue_k__BackingField, int32_t  _ThresholdValue_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Name>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Name_k__BackingField;

/// @brief Field <CurrentValue>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _CurrentValue_k__BackingField;

/// @brief Field <ThresholdValue>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _ThresholdValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerStatInfo, _Name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerStatInfo, _CurrentValue_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerStatInfo, _ThresholdValue_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::PlayerStatInfo) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
