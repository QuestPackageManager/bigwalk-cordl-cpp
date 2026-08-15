#pragma once
// IWYU pragma private; include "GlobalNamespace/LormFeXWoKZQtYJLyYOdBOOLGim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LormFeXWoKZQtYJLyYOdBOOLGim)
// Forward declare root types
namespace GlobalNamespace {
struct LormFeXWoKZQtYJLyYOdBOOLGim;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim, "", "LormFeXWoKZQtYJLyYOdBOOLGim");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LormFeXWoKZQtYJLyYOdBOOLGim
struct CORDL_TYPE LormFeXWoKZQtYJLyYOdBOOLGim {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LormFeXWoKZQtYJLyYOdBOOLGim_Unwrapped
enum struct __LormFeXWoKZQtYJLyYOdBOOLGim_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x1),
__E_Stopped = static_cast<int32_t>(0x2),
__E_Paused = static_cast<int32_t>(0x4),
__E_ActuatorsOn = static_cast<int32_t>(0x10),
__E_ActuatorsOff = static_cast<int32_t>(0x20),
__E_PowerOn = static_cast<int32_t>(0x40),
__E_PowerOff = static_cast<int32_t>(0x80),
__E_SafetySwitchOn = static_cast<int32_t>(0x100),
__E_SafetySwitchOff = static_cast<int32_t>(0x200),
__E_UserSafetySwitchOn = static_cast<int32_t>(0x400),
__E_UserSafetySwitchOff = static_cast<int32_t>(0x800),
__E_DeviceLost = static_cast<int32_t>(0x80000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LormFeXWoKZQtYJLyYOdBOOLGim_Unwrapped () const noexcept {
return static_cast<__LormFeXWoKZQtYJLyYOdBOOLGim_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LormFeXWoKZQtYJLyYOdBOOLGim() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LormFeXWoKZQtYJLyYOdBOOLGim(int32_t  value__) noexcept;

/// @brief Field ActuatorsOff value: I32(32)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const ActuatorsOff;

/// @brief Field ActuatorsOn value: I32(16)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const ActuatorsOn;

/// @brief Field DeviceLost value: I32(-2147483648)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const DeviceLost;

/// @brief Field Empty value: I32(1)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const Empty;

/// @brief Field Paused value: I32(4)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const Paused;

/// @brief Field PowerOff value: I32(128)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const PowerOff;

/// @brief Field PowerOn value: I32(64)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const PowerOn;

/// @brief Field SafetySwitchOff value: I32(512)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const SafetySwitchOff;

/// @brief Field SafetySwitchOn value: I32(256)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const SafetySwitchOn;

/// @brief Field Stopped value: I32(2)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const Stopped;

/// @brief Field UserSafetySwitchOff value: I32(2048)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const UserSafetySwitchOff;

/// @brief Field UserSafetySwitchOn value: I32(1024)
static ::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim const UserSafetySwitchOn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LormFeXWoKZQtYJLyYOdBOOLGim) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
