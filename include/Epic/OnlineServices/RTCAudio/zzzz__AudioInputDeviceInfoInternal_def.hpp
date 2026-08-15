#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioInputDeviceInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioInputDeviceInfoInternal)
namespace Epic::OnlineServices::RTCAudio {
struct AudioInputDeviceInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct AudioInputDeviceInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal, "Epic.OnlineServices.RTCAudio", "AudioInputDeviceInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.AudioInputDeviceInfoInternal
struct CORDL_TYPE AudioInputDeviceInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo>*() ;

/// @brief Method Get, addr 0x1804e7090, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__AudioInputDeviceInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioInputDeviceInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultDevice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DeviceId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DeviceName", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AudioInputDeviceInfoInternal(int32_t  m_ApiVersion, int32_t  m_DefaultDevice, ::System::IntPtr  m_DeviceId, ::System::IntPtr  m_DeviceName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7956};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_DefaultDevice, offset: 0x4, size: 0x4, def value: None
 int32_t  m_DefaultDevice;

/// @brief Field m_DeviceId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_DeviceId;

/// @brief Field m_DeviceName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DeviceName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal, m_DefaultDevice) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal, m_DeviceId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal, m_DeviceName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
