#pragma once
// IWYU pragma private; include "Dissonance/ChannelPriority.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelPriority)
// Forward declare root types
namespace Dissonance {
struct ChannelPriority;
}
// Write type traits
MARK_VAL_T(::Dissonance::ChannelPriority);
DEFINE_IL2CPP_CLASS(::Dissonance::ChannelPriority, "Dissonance", "ChannelPriority");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.ChannelPriority
struct CORDL_TYPE ChannelPriority {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChannelPriority_Unwrapped
enum struct __ChannelPriority_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xfffffffe),
__E_Low = static_cast<int32_t>(0xffffffff),
__E_Default = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChannelPriority_Unwrapped () const noexcept {
return static_cast<__ChannelPriority_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChannelPriority() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChannelPriority(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Dissonance::ChannelPriority const Default;

/// @brief Field High value: I32(2)
static ::Dissonance::ChannelPriority const High;

/// @brief Field Low value: I32(-1)
static ::Dissonance::ChannelPriority const Low;

/// @brief Field Medium value: I32(1)
static ::Dissonance::ChannelPriority const Medium;

/// @brief Field None value: I32(-2)
static ::Dissonance::ChannelPriority const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16781};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::ChannelPriority, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::ChannelPriority) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
