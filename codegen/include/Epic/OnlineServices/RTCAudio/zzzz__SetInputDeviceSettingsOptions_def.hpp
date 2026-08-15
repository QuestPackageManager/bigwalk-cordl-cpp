#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/SetInputDeviceSettingsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SetInputDeviceSettingsOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct SetInputDeviceSettingsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions, "Epic.OnlineServices.RTCAudio", "SetInputDeviceSettingsOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.SetInputDeviceSettingsOptions
struct CORDL_TYPE SetInputDeviceSettingsOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_PlatformAEC, put=set_PlatformAEC)) bool  PlatformAEC;

 __declspec(property(get=get_RealDeviceId, put=set_RealDeviceId)) ::Epic::OnlineServices::Utf8String*  RealDeviceId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_PlatformAEC, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_PlatformAEC() ;

/// @brief Method get_RealDeviceId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RealDeviceId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_PlatformAEC, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformAEC(bool  value) ;

/// @brief Method set_RealDeviceId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RealDeviceId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetInputDeviceSettingsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RealDeviceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_PlatformAEC_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SetInputDeviceSettingsOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RealDeviceId_k__BackingField, bool  _PlatformAEC_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RealDeviceId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RealDeviceId_k__BackingField;

/// @brief Field <PlatformAEC>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _PlatformAEC_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions, _RealDeviceId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions, _PlatformAEC_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
