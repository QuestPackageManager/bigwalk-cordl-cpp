#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/IdTokenInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IdTokenInternal)
namespace Epic::OnlineServices::Auth {
struct IdToken;
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
struct IdTokenInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::IdTokenInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::IdTokenInternal, "Epic.OnlineServices.Auth", "IdTokenInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.IdTokenInternal
struct CORDL_TYPE IdTokenInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>*() ;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Get, addr 0x1805247e0, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Auth::IdToken>  other) ;

/// @brief Method Set, addr 0x1804e6900, size 0x190, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Auth::IdToken>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::IdToken>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__IdToken_() ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::IdToken>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__IdToken_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr IdTokenInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_JsonWebToken", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr IdTokenInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_JsonWebToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AccountId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId;

/// @brief Field m_JsonWebToken, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_JsonWebToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::IdTokenInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::IdTokenInternal, m_AccountId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::IdTokenInternal, m_JsonWebToken) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::IdTokenInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
