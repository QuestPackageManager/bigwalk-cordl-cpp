#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionInfo_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_def.hpp"
#include "Steamworks/zzzz__HSteamListenSocket_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIPAddr_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingPOPID_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetConnectionInfo_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetConnectionInfo_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetConnectionInfo_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetConnectionInfo_t, "Steamworks", "SteamNetConnectionInfo_t");
// Dependencies Steamworks.ESteamNetworkingConnectionState, Steamworks.HSteamListenSocket, Steamworks.SteamNetworkingIPAddr, Steamworks.SteamNetworkingIdentity, Steamworks.SteamNetworkingPOPID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetConnectionInfo_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetConnectionInfo_t {
public:
// Declarations
 __declspec(property(get=get_m_szConnectionDescription, put=set_m_szConnectionDescription)) ::StringW  m_szConnectionDescription;

 __declspec(property(get=get_m_szEndDebug, put=set_m_szEndDebug)) ::StringW  m_szEndDebug;

/// @brief Method get_m_szConnectionDescription, addr 0x180581d90, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_szConnectionDescription() ;

/// @brief Method get_m_szEndDebug, addr 0x1805a4e30, size 0x1860, virtual false, abstract: false, final false
inline ::StringW get_m_szEndDebug() ;

/// @brief Method set_m_szConnectionDescription, addr 0x18054f0b0, size 0x5d0, virtual false, abstract: false, final false
inline void set_m_szConnectionDescription(::StringW  value) ;

/// @brief Method set_m_szEndDebug, addr 0x18054f0b0, size 0x5d0, virtual false, abstract: false, final false
inline void set_m_szEndDebug(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetConnectionInfo_t() ;

// Ctor Parameters [CppParam { name: "m_identityRemote", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: None }, CppParam { name: "m_nUserData", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_hListenSocket", ty: "::Steamworks::HSteamListenSocket", modifiers: "", def_value: None }, CppParam { name: "m_addrRemote", ty: "::Steamworks::SteamNetworkingIPAddr", modifiers: "", def_value: None }, CppParam { name: "m__pad1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_idPOPRemote", ty: "::Steamworks::SteamNetworkingPOPID", modifiers: "", def_value: None }, CppParam { name: "m_idPOPRelay", ty: "::Steamworks::SteamNetworkingPOPID", modifiers: "", def_value: None }, CppParam { name: "m_eState", ty: "::Steamworks::ESteamNetworkingConnectionState", modifiers: "", def_value: None }, CppParam { name: "m_eEndReason", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_szEndDebug_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_szConnectionDescription_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_nFlags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr SteamNetConnectionInfo_t(::Steamworks::SteamNetworkingIdentity  m_identityRemote, int64_t  m_nUserData, ::Steamworks::HSteamListenSocket  m_hListenSocket, ::Steamworks::SteamNetworkingIPAddr  m_addrRemote, uint16_t  m__pad1, ::Steamworks::SteamNetworkingPOPID  m_idPOPRemote, ::Steamworks::SteamNetworkingPOPID  m_idPOPRelay, ::Steamworks::ESteamNetworkingConnectionState  m_eState, int32_t  m_eEndReason, ::ArrayW<uint8_t>  m_szEndDebug_, ::ArrayW<uint8_t>  m_szConnectionDescription_, int32_t  m_nFlags, ::ArrayW<uint32_t>  reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field m_identityRemote, offset: 0x0, size: 0x10, def value: None
 ::Steamworks::SteamNetworkingIdentity  m_identityRemote;

/// @brief Field m_nUserData, offset: 0x10, size: 0x8, def value: None
 int64_t  m_nUserData;

/// @brief Field m_hListenSocket, offset: 0x18, size: 0x4, def value: None
 ::Steamworks::HSteamListenSocket  m_hListenSocket;

/// @brief Field m_addrRemote, offset: 0x20, size: 0x10, def value: None
 ::Steamworks::SteamNetworkingIPAddr  m_addrRemote;

/// @brief Field m__pad1, offset: 0x30, size: 0x2, def value: None
 uint16_t  m__pad1;

/// @brief Field m_idPOPRemote, offset: 0x34, size: 0x4, def value: None
 ::Steamworks::SteamNetworkingPOPID  m_idPOPRemote;

/// @brief Field m_idPOPRelay, offset: 0x38, size: 0x4, def value: None
 ::Steamworks::SteamNetworkingPOPID  m_idPOPRelay;

/// @brief Field m_eState, offset: 0x3c, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingConnectionState  m_eState;

/// @brief Field m_eEndReason, offset: 0x40, size: 0x4, def value: None
 int32_t  m_eEndReason;

/// @brief Field m_szEndDebug_, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_szEndDebug_;

/// @brief Field m_szConnectionDescription_, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_szConnectionDescription_;

/// @brief Field m_nFlags, offset: 0x58, size: 0x4, def value: None
 int32_t  m_nFlags;

/// @brief Field reserved, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint32_t>  reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_identityRemote) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_nUserData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_hListenSocket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_addrRemote) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m__pad1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_idPOPRemote) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_idPOPRelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_eState) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_eEndReason) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_szEndDebug_) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_szConnectionDescription_) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, m_nFlags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionInfo_t, reserved) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetConnectionInfo_t) == 0x68, "Size mismatch!");

} // namespace end def Steamworks
