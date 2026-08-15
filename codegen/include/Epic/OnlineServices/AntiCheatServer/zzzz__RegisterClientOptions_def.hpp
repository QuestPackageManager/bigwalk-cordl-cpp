#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/RegisterClientOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterClientOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientPlatform;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientType;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
struct RegisterClientOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, "Epic.OnlineServices.AntiCheatServer", "RegisterClientOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientPlatform, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientType, System.IntPtr
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatServer.RegisterClientOptions
struct CORDL_TYPE RegisterClientOptions {
public:
// Declarations
 __declspec(property(get=get_AccountId_DEPRECATED, put=set_AccountId_DEPRECATED)) ::Epic::OnlineServices::Utf8String*  AccountId_DEPRECATED;

 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

 __declspec(property(get=get_ClientPlatform, put=set_ClientPlatform)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  ClientPlatform;

 __declspec(property(get=get_ClientType, put=set_ClientType)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  ClientType;

 __declspec(property(get=get_IpAddress, put=set_IpAddress)) ::Epic::OnlineServices::Utf8String*  IpAddress;

 __declspec(property(get=get_Reserved01, put=set_Reserved01)) int32_t  Reserved01;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Method get_AccountId_DEPRECATED, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AccountId_DEPRECATED() ;

/// @brief Method get_ClientHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Method get_ClientPlatform, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform get_ClientPlatform() ;

/// @brief Method get_ClientType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType get_ClientType() ;

/// @brief Method get_IpAddress, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_IpAddress() ;

/// @brief Method get_Reserved01, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Reserved01() ;

/// @brief Method get_UserId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Method set_AccountId_DEPRECATED, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_AccountId_DEPRECATED(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ClientHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

/// @brief Method set_ClientPlatform, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  value) ;

/// @brief Method set_ClientType, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  value) ;

/// @brief Method set_IpAddress, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_IpAddress(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Reserved01, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved01(int32_t  value) ;

/// @brief Method set_UserId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterClientOptions() ;

// Ctor Parameters [CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ClientType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType", modifiers: "", def_value: None }, CppParam { name: "_ClientPlatform_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform", modifiers: "", def_value: None }, CppParam { name: "_AccountId_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IpAddress_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Reserved01_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegisterClientOptions(::System::IntPtr  _ClientHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  _ClientType_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  _ClientPlatform_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_DEPRECATED_k__BackingField, ::Epic::OnlineServices::Utf8String*  _IpAddress_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, int32_t  _Reserved01_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <ClientHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <ClientType>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  _ClientType_k__BackingField;

/// @brief Field <ClientPlatform>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  _ClientPlatform_k__BackingField;

/// @brief Field <AccountId_DEPRECATED>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AccountId_DEPRECATED_k__BackingField;

/// @brief Field <IpAddress>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _IpAddress_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

/// @brief Field <Reserved01>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  _Reserved01_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, _ClientHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, _ClientType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, _ClientPlatform_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, _AccountId_DEPRECATED_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, _IpAddress_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, _UserId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions, _Reserved01_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
