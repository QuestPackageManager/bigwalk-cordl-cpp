#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyIdTokenOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerifyIdTokenOptionsInternal)
namespace Epic::OnlineServices::Auth {
struct VerifyIdTokenOptions;
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
struct VerifyIdTokenOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal, "Epic.OnlineServices.Auth", "VerifyIdTokenOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.VerifyIdTokenOptionsInternal
struct CORDL_TYPE VerifyIdTokenOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052c6a0, size 0x60, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__VerifyIdTokenOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr VerifyIdTokenOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IdToken", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr VerifyIdTokenOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_IdToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_IdToken, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_IdToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal, m_IdToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
