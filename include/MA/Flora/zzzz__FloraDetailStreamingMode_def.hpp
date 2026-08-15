#pragma once
// IWYU pragma private; include "MA/Flora/FloraDetailStreamingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraDetailStreamingMode)
// Forward declare root types
namespace MA::Flora {
struct FloraDetailStreamingMode;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraDetailStreamingMode);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraDetailStreamingMode, "MA.Flora", "FloraDetailStreamingMode");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraDetailStreamingMode
struct CORDL_TYPE FloraDetailStreamingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraDetailStreamingMode_Unwrapped
enum struct __FloraDetailStreamingMode_Unwrapped : int32_t {
__E_Immediate = static_cast<int32_t>(0x0),
__E_Streamed = static_cast<int32_t>(0x1),
__E_Custom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraDetailStreamingMode_Unwrapped () const noexcept {
return static_cast<__FloraDetailStreamingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraDetailStreamingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraDetailStreamingMode(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(3)
static ::MA::Flora::FloraDetailStreamingMode const Custom;

/// @brief Field Immediate value: I32(0)
static ::MA::Flora::FloraDetailStreamingMode const Immediate;

/// @brief Field Streamed value: I32(1)
static ::MA::Flora::FloraDetailStreamingMode const Streamed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraDetailStreamingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraDetailStreamingMode) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
