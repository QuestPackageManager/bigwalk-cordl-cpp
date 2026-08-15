#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferGrowPolicy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferGrowPolicy)
// Forward declare root types
namespace MA::Flora {
struct GraphicsBufferGrowPolicy;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsBufferGrowPolicy);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferGrowPolicy, "MA.Flora", "GraphicsBufferGrowPolicy");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferGrowPolicy
struct CORDL_TYPE GraphicsBufferGrowPolicy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBufferGrowPolicy_Unwrapped
enum struct __GraphicsBufferGrowPolicy_Unwrapped : int32_t {
__E_Exact = static_cast<int32_t>(0x0),
__E_WithSlack = static_cast<int32_t>(0x1),
__E_Double = static_cast<int32_t>(0x2),
__E_NextPowerOfTwo = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBufferGrowPolicy_Unwrapped () const noexcept {
return static_cast<__GraphicsBufferGrowPolicy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferGrowPolicy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferGrowPolicy(int32_t  value__) noexcept;

/// @brief Field Double value: I32(2)
static ::MA::Flora::GraphicsBufferGrowPolicy const Double;

/// @brief Field Exact value: I32(0)
static ::MA::Flora::GraphicsBufferGrowPolicy const Exact;

/// @brief Field NextPowerOfTwo value: I32(3)
static ::MA::Flora::GraphicsBufferGrowPolicy const NextPowerOfTwo;

/// @brief Field WithSlack value: I32(1)
static ::MA::Flora::GraphicsBufferGrowPolicy const WithSlack;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferGrowPolicy, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferGrowPolicy) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
