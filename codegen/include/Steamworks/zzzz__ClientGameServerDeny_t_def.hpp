#pragma once
// IWYU pragma private; include "Steamworks/ClientGameServerDeny_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientGameServerDeny_t)
// Forward declare root types
namespace Steamworks {
struct ClientGameServerDeny_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::ClientGameServerDeny_t);
DEFINE_IL2CPP_CLASS(::Steamworks::ClientGameServerDeny_t, "Steamworks", "ClientGameServerDeny_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ClientGameServerDeny_t
#pragma pack(push, 8)
struct CORDL_TYPE ClientGameServerDeny_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ClientGameServerDeny_t() ;

// Ctor Parameters [CppParam { name: "m_uAppID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_unGameServerIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_usGameServerPort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_bSecure", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_uReason", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ClientGameServerDeny_t(uint32_t  m_uAppID, uint32_t  m_unGameServerIP, uint16_t  m_usGameServerPort, uint16_t  m_bSecure, uint32_t  m_uReason) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x71)};

/// @brief Field m_uAppID, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_uAppID;

/// @brief Field m_unGameServerIP, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_unGameServerIP;

/// @brief Field m_usGameServerPort, offset: 0x8, size: 0x2, def value: None
 uint16_t  m_usGameServerPort;

/// @brief Field m_bSecure, offset: 0xa, size: 0x2, def value: None
 uint16_t  m_bSecure;

/// @brief Field m_uReason, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_uReason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::ClientGameServerDeny_t, m_uAppID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ClientGameServerDeny_t, m_unGameServerIP) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ClientGameServerDeny_t, m_usGameServerPort) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ClientGameServerDeny_t, m_bSecure) == 0xa, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ClientGameServerDeny_t, m_uReason) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ClientGameServerDeny_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
