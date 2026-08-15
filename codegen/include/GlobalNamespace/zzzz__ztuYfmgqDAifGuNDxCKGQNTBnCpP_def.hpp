#pragma once
// IWYU pragma private; include "GlobalNamespace/ztuYfmgqDAifGuNDxCKGQNTBnCpP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ztuYfmgqDAifGuNDxCKGQNTBnCpP)
// Forward declare root types
namespace GlobalNamespace {
struct ztuYfmgqDAifGuNDxCKGQNTBnCpP;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP, "", "ztuYfmgqDAifGuNDxCKGQNTBnCpP");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ztuYfmgqDAifGuNDxCKGQNTBnCpP
struct CORDL_TYPE ztuYfmgqDAifGuNDxCKGQNTBnCpP {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ztuYfmgqDAifGuNDxCKGQNTBnCpP_Unwrapped
enum struct __ztuYfmgqDAifGuNDxCKGQNTBnCpP_Unwrapped : int32_t {
__E_Joystick = static_cast<int32_t>(0x0),
__E_Keyboard = static_cast<int32_t>(0x1),
__E_Mouse = static_cast<int32_t>(0x2),
__E_CustomController = static_cast<int32_t>(0x3),
__E_ControllerTemplate = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ztuYfmgqDAifGuNDxCKGQNTBnCpP_Unwrapped () const noexcept {
return static_cast<__ztuYfmgqDAifGuNDxCKGQNTBnCpP_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ztuYfmgqDAifGuNDxCKGQNTBnCpP() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ztuYfmgqDAifGuNDxCKGQNTBnCpP(int32_t  value__) noexcept;

/// @brief Field ControllerTemplate value: I32(4)
static ::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP const ControllerTemplate;

/// @brief Field CustomController value: I32(3)
static ::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP const CustomController;

/// @brief Field Joystick value: I32(0)
static ::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP const Joystick;

/// @brief Field Keyboard value: I32(1)
static ::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP const Keyboard;

/// @brief Field Mouse value: I32(2)
static ::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP const Mouse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ztuYfmgqDAifGuNDxCKGQNTBnCpP) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
