#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/InitializeOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeOptionsInternal)
namespace Epic::OnlineServices::Platform {
struct InitializeOptions;
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
struct InitializeOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::InitializeOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::InitializeOptionsInternal, "Epic.OnlineServices.Platform", "InitializeOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.InitializeOptionsInternal
struct CORDL_TYPE InitializeOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f7b70, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f7bd0, size 0x210, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__InitializeOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InitializeOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocateMemoryFunction", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ReallocateMemoryFunction", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ReleaseMemoryFunction", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductVersion", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SystemInitializeOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OverrideThreadAffinity", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr InitializeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AllocateMemoryFunction, ::System::IntPtr  m_ReallocateMemoryFunction, ::System::IntPtr  m_ReleaseMemoryFunction, ::System::IntPtr  m_ProductName, ::System::IntPtr  m_ProductVersion, ::System::IntPtr  m_Reserved, ::System::IntPtr  m_SystemInitializeOptions, ::System::IntPtr  m_OverrideThreadAffinity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AllocateMemoryFunction, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AllocateMemoryFunction;

/// @brief Field m_ReallocateMemoryFunction, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ReallocateMemoryFunction;

/// @brief Field m_ReleaseMemoryFunction, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ReleaseMemoryFunction;

/// @brief Field m_ProductName, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ProductName;

/// @brief Field m_ProductVersion, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_ProductVersion;

/// @brief Field m_Reserved, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_Reserved;

/// @brief Field m_SystemInitializeOptions, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_SystemInitializeOptions;

/// @brief Field m_OverrideThreadAffinity, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_OverrideThreadAffinity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_AllocateMemoryFunction) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_ReallocateMemoryFunction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_ReleaseMemoryFunction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_ProductName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_ProductVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_Reserved) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_SystemInitializeOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptionsInternal, m_OverrideThreadAffinity) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::InitializeOptionsInternal) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
