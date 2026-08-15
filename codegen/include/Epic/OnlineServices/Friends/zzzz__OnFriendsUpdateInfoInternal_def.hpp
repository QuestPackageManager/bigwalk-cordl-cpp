#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnFriendsUpdateInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Friends/zzzz__FriendsStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnFriendsUpdateInfoInternal)
namespace Epic::OnlineServices::Friends {
struct OnFriendsUpdateInfo;
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
struct OnFriendsUpdateInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal, "Epic.OnlineServices.Friends", "OnFriendsUpdateInfoInternal");
// Dependencies Epic.OnlineServices.Friends.FriendsStatus, System.IntPtr
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.OnFriendsUpdateInfoInternal
struct CORDL_TYPE OnFriendsUpdateInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>*() ;

/// @brief Method Get, addr 0x180519ec0, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Friends__OnFriendsUpdateInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnFriendsUpdateInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PreviousStatus", ty: "::Epic::OnlineServices::Friends::FriendsStatus", modifiers: "", def_value: None }, CppParam { name: "m_CurrentStatus", ty: "::Epic::OnlineServices::Friends::FriendsStatus", modifiers: "", def_value: None }]
constexpr OnFriendsUpdateInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, ::Epic::OnlineServices::Friends::FriendsStatus  m_PreviousStatus, ::Epic::OnlineServices::Friends::FriendsStatus  m_CurrentStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8865};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_PreviousStatus, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Friends::FriendsStatus  m_PreviousStatus;

/// @brief Field m_CurrentStatus, offset: 0x1c, size: 0x4, def value: None
 ::Epic::OnlineServices::Friends::FriendsStatus  m_CurrentStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal, m_TargetUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal, m_PreviousStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal, m_CurrentStatus) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
