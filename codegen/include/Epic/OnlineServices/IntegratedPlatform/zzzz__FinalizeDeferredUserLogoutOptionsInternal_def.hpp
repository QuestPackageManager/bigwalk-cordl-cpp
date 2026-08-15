#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/FinalizeDeferredUserLogoutOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FinalizeDeferredUserLogoutOptionsInternal)
namespace Epic::OnlineServices::IntegratedPlatform {
struct FinalizeDeferredUserLogoutOptions;
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
struct FinalizeDeferredUserLogoutOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal, "Epic.OnlineServices.IntegratedPlatform", "FinalizeDeferredUserLogoutOptionsInternal");
// Dependencies Epic.OnlineServices.LoginStatus, System.IntPtr
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.FinalizeDeferredUserLogoutOptionsInternal
struct CORDL_TYPE FinalizeDeferredUserLogoutOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180515cc0, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__FinalizeDeferredUserLogoutOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr FinalizeDeferredUserLogoutOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PlatformType", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalPlatformUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ExpectedLoginStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }]
constexpr FinalizeDeferredUserLogoutOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PlatformType, ::System::IntPtr  m_LocalPlatformUserId, ::Epic::OnlineServices::LoginStatus  m_ExpectedLoginStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8804};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_PlatformType, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PlatformType;

/// @brief Field m_LocalPlatformUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalPlatformUserId;

/// @brief Field m_ExpectedLoginStatus, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  m_ExpectedLoginStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal, m_PlatformType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal, m_LocalPlatformUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal, m_ExpectedLoginStatus) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
