#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingMessage_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingMicroseconds_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingMessage_t)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingMessage_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingMessage_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingMessage_t, "Steamworks", "SteamNetworkingMessage_t");
// Dependencies Steamworks.HSteamNetConnection, Steamworks.SteamNetworkingIdentity, Steamworks.SteamNetworkingMicroseconds, System.IntPtr
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingMessage_t
struct CORDL_TYPE SteamNetworkingMessage_t {
public:
// Declarations
/// @brief Method FromIntPtr, addr 0x1805b4b70, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamNetworkingMessage_t FromIntPtr(::System::IntPtr  pointer) ;

/// @brief Method Release, addr 0x1805b4c20, size 0x1b0, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Release, addr 0x1805b4c10, size 0x10, virtual false, abstract: false, final false
static inline void Release(::System::IntPtr  pointer) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingMessage_t() ;

// Ctor Parameters [CppParam { name: "m_pData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_conn", ty: "::Steamworks::HSteamNetConnection", modifiers: "", def_value: None }, CppParam { name: "m_identityPeer", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: None }, CppParam { name: "m_nConnUserData", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_usecTimeReceived", ty: "::Steamworks::SteamNetworkingMicroseconds", modifiers: "", def_value: None }, CppParam { name: "m_nMessageNumber", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_pfnFreeData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pfnRelease", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_nChannel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFlags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nUserData", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_idxLane", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_pad1__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr SteamNetworkingMessage_t(::System::IntPtr  m_pData, int32_t  m_cbSize, ::Steamworks::HSteamNetConnection  m_conn, ::Steamworks::SteamNetworkingIdentity  m_identityPeer, int64_t  m_nConnUserData, ::Steamworks::SteamNetworkingMicroseconds  m_usecTimeReceived, int64_t  m_nMessageNumber, ::System::IntPtr  m_pfnFreeData, ::System::IntPtr  m_pfnRelease, int32_t  m_nChannel, int32_t  m_nFlags, int64_t  m_nUserData, uint16_t  m_idxLane, uint16_t  _pad1__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_pData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_pData;

/// @brief Field m_cbSize, offset: 0x8, size: 0x4, def value: None
 int32_t  m_cbSize;

/// @brief Field m_conn, offset: 0xc, size: 0x4, def value: None
 ::Steamworks::HSteamNetConnection  m_conn;

/// @brief Field m_identityPeer, offset: 0x10, size: 0x10, def value: None
 ::Steamworks::SteamNetworkingIdentity  m_identityPeer;

/// @brief Field m_nConnUserData, offset: 0x20, size: 0x8, def value: None
 int64_t  m_nConnUserData;

/// @brief Field m_usecTimeReceived, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::SteamNetworkingMicroseconds  m_usecTimeReceived;

/// @brief Field m_nMessageNumber, offset: 0x30, size: 0x8, def value: None
 int64_t  m_nMessageNumber;

/// @brief Field m_pfnFreeData, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_pfnFreeData;

/// @brief Field m_pfnRelease, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_pfnRelease;

/// @brief Field m_nChannel, offset: 0x48, size: 0x4, def value: None
 int32_t  m_nChannel;

/// @brief Field m_nFlags, offset: 0x4c, size: 0x4, def value: None
 int32_t  m_nFlags;

/// @brief Field m_nUserData, offset: 0x50, size: 0x8, def value: None
 int64_t  m_nUserData;

/// @brief Field m_idxLane, offset: 0x58, size: 0x2, def value: None
 uint16_t  m_idxLane;

/// @brief Field _pad1__, offset: 0x5a, size: 0x2, def value: None
 uint16_t  _pad1__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_pData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_cbSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_conn) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_identityPeer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_nConnUserData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_usecTimeReceived) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_nMessageNumber) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_pfnFreeData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_pfnRelease) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_nChannel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_nFlags) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_nUserData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, m_idxLane) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingMessage_t, _pad1__) == 0x5a, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingMessage_t) == 0x60, "Size mismatch!");

} // namespace end def Steamworks
