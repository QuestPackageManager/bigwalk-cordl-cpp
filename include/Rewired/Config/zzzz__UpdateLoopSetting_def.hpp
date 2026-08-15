#pragma once
// IWYU pragma private; include "Rewired/Config/UpdateLoopSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateLoopSetting)
// Forward declare root types
namespace Rewired::Config {
struct UpdateLoopSetting;
}
// Write type traits
MARK_VAL_T(::Rewired::Config::UpdateLoopSetting);
DEFINE_IL2CPP_CLASS(::Rewired::Config::UpdateLoopSetting, "Rewired.Config", "UpdateLoopSetting");
// Dependencies 
namespace Rewired::Config {
// Is value type: true
// CS Name: Rewired.Config.UpdateLoopSetting
struct CORDL_TYPE UpdateLoopSetting {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UpdateLoopSetting_Unwrapped
enum struct __UpdateLoopSetting_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Update = static_cast<int32_t>(0x1),
__E_FixedUpdate = static_cast<int32_t>(0x2),
__E_OnGUI = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UpdateLoopSetting_Unwrapped () const noexcept {
return static_cast<__UpdateLoopSetting_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UpdateLoopSetting() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UpdateLoopSetting(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(2)
static ::Rewired::Config::UpdateLoopSetting const FixedUpdate;

/// @brief Field None value: I32(0)
static ::Rewired::Config::UpdateLoopSetting const None;

/// @brief Field OnGUI value: I32(4)
static ::Rewired::Config::UpdateLoopSetting const OnGUI;

/// @brief Field Update value: I32(1)
static ::Rewired::Config::UpdateLoopSetting const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2717};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Config::UpdateLoopSetting, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Config::UpdateLoopSetting) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Config
