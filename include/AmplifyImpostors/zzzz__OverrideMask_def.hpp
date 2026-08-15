#pragma once
// IWYU pragma private; include "AmplifyImpostors/OverrideMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OverrideMask)
// Forward declare root types
namespace AmplifyImpostors {
struct OverrideMask;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::OverrideMask);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::OverrideMask, "AmplifyImpostors", "OverrideMask");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.OverrideMask
struct CORDL_TYPE OverrideMask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OverrideMask_Unwrapped
enum struct __OverrideMask_Unwrapped : int32_t {
__E_OutputToggle = static_cast<int32_t>(0x1),
__E_NameSuffix = static_cast<int32_t>(0x2),
__E_RelativeScale = static_cast<int32_t>(0x4),
__E_ColorSpace = static_cast<int32_t>(0x8),
__E_QualityCompression = static_cast<int32_t>(0x10),
__E_FileFormat = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OverrideMask_Unwrapped () const noexcept {
return static_cast<__OverrideMask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OverrideMask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OverrideMask(int32_t  value__) noexcept;

/// @brief Field ColorSpace value: I32(8)
static ::AmplifyImpostors::OverrideMask const ColorSpace;

/// @brief Field FileFormat value: I32(32)
static ::AmplifyImpostors::OverrideMask const FileFormat;

/// @brief Field NameSuffix value: I32(2)
static ::AmplifyImpostors::OverrideMask const NameSuffix;

/// @brief Field OutputToggle value: I32(1)
static ::AmplifyImpostors::OverrideMask const OutputToggle;

/// @brief Field QualityCompression value: I32(16)
static ::AmplifyImpostors::OverrideMask const QualityCompression;

/// @brief Field RelativeScale value: I32(4)
static ::AmplifyImpostors::OverrideMask const RelativeScale;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::OverrideMask, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::OverrideMask) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
