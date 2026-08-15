#pragma once
// IWYU pragma private; include "Steamworks/EUGCMatchingUGCType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUGCMatchingUGCType)
// Forward declare root types
namespace Steamworks {
struct EUGCMatchingUGCType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EUGCMatchingUGCType);
DEFINE_IL2CPP_CLASS(::Steamworks::EUGCMatchingUGCType, "Steamworks", "EUGCMatchingUGCType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EUGCMatchingUGCType
struct CORDL_TYPE EUGCMatchingUGCType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUGCMatchingUGCType_Unwrapped
enum struct __EUGCMatchingUGCType_Unwrapped : int32_t {
__E_k_EUGCMatchingUGCType_Items = static_cast<int32_t>(0x0),
__E_k_EUGCMatchingUGCType_Items_Mtx = static_cast<int32_t>(0x1),
__E_k_EUGCMatchingUGCType_Items_ReadyToUse = static_cast<int32_t>(0x2),
__E_k_EUGCMatchingUGCType_Collections = static_cast<int32_t>(0x3),
__E_k_EUGCMatchingUGCType_Artwork = static_cast<int32_t>(0x4),
__E_k_EUGCMatchingUGCType_Videos = static_cast<int32_t>(0x5),
__E_k_EUGCMatchingUGCType_Screenshots = static_cast<int32_t>(0x6),
__E_k_EUGCMatchingUGCType_AllGuides = static_cast<int32_t>(0x7),
__E_k_EUGCMatchingUGCType_WebGuides = static_cast<int32_t>(0x8),
__E_k_EUGCMatchingUGCType_IntegratedGuides = static_cast<int32_t>(0x9),
__E_k_EUGCMatchingUGCType_UsableInGame = static_cast<int32_t>(0xa),
__E_k_EUGCMatchingUGCType_ControllerBindings = static_cast<int32_t>(0xb),
__E_k_EUGCMatchingUGCType_GameManagedItems = static_cast<int32_t>(0xc),
__E_k_EUGCMatchingUGCType_All = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUGCMatchingUGCType_Unwrapped () const noexcept {
return static_cast<__EUGCMatchingUGCType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUGCMatchingUGCType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUGCMatchingUGCType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16289};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EUGCMatchingUGCType_All value: I32(-1)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_All;

/// @brief Field k_EUGCMatchingUGCType_AllGuides value: I32(7)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_AllGuides;

/// @brief Field k_EUGCMatchingUGCType_Artwork value: I32(4)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_Artwork;

/// @brief Field k_EUGCMatchingUGCType_Collections value: I32(3)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_Collections;

/// @brief Field k_EUGCMatchingUGCType_ControllerBindings value: I32(11)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_ControllerBindings;

/// @brief Field k_EUGCMatchingUGCType_GameManagedItems value: I32(12)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_GameManagedItems;

/// @brief Field k_EUGCMatchingUGCType_IntegratedGuides value: I32(9)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_IntegratedGuides;

/// @brief Field k_EUGCMatchingUGCType_Items value: I32(0)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_Items;

/// @brief Field k_EUGCMatchingUGCType_Items_Mtx value: I32(1)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_Items_Mtx;

/// @brief Field k_EUGCMatchingUGCType_Items_ReadyToUse value: I32(2)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_Items_ReadyToUse;

/// @brief Field k_EUGCMatchingUGCType_Screenshots value: I32(6)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_Screenshots;

/// @brief Field k_EUGCMatchingUGCType_UsableInGame value: I32(10)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_UsableInGame;

/// @brief Field k_EUGCMatchingUGCType_Videos value: I32(5)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_Videos;

/// @brief Field k_EUGCMatchingUGCType_WebGuides value: I32(8)
static ::Steamworks::EUGCMatchingUGCType const k_EUGCMatchingUGCType_WebGuides;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EUGCMatchingUGCType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EUGCMatchingUGCType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
