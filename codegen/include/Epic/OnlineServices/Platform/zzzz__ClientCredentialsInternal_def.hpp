#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ClientCredentialsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ClientCredentialsInternal)
namespace Epic::OnlineServices::Platform {
struct ClientCredentials;
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
struct ClientCredentialsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::ClientCredentialsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::ClientCredentialsInternal, "Epic.OnlineServices.Platform", "ClientCredentialsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.ClientCredentialsInternal
struct CORDL_TYPE ClientCredentialsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f6ce0, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f6d10, size 0x120, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Platform::ClientCredentials>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::ClientCredentials>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__ClientCredentials_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClientCredentialsInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientSecret", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ClientCredentialsInternal(::System::IntPtr  m_ClientId, ::System::IntPtr  m_ClientSecret) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ClientId, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientId;

/// @brief Field m_ClientSecret, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientSecret;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::ClientCredentialsInternal, m_ClientId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::ClientCredentialsInternal, m_ClientSecret) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::ClientCredentialsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
