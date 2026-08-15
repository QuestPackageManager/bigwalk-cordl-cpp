#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/CredentialsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialsInternal)
namespace Epic::OnlineServices::Auth {
struct Credentials;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct CredentialsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::CredentialsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::CredentialsInternal, "Epic.OnlineServices.Auth", "CredentialsInternal");
// Dependencies Epic.OnlineServices.Auth.LoginCredentialType, Epic.OnlineServices.ExternalCredentialType, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.CredentialsInternal
struct CORDL_TYPE CredentialsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1a20, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524310, size 0x230, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Auth::Credentials>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Credentials>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__Credentials_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CredentialsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Token", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::Auth::LoginCredentialType", modifiers: "", def_value: None }, CppParam { name: "m_SystemAuthCredentialsOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ExternalType", ty: "::Epic::OnlineServices::ExternalCredentialType", modifiers: "", def_value: None }]
constexpr CredentialsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Id, ::System::IntPtr  m_Token, ::Epic::OnlineServices::Auth::LoginCredentialType  m_Type, ::System::IntPtr  m_SystemAuthCredentialsOptions, ::Epic::OnlineServices::ExternalCredentialType  m_ExternalType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Id, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Id;

/// @brief Field m_Token, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Token;

/// @brief Field m_Type, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::LoginCredentialType  m_Type;

/// @brief Field m_SystemAuthCredentialsOptions, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_SystemAuthCredentialsOptions;

/// @brief Field m_ExternalType, offset: 0x28, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalCredentialType  m_ExternalType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::CredentialsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::CredentialsInternal, m_Id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::CredentialsInternal, m_Token) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::CredentialsInternal, m_Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::CredentialsInternal, m_SystemAuthCredentialsOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::CredentialsInternal, m_ExternalType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::CredentialsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
