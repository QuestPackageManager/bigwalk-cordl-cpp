#pragma once
// IWYU pragma private; include "Shipmate/Porting/VirtualKeyboardShowType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualKeyboardShowType)
// Forward declare root types
namespace Shipmate::Porting {
struct VirtualKeyboardShowType;
}
// Write type traits
MARK_VAL_T(::Shipmate::Porting::VirtualKeyboardShowType);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::VirtualKeyboardShowType, "Shipmate.Porting", "VirtualKeyboardShowType");
// Dependencies 
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.VirtualKeyboardShowType
struct CORDL_TYPE VirtualKeyboardShowType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VirtualKeyboardShowType_Unwrapped
enum struct __VirtualKeyboardShowType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Password = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VirtualKeyboardShowType_Unwrapped () const noexcept {
return static_cast<__VirtualKeyboardShowType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VirtualKeyboardShowType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VirtualKeyboardShowType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Shipmate::Porting::VirtualKeyboardShowType const Default;

/// @brief Field Password value: I32(1)
static ::Shipmate::Porting::VirtualKeyboardShowType const Password;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::VirtualKeyboardShowType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::VirtualKeyboardShowType) == 0x4, "Size mismatch!");

} // namespace end def Shipmate::Porting
