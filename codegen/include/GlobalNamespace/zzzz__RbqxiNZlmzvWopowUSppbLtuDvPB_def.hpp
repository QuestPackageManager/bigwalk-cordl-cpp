#pragma once
// IWYU pragma private; include "GlobalNamespace/RbqxiNZlmzvWopowUSppbLtuDvPB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RbqxiNZlmzvWopowUSppbLtuDvPB)
// Forward declare root types
namespace GlobalNamespace {
struct RbqxiNZlmzvWopowUSppbLtuDvPB;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RbqxiNZlmzvWopowUSppbLtuDvPB);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RbqxiNZlmzvWopowUSppbLtuDvPB, "", "RbqxiNZlmzvWopowUSppbLtuDvPB");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RbqxiNZlmzvWopowUSppbLtuDvPB
struct CORDL_TYPE RbqxiNZlmzvWopowUSppbLtuDvPB {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RbqxiNZlmzvWopowUSppbLtuDvPB_Unwrapped
enum struct __RbqxiNZlmzvWopowUSppbLtuDvPB_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_XInput = static_cast<int32_t>(0x1),
__E_WindowsGamingInput = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RbqxiNZlmzvWopowUSppbLtuDvPB_Unwrapped () const noexcept {
return static_cast<__RbqxiNZlmzvWopowUSppbLtuDvPB_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RbqxiNZlmzvWopowUSppbLtuDvPB() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RbqxiNZlmzvWopowUSppbLtuDvPB(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RbqxiNZlmzvWopowUSppbLtuDvPB const None;

/// @brief Field WindowsGamingInput value: I32(2)
static ::GlobalNamespace::RbqxiNZlmzvWopowUSppbLtuDvPB const WindowsGamingInput;

/// @brief Field XInput value: I32(1)
static ::GlobalNamespace::RbqxiNZlmzvWopowUSppbLtuDvPB const XInput;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RbqxiNZlmzvWopowUSppbLtuDvPB, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RbqxiNZlmzvWopowUSppbLtuDvPB) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
