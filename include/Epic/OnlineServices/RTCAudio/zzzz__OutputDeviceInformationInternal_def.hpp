#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OutputDeviceInformationInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OutputDeviceInformationInternal)
namespace Epic::OnlineServices::RTCAudio {
struct OutputDeviceInformation;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct OutputDeviceInformationInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::OutputDeviceInformationInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OutputDeviceInformationInternal, "Epic.OnlineServices.RTCAudio", "OutputDeviceInformationInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.OutputDeviceInformationInternal
struct CORDL_TYPE OutputDeviceInformationInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>*() ;

/// @brief Method Get, addr 0x1804e7090, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__OutputDeviceInformation_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OutputDeviceInformationInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultDevice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DeviceId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DeviceName", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr OutputDeviceInformationInternal(int32_t  m_ApiVersion, int32_t  m_DefaultDevice, ::System::IntPtr  m_DeviceId, ::System::IntPtr  m_DeviceName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8045};

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
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::OutputDeviceInformationInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::OutputDeviceInformationInternal, m_DefaultDevice) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::OutputDeviceInformationInternal, m_DeviceId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::OutputDeviceInformationInternal, m_DeviceName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OutputDeviceInformationInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
