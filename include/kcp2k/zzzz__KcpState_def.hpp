#pragma once
// IWYU pragma private; include "kcp2k/KcpState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KcpState)
// Forward declare root types
namespace kcp2k {
struct KcpState;
}
// Write type traits
MARK_VAL_T(::kcp2k::KcpState);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpState, "kcp2k", "KcpState");
// Dependencies 
namespace kcp2k {
// Is value type: true
// CS Name: kcp2k.KcpState
struct CORDL_TYPE KcpState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KcpState_Unwrapped
enum struct __KcpState_Unwrapped : int32_t {
__E_Connected = static_cast<int32_t>(0x0),
__E_Authenticated = static_cast<int32_t>(0x1),
__E_Disconnected = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KcpState_Unwrapped () const noexcept {
return static_cast<__KcpState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KcpState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KcpState(int32_t  value__) noexcept;

/// @brief Field Authenticated value: I32(1)
static ::kcp2k::KcpState const Authenticated;

/// @brief Field Connected value: I32(0)
static ::kcp2k::KcpState const Connected;

/// @brief Field Disconnected value: I32(2)
static ::kcp2k::KcpState const Disconnected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpState) == 0x4, "Size mismatch!");

} // namespace end def kcp2k
