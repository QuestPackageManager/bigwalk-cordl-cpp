#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/StatThresholds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StatThresholds)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct StatThresholds;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::StatThresholds);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::StatThresholds, "Epic.OnlineServices.Achievements", "StatThresholds");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.StatThresholds
struct CORDL_TYPE StatThresholds {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::Epic::OnlineServices::Utf8String*  Name;

 __declspec(property(get=get_Threshold, put=set_Threshold)) int32_t  Threshold;

/// @brief Method get_Name, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Name() ;

/// @brief Method get_Threshold, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Threshold() ;

/// @brief Method set_Name, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Name(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Threshold, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Threshold(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StatThresholds() ;

// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Threshold_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StatThresholds(::Epic::OnlineServices::Utf8String*  _Name_k__BackingField, int32_t  _Threshold_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Name>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Name_k__BackingField;

/// @brief Field <Threshold>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _Threshold_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::StatThresholds, _Name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::StatThresholds, _Threshold_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::StatThresholds) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
