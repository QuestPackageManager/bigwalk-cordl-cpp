#pragma once
// IWYU pragma private; include "Steamworks/SubmitPlayerResultResultCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubmitPlayerResultResultCallback_t)
// Forward declare root types
namespace Steamworks {
struct SubmitPlayerResultResultCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SubmitPlayerResultResultCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SubmitPlayerResultResultCallback_t, "Steamworks", "SubmitPlayerResultResultCallback_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SubmitPlayerResultResultCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE SubmitPlayerResultResultCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SubmitPlayerResultResultCallback_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "ullUniqueGameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "steamIDPlayer", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr SubmitPlayerResultResultCallback_t(::Steamworks::EResult  m_eResult, uint64_t  ullUniqueGameID, ::Steamworks::CSteamID  steamIDPlayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x145e)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field ullUniqueGameID, offset: 0x8, size: 0x8, def value: None
 uint64_t  ullUniqueGameID;

/// @brief Field steamIDPlayer, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::CSteamID  steamIDPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SubmitPlayerResultResultCallback_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SubmitPlayerResultResultCallback_t, ullUniqueGameID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SubmitPlayerResultResultCallback_t, steamIDPlayer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SubmitPlayerResultResultCallback_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
