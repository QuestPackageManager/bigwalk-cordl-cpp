#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsRTCOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsRTCOptionsInternal)
namespace Epic::OnlineServices::Platform {
struct WindowsRTCOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct WindowsRTCOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal, "Epic.OnlineServices.Platform", "WindowsRTCOptionsInternal");
// Dependencies Epic.OnlineServices.Platform.RTCBackgroundMode, System.IntPtr
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.WindowsRTCOptionsInternal
struct CORDL_TYPE WindowsRTCOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180503760, size 0x180, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__WindowsRTCOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsRTCOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PlatformSpecificOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_BackgroundMode", ty: "::Epic::OnlineServices::Platform::RTCBackgroundMode", modifiers: "", def_value: None }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr WindowsRTCOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PlatformSpecificOptions, ::Epic::OnlineServices::Platform::RTCBackgroundMode  m_BackgroundMode, ::System::IntPtr  m_Reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_PlatformSpecificOptions, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PlatformSpecificOptions;

/// @brief Field m_BackgroundMode, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Platform::RTCBackgroundMode  m_BackgroundMode;

/// @brief Field m_Reserved, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal, m_PlatformSpecificOptions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal, m_BackgroundMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal, m_Reserved) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
