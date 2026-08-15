#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryValueOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegistryValueOptions)
// Forward declare root types
namespace Microsoft::Win32 {
struct RegistryValueOptions;
}
// Write type traits
MARK_VAL_T(::Microsoft::Win32::RegistryValueOptions);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::RegistryValueOptions, "Microsoft.Win32", "RegistryValueOptions");
// Dependencies 
namespace Microsoft::Win32 {
// Is value type: true
// CS Name: Microsoft.Win32.RegistryValueOptions
struct CORDL_TYPE RegistryValueOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RegistryValueOptions_Unwrapped
enum struct __RegistryValueOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DoNotExpandEnvironmentNames = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RegistryValueOptions_Unwrapped () const noexcept {
return static_cast<__RegistryValueOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RegistryValueOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegistryValueOptions(int32_t  value__) noexcept;

/// @brief Field DoNotExpandEnvironmentNames value: I32(1)
static ::Microsoft::Win32::RegistryValueOptions const DoNotExpandEnvironmentNames;

/// @brief Field None value: I32(0)
static ::Microsoft::Win32::RegistryValueOptions const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Microsoft::Win32::RegistryValueOptions, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Microsoft::Win32::RegistryValueOptions) == 0x4, "Size mismatch!");

} // namespace end def Microsoft::Win32
