#pragma once
// IWYU pragma private; include "Dissonance/ChannelType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelType)
// Forward declare root types
namespace Dissonance {
struct ChannelType;
}
// Write type traits
MARK_VAL_T(::Dissonance::ChannelType);
DEFINE_IL2CPP_CLASS(::Dissonance::ChannelType, "Dissonance", "ChannelType");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.ChannelType
struct CORDL_TYPE ChannelType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChannelType_Unwrapped
enum struct __ChannelType_Unwrapped : int32_t {
__E_Room = static_cast<int32_t>(0x0),
__E_Player = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChannelType_Unwrapped () const noexcept {
return static_cast<__ChannelType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChannelType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChannelType(int32_t  value__) noexcept;

/// @brief Field Player value: I32(1)
static ::Dissonance::ChannelType const Player;

/// @brief Field Room value: I32(0)
static ::Dissonance::ChannelType const Room;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::ChannelType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::ChannelType) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
