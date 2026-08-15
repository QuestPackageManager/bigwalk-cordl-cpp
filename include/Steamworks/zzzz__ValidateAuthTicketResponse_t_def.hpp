#pragma once
// IWYU pragma private; include "Steamworks/ValidateAuthTicketResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EAuthSessionResponse_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValidateAuthTicketResponse_t)
// Forward declare root types
namespace Steamworks {
struct ValidateAuthTicketResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::ValidateAuthTicketResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::ValidateAuthTicketResponse_t, "Steamworks", "ValidateAuthTicketResponse_t");
// Dependencies Steamworks.CSteamID, Steamworks.EAuthSessionResponse
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ValidateAuthTicketResponse_t
#pragma pack(push, 4)
struct CORDL_TYPE ValidateAuthTicketResponse_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ValidateAuthTicketResponse_t() ;

// Ctor Parameters [CppParam { name: "m_SteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_eAuthSessionResponse", ty: "::Steamworks::EAuthSessionResponse", modifiers: "", def_value: None }, CppParam { name: "m_OwnerSteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr ValidateAuthTicketResponse_t(::Steamworks::CSteamID  m_SteamID, ::Steamworks::EAuthSessionResponse  m_eAuthSessionResponse, ::Steamworks::CSteamID  m_OwnerSteamID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x8f)};

/// @brief Field m_SteamID, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamID;

/// @brief Field m_eAuthSessionResponse, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EAuthSessionResponse  m_eAuthSessionResponse;

/// @brief Field m_OwnerSteamID, offset: 0xc, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_OwnerSteamID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::ValidateAuthTicketResponse_t, m_SteamID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ValidateAuthTicketResponse_t, m_eAuthSessionResponse) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ValidateAuthTicketResponse_t, m_OwnerSteamID) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ValidateAuthTicketResponse_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks
