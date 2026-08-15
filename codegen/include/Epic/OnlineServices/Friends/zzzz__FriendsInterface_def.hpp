#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/FriendsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsInterface)
namespace Epic::OnlineServices::Friends {
struct AcceptInviteOptions;
}
namespace Epic::OnlineServices::Friends {
struct AddNotifyBlockedUsersUpdateOptions;
}
namespace Epic::OnlineServices::Friends {
struct AddNotifyFriendsUpdateOptions;
}
namespace Epic::OnlineServices::Friends {
struct FriendsStatus;
}
namespace Epic::OnlineServices::Friends {
struct GetBlockedUserAtIndexOptions;
}
namespace Epic::OnlineServices::Friends {
struct GetBlockedUsersCountOptions;
}
namespace Epic::OnlineServices::Friends {
struct GetFriendAtIndexOptions;
}
namespace Epic::OnlineServices::Friends {
struct GetFriendsCountOptions;
}
namespace Epic::OnlineServices::Friends {
struct GetStatusOptions;
}
namespace Epic::OnlineServices::Friends {
class OnAcceptInviteCallback;
}
namespace Epic::OnlineServices::Friends {
class OnBlockedUsersUpdateCallback;
}
namespace Epic::OnlineServices::Friends {
class OnFriendsUpdateCallback;
}
namespace Epic::OnlineServices::Friends {
class OnQueryFriendsCallback;
}
namespace Epic::OnlineServices::Friends {
class OnRejectInviteCallback;
}
namespace Epic::OnlineServices::Friends {
class OnSendInviteCallback;
}
namespace Epic::OnlineServices::Friends {
struct QueryFriendsOptions;
}
namespace Epic::OnlineServices::Friends {
struct RejectInviteOptions;
}
namespace Epic::OnlineServices::Friends {
struct SendInviteOptions;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
class FriendsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Friends::FriendsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::FriendsInterface*, "Epic.OnlineServices.Friends", "FriendsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Friends {
// Is value type: false
// CS Name: Epic.OnlineServices.Friends.FriendsInterface
class CORDL_TYPE FriendsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AcceptInvite, addr 0x180515e20, size 0x230, virtual false, abstract: false, final false
inline void AcceptInvite(::by_ref<::Epic::OnlineServices::Friends::AcceptInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnAcceptInviteCallback*  completionDelegate) ;

/// @brief Method AddNotifyBlockedUsersUpdate, addr 0x180516050, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyBlockedUsersUpdate(::by_ref<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallback*  blockedUsersUpdateHandler) ;

/// @brief Method AddNotifyFriendsUpdate, addr 0x180516240, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyFriendsUpdate(::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallback*  friendsUpdateHandler) ;

/// @brief Method GetBlockedUserAtIndex, addr 0x180516430, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* GetBlockedUserAtIndex(::by_ref<::Epic::OnlineServices::Friends::GetBlockedUserAtIndexOptions>  options) ;

/// @brief Method GetBlockedUsersCount, addr 0x1805164d0, size 0x70, virtual false, abstract: false, final false
inline int32_t GetBlockedUsersCount(::by_ref<::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions>  options) ;

/// @brief Method GetFriendAtIndex, addr 0x180516540, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* GetFriendAtIndex(::by_ref<::Epic::OnlineServices::Friends::GetFriendAtIndexOptions>  options) ;

/// @brief Method GetFriendsCount, addr 0x1805165e0, size 0x70, virtual false, abstract: false, final false
inline int32_t GetFriendsCount(::by_ref<::Epic::OnlineServices::Friends::GetFriendsCountOptions>  options) ;

/// @brief Method GetStatus, addr 0x180516650, size 0x90, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Friends::FriendsStatus GetStatus(::by_ref<::Epic::OnlineServices::Friends::GetStatusOptions>  options) ;

static inline ::Epic::OnlineServices::Friends::FriendsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Friends::FriendsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryFriends, addr 0x1805166e0, size 0x200, virtual false, abstract: false, final false
inline void QueryFriends(::by_ref<::Epic::OnlineServices::Friends::QueryFriendsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnQueryFriendsCallback*  completionDelegate) ;

/// @brief Method RejectInvite, addr 0x1805168e0, size 0x230, virtual false, abstract: false, final false
inline void RejectInvite(::by_ref<::Epic::OnlineServices::Friends::RejectInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnRejectInviteCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyBlockedUsersUpdate, addr 0x180516b10, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyBlockedUsersUpdate(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyFriendsUpdate, addr 0x180516b40, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyFriendsUpdate(uint64_t  notificationId) ;

/// @brief Method SendInvite, addr 0x180516b70, size 0x560, virtual false, abstract: false, final false
inline void SendInvite(::by_ref<::Epic::OnlineServices::Friends::SendInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnSendInviteCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendsInterface(FriendsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendsInterface(FriendsInterface const& ) = delete;

/// @brief Field ACCEPTINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACCEPTINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYBLOCKEDUSERSUPDATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYBLOCKEDUSERSUPDATE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYFRIENDSUPDATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYFRIENDSUPDATE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETBLOCKEDUSERATINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETBLOCKEDUSERATINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETBLOCKEDUSERSCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETBLOCKEDUSERSCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETFRIENDATINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFRIENDATINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETFRIENDSCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFRIENDSCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETSTATUS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETSTATUS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYFRIENDS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFRIENDS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REJECTINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REJECTINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SENDINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8841};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Friends::FriendsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
