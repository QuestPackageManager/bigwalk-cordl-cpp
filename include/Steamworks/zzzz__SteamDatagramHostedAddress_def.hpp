#pragma once
// IWYU pragma private; include "Steamworks/SteamDatagramHostedAddress.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamDatagramHostedAddress)
// Forward declare root types
namespace Steamworks {
struct SteamDatagramHostedAddress;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamDatagramHostedAddress);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamDatagramHostedAddress, "Steamworks", "SteamDatagramHostedAddress");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamDatagramHostedAddress
#pragma pack(push, 8)
struct CORDL_TYPE SteamDatagramHostedAddress {
public:
// Declarations
/// @brief Method Clear, addr 0x1805aaec0, size 0x8d0, virtual false, abstract: false, final false
inline void Clear() ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamDatagramHostedAddress() ;

// Ctor Parameters [CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SteamDatagramHostedAddress(int32_t  m_cbSize, ::ArrayW<uint8_t>  m_data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_cbSize, offset: 0x0, size: 0x4, def value: None
 int32_t  m_cbSize;

/// @brief Field m_data, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamDatagramHostedAddress, m_cbSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramHostedAddress, m_data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamDatagramHostedAddress) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
