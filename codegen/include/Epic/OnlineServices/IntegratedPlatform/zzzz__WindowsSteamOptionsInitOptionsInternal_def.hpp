#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamOptionsInitOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsSteamOptionsInitOptionsInternal)
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamOptionsInitOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamOptionsInitOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal, "Epic.OnlineServices.IntegratedPlatform", "WindowsSteamOptionsInitOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.WindowsSteamOptionsInitOptionsInternal
struct CORDL_TYPE WindowsSteamOptionsInitOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18051e5c0, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__WindowsSteamOptionsInitOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsSteamOptionsInitOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OverrideLibraryPath", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SteamMajorVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SteamMinorVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SteamApiInterfaceVersionsArray", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SteamApiInterfaceVersionsArrayBytes", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr WindowsSteamOptionsInitOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_OverrideLibraryPath, uint32_t  m_SteamMajorVersion, uint32_t  m_SteamMinorVersion, ::System::IntPtr  m_SteamApiInterfaceVersionsArray, uint32_t  m_SteamApiInterfaceVersionsArrayBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8832};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_OverrideLibraryPath, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_OverrideLibraryPath;

/// @brief Field m_SteamMajorVersion, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_SteamMajorVersion;

/// @brief Field m_SteamMinorVersion, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_SteamMinorVersion;

/// @brief Field m_SteamApiInterfaceVersionsArray, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_SteamApiInterfaceVersionsArray;

/// @brief Field m_SteamApiInterfaceVersionsArrayBytes, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_SteamApiInterfaceVersionsArrayBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal, m_OverrideLibraryPath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal, m_SteamMajorVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal, m_SteamMinorVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal, m_SteamApiInterfaceVersionsArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal, m_SteamApiInterfaceVersionsArrayBytes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
