#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionDetailsInfoInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, "Epic.OnlineServices.Sessions", "SessionDetailsInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsInfoInternal
struct CORDL_TYPE SessionDetailsInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>*() ;

/// @brief Method Get, addr 0x1804f2080, size 0x1f0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__SessionDetailsInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_HostAddress", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_NumOpenPublicConnections", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Settings", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OwnerUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OwnerServerClientId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SessionDetailsInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionId, ::System::IntPtr  m_HostAddress, uint32_t  m_NumOpenPublicConnections, ::System::IntPtr  m_Settings, ::System::IntPtr  m_OwnerUserId, ::System::IntPtr  m_OwnerServerClientId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionId;

/// @brief Field m_HostAddress, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_HostAddress;

/// @brief Field m_NumOpenPublicConnections, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_NumOpenPublicConnections;

/// @brief Field m_Settings, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_Settings;

/// @brief Field m_OwnerUserId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_OwnerUserId;

/// @brief Field m_OwnerServerClientId, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_OwnerServerClientId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, m_SessionId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, m_HostAddress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, m_NumOpenPublicConnections) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, m_Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, m_OwnerUserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal, m_OwnerServerClientId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
