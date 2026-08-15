#pragma once
// IWYU pragma private; include "Rewired/Platforms/ScriptingAPILevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptingAPILevel)
// Forward declare root types
namespace Rewired::Platforms {
struct ScriptingAPILevel;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::ScriptingAPILevel);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::ScriptingAPILevel, "Rewired.Platforms", "ScriptingAPILevel");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.ScriptingAPILevel
struct CORDL_TYPE ScriptingAPILevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScriptingAPILevel_Unwrapped
enum struct __ScriptingAPILevel_Unwrapped : int32_t {
__E_Net20 = static_cast<int32_t>(0x0),
__E_Net20Subset = static_cast<int32_t>(0x1),
__E_Net46 = static_cast<int32_t>(0x2),
__E_NetStandard20 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScriptingAPILevel_Unwrapped () const noexcept {
return static_cast<__ScriptingAPILevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScriptingAPILevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScriptingAPILevel(int32_t  value__) noexcept;

/// @brief Field Net20 value: I32(0)
static ::Rewired::Platforms::ScriptingAPILevel const Net20;

/// @brief Field Net20Subset value: I32(1)
static ::Rewired::Platforms::ScriptingAPILevel const Net20Subset;

/// @brief Field Net46 value: I32(2)
static ::Rewired::Platforms::ScriptingAPILevel const Net46;

/// @brief Field NetStandard20 value: I32(3)
static ::Rewired::Platforms::ScriptingAPILevel const NetStandard20;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::ScriptingAPILevel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::ScriptingAPILevel) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
