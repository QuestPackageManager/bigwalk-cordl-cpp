#pragma once
// IWYU pragma private; include "Dissonance/Networking/ClientInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientInfo)
namespace Dissonance {
struct CodecSettings;
}
// Forward declare root types
namespace Dissonance::Networking {
struct ClientInfo;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::ClientInfo);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::ClientInfo, "Dissonance.Networking", "ClientInfo");
// Dependencies Dissonance.CodecSettings
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.ClientInfo
struct CORDL_TYPE ClientInfo {
public:
// Declarations
 __declspec(property(get=get_CodecSettings)) ::Dissonance::CodecSettings  CodecSettings;

 __declspec(property(get=get_PlayerId)) uint16_t  PlayerId;

 __declspec(property(get=get_PlayerName)) ::StringW  PlayerName;

/// @brief Method .ctor, addr 0x1805db170, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method get_CodecSettings, addr 0x1802d5350, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::CodecSettings get_CodecSettings() ;

/// @brief Method get_PlayerId, addr 0x1805d7490, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_PlayerId() ;

/// @brief Method get_PlayerName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_PlayerName() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClientInfo() ;

// Ctor Parameters [CppParam { name: "_PlayerName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_PlayerId_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_CodecSettings_k__BackingField", ty: "::Dissonance::CodecSettings", modifiers: "", def_value: None }]
constexpr ClientInfo(::StringW  _PlayerName_k__BackingField, uint16_t  _PlayerId_k__BackingField, ::Dissonance::CodecSettings  _CodecSettings_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16876};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <PlayerName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _PlayerName_k__BackingField;

/// @brief Field <PlayerId>k__BackingField, offset: 0x8, size: 0x2, def value: None
 uint16_t  _PlayerId_k__BackingField;

/// @brief Field <CodecSettings>k__BackingField, offset: 0xc, size: 0xc, def value: None
 ::Dissonance::CodecSettings  _CodecSettings_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::ClientInfo, _PlayerName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::ClientInfo, _PlayerId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::ClientInfo, _CodecSettings_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::ClientInfo) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Networking
