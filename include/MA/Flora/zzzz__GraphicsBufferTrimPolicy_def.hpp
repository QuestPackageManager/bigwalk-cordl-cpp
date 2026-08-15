#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferTrimPolicy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferTrimPolicy)
// Forward declare root types
namespace MA::Flora {
struct GraphicsBufferTrimPolicy;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsBufferTrimPolicy);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferTrimPolicy, "MA.Flora", "GraphicsBufferTrimPolicy");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferTrimPolicy
struct CORDL_TYPE GraphicsBufferTrimPolicy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBufferTrimPolicy_Unwrapped
enum struct __GraphicsBufferTrimPolicy_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Half = static_cast<int32_t>(0x1),
__E_Quarter = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBufferTrimPolicy_Unwrapped () const noexcept {
return static_cast<__GraphicsBufferTrimPolicy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferTrimPolicy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferTrimPolicy(int32_t  value__) noexcept;

/// @brief Field Half value: I32(1)
static ::MA::Flora::GraphicsBufferTrimPolicy const Half;

/// @brief Field None value: I32(0)
static ::MA::Flora::GraphicsBufferTrimPolicy const None;

/// @brief Field Quarter value: I32(2)
static ::MA::Flora::GraphicsBufferTrimPolicy const Quarter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13328};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferTrimPolicy, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferTrimPolicy) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
