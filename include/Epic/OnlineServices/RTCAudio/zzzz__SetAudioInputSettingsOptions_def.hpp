#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/SetAudioInputSettingsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SetAudioInputSettingsOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct SetAudioInputSettingsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions, "Epic.OnlineServices.RTCAudio", "SetAudioInputSettingsOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.SetAudioInputSettingsOptions
struct CORDL_TYPE SetAudioInputSettingsOptions {
public:
// Declarations
 __declspec(property(get=get_DeviceId, put=set_DeviceId)) ::Epic::OnlineServices::Utf8String*  DeviceId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_PlatformAEC, put=set_PlatformAEC)) bool  PlatformAEC;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Method get_DeviceId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeviceId() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_PlatformAEC, addr 0x18039e7b0, size 0x10, virtual false, abstract: false, final false
inline bool get_PlatformAEC() ;

/// @brief Method get_Volume, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_DeviceId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_DeviceId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_PlatformAEC, addr 0x18039e7c0, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformAEC(bool  value) ;

/// @brief Method set_Volume, addr 0x180346aa0, size 0x10, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetAudioInputSettingsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_DeviceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Volume_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_PlatformAEC_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SetAudioInputSettingsOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeviceId_k__BackingField, float_t  _Volume_k__BackingField, bool  _PlatformAEC_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8062};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <DeviceId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeviceId_k__BackingField;

/// @brief Field <Volume>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  _Volume_k__BackingField;

/// @brief Field <PlatformAEC>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  _PlatformAEC_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions, _DeviceId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions, _Volume_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions, _PlatformAEC_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
