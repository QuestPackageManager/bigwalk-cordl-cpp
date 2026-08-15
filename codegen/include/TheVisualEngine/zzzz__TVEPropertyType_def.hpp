#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEPropertyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEPropertyType)
// Forward declare root types
namespace TheVisualEngine {
struct TVEPropertyType;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVEPropertyType);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEPropertyType, "TheVisualEngine", "TVEPropertyType");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVEPropertyType
struct CORDL_TYPE TVEPropertyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVEPropertyType_Unwrapped
enum struct __TVEPropertyType_Unwrapped : int32_t {
__E_Texture = static_cast<int32_t>(0x0),
__E_Vector = static_cast<int32_t>(0x1),
__E_Value = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVEPropertyType_Unwrapped () const noexcept {
return static_cast<__TVEPropertyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVEPropertyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVEPropertyType(int32_t  value__) noexcept;

/// @brief Field Texture value: I32(0)
static ::TheVisualEngine::TVEPropertyType const Texture;

/// @brief Field Value value: I32(2)
static ::TheVisualEngine::TVEPropertyType const Value;

/// @brief Field Vector value: I32(1)
static ::TheVisualEngine::TVEPropertyType const Vector;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19582};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEPropertyType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEPropertyType) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
