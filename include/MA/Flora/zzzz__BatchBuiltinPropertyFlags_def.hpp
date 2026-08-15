#pragma once
// IWYU pragma private; include "MA/Flora/BatchBuiltinPropertyFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchBuiltinPropertyFlags)
// Forward declare root types
namespace MA::Flora {
struct BatchBuiltinPropertyFlags;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchBuiltinPropertyFlags);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchBuiltinPropertyFlags, "MA.Flora", "BatchBuiltinPropertyFlags");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchBuiltinPropertyFlags
struct CORDL_TYPE BatchBuiltinPropertyFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BatchBuiltinPropertyFlags_Unwrapped
enum struct __BatchBuiltinPropertyFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LocalToWorld = static_cast<int32_t>(0x1),
__E_PrevLocalToWorld = static_cast<int32_t>(0x2),
__E_RandomID = static_cast<int32_t>(0x4),
__E_VariationColor = static_cast<int32_t>(0x8),
__E_LightmapST = static_cast<int32_t>(0x10),
__E_ShCoefficients = static_cast<int32_t>(0x20),
__E_EntityId = static_cast<int32_t>(0x40),
__E_Required = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BatchBuiltinPropertyFlags_Unwrapped () const noexcept {
return static_cast<__BatchBuiltinPropertyFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BatchBuiltinPropertyFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BatchBuiltinPropertyFlags(int32_t  value__) noexcept;

/// @brief Field EntityId value: I32(64)
static ::MA::Flora::BatchBuiltinPropertyFlags const EntityId;

/// @brief Field LightmapST value: I32(16)
static ::MA::Flora::BatchBuiltinPropertyFlags const LightmapST;

/// @brief Field LocalToWorld value: I32(1)
static ::MA::Flora::BatchBuiltinPropertyFlags const LocalToWorld;

/// @brief Field None value: I32(0)
static ::MA::Flora::BatchBuiltinPropertyFlags const None;

/// @brief Field PrevLocalToWorld value: I32(2)
static ::MA::Flora::BatchBuiltinPropertyFlags const PrevLocalToWorld;

/// @brief Field RandomID value: I32(4)
static ::MA::Flora::BatchBuiltinPropertyFlags const RandomID;

/// @brief Field Required value: I32(1)
static ::MA::Flora::BatchBuiltinPropertyFlags const Required;

/// @brief Field ShCoefficients value: I32(32)
static ::MA::Flora::BatchBuiltinPropertyFlags const ShCoefficients;

/// @brief Field VariationColor value: I32(8)
static ::MA::Flora::BatchBuiltinPropertyFlags const VariationColor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12861};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchBuiltinPropertyFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchBuiltinPropertyFlags) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
