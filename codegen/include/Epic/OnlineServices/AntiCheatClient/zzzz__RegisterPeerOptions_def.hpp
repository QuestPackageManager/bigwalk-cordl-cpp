#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/RegisterPeerOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterPeerOptions)
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
namespace Epic::OnlineServices::AntiCheatClient {
struct RegisterPeerOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, "Epic.OnlineServices.AntiCheatClient", "RegisterPeerOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientPlatform, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientType, System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.RegisterPeerOptions
struct CORDL_TYPE RegisterPeerOptions {
public:
// Declarations
 __declspec(property(get=get_AccountId_DEPRECATED, put=set_AccountId_DEPRECATED)) ::Epic::OnlineServices::Utf8String*  AccountId_DEPRECATED;

 __declspec(property(get=get_AuthenticationTimeout, put=set_AuthenticationTimeout)) uint32_t  AuthenticationTimeout;

 __declspec(property(get=get_ClientPlatform, put=set_ClientPlatform)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  ClientPlatform;

 __declspec(property(get=get_ClientType, put=set_ClientType)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  ClientType;

 __declspec(property(get=get_IpAddress, put=set_IpAddress)) ::Epic::OnlineServices::Utf8String*  IpAddress;

 __declspec(property(get=get_PeerHandle, put=set_PeerHandle)) ::System::IntPtr  PeerHandle;

 __declspec(property(get=get_PeerProductUserId, put=set_PeerProductUserId)) ::Epic::OnlineServices::ProductUserId*  PeerProductUserId;

/// @brief Method get_AccountId_DEPRECATED, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AccountId_DEPRECATED() ;

/// @brief Method get_AuthenticationTimeout, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AuthenticationTimeout() ;

/// @brief Method get_ClientPlatform, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform get_ClientPlatform() ;

/// @brief Method get_ClientType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType get_ClientType() ;

/// @brief Method get_IpAddress, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_IpAddress() ;

/// @brief Method get_PeerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_PeerHandle() ;

/// @brief Method get_PeerProductUserId, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_PeerProductUserId() ;

/// @brief Method set_AccountId_DEPRECATED, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_AccountId_DEPRECATED(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_AuthenticationTimeout, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_AuthenticationTimeout(uint32_t  value) ;

/// @brief Method set_ClientPlatform, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  value) ;

/// @brief Method set_ClientType, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  value) ;

/// @brief Method set_IpAddress, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_IpAddress(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_PeerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_PeerHandle(::System::IntPtr  value) ;

/// @brief Method set_PeerProductUserId, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_PeerProductUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterPeerOptions() ;

// Ctor Parameters [CppParam { name: "_PeerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ClientType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType", modifiers: "", def_value: None }, CppParam { name: "_ClientPlatform_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform", modifiers: "", def_value: None }, CppParam { name: "_AuthenticationTimeout_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_AccountId_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IpAddress_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_PeerProductUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr RegisterPeerOptions(::System::IntPtr  _PeerHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  _ClientType_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  _ClientPlatform_k__BackingField, uint32_t  _AuthenticationTimeout_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_DEPRECATED_k__BackingField, ::Epic::OnlineServices::Utf8String*  _IpAddress_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _PeerProductUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <PeerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _PeerHandle_k__BackingField;

/// @brief Field <ClientType>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  _ClientType_k__BackingField;

/// @brief Field <ClientPlatform>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  _ClientPlatform_k__BackingField;

/// @brief Field <AuthenticationTimeout>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _AuthenticationTimeout_k__BackingField;

/// @brief Field <AccountId_DEPRECATED>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AccountId_DEPRECATED_k__BackingField;

/// @brief Field <IpAddress>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _IpAddress_k__BackingField;

/// @brief Field <PeerProductUserId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _PeerProductUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, _PeerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, _ClientType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, _ClientPlatform_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, _AuthenticationTimeout_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, _AccountId_DEPRECATED_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, _IpAddress_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions, _PeerProductUserId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
