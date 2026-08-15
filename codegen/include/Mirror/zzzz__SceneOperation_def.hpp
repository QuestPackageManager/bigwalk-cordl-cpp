#pragma once
// IWYU pragma private; include "Mirror/SceneOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneOperation)
// Forward declare root types
namespace Mirror {
struct SceneOperation;
}
// Write type traits
MARK_VAL_T(::Mirror::SceneOperation);
DEFINE_IL2CPP_CLASS(::Mirror::SceneOperation, "Mirror", "SceneOperation");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.SceneOperation
struct CORDL_TYPE SceneOperation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __SceneOperation_Unwrapped
enum struct __SceneOperation_Unwrapped : uint8_t {
__E_Normal = static_cast<uint8_t>(0x0u),
__E_LoadAdditive = static_cast<uint8_t>(0x1u),
__E_UnloadAdditive = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SceneOperation_Unwrapped () const noexcept {
return static_cast<__SceneOperation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SceneOperation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SceneOperation(uint8_t  value__) noexcept;

/// @brief Field LoadAdditive value: U8(1)
static ::Mirror::SceneOperation const LoadAdditive;

/// @brief Field Normal value: U8(0)
static ::Mirror::SceneOperation const Normal;

/// @brief Field UnloadAdditive value: U8(2)
static ::Mirror::SceneOperation const UnloadAdditive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SceneOperation, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Mirror::SceneOperation) == 0x1, "Size mismatch!");

} // namespace end def Mirror
