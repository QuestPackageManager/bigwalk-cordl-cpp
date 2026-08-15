#pragma once
// IWYU pragma private; include "Rewired/Config/LogLevelFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevelFlags)
// Forward declare root types
namespace Rewired::Config {
struct LogLevelFlags;
}
// Write type traits
MARK_VAL_T(::Rewired::Config::LogLevelFlags);
DEFINE_IL2CPP_CLASS(::Rewired::Config::LogLevelFlags, "Rewired.Config", "LogLevelFlags");
// Dependencies 
namespace Rewired::Config {
// Is value type: true
// CS Name: Rewired.Config.LogLevelFlags
struct CORDL_TYPE LogLevelFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogLevelFlags_Unwrapped
enum struct __LogLevelFlags_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Info = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x4),
__E_Debug = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevelFlags_Unwrapped () const noexcept {
return static_cast<__LogLevelFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogLevelFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogLevelFlags(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(8)
static ::Rewired::Config::LogLevelFlags const Debug;

/// @brief Field Error value: I32(4)
static ::Rewired::Config::LogLevelFlags const Error;

/// @brief Field Info value: I32(1)
static ::Rewired::Config::LogLevelFlags const Info;

/// @brief Field Off value: I32(0)
static ::Rewired::Config::LogLevelFlags const Off;

/// @brief Field Warning value: I32(2)
static ::Rewired::Config::LogLevelFlags const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2722};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Config::LogLevelFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Config::LogLevelFlags) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Config
