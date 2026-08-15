#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace Epic::OnlineServices::Logging {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Logging::LogLevel);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Logging::LogLevel, "Epic.OnlineServices.Logging", "LogLevel");
// Dependencies 
namespace Epic::OnlineServices::Logging {
// Is value type: true
// CS Name: Epic.OnlineServices.Logging.LogLevel
struct CORDL_TYPE LogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogLevel_Unwrapped
enum struct __LogLevel_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Fatal = static_cast<int32_t>(0x64),
__E_Error = static_cast<int32_t>(0xc8),
__E_Warning = static_cast<int32_t>(0x12c),
__E_Info = static_cast<int32_t>(0x190),
__E_Verbose = static_cast<int32_t>(0x1f4),
__E_VeryVerbose = static_cast<int32_t>(0x258),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevel_Unwrapped () const noexcept {
return static_cast<__LogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogLevel(int32_t  value__) noexcept;

/// @brief Field Error value: I32(200)
static ::Epic::OnlineServices::Logging::LogLevel const Error;

/// @brief Field Fatal value: I32(100)
static ::Epic::OnlineServices::Logging::LogLevel const Fatal;

/// @brief Field Info value: I32(400)
static ::Epic::OnlineServices::Logging::LogLevel const Info;

/// @brief Field Off value: I32(0)
static ::Epic::OnlineServices::Logging::LogLevel const Off;

/// @brief Field Verbose value: I32(500)
static ::Epic::OnlineServices::Logging::LogLevel const Verbose;

/// @brief Field VeryVerbose value: I32(600)
static ::Epic::OnlineServices::Logging::LogLevel const VeryVerbose;

/// @brief Field Warning value: I32(300)
static ::Epic::OnlineServices::Logging::LogLevel const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Logging::LogLevel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Logging::LogLevel) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Logging
