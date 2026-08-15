#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/UserTokenInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserTokenInternal)
namespace Epic::OnlineServices::RTCAdmin {
struct UserToken;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
struct UserTokenInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::UserTokenInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::UserTokenInternal, "Epic.OnlineServices.RTCAdmin", "UserTokenInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.UserTokenInternal
struct CORDL_TYPE UserTokenInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>*() ;

/// @brief Method Get, addr 0x1805033f0, size 0xc0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAdmin::UserToken>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::UserToken>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAdmin__UserToken_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UserTokenInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Token", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UserTokenInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ProductUserId, ::System::IntPtr  m_Token) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8121};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ProductUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ProductUserId;

/// @brief Field m_Token, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::UserTokenInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::UserTokenInternal, m_ProductUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::UserTokenInternal, m_Token) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::UserTokenInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
