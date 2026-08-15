#pragma once
// IWYU pragma private; include "Steamworks/P2PSessionState_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(P2PSessionState_t)
// Forward declare root types
namespace Steamworks {
struct P2PSessionState_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::P2PSessionState_t);
DEFINE_IL2CPP_CLASS(::Steamworks::P2PSessionState_t, "Steamworks", "P2PSessionState_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.P2PSessionState_t
#pragma pack(push, 8)
struct CORDL_TYPE P2PSessionState_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr P2PSessionState_t() ;

// Ctor Parameters [CppParam { name: "m_bConnectionActive", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_bConnecting", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_eP2PSessionError", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_bUsingRelay", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_nBytesQueuedForSend", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nPacketsQueuedForSend", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nRemoteIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nRemotePort", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr P2PSessionState_t(uint8_t  m_bConnectionActive, uint8_t  m_bConnecting, uint8_t  m_eP2PSessionError, uint8_t  m_bUsingRelay, int32_t  m_nBytesQueuedForSend, int32_t  m_nPacketsQueuedForSend, uint32_t  m_nRemoteIP, uint16_t  m_nRemotePort) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_bConnectionActive, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_bConnectionActive;

/// @brief Field m_bConnecting, offset: 0x1, size: 0x1, def value: None
 uint8_t  m_bConnecting;

/// @brief Field m_eP2PSessionError, offset: 0x2, size: 0x1, def value: None
 uint8_t  m_eP2PSessionError;

/// @brief Field m_bUsingRelay, offset: 0x3, size: 0x1, def value: None
 uint8_t  m_bUsingRelay;

/// @brief Field m_nBytesQueuedForSend, offset: 0x4, size: 0x4, def value: None
 int32_t  m_nBytesQueuedForSend;

/// @brief Field m_nPacketsQueuedForSend, offset: 0x8, size: 0x4, def value: None
 int32_t  m_nPacketsQueuedForSend;

/// @brief Field m_nRemoteIP, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_nRemoteIP;

/// @brief Field m_nRemotePort, offset: 0x10, size: 0x2, def value: None
 uint16_t  m_nRemotePort;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::P2PSessionState_t, m_bConnectionActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::P2PSessionState_t, m_bConnecting) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Steamworks::P2PSessionState_t, m_eP2PSessionError) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Steamworks::P2PSessionState_t, m_bUsingRelay) == 0x3, "Offset mismatch!");

static_assert(offsetof(::Steamworks::P2PSessionState_t, m_nBytesQueuedForSend) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::P2PSessionState_t, m_nPacketsQueuedForSend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::P2PSessionState_t, m_nRemoteIP) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::P2PSessionState_t, m_nRemotePort) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::P2PSessionState_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks
