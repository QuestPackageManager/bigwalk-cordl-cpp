#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginOptionsInternal)
namespace Epic::OnlineServices::Auth {
struct LoginOptions;
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
struct LoginOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LoginOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LoginOptionsInternal, "Epic.OnlineServices.Auth", "LoginOptionsInternal");
// Dependencies Epic.OnlineServices.Auth.AuthScopeFlags, Epic.OnlineServices.Auth.LoginFlags, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LoginOptionsInternal
struct CORDL_TYPE LoginOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805263c0, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Auth::LoginOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::LoginOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__LoginOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Credentials", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ScopeFlags", ty: "::Epic::OnlineServices::Auth::AuthScopeFlags", modifiers: "", def_value: None }, CppParam { name: "m_LoginFlags", ty: "::Epic::OnlineServices::Auth::LoginFlags", modifiers: "", def_value: None }]
constexpr LoginOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Credentials, ::Epic::OnlineServices::Auth::AuthScopeFlags  m_ScopeFlags, ::Epic::OnlineServices::Auth::LoginFlags  m_LoginFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9252};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Credentials, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Credentials;

/// @brief Field m_ScopeFlags, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::AuthScopeFlags  m_ScopeFlags;

/// @brief Field m_LoginFlags, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Auth::LoginFlags  m_LoginFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LoginOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginOptionsInternal, m_Credentials) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginOptionsInternal, m_ScopeFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginOptionsInternal, m_LoginFlags) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LoginOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
