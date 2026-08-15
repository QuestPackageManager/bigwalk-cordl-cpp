#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegistryView)
// Forward declare root types
namespace Microsoft::Win32 {
struct RegistryView;
}
// Write type traits
MARK_VAL_T(::Microsoft::Win32::RegistryView);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::RegistryView, "Microsoft.Win32", "RegistryView");
// Dependencies 
namespace Microsoft::Win32 {
// Is value type: true
// CS Name: Microsoft.Win32.RegistryView
struct CORDL_TYPE RegistryView {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RegistryView_Unwrapped
enum struct __RegistryView_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Registry64 = static_cast<int32_t>(0x100),
__E_Registry32 = static_cast<int32_t>(0x200),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RegistryView_Unwrapped () const noexcept {
return static_cast<__RegistryView_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RegistryView() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegistryView(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Microsoft::Win32::RegistryView const Default;

/// @brief Field Registry32 value: I32(512)
static ::Microsoft::Win32::RegistryView const Registry32;

/// @brief Field Registry64 value: I32(256)
static ::Microsoft::Win32::RegistryView const Registry64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{121};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Microsoft::Win32::RegistryView, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Microsoft::Win32::RegistryView) == 0x4, "Size mismatch!");

} // namespace end def Microsoft::Win32
