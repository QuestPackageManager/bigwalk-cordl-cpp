#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferStoreType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferStoreType)
// Forward declare root types
namespace MA::Flora {
struct GraphicsBufferStoreType;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsBufferStoreType);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferStoreType, "MA.Flora", "GraphicsBufferStoreType");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferStoreType
struct CORDL_TYPE GraphicsBufferStoreType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBufferStoreType_Unwrapped
enum struct __GraphicsBufferStoreType_Unwrapped : int32_t {
__E_Persistent = static_cast<int32_t>(0x0),
__E_Pooled = static_cast<int32_t>(0x1),
__E_Transient = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBufferStoreType_Unwrapped () const noexcept {
return static_cast<__GraphicsBufferStoreType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferStoreType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferStoreType(int32_t  value__) noexcept;

/// @brief Field Persistent value: I32(0)
static ::MA::Flora::GraphicsBufferStoreType const Persistent;

/// @brief Field Pooled value: I32(1)
static ::MA::Flora::GraphicsBufferStoreType const Pooled;

/// @brief Field Transient value: I32(2)
static ::MA::Flora::GraphicsBufferStoreType const Transient;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferStoreType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferStoreType) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
