#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEElementType)
// Forward declare root types
namespace TheVisualEngine {
struct TVEElementType;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVEElementType);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementType, "TheVisualEngine", "TVEElementType");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVEElementType
struct CORDL_TYPE TVEElementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVEElementType_Unwrapped
enum struct __TVEElementType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Coat = static_cast<int32_t>(0xa),
__E_Paint = static_cast<int32_t>(0x14),
__E_Atmo = static_cast<int32_t>(0x1e),
__E_Glow = static_cast<int32_t>(0x28),
__E_Form = static_cast<int32_t>(0x32),
__E_Flow = static_cast<int32_t>(0x3c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVEElementType_Unwrapped () const noexcept {
return static_cast<__TVEElementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVEElementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVEElementType(int32_t  value__) noexcept;

/// @brief Field Atmo value: I32(30)
static ::TheVisualEngine::TVEElementType const Atmo;

/// @brief Field Coat value: I32(10)
static ::TheVisualEngine::TVEElementType const Coat;

/// @brief Field Flow value: I32(60)
static ::TheVisualEngine::TVEElementType const Flow;

/// @brief Field Form value: I32(50)
static ::TheVisualEngine::TVEElementType const Form;

/// @brief Field Glow value: I32(40)
static ::TheVisualEngine::TVEElementType const Glow;

/// @brief Field None value: I32(0)
static ::TheVisualEngine::TVEElementType const None;

/// @brief Field Paint value: I32(20)
static ::TheVisualEngine::TVEElementType const Paint;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementType) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
