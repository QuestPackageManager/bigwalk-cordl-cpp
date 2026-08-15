#pragma once
// IWYU pragma private; include "GlobalNamespace/FzuUNIWJUYSIAtXnvqBwGCshyJZF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FzuUNIWJUYSIAtXnvqBwGCshyJZF)
// Forward declare root types
namespace GlobalNamespace {
struct FzuUNIWJUYSIAtXnvqBwGCshyJZF;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF, "", "FzuUNIWJUYSIAtXnvqBwGCshyJZF");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FzuUNIWJUYSIAtXnvqBwGCshyJZF
struct CORDL_TYPE FzuUNIWJUYSIAtXnvqBwGCshyJZF {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FzuUNIWJUYSIAtXnvqBwGCshyJZF_Unwrapped
enum struct __FzuUNIWJUYSIAtXnvqBwGCshyJZF_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RawInput = static_cast<int32_t>(0x1),
__E_DirectInput = static_cast<int32_t>(0x2),
__E_XInput = static_cast<int32_t>(0x3),
__E_ManualHID = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FzuUNIWJUYSIAtXnvqBwGCshyJZF_Unwrapped () const noexcept {
return static_cast<__FzuUNIWJUYSIAtXnvqBwGCshyJZF_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FzuUNIWJUYSIAtXnvqBwGCshyJZF() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FzuUNIWJUYSIAtXnvqBwGCshyJZF(int32_t  value__) noexcept;

/// @brief Field DirectInput value: I32(2)
static ::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF const DirectInput;

/// @brief Field ManualHID value: I32(4)
static ::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF const ManualHID;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF const None;

/// @brief Field RawInput value: I32(1)
static ::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF const RawInput;

/// @brief Field XInput value: I32(3)
static ::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF const XInput;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FzuUNIWJUYSIAtXnvqBwGCshyJZF) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
