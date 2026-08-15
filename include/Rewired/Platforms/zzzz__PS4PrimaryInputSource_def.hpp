#pragma once
// IWYU pragma private; include "Rewired/Platforms/PS4PrimaryInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS4PrimaryInputSource)
// Forward declare root types
namespace Rewired::Platforms {
struct PS4PrimaryInputSource;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::PS4PrimaryInputSource);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::PS4PrimaryInputSource, "Rewired.Platforms", "PS4PrimaryInputSource");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.PS4PrimaryInputSource
struct CORDL_TYPE PS4PrimaryInputSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PS4PrimaryInputSource_Unwrapped
enum struct __PS4PrimaryInputSource_Unwrapped : int32_t {
__E_PS4Input = static_cast<int32_t>(0x0),
__E_Unity = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PS4PrimaryInputSource_Unwrapped () const noexcept {
return static_cast<__PS4PrimaryInputSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PS4PrimaryInputSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PS4PrimaryInputSource(int32_t  value__) noexcept;

/// @brief Field PS4Input value: I32(0)
static ::Rewired::Platforms::PS4PrimaryInputSource const PS4Input;

/// @brief Field Unity value: I32(100)
static ::Rewired::Platforms::PS4PrimaryInputSource const Unity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2264};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::PS4PrimaryInputSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::PS4PrimaryInputSource) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
