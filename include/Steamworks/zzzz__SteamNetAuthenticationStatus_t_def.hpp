#pragma once
// IWYU pragma private; include "Steamworks/SteamNetAuthenticationStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingAvailability_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetAuthenticationStatus_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetAuthenticationStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetAuthenticationStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetAuthenticationStatus_t, "Steamworks", "SteamNetAuthenticationStatus_t");
// Dependencies Steamworks.ESteamNetworkingAvailability
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetAuthenticationStatus_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetAuthenticationStatus_t {
public:
// Declarations
 __declspec(property(get=get_m_debugMsg, put=set_m_debugMsg)) ::StringW  m_debugMsg;

/// @brief Method get_m_debugMsg, addr 0x18054f030, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_debugMsg() ;

/// @brief Method set_m_debugMsg, addr 0x18054f680, size 0x1d0, virtual false, abstract: false, final false
inline void set_m_debugMsg(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetAuthenticationStatus_t() ;

// Ctor Parameters [CppParam { name: "m_eAvail", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: None }, CppParam { name: "m_debugMsg_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SteamNetAuthenticationStatus_t(::Steamworks::ESteamNetworkingAvailability  m_eAvail, ::ArrayW<uint8_t>  m_debugMsg_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x4c6)};

/// @brief Field m_eAvail, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingAvailability  m_eAvail;

/// @brief Field m_debugMsg_, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_debugMsg_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetAuthenticationStatus_t, m_eAvail) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetAuthenticationStatus_t, m_debugMsg_) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetAuthenticationStatus_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
