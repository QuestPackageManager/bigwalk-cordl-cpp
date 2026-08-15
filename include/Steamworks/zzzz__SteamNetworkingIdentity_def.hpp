#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingIdentity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingIdentityType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingIdentity)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct ESteamNetworkingFakeIPType;
}
namespace Steamworks {
struct SteamNetworkingIPAddr;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingIdentity;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingIdentity);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingIdentity, "Steamworks", "SteamNetworkingIdentity");
// Dependencies Steamworks.ESteamNetworkingIdentityType
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingIdentity
#pragma pack(push, 1)
struct CORDL_TYPE SteamNetworkingIdentity {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr operator  ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*() ;

/// @brief Method Clear, addr 0x1805b42d0, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Equals, addr 0x1805b42f0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::SteamNetworkingIdentity  x) ;

/// @brief Method GetFakeIPType, addr 0x1805b4330, size 0x20, virtual false, abstract: false, final false
inline ::Steamworks::ESteamNetworkingFakeIPType GetFakeIPType() ;

/// @brief Method GetGenericBytes, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetGenericBytes(::by_ref<int32_t>  cbLen) ;

/// @brief Method GetGenericString, addr 0x1805b4380, size 0x40, virtual false, abstract: false, final false
inline ::StringW GetGenericString() ;

/// @brief Method GetIPAddr, addr 0x1805b4350, size 0x30, virtual false, abstract: false, final false
inline ::Steamworks::SteamNetworkingIPAddr GetIPAddr() ;

/// @brief Method GetIPv4, addr 0x1805b43c0, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetIPv4() ;

/// @brief Method GetSteamID, addr 0x1805b4400, size 0x40, virtual false, abstract: false, final false
inline ::Steamworks::CSteamID GetSteamID() ;

/// @brief Method GetSteamID64, addr 0x1805b43e0, size 0x20, virtual false, abstract: false, final false
inline uint64_t GetSteamID64() ;

/// @brief Method IsFakeIP, addr 0x1805b4440, size 0x30, virtual false, abstract: false, final false
inline bool IsFakeIP() ;

/// @brief Method IsInvalid, addr 0x1805b4470, size 0x20, virtual false, abstract: false, final false
inline bool IsInvalid() ;

/// @brief Method IsLocalHost, addr 0x1805b4490, size 0x20, virtual false, abstract: false, final false
inline bool IsLocalHost() ;

/// @brief Method ParseString, addr 0x1805b44b0, size 0xe0, virtual false, abstract: false, final false
inline bool ParseString(::StringW  pszStr) ;

/// @brief Method SetGenericBytes, addr 0x1805b4590, size 0x20, virtual false, abstract: false, final false
inline bool SetGenericBytes(::ArrayW<uint8_t>  data, uint32_t  cbLen) ;

/// @brief Method SetGenericString, addr 0x1805b45b0, size 0xe0, virtual false, abstract: false, final false
inline bool SetGenericString(::StringW  pszString) ;

/// @brief Method SetIPAddr, addr 0x1805b4690, size 0x40, virtual false, abstract: false, final false
inline void SetIPAddr(::Steamworks::SteamNetworkingIPAddr  addr) ;

/// @brief Method SetIPv4Addr, addr 0x1805b46d0, size 0x20, virtual false, abstract: false, final false
inline void SetIPv4Addr(uint32_t  nIPv4, uint16_t  nPort) ;

/// @brief Method SetLocalHost, addr 0x1805b46f0, size 0x20, virtual false, abstract: false, final false
inline void SetLocalHost() ;

/// @brief Method SetSteamID, addr 0x1805b4730, size 0x50, virtual false, abstract: false, final false
inline void SetSteamID(::Steamworks::CSteamID  steamID) ;

/// @brief Method SetSteamID64, addr 0x1805b4710, size 0x20, virtual false, abstract: false, final false
inline void SetSteamID64(uint64_t  steamID) ;

/// @brief Method ToString, addr 0x1805b4780, size 0x3f0, virtual false, abstract: false, final false
inline void ToString(::by_ref<::StringW>  buf) ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>* i___System__IEquatable_1___Steamworks__SteamNetworkingIdentity_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingIdentity() ;

// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ESteamNetworkingIdentityType", modifiers: "", def_value: None }, CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr SteamNetworkingIdentity(::Steamworks::ESteamNetworkingIdentityType  m_eType, int32_t  m_cbSize, ::ArrayW<uint32_t>  m_reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16441};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_cbMaxGenericBytes offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxGenericBytes{static_cast<int32_t>(0x20)};

/// @brief Field k_cchMaxGenericString offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxGenericString{static_cast<int32_t>(0x20)};

/// @brief Field k_cchMaxString offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxString{static_cast<int32_t>(0x80)};

/// @brief Field m_eType, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingIdentityType  m_eType;

/// @brief Field m_cbSize, offset: 0x4, size: 0x4, def value: None
 int32_t  m_cbSize;

/// @brief Field m_reserved, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint32_t>  m_reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_eType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_cbSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIdentity, m_reserved) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingIdentity) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
