#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamInputType)
// Forward declare root types
namespace Steamworks {
struct ESteamInputType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamInputType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamInputType, "Steamworks", "ESteamInputType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamInputType
struct CORDL_TYPE ESteamInputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamInputType_Unwrapped
enum struct __ESteamInputType_Unwrapped : int32_t {
__E_k_ESteamInputType_Unknown = static_cast<int32_t>(0x0),
__E_k_ESteamInputType_SteamController = static_cast<int32_t>(0x1),
__E_k_ESteamInputType_XBox360Controller = static_cast<int32_t>(0x2),
__E_k_ESteamInputType_XBoxOneController = static_cast<int32_t>(0x3),
__E_k_ESteamInputType_GenericGamepad = static_cast<int32_t>(0x4),
__E_k_ESteamInputType_PS4Controller = static_cast<int32_t>(0x5),
__E_k_ESteamInputType_AppleMFiController = static_cast<int32_t>(0x6),
__E_k_ESteamInputType_AndroidController = static_cast<int32_t>(0x7),
__E_k_ESteamInputType_SwitchJoyConPair = static_cast<int32_t>(0x8),
__E_k_ESteamInputType_SwitchJoyConSingle = static_cast<int32_t>(0x9),
__E_k_ESteamInputType_SwitchProController = static_cast<int32_t>(0xa),
__E_k_ESteamInputType_MobileTouch = static_cast<int32_t>(0xb),
__E_k_ESteamInputType_PS3Controller = static_cast<int32_t>(0xc),
__E_k_ESteamInputType_PS5Controller = static_cast<int32_t>(0xd),
__E_k_ESteamInputType_SteamDeckController = static_cast<int32_t>(0xe),
__E_k_ESteamInputType_Count = static_cast<int32_t>(0xf),
__E_k_ESteamInputType_MaximumPossibleValue = static_cast<int32_t>(0xff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamInputType_Unwrapped () const noexcept {
return static_cast<__ESteamInputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamInputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamInputType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamInputType_AndroidController value: I32(7)
static ::Steamworks::ESteamInputType const k_ESteamInputType_AndroidController;

/// @brief Field k_ESteamInputType_AppleMFiController value: I32(6)
static ::Steamworks::ESteamInputType const k_ESteamInputType_AppleMFiController;

/// @brief Field k_ESteamInputType_Count value: I32(15)
static ::Steamworks::ESteamInputType const k_ESteamInputType_Count;

/// @brief Field k_ESteamInputType_GenericGamepad value: I32(4)
static ::Steamworks::ESteamInputType const k_ESteamInputType_GenericGamepad;

/// @brief Field k_ESteamInputType_MaximumPossibleValue value: I32(255)
static ::Steamworks::ESteamInputType const k_ESteamInputType_MaximumPossibleValue;

/// @brief Field k_ESteamInputType_MobileTouch value: I32(11)
static ::Steamworks::ESteamInputType const k_ESteamInputType_MobileTouch;

/// @brief Field k_ESteamInputType_PS3Controller value: I32(12)
static ::Steamworks::ESteamInputType const k_ESteamInputType_PS3Controller;

/// @brief Field k_ESteamInputType_PS4Controller value: I32(5)
static ::Steamworks::ESteamInputType const k_ESteamInputType_PS4Controller;

/// @brief Field k_ESteamInputType_PS5Controller value: I32(13)
static ::Steamworks::ESteamInputType const k_ESteamInputType_PS5Controller;

/// @brief Field k_ESteamInputType_SteamController value: I32(1)
static ::Steamworks::ESteamInputType const k_ESteamInputType_SteamController;

/// @brief Field k_ESteamInputType_SteamDeckController value: I32(14)
static ::Steamworks::ESteamInputType const k_ESteamInputType_SteamDeckController;

/// @brief Field k_ESteamInputType_SwitchJoyConPair value: I32(8)
static ::Steamworks::ESteamInputType const k_ESteamInputType_SwitchJoyConPair;

/// @brief Field k_ESteamInputType_SwitchJoyConSingle value: I32(9)
static ::Steamworks::ESteamInputType const k_ESteamInputType_SwitchJoyConSingle;

/// @brief Field k_ESteamInputType_SwitchProController value: I32(10)
static ::Steamworks::ESteamInputType const k_ESteamInputType_SwitchProController;

/// @brief Field k_ESteamInputType_Unknown value: I32(0)
static ::Steamworks::ESteamInputType const k_ESteamInputType_Unknown;

/// @brief Field k_ESteamInputType_XBox360Controller value: I32(2)
static ::Steamworks::ESteamInputType const k_ESteamInputType_XBox360Controller;

/// @brief Field k_ESteamInputType_XBoxOneController value: I32(3)
static ::Steamworks::ESteamInputType const k_ESteamInputType_XBoxOneController;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamInputType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamInputType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
