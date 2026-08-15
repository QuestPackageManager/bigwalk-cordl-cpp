#pragma once
// IWYU pragma private; include "Steamworks/JoinPartyCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PartyBeaconID_t_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinPartyCallback_t)
// Forward declare root types
namespace Steamworks {
struct JoinPartyCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::JoinPartyCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::JoinPartyCallback_t, "Steamworks", "JoinPartyCallback_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult, Steamworks.PartyBeaconID_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.JoinPartyCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE JoinPartyCallback_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchConnectString, put=set_m_rgchConnectString)) ::StringW  m_rgchConnectString;

/// @brief Method get_m_rgchConnectString, addr 0x180552c10, size 0x1e0, virtual false, abstract: false, final false
inline ::StringW get_m_rgchConnectString() ;

/// @brief Method set_m_rgchConnectString, addr 0x18054f680, size 0x1d0, virtual false, abstract: false, final false
inline void set_m_rgchConnectString(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinPartyCallback_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_ulBeaconID", ty: "::Steamworks::PartyBeaconID_t", modifiers: "", def_value: None }, CppParam { name: "m_SteamIDBeaconOwner", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_rgchConnectString_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr JoinPartyCallback_t(::Steamworks::EResult  m_eResult, ::Steamworks::PartyBeaconID_t  m_ulBeaconID, ::Steamworks::CSteamID  m_SteamIDBeaconOwner, ::ArrayW<uint8_t>  m_rgchConnectString_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14b5)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_ulBeaconID, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::PartyBeaconID_t  m_ulBeaconID;

/// @brief Field m_SteamIDBeaconOwner, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamIDBeaconOwner;

/// @brief Field m_rgchConnectString_, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchConnectString_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::JoinPartyCallback_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::JoinPartyCallback_t, m_ulBeaconID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::JoinPartyCallback_t, m_SteamIDBeaconOwner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::JoinPartyCallback_t, m_rgchConnectString_) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::JoinPartyCallback_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
