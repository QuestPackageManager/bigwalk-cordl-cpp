#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/TokenInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AuthTokenType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TokenInternal)
namespace Epic::OnlineServices::Auth {
struct Token;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
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
struct TokenInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::TokenInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::TokenInternal, "Epic.OnlineServices.Auth", "TokenInternal");
// Dependencies Epic.OnlineServices.Auth.AuthTokenType, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.TokenInternal
struct CORDL_TYPE TokenInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>*() ;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18052bd20, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Get, addr 0x18052bd90, size 0x170, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Auth::Token>  other) ;

/// @brief Method Set, addr 0x18052bf00, size 0x190, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Auth::Token>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::Token>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__Token_() ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::Token>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__Token_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr TokenInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_App", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccessToken", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ExpiresIn", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_ExpiresAt", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AuthType", ty: "::Epic::OnlineServices::Auth::AuthTokenType", modifiers: "", def_value: None }, CppParam { name: "m_RefreshToken", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RefreshExpiresIn", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_RefreshExpiresAt", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr TokenInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_App, ::System::IntPtr  m_ClientId, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_AccessToken, double_t  m_ExpiresIn, ::System::IntPtr  m_ExpiresAt, ::Epic::OnlineServices::Auth::AuthTokenType  m_AuthType, ::System::IntPtr  m_RefreshToken, double_t  m_RefreshExpiresIn, ::System::IntPtr  m_RefreshExpiresAt) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_App, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_App;

/// @brief Field m_ClientId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ClientId;

/// @brief Field m_AccountId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId;

/// @brief Field m_AccessToken, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_AccessToken;

/// @brief Field m_ExpiresIn, offset: 0x28, size: 0x8, def value: None
 double_t  m_ExpiresIn;

/// @brief Field m_ExpiresAt, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_ExpiresAt;

/// @brief Field m_AuthType, offset: 0x38, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::AuthTokenType  m_AuthType;

/// @brief Field m_RefreshToken, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_RefreshToken;

/// @brief Field m_RefreshExpiresIn, offset: 0x48, size: 0x8, def value: None
 double_t  m_RefreshExpiresIn;

/// @brief Field m_RefreshExpiresAt, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  m_RefreshExpiresAt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_App) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_ClientId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_AccountId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_AccessToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_ExpiresIn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_ExpiresAt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_AuthType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_RefreshToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_RefreshExpiresIn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::TokenInternal, m_RefreshExpiresAt) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::TokenInternal) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
