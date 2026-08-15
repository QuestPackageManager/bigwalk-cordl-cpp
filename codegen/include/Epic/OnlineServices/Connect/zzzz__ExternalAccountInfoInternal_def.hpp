#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/ExternalAccountInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalAccountInfoInternal)
namespace Epic::OnlineServices::Connect {
struct ExternalAccountInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct ExternalAccountInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal, "Epic.OnlineServices.Connect", "ExternalAccountInfoInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.ExternalAccountInfoInternal
struct CORDL_TYPE ExternalAccountInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>*() ;

/// @brief Method Get, addr 0x1805245c0, size 0x180, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Connect::ExternalAccountInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Connect__ExternalAccountInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ExternalAccountInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_LastLoginTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr ExternalAccountInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ProductUserId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_AccountId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType, int64_t  m_LastLoginTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ProductUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ProductUserId;

/// @brief Field m_DisplayName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_AccountId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId;

/// @brief Field m_AccountIdType, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType;

/// @brief Field m_LastLoginTime, offset: 0x28, size: 0x8, def value: None
 int64_t  m_LastLoginTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal, m_ProductUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal, m_DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal, m_AccountId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal, m_AccountIdType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal, m_LastLoginTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::ExternalAccountInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
