#pragma once
// IWYU pragma private; include "kcp2k/KcpHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KcpHeader)
// Forward declare root types
namespace kcp2k {
struct KcpHeader;
}
// Write type traits
MARK_VAL_T(::kcp2k::KcpHeader);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpHeader, "kcp2k", "KcpHeader");
// Dependencies 
namespace kcp2k {
// Is value type: true
// CS Name: kcp2k.KcpHeader
struct CORDL_TYPE KcpHeader {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __KcpHeader_Unwrapped
enum struct __KcpHeader_Unwrapped : uint8_t {
__E_Handshake = static_cast<uint8_t>(0x1u),
__E_Ping = static_cast<uint8_t>(0x2u),
__E_Data = static_cast<uint8_t>(0x3u),
__E_Disconnect = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KcpHeader_Unwrapped () const noexcept {
return static_cast<__KcpHeader_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KcpHeader() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr KcpHeader(uint8_t  value__) noexcept;

/// @brief Field Data value: U8(3)
static ::kcp2k::KcpHeader const Data;

/// @brief Field Disconnect value: U8(4)
static ::kcp2k::KcpHeader const Disconnect;

/// @brief Field Handshake value: U8(1)
static ::kcp2k::KcpHeader const Handshake;

/// @brief Field Ping value: U8(2)
static ::kcp2k::KcpHeader const Ping;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpHeader, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpHeader) == 0x1, "Size mismatch!");

} // namespace end def kcp2k
