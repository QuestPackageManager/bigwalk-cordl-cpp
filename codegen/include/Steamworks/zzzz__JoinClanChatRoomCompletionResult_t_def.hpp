#pragma once
// IWYU pragma private; include "Steamworks/JoinClanChatRoomCompletionResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EChatRoomEnterResponse_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinClanChatRoomCompletionResult_t)
// Forward declare root types
namespace Steamworks {
struct JoinClanChatRoomCompletionResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::JoinClanChatRoomCompletionResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::JoinClanChatRoomCompletionResult_t, "Steamworks", "JoinClanChatRoomCompletionResult_t");
// Dependencies Steamworks.CSteamID, Steamworks.EChatRoomEnterResponse
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.JoinClanChatRoomCompletionResult_t
#pragma pack(push, 4)
struct CORDL_TYPE JoinClanChatRoomCompletionResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr JoinClanChatRoomCompletionResult_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_eChatRoomEnterResponse", ty: "::Steamworks::EChatRoomEnterResponse", modifiers: "", def_value: None }]
constexpr JoinClanChatRoomCompletionResult_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::EChatRoomEnterResponse  m_eChatRoomEnterResponse) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x156)};

/// @brief Field m_steamIDClanChat, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDClanChat;

/// @brief Field m_eChatRoomEnterResponse, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EChatRoomEnterResponse  m_eChatRoomEnterResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::JoinClanChatRoomCompletionResult_t, m_steamIDClanChat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::JoinClanChatRoomCompletionResult_t, m_eChatRoomEnterResponse) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::JoinClanChatRoomCompletionResult_t) == 0xc, "Size mismatch!");

} // namespace end def Steamworks
