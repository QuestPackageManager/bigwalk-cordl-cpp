#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsRTCOptionsPlatformSpecificOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsRTCOptionsPlatformSpecificOptionsInternal)
namespace Epic::OnlineServices::Platform {
struct WindowsRTCOptionsPlatformSpecificOptions;
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
struct WindowsRTCOptionsPlatformSpecificOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal, "Epic.OnlineServices.Platform", "WindowsRTCOptionsPlatformSpecificOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.WindowsRTCOptionsPlatformSpecificOptionsInternal
struct CORDL_TYPE WindowsRTCOptionsPlatformSpecificOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f0f90, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__WindowsRTCOptionsPlatformSpecificOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsRTCOptionsPlatformSpecificOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_XAudio29DllPath", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr WindowsRTCOptionsPlatformSpecificOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_XAudio29DllPath) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_XAudio29DllPath, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_XAudio29DllPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal, m_XAudio29DllPath) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
