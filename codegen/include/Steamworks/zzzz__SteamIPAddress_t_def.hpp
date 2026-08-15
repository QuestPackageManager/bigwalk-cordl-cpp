#pragma once
// IWYU pragma private; include "Steamworks/SteamIPAddress_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamIPType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamIPAddress_t)
namespace Steamworks {
struct ESteamIPType;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace Steamworks {
struct SteamIPAddress_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamIPAddress_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamIPAddress_t, "Steamworks", "SteamIPAddress_t");
// Dependencies Steamworks.ESteamIPType
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamIPAddress_t
#pragma pack(push, 1)
struct CORDL_TYPE SteamIPAddress_t {
public:
// Declarations
/// @brief Method GetIPType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Steamworks::ESteamIPType GetIPType() ;

/// @brief Method IsSet, addr 0x1805aeaf0, size 0x20, virtual false, abstract: false, final false
inline bool IsSet() ;

/// @brief Method ToIPAddress, addr 0x1805aeb10, size 0x100, virtual false, abstract: false, final false
inline ::System::Net::IPAddress* ToIPAddress() ;

/// @brief Method ToString, addr 0x1805aec10, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1805aec50, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::IPAddress*  iPAddress) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamIPAddress_t() ;

// Ctor Parameters [CppParam { name: "m_ip0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_ip1", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_eType", ty: "::Steamworks::ESteamIPType", modifiers: "", def_value: None }]
constexpr SteamIPAddress_t(int64_t  m_ip0, int64_t  m_ip1, ::Steamworks::ESteamIPType  m_eType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16457};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_ip0, offset: 0x0, size: 0x8, def value: None
 int64_t  m_ip0;

/// @brief Field m_ip1, offset: 0x8, size: 0x8, def value: None
 int64_t  m_ip1;

/// @brief Field m_eType, offset: 0x10, size: 0x4, def value: None
 ::Steamworks::ESteamIPType  m_eType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamIPAddress_t, m_ip0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamIPAddress_t, m_ip1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamIPAddress_t, m_eType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamIPAddress_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks
