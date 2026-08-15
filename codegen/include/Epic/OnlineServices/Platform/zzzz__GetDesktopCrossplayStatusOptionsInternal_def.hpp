#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/GetDesktopCrossplayStatusOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetDesktopCrossplayStatusOptionsInternal)
namespace Epic::OnlineServices::Platform {
struct GetDesktopCrossplayStatusOptions;
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
struct GetDesktopCrossplayStatusOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptionsInternal, "Epic.OnlineServices.Platform", "GetDesktopCrossplayStatusOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.GetDesktopCrossplayStatusOptionsInternal
struct CORDL_TYPE GetDesktopCrossplayStatusOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__GetDesktopCrossplayStatusOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetDesktopCrossplayStatusOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GetDesktopCrossplayStatusOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
