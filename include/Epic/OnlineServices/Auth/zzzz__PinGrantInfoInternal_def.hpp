#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/PinGrantInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PinGrantInfoInternal)
namespace Epic::OnlineServices::Auth {
struct PinGrantInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct PinGrantInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::PinGrantInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::PinGrantInfoInternal, "Epic.OnlineServices.Auth", "PinGrantInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.PinGrantInfoInternal
struct CORDL_TYPE PinGrantInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>*() ;

/// @brief Method Get, addr 0x18052b1a0, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Auth::PinGrantInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::PinGrantInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__PinGrantInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PinGrantInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserCode", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_VerificationURI", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ExpiresIn", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_VerificationURIComplete", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PinGrantInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserCode, ::System::IntPtr  m_VerificationURI, int32_t  m_ExpiresIn, ::System::IntPtr  m_VerificationURIComplete) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserCode, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserCode;

/// @brief Field m_VerificationURI, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_VerificationURI;

/// @brief Field m_ExpiresIn, offset: 0x18, size: 0x4, def value: None
 int32_t  m_ExpiresIn;

/// @brief Field m_VerificationURIComplete, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_VerificationURIComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfoInternal, m_UserCode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfoInternal, m_VerificationURI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfoInternal, m_ExpiresIn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::PinGrantInfoInternal, m_VerificationURIComplete) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::PinGrantInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
