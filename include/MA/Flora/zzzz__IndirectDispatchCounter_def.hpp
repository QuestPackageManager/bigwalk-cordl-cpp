#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDispatchCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectDispatchCounter)
// Forward declare root types
namespace MA::Flora {
struct IndirectDispatchCounter;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectDispatchCounter);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectDispatchCounter, "MA.Flora", "IndirectDispatchCounter");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectDispatchCounter
struct CORDL_TYPE IndirectDispatchCounter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IndirectDispatchCounter_Unwrapped
enum struct __IndirectDispatchCounter_Unwrapped : int32_t {
__E_VisibleDraws = static_cast<int32_t>(0x0),
__E_VisibleInstances = static_cast<int32_t>(0x1),
__E_OccludedInstances = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IndirectDispatchCounter_Unwrapped () const noexcept {
return static_cast<__IndirectDispatchCounter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IndirectDispatchCounter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IndirectDispatchCounter(int32_t  value__) noexcept;

/// @brief Field Count value: I32(3)
static ::MA::Flora::IndirectDispatchCounter const Count;

/// @brief Field OccludedInstances value: I32(2)
static ::MA::Flora::IndirectDispatchCounter const OccludedInstances;

/// @brief Field VisibleDraws value: I32(0)
static ::MA::Flora::IndirectDispatchCounter const VisibleDraws;

/// @brief Field VisibleInstances value: I32(1)
static ::MA::Flora::IndirectDispatchCounter const VisibleInstances;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13194};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectDispatchCounter, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectDispatchCounter) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
