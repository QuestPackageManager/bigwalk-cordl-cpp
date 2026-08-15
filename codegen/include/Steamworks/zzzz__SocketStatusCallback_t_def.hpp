#pragma once
// IWYU pragma private; include "Steamworks/SocketStatusCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__SNetListenSocket_t_def.hpp"
#include "Steamworks/zzzz__SNetSocket_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketStatusCallback_t)
// Forward declare root types
namespace Steamworks {
struct SocketStatusCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SocketStatusCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SocketStatusCallback_t, "Steamworks", "SocketStatusCallback_t");
// Dependencies Steamworks.CSteamID, Steamworks.SNetListenSocket_t, Steamworks.SNetSocket_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SocketStatusCallback_t
#pragma pack(push, 4)
struct CORDL_TYPE SocketStatusCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SocketStatusCallback_t() ;

// Ctor Parameters [CppParam { name: "m_hSocket", ty: "::Steamworks::SNetSocket_t", modifiers: "", def_value: None }, CppParam { name: "m_hListenSocket", ty: "::Steamworks::SNetListenSocket_t", modifiers: "", def_value: None }, CppParam { name: "m_steamIDRemote", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_eSNetSocketState", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketStatusCallback_t(::Steamworks::SNetSocket_t  m_hSocket, ::Steamworks::SNetListenSocket_t  m_hListenSocket, ::Steamworks::CSteamID  m_steamIDRemote, int32_t  m_eSNetSocketState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16146};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x4b1)};

/// @brief Field m_hSocket, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::SNetSocket_t  m_hSocket;

/// @brief Field m_hListenSocket, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::SNetListenSocket_t  m_hListenSocket;

/// @brief Field m_steamIDRemote, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDRemote;

/// @brief Field m_eSNetSocketState, offset: 0x10, size: 0x4, def value: None
 int32_t  m_eSNetSocketState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SocketStatusCallback_t, m_hSocket) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SocketStatusCallback_t, m_hListenSocket) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SocketStatusCallback_t, m_steamIDRemote) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SocketStatusCallback_t, m_eSNetSocketState) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SocketStatusCallback_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks
