#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/SetInputDeviceSettingsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetInputDeviceSettingsOptionsInternal)
namespace Epic::OnlineServices::RTCAudio {
struct SetInputDeviceSettingsOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct SetInputDeviceSettingsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal, "Epic.OnlineServices.RTCAudio", "SetInputDeviceSettingsOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.SetInputDeviceSettingsOptionsInternal
struct CORDL_TYPE SetInputDeviceSettingsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e6850, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__SetInputDeviceSettingsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetInputDeviceSettingsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RealDeviceId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlatformAEC", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SetInputDeviceSettingsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RealDeviceId, int32_t  m_PlatformAEC) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RealDeviceId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RealDeviceId;

/// @brief Field m_PlatformAEC, offset: 0x18, size: 0x4, def value: None
 int32_t  m_PlatformAEC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal, m_RealDeviceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal, m_PlatformAEC) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
