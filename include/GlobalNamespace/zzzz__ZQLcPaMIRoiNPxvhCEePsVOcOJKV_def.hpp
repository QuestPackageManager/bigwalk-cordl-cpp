#pragma once
// IWYU pragma private; include "GlobalNamespace/ZQLcPaMIRoiNPxvhCEePsVOcOJKV.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZQLcPaMIRoiNPxvhCEePsVOcOJKV)
// Forward declare root types
namespace GlobalNamespace {
struct ZQLcPaMIRoiNPxvhCEePsVOcOJKV;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV, "", "ZQLcPaMIRoiNPxvhCEePsVOcOJKV");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ZQLcPaMIRoiNPxvhCEePsVOcOJKV
struct CORDL_TYPE ZQLcPaMIRoiNPxvhCEePsVOcOJKV {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZQLcPaMIRoiNPxvhCEePsVOcOJKV_Unwrapped
enum struct __ZQLcPaMIRoiNPxvhCEePsVOcOJKV_Unwrapped : int32_t {
__E_KeyDown = static_cast<int32_t>(0x0),
__E_KeyUp = static_cast<int32_t>(0x1),
__E_Character = static_cast<int32_t>(0x2),
__E_DeadCharacter = static_cast<int32_t>(0x3),
__E_SystemKeyDown = static_cast<int32_t>(0x4),
__E_SystemKeyUp = static_cast<int32_t>(0x5),
__E_SystemCharacter = static_cast<int32_t>(0x6),
__E_SystemDeadCharacter = static_cast<int32_t>(0x7),
__E_UnicodeCharacter = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZQLcPaMIRoiNPxvhCEePsVOcOJKV_Unwrapped () const noexcept {
return static_cast<__ZQLcPaMIRoiNPxvhCEePsVOcOJKV_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZQLcPaMIRoiNPxvhCEePsVOcOJKV() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ZQLcPaMIRoiNPxvhCEePsVOcOJKV(int32_t  value__) noexcept;

/// @brief Field Character value: I32(2)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const Character;

/// @brief Field DeadCharacter value: I32(3)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const DeadCharacter;

/// @brief Field KeyDown value: I32(0)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const KeyDown;

/// @brief Field KeyUp value: I32(1)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const KeyUp;

/// @brief Field SystemCharacter value: I32(6)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const SystemCharacter;

/// @brief Field SystemDeadCharacter value: I32(7)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const SystemDeadCharacter;

/// @brief Field SystemKeyDown value: I32(4)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const SystemKeyDown;

/// @brief Field SystemKeyUp value: I32(5)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const SystemKeyUp;

/// @brief Field UnicodeCharacter value: I32(8)
static ::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV const UnicodeCharacter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZQLcPaMIRoiNPxvhCEePsVOcOJKV) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
