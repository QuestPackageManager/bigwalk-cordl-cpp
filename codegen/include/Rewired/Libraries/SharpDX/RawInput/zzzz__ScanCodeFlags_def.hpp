#pragma once
// IWYU pragma private; include "Rewired/Libraries/SharpDX/RawInput/ScanCodeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScanCodeFlags)
// Forward declare root types
namespace Rewired::Libraries::SharpDX::RawInput {
struct ScanCodeFlags;
}
// Write type traits
MARK_VAL_T(::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags);
DEFINE_IL2CPP_CLASS(::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags, "Rewired.Libraries.SharpDX.RawInput", "ScanCodeFlags");
// Dependencies 
namespace Rewired::Libraries::SharpDX::RawInput {
// Is value type: true
// CS Name: Rewired.Libraries.SharpDX.RawInput.ScanCodeFlags
struct CORDL_TYPE ScanCodeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __ScanCodeFlags_Unwrapped
enum struct __ScanCodeFlags_Unwrapped : int16_t {
__E_Make = static_cast<int16_t>(0x0),
__E_Break = static_cast<int16_t>(0x1),
__E_E0 = static_cast<int16_t>(0x2),
__E_E1 = static_cast<int16_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScanCodeFlags_Unwrapped () const noexcept {
return static_cast<__ScanCodeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScanCodeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr ScanCodeFlags(int16_t  value__) noexcept;

/// @brief Field Break value: I16(1)
static ::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags const Break;

/// @brief Field E0 value: I16(2)
static ::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags const E0;

/// @brief Field E1 value: I16(4)
static ::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags const E1;

/// @brief Field Make value: I16(0)
static ::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags const Make;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Rewired::Libraries::SharpDX::RawInput::ScanCodeFlags) == 0x2, "Size mismatch!");

} // namespace end def Rewired::Libraries::SharpDX::RawInput
