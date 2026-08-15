#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/UserInfoInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserInfoInterface)
namespace Epic::OnlineServices::UserInfo {
struct BestDisplayName;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyBestDisplayNameOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyBestDisplayNameWithPlatformOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByAccountIdOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByAccountTypeOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByIndexOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyUserInfoOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct ExternalUserInfo;
}
namespace Epic::OnlineServices::UserInfo {
struct GetExternalUserInfoCountOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct GetLocalPlatformTypeOptions;
}
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByDisplayNameCallback;
}
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByExternalAccountCallback;
}
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoCallback;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByDisplayNameOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByExternalAccountOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoOptions;
}
namespace Epic::OnlineServices::UserInfo {
struct UserInfoData;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
class UserInfoInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UserInfo::UserInfoInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::UserInfoInterface*, "Epic.OnlineServices.UserInfo", "UserInfoInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::UserInfo {
// Is value type: false
// CS Name: Epic.OnlineServices.UserInfo.UserInfoInterface
class CORDL_TYPE UserInfoInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyBestDisplayName, addr 0x1804e4d50, size 0x160, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyBestDisplayName(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>  outBestDisplayName) ;

/// @brief Method CopyBestDisplayNameWithPlatform, addr 0x1804e4bf0, size 0x160, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyBestDisplayNameWithPlatform(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>  outBestDisplayName) ;

/// @brief Method CopyExternalUserInfoByAccountId, addr 0x1804e4eb0, size 0x100, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyExternalUserInfoByAccountId(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>  outExternalUserInfo) ;

/// @brief Method CopyExternalUserInfoByAccountType, addr 0x1804e4fb0, size 0x160, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyExternalUserInfoByAccountType(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>  outExternalUserInfo) ;

/// @brief Method CopyExternalUserInfoByIndex, addr 0x1804e5110, size 0x160, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyExternalUserInfoByIndex(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>  outExternalUserInfo) ;

/// @brief Method CopyUserInfo, addr 0x1804e5270, size 0x1b0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyUserInfo(::by_ref<::Epic::OnlineServices::UserInfo::CopyUserInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoData>>  outUserInfo) ;

/// @brief Method GetExternalUserInfoCount, addr 0x1804e5420, size 0x120, virtual false, abstract: false, final false
inline uint32_t GetExternalUserInfoCount(::by_ref<::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions>  options) ;

/// @brief Method GetLocalPlatformType, addr 0x1804e5540, size 0xa0, virtual false, abstract: false, final false
inline uint32_t GetLocalPlatformType(::by_ref<::Epic::OnlineServices::UserInfo::GetLocalPlatformTypeOptions>  options) ;

static inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* New_ctor() ;

static inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryUserInfo, addr 0x1804e5aa0, size 0x2b0, virtual false, abstract: false, final false
inline void QueryUserInfo(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*  completionDelegate) ;

/// @brief Method QueryUserInfoByDisplayName, addr 0x1804e55e0, size 0x260, virtual false, abstract: false, final false
inline void QueryUserInfoByDisplayName(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*  completionDelegate) ;

/// @brief Method QueryUserInfoByExternalAccount, addr 0x1804e5840, size 0x260, virtual false, abstract: false, final false
inline void QueryUserInfoByExternalAccount(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserInfoInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserInfoInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserInfoInterface(UserInfoInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserInfoInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserInfoInterface(UserInfoInterface const& ) = delete;

/// @brief Field BESTDISPLAYNAME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  BESTDISPLAYNAME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYBESTDISPLAYNAMEWITHPLATFORM_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYBESTDISPLAYNAMEWITHPLATFORM_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYBESTDISPLAYNAME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYBESTDISPLAYNAME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYEXTERNALUSERINFOBYACCOUNTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYEXTERNALUSERINFOBYACCOUNTID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYEXTERNALUSERINFOBYACCOUNTTYPE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYEXTERNALUSERINFOBYACCOUNTTYPE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYEXTERNALUSERINFOBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYEXTERNALUSERINFOBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYUSERINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYUSERINFO_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field EXTERNALUSERINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  EXTERNALUSERINFO_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field GETEXTERNALUSERINFOCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETEXTERNALUSERINFOCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETLOCALPLATFORMTYPE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETLOCALPLATFORMTYPE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field MAX_DISPLAYNAME_CHARACTERS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DISPLAYNAME_CHARACTERS{static_cast<int32_t>(0x10)};

/// @brief Field MAX_DISPLAYNAME_UTF8_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DISPLAYNAME_UTF8_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field QUERYUSERINFOBYDISPLAYNAME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYUSERINFOBYDISPLAYNAME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYUSERINFOBYEXTERNALACCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYUSERINFOBYEXTERNALACCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYUSERINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYUSERINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UserInfo::UserInfoInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
