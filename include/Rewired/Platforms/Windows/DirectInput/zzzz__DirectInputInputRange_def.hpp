#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/DirectInput/DirectInputInputRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectInputInputRange)
// Forward declare root types
namespace Rewired::Platforms::Windows::DirectInput {
struct DirectInputInputRange;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange, "Rewired.Platforms.Windows.DirectInput", "DirectInputInputRange");
// Dependencies 
namespace Rewired::Platforms::Windows::DirectInput {
// Is value type: true
// CS Name: Rewired.Platforms.Windows.DirectInput.DirectInputInputRange
struct CORDL_TYPE DirectInputInputRange {
public:
// Declarations
/// @brief Method .ctor, addr 0x1804a47e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

// Ctor Parameters []
// @brief default ctor
constexpr DirectInputInputRange() ;

// Ctor Parameters [CppParam { name: "Minimum", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Maximum", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectInputInputRange(int32_t  Minimum, int32_t  Maximum) noexcept;

/// @brief Field NoMaximum offset 0xffffffff size 0x4
static constexpr int32_t  NoMaximum{static_cast<int32_t>(0x7fffffff)};

/// @brief Field NoMinimum offset 0xffffffff size 0x4
static constexpr int32_t  NoMinimum{static_cast<int32_t>(0x80000000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5978};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Minimum, offset: 0x0, size: 0x4, def value: None
 int32_t  Minimum;

/// @brief Field Maximum, offset: 0x4, size: 0x4, def value: None
 int32_t  Maximum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange, Minimum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange, Maximum) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange) == 0x8, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::DirectInput
