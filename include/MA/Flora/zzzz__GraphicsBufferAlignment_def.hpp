#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferAlignment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferAlignment)
// Forward declare root types
namespace MA::Flora {
struct GraphicsBufferAlignment;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsBufferAlignment);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferAlignment, "MA.Flora", "GraphicsBufferAlignment");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferAlignment
struct CORDL_TYPE GraphicsBufferAlignment {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBufferAlignment_Unwrapped
enum struct __GraphicsBufferAlignment_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Page = static_cast<int32_t>(0x1),
__E_PowerOfTwo = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBufferAlignment_Unwrapped () const noexcept {
return static_cast<__GraphicsBufferAlignment_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferAlignment() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferAlignment(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::MA::Flora::GraphicsBufferAlignment const None;

/// @brief Field Page value: I32(1)
static ::MA::Flora::GraphicsBufferAlignment const Page;

/// @brief Field PowerOfTwo value: I32(2)
static ::MA::Flora::GraphicsBufferAlignment const PowerOfTwo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferAlignment, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferAlignment) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
