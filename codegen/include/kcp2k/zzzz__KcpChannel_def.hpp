#pragma once
// IWYU pragma private; include "kcp2k/KcpChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KcpChannel)
// Forward declare root types
namespace kcp2k {
struct KcpChannel;
}
// Write type traits
MARK_VAL_T(::kcp2k::KcpChannel);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpChannel, "kcp2k", "KcpChannel");
// Dependencies 
namespace kcp2k {
// Is value type: true
// CS Name: kcp2k.KcpChannel
struct CORDL_TYPE KcpChannel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __KcpChannel_Unwrapped
enum struct __KcpChannel_Unwrapped : uint8_t {
__E_Reliable = static_cast<uint8_t>(0x1u),
__E_Unreliable = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KcpChannel_Unwrapped () const noexcept {
return static_cast<__KcpChannel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KcpChannel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr KcpChannel(uint8_t  value__) noexcept;

/// @brief Field Reliable value: U8(1)
static ::kcp2k::KcpChannel const Reliable;

/// @brief Field Unreliable value: U8(2)
static ::kcp2k::KcpChannel const Unreliable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpChannel, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpChannel) == 0x1, "Size mismatch!");

} // namespace end def kcp2k
