#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnBlockedUsersUpdateInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnBlockedUsersUpdateInfoInternal)
namespace Epic::OnlineServices::Friends {
struct OnBlockedUsersUpdateInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
struct OnBlockedUsersUpdateInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal, "Epic.OnlineServices.Friends", "OnBlockedUsersUpdateInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.OnBlockedUsersUpdateInfoInternal
struct CORDL_TYPE OnBlockedUsersUpdateInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>*() ;

/// @brief Method Get, addr 0x180518fa0, size 0x100, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Friends__OnBlockedUsersUpdateInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnBlockedUsersUpdateInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Blocked", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OnBlockedUsersUpdateInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, int32_t  m_Blocked) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_Blocked, offset: 0x18, size: 0x4, def value: None
 int32_t  m_Blocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal, m_TargetUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal, m_Blocked) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
