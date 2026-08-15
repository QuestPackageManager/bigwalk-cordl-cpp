#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseSessionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HouseSessionInfo)
// Forward declare root types
namespace GlobalNamespace {
class HouseSessionInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HouseSessionInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseSessionInfo*, "", "HouseSessionInfo");
// Dependencies Epic.OnlineServices.Sessions.SessionDetailsInfo, PlayEveryWare.EpicOnlineServices.PlatformManager::Platform, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseSessionInfo
class CORDL_TYPE HouseSessionInfo : public ::System::Object {
public:
// Declarations
/// @brief Field crossplay, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_crossplay, put=__cordl_internal_set_crossplay)) bool  crossplay;

/// @brief Field hostId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostId, put=__cordl_internal_set_hostId)) ::StringW  hostId;

/// @brief Field joinCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinCode, put=__cordl_internal_set_joinCode)) ::StringW  joinCode;

/// @brief Field platform, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform;

/// @brief Field sessionDetailsInfo, offset 0x38, size 0x58 
 __declspec(property(get=__cordl_internal_get_sessionDetailsInfo, put=__cordl_internal_set_sessionDetailsInfo)) ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  sessionDetailsInfo;

/// @brief Field userName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_userName, put=__cordl_internal_set_userName)) ::StringW  userName;

/// @brief Field worldName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldName, put=__cordl_internal_set_worldName)) ::StringW  worldName;

static inline ::GlobalNamespace::HouseSessionInfo* New_ctor() ;

constexpr bool const& __cordl_internal_get_crossplay() const;

constexpr bool& __cordl_internal_get_crossplay() ;

constexpr ::StringW const& __cordl_internal_get_hostId() const;

constexpr ::StringW& __cordl_internal_get_hostId() ;

constexpr ::StringW const& __cordl_internal_get_joinCode() const;

constexpr ::StringW& __cordl_internal_get_joinCode() ;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& __cordl_internal_get_platform() const;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& __cordl_internal_get_platform() ;

constexpr ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo> const& __cordl_internal_get_sessionDetailsInfo() const;

constexpr ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>& __cordl_internal_get_sessionDetailsInfo() ;

constexpr ::StringW const& __cordl_internal_get_userName() const;

constexpr ::StringW& __cordl_internal_get_userName() ;

constexpr ::StringW const& __cordl_internal_get_worldName() const;

constexpr ::StringW& __cordl_internal_get_worldName() ;

constexpr void __cordl_internal_set_crossplay(bool  value) ;

constexpr void __cordl_internal_set_hostId(::StringW  value) ;

constexpr void __cordl_internal_set_joinCode(::StringW  value) ;

constexpr void __cordl_internal_set_platform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

constexpr void __cordl_internal_set_sessionDetailsInfo(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  value) ;

constexpr void __cordl_internal_set_userName(::StringW  value) ;

constexpr void __cordl_internal_set_worldName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseSessionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseSessionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseSessionInfo(HouseSessionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseSessionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseSessionInfo(HouseSessionInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18998};

/// @brief Field hostId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___hostId;

/// @brief Field worldName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___worldName;

/// @brief Field userName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___userName;

/// @brief Field joinCode, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___joinCode;

/// @brief Field crossplay, offset: 0x30, size: 0x1, def value: None
 bool  ___crossplay;

/// @brief Field platform, offset: 0x34, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  ___platform;

/// @brief Field sessionDetailsInfo, offset: 0x38, size: 0x58, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  ___sessionDetailsInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseSessionInfo, ___hostId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSessionInfo, ___worldName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSessionInfo, ___userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSessionInfo, ___joinCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSessionInfo, ___crossplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSessionInfo, ___platform) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSessionInfo, ___sessionDetailsInfo) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseSessionInfo) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
