#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioOutputDeviceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AudioOutputDeviceInfo)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct AudioOutputDeviceInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo, "Epic.OnlineServices.RTCAudio", "AudioOutputDeviceInfo");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.AudioOutputDeviceInfo
struct CORDL_TYPE AudioOutputDeviceInfo {
public:
// Declarations
 __declspec(property(get=get_DefaultDevice, put=set_DefaultDevice)) bool  DefaultDevice;

 __declspec(property(get=get_DeviceId, put=set_DeviceId)) ::Epic::OnlineServices::Utf8String*  DeviceId;

 __declspec(property(get=get_DeviceName, put=set_DeviceName)) ::Epic::OnlineServices::Utf8String*  DeviceName;

/// @brief Method get_DefaultDevice, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_DefaultDevice() ;

/// @brief Method get_DeviceId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeviceId() ;

/// @brief Method get_DeviceName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeviceName() ;

/// @brief Method set_DefaultDevice, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_DefaultDevice(bool  value) ;

/// @brief Method set_DeviceId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_DeviceId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DeviceName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_DeviceName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioOutputDeviceInfo() ;

// Ctor Parameters [CppParam { name: "_DefaultDevice_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_DeviceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DeviceName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr AudioOutputDeviceInfo(bool  _DefaultDevice_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeviceId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeviceName_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7959};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <DefaultDevice>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _DefaultDevice_k__BackingField;

/// @brief Field <DeviceId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeviceId_k__BackingField;

/// @brief Field <DeviceName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeviceName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo, _DefaultDevice_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo, _DeviceId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo, _DeviceName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
