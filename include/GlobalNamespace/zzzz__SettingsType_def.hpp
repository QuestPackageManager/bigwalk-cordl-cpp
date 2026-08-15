#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsType)
// Forward declare root types
namespace GlobalNamespace {
struct SettingsType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SettingsType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsType, "", "SettingsType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsType
struct CORDL_TYPE SettingsType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SettingsType_Unwrapped
enum struct __SettingsType_Unwrapped : int32_t {
__E_NotSet = static_cast<int32_t>(0x0),
__E_Language = static_cast<int32_t>(0xb),
__E_Crosshair = static_cast<int32_t>(0xc),
__E_Hud = static_cast<int32_t>(0xd),
__E_CrossPlay = static_cast<int32_t>(0xe),
__E_MotionOverlay = static_cast<int32_t>(0xf),
__E_Volume = static_cast<int32_t>(0x15),
__E_Microphone = static_cast<int32_t>(0x16),
__E_PushToTalk = static_cast<int32_t>(0x18),
__E_NoiseSuppression = static_cast<int32_t>(0x19),
__E_MicSensitivity = static_cast<int32_t>(0x1a),
__E_Resolution = static_cast<int32_t>(0x1f),
__E_Fullscreen = static_cast<int32_t>(0x20),
__E_Quality = static_cast<int32_t>(0x21),
__E_Aspect = static_cast<int32_t>(0x22),
__E_Fov = static_cast<int32_t>(0x23),
__E_VSync = static_cast<int32_t>(0x24),
__E_RenderScale = static_cast<int32_t>(0x25),
__E_ToggleCrouch = static_cast<int32_t>(0x29),
__E_ToggleArms = static_cast<int32_t>(0x2a),
__E_InvertLook = static_cast<int32_t>(0x2b),
__E_LookSpeed = static_cast<int32_t>(0x2c),
__E_dummyPlayerCountHanger = static_cast<int32_t>(0x5b),
__E_dummySkipAidHanger = static_cast<int32_t>(0x5c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SettingsType_Unwrapped () const noexcept {
return static_cast<__SettingsType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SettingsType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SettingsType(int32_t  value__) noexcept;

/// @brief Field Aspect value: I32(34)
static ::GlobalNamespace::SettingsType const Aspect;

/// @brief Field CrossPlay value: I32(14)
static ::GlobalNamespace::SettingsType const CrossPlay;

/// @brief Field Crosshair value: I32(12)
static ::GlobalNamespace::SettingsType const Crosshair;

/// @brief Field Fov value: I32(35)
static ::GlobalNamespace::SettingsType const Fov;

/// @brief Field Fullscreen value: I32(32)
static ::GlobalNamespace::SettingsType const Fullscreen;

/// @brief Field Hud value: I32(13)
static ::GlobalNamespace::SettingsType const Hud;

/// @brief Field InvertLook value: I32(43)
static ::GlobalNamespace::SettingsType const InvertLook;

/// @brief Field Language value: I32(11)
static ::GlobalNamespace::SettingsType const Language;

/// @brief Field LookSpeed value: I32(44)
static ::GlobalNamespace::SettingsType const LookSpeed;

/// @brief Field MicSensitivity value: I32(26)
static ::GlobalNamespace::SettingsType const MicSensitivity;

/// @brief Field Microphone value: I32(22)
static ::GlobalNamespace::SettingsType const Microphone;

/// @brief Field MotionOverlay value: I32(15)
static ::GlobalNamespace::SettingsType const MotionOverlay;

/// @brief Field NoiseSuppression value: I32(25)
static ::GlobalNamespace::SettingsType const NoiseSuppression;

/// @brief Field NotSet value: I32(0)
static ::GlobalNamespace::SettingsType const NotSet;

/// @brief Field PushToTalk value: I32(24)
static ::GlobalNamespace::SettingsType const PushToTalk;

/// @brief Field Quality value: I32(33)
static ::GlobalNamespace::SettingsType const Quality;

/// @brief Field RenderScale value: I32(37)
static ::GlobalNamespace::SettingsType const RenderScale;

/// @brief Field Resolution value: I32(31)
static ::GlobalNamespace::SettingsType const Resolution;

/// @brief Field ToggleArms value: I32(42)
static ::GlobalNamespace::SettingsType const ToggleArms;

/// @brief Field ToggleCrouch value: I32(41)
static ::GlobalNamespace::SettingsType const ToggleCrouch;

/// @brief Field VSync value: I32(36)
static ::GlobalNamespace::SettingsType const VSync;

/// @brief Field Volume value: I32(21)
static ::GlobalNamespace::SettingsType const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field dummyPlayerCountHanger value: I32(91)
static ::GlobalNamespace::SettingsType const dummyPlayerCountHanger;

/// @brief Field dummySkipAidHanger value: I32(92)
static ::GlobalNamespace::SettingsType const dummySkipAidHanger;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
