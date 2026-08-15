#pragma once
// IWYU pragma private; include "Telepathy/EventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventType)
// Forward declare root types
namespace Telepathy {
struct EventType;
}
// Write type traits
MARK_VAL_T(::Telepathy::EventType);
DEFINE_IL2CPP_CLASS(::Telepathy::EventType, "Telepathy", "EventType");
// Dependencies 
namespace Telepathy {
// Is value type: true
// CS Name: Telepathy.EventType
struct CORDL_TYPE EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EventType_Unwrapped
enum struct __EventType_Unwrapped : int32_t {
__E_Connected = static_cast<int32_t>(0x0),
__E_Data = static_cast<int32_t>(0x1),
__E_Disconnected = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventType_Unwrapped () const noexcept {
return static_cast<__EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventType(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(0)
static ::Telepathy::EventType const Connected;

/// @brief Field Data value: I32(1)
static ::Telepathy::EventType const Data;

/// @brief Field Disconnected value: I32(2)
static ::Telepathy::EventType const Disconnected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::EventType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Telepathy::EventType) == 0x4, "Size mismatch!");

} // namespace end def Telepathy
