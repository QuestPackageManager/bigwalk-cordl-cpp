#pragma once
// IWYU pragma private; include "Steamworks/P2PSessionRequest_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(P2PSessionRequest_t)
// Forward declare root types
namespace Steamworks {
struct P2PSessionRequest_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::P2PSessionRequest_t);
DEFINE_IL2CPP_CLASS(::Steamworks::P2PSessionRequest_t, "Steamworks", "P2PSessionRequest_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.P2PSessionRequest_t
#pragma pack(push, 8)
struct CORDL_TYPE P2PSessionRequest_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr P2PSessionRequest_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDRemote", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr P2PSessionRequest_t(::Steamworks::CSteamID  m_steamIDRemote) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x4b2)};

/// @brief Field m_steamIDRemote, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDRemote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::P2PSessionRequest_t, m_steamIDRemote) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::P2PSessionRequest_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
