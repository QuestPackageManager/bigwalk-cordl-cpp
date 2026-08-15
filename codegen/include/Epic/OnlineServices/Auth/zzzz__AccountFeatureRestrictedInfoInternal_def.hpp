#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AccountFeatureRestrictedInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccountFeatureRestrictedInfoInternal)
namespace Epic::OnlineServices::Auth {
struct AccountFeatureRestrictedInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct AccountFeatureRestrictedInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal, "Epic.OnlineServices.Auth", "AccountFeatureRestrictedInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.AccountFeatureRestrictedInfoInternal
struct CORDL_TYPE AccountFeatureRestrictedInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>*() ;

/// @brief Method Get, addr 0x18051ebc0, size 0xb0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__AccountFeatureRestrictedInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AccountFeatureRestrictedInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_VerificationURI", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AccountFeatureRestrictedInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_VerificationURI) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9224};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_VerificationURI, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_VerificationURI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal, m_VerificationURI) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
