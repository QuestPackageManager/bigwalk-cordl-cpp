#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveSessionInfoInternal)
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal, "Epic.OnlineServices.Sessions", "ActiveSessionInfoInternal");
// Dependencies Epic.OnlineServices.Sessions.OnlineSessionState, System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.ActiveSessionInfoInternal
struct CORDL_TYPE ActiveSessionInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>*() ;

/// @brief Method Get, addr 0x1804bdc00, size 0x240, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__ActiveSessionInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ActiveSessionInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_State", ty: "::Epic::OnlineServices::Sessions::OnlineSessionState", modifiers: "", def_value: None }, CppParam { name: "m_SessionDetails", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ActiveSessionInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::Sessions::OnlineSessionState  m_State, ::System::IntPtr  m_SessionDetails) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7673};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionName;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_State, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::OnlineSessionState  m_State;

/// @brief Field m_SessionDetails, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_SessionDetails;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal, m_SessionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal, m_State) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal, m_SessionDetails) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
