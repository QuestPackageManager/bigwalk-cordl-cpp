#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/SetSettingOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SetSettingOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
struct SetSettingOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::SetSettingOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::SetSettingOptions, "Epic.OnlineServices.RTC", "SetSettingOptions");
// Dependencies 
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.SetSettingOptions
struct CORDL_TYPE SetSettingOptions {
public:
// Declarations
 __declspec(property(get=get_SettingName, put=set_SettingName)) ::Epic::OnlineServices::Utf8String*  SettingName;

 __declspec(property(get=get_SettingValue, put=set_SettingValue)) ::Epic::OnlineServices::Utf8String*  SettingValue;

/// @brief Method get_SettingName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SettingName() ;

/// @brief Method get_SettingValue, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SettingValue() ;

/// @brief Method set_SettingName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SettingName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SettingValue, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_SettingValue(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetSettingOptions() ;

// Ctor Parameters [CppParam { name: "_SettingName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SettingValue_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SetSettingOptions(::Epic::OnlineServices::Utf8String*  _SettingName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SettingValue_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <SettingName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SettingName_k__BackingField;

/// @brief Field <SettingValue>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SettingValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::SetSettingOptions, _SettingName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::SetSettingOptions, _SettingValue_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::SetSettingOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
