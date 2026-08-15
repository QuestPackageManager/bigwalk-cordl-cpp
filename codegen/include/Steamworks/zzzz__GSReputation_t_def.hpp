#pragma once
// IWYU pragma private; include "Steamworks/GSReputation_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GSReputation_t)
// Forward declare root types
namespace Steamworks {
struct GSReputation_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GSReputation_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GSReputation_t, "Steamworks", "GSReputation_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GSReputation_t
#pragma pack(push, 8)
struct CORDL_TYPE GSReputation_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GSReputation_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_unReputationScore", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_bBanned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_unBannedIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_usBannedPort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ulBannedGameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_unBanExpires", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GSReputation_t(::Steamworks::EResult  m_eResult, uint32_t  m_unReputationScore, bool  m_bBanned, uint32_t  m_unBannedIP, uint16_t  m_usBannedPort, uint64_t  m_ulBannedGameID, uint32_t  m_unBanExpires) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16063};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd1)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_unReputationScore, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_unReputationScore;

/// @brief Field m_bBanned, offset: 0x8, size: 0x1, def value: None
 bool  m_bBanned;

/// @brief Field m_unBannedIP, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_unBannedIP;

/// @brief Field m_usBannedPort, offset: 0x10, size: 0x2, def value: None
 uint16_t  m_usBannedPort;

/// @brief Field m_ulBannedGameID, offset: 0x18, size: 0x8, def value: None
 uint64_t  m_ulBannedGameID;

/// @brief Field m_unBanExpires, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_unBanExpires;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GSReputation_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSReputation_t, m_unReputationScore) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSReputation_t, m_bBanned) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSReputation_t, m_unBannedIP) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSReputation_t, m_usBannedPort) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSReputation_t, m_ulBannedGameID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSReputation_t, m_unBanExpires) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GSReputation_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
