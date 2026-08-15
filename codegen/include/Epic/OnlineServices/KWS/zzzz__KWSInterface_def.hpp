#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/KWSInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KWSInterface)
namespace Epic::OnlineServices::KWS {
struct AddNotifyPermissionsUpdateReceivedOptions;
}
namespace Epic::OnlineServices::KWS {
struct CopyPermissionByIndexOptions;
}
namespace Epic::OnlineServices::KWS {
struct CreateUserOptions;
}
namespace Epic::OnlineServices::KWS {
struct GetPermissionByKeyOptions;
}
namespace Epic::OnlineServices::KWS {
struct GetPermissionsCountOptions;
}
namespace Epic::OnlineServices::KWS {
struct KWSPermissionStatus;
}
namespace Epic::OnlineServices::KWS {
class OnCreateUserCallback;
}
namespace Epic::OnlineServices::KWS {
class OnPermissionsUpdateReceivedCallback;
}
namespace Epic::OnlineServices::KWS {
class OnQueryAgeGateCallback;
}
namespace Epic::OnlineServices::KWS {
class OnQueryPermissionsCallback;
}
namespace Epic::OnlineServices::KWS {
class OnRequestPermissionsCallback;
}
namespace Epic::OnlineServices::KWS {
class OnUpdateParentEmailCallback;
}
namespace Epic::OnlineServices::KWS {
struct PermissionStatus;
}
namespace Epic::OnlineServices::KWS {
struct QueryAgeGateOptions;
}
namespace Epic::OnlineServices::KWS {
struct QueryPermissionsOptions;
}
namespace Epic::OnlineServices::KWS {
struct RequestPermissionsOptions;
}
namespace Epic::OnlineServices::KWS {
struct UpdateParentEmailOptions;
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
namespace Epic::OnlineServices::KWS {
class KWSInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::KWS::KWSInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::KWSInterface*, "Epic.OnlineServices.KWS", "KWSInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::KWS {
// Is value type: false
// CS Name: Epic.OnlineServices.KWS.KWSInterface
class CORDL_TYPE KWSInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyPermissionsUpdateReceived, addr 0x1805179a0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyPermissionsUpdateReceived(::by_ref<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback*  notificationFn) ;

/// @brief Method CopyPermissionByIndex, addr 0x180517b90, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyPermissionByIndex(::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatus>>  outPermission) ;

/// @brief Method CreateUser, addr 0x180517c50, size 0x250, virtual false, abstract: false, final false
inline void CreateUser(::by_ref<::Epic::OnlineServices::KWS::CreateUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnCreateUserCallback*  completionDelegate) ;

/// @brief Method GetPermissionByKey, addr 0x180517ea0, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetPermissionByKey(::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>  options, ::by_ref<::Epic::OnlineServices::KWS::KWSPermissionStatus>  outPermission) ;

/// @brief Method GetPermissionsCount, addr 0x180517f40, size 0x70, virtual false, abstract: false, final false
inline int32_t GetPermissionsCount(::by_ref<::Epic::OnlineServices::KWS::GetPermissionsCountOptions>  options) ;

static inline ::Epic::OnlineServices::KWS::KWSInterface* New_ctor() ;

static inline ::Epic::OnlineServices::KWS::KWSInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryAgeGate, addr 0x180517fb0, size 0x1d0, virtual false, abstract: false, final false
inline void QueryAgeGate(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*  completionDelegate) ;

/// @brief Method QueryPermissions, addr 0x180518180, size 0x200, virtual false, abstract: false, final false
inline void QueryPermissions(::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyPermissionsUpdateReceived, addr 0x180518380, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyPermissionsUpdateReceived(uint64_t  inId) ;

/// @brief Method RequestPermissions, addr 0x1805183b0, size 0x240, virtual false, abstract: false, final false
inline void RequestPermissions(::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallback*  completionDelegate) ;

/// @brief Method UpdateParentEmail, addr 0x1805185f0, size 0x230, virtual false, abstract: false, final false
inline void UpdateParentEmail(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KWSInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KWSInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KWSInterface(KWSInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KWSInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KWSInterface(KWSInterface const& ) = delete;

/// @brief Field ADDNOTIFYPERMISSIONSUPDATERECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPERMISSIONSUPDATERECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYPERMISSIONBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPERMISSIONBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATEUSER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATEUSER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPERMISSIONBYKEY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPERMISSIONBYKEY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPERMISSIONSCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPERMISSIONSCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field MAX_PERMISSIONS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PERMISSIONS{static_cast<int32_t>(0x10)};

/// @brief Field MAX_PERMISSION_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PERMISSION_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field PERMISSIONSTATUS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PERMISSIONSTATUS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYAGEGATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYAGEGATE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYPERMISSIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYPERMISSIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REQUESTPERMISSIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REQUESTPERMISSIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATEPARENTEMAIL_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATEPARENTEMAIL_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::KWS::KWSInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
