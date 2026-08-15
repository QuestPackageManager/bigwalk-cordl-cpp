#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingIPAddr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingIPAddr)
namespace Steamworks {
struct ESteamNetworkingFakeIPType;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingIPAddr;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingIPAddr);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingIPAddr, "Steamworks", "SteamNetworkingIPAddr");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingIPAddr
#pragma pack(push, 1)
struct CORDL_TYPE SteamNetworkingIPAddr {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>"
constexpr operator  ::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>*() ;

/// @brief Method Clear, addr 0x1805b3de0, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Equals, addr 0x1805b3e00, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::SteamNetworkingIPAddr  x) ;

/// @brief Method GetFakeIPType, addr 0x1805b3e40, size 0x20, virtual false, abstract: false, final false
inline ::Steamworks::ESteamNetworkingFakeIPType GetFakeIPType() ;

/// @brief Method GetIPv4, addr 0x1805b3e60, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetIPv4() ;

/// @brief Method IsFakeIP, addr 0x1805b3e80, size 0x30, virtual false, abstract: false, final false
inline bool IsFakeIP() ;

/// @brief Method IsIPv4, addr 0x1805b3eb0, size 0x20, virtual false, abstract: false, final false
inline bool IsIPv4() ;

/// @brief Method IsIPv6AllZeros, addr 0x1805b3ed0, size 0x20, virtual false, abstract: false, final false
inline bool IsIPv6AllZeros() ;

/// @brief Method IsLocalHost, addr 0x1805b3ef0, size 0x20, virtual false, abstract: false, final false
inline bool IsLocalHost() ;

/// @brief Method ParseString, addr 0x1805b3f10, size 0xe0, virtual false, abstract: false, final false
inline bool ParseString(::StringW  pszStr) ;

/// @brief Method SetIPv4, addr 0x1805b3ff0, size 0x20, virtual false, abstract: false, final false
inline void SetIPv4(uint32_t  nIP, uint16_t  nPort) ;

/// @brief Method SetIPv6, addr 0x1805b4030, size 0x20, virtual false, abstract: false, final false
inline void SetIPv6(::ArrayW<uint8_t>  ipv6, uint16_t  nPort) ;

/// @brief Method SetIPv6LocalHost, addr 0x1805b4010, size 0x20, virtual false, abstract: false, final false
inline void SetIPv6LocalHost(uint16_t  nPort) ;

/// @brief Method ToString, addr 0x1805b4050, size 0x280, virtual false, abstract: false, final false
inline void ToString(::by_ref<::StringW>  buf, bool  bWithPort) ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingIPAddr>* i___System__IEquatable_1___Steamworks__SteamNetworkingIPAddr_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingIPAddr() ;

// Ctor Parameters [CppParam { name: "m_ipv6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_port", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr SteamNetworkingIPAddr(::ArrayW<uint8_t>  m_ipv6, uint16_t  m_port) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_cchMaxString offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxString{static_cast<int32_t>(0x30)};

/// @brief Field m_ipv6, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_ipv6;

/// @brief Field m_port, offset: 0x8, size: 0x2, def value: None
 uint16_t  m_port;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingIPAddr, m_ipv6) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingIPAddr, m_port) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingIPAddr) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
