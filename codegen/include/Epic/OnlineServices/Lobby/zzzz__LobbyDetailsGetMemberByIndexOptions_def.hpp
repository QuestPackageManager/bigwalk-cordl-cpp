#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsGetMemberByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyDetailsGetMemberByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions, "Epic.OnlineServices.Lobby", "LobbyDetailsGetMemberByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyDetailsGetMemberByIndexOptions
struct CORDL_TYPE LobbyDetailsGetMemberByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_MemberIndex, put=set_MemberIndex)) uint32_t  MemberIndex;

/// @brief Method get_MemberIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MemberIndex() ;

/// @brief Method set_MemberIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_MemberIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetailsGetMemberByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_MemberIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbyDetailsGetMemberByIndexOptions(uint32_t  _MemberIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <MemberIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _MemberIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions, _MemberIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
