#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopFileType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EWorkshopFileType)
// Forward declare root types
namespace Steamworks {
struct EWorkshopFileType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EWorkshopFileType);
DEFINE_IL2CPP_CLASS(::Steamworks::EWorkshopFileType, "Steamworks", "EWorkshopFileType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EWorkshopFileType
struct CORDL_TYPE EWorkshopFileType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EWorkshopFileType_Unwrapped
enum struct __EWorkshopFileType_Unwrapped : int32_t {
__E_k_EWorkshopFileTypeFirst = static_cast<int32_t>(0x0),
__E_k_EWorkshopFileTypeCommunity = static_cast<int32_t>(0x0),
__E_k_EWorkshopFileTypeMicrotransaction = static_cast<int32_t>(0x1),
__E_k_EWorkshopFileTypeCollection = static_cast<int32_t>(0x2),
__E_k_EWorkshopFileTypeArt = static_cast<int32_t>(0x3),
__E_k_EWorkshopFileTypeVideo = static_cast<int32_t>(0x4),
__E_k_EWorkshopFileTypeScreenshot = static_cast<int32_t>(0x5),
__E_k_EWorkshopFileTypeGame = static_cast<int32_t>(0x6),
__E_k_EWorkshopFileTypeSoftware = static_cast<int32_t>(0x7),
__E_k_EWorkshopFileTypeConcept = static_cast<int32_t>(0x8),
__E_k_EWorkshopFileTypeWebGuide = static_cast<int32_t>(0x9),
__E_k_EWorkshopFileTypeIntegratedGuide = static_cast<int32_t>(0xa),
__E_k_EWorkshopFileTypeMerch = static_cast<int32_t>(0xb),
__E_k_EWorkshopFileTypeControllerBinding = static_cast<int32_t>(0xc),
__E_k_EWorkshopFileTypeSteamworksAccessInvite = static_cast<int32_t>(0xd),
__E_k_EWorkshopFileTypeSteamVideo = static_cast<int32_t>(0xe),
__E_k_EWorkshopFileTypeGameManagedItem = static_cast<int32_t>(0xf),
__E_k_EWorkshopFileTypeMax = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EWorkshopFileType_Unwrapped () const noexcept {
return static_cast<__EWorkshopFileType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EWorkshopFileType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EWorkshopFileType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EWorkshopFileTypeArt value: I32(3)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeArt;

/// @brief Field k_EWorkshopFileTypeCollection value: I32(2)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeCollection;

/// @brief Field k_EWorkshopFileTypeCommunity value: I32(0)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeCommunity;

/// @brief Field k_EWorkshopFileTypeConcept value: I32(8)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeConcept;

/// @brief Field k_EWorkshopFileTypeControllerBinding value: I32(12)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeControllerBinding;

/// @brief Field k_EWorkshopFileTypeFirst value: I32(0)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeFirst;

/// @brief Field k_EWorkshopFileTypeGame value: I32(6)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeGame;

/// @brief Field k_EWorkshopFileTypeGameManagedItem value: I32(15)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeGameManagedItem;

/// @brief Field k_EWorkshopFileTypeIntegratedGuide value: I32(10)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeIntegratedGuide;

/// @brief Field k_EWorkshopFileTypeMax value: I32(16)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeMax;

/// @brief Field k_EWorkshopFileTypeMerch value: I32(11)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeMerch;

/// @brief Field k_EWorkshopFileTypeMicrotransaction value: I32(1)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeMicrotransaction;

/// @brief Field k_EWorkshopFileTypeScreenshot value: I32(5)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeScreenshot;

/// @brief Field k_EWorkshopFileTypeSoftware value: I32(7)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeSoftware;

/// @brief Field k_EWorkshopFileTypeSteamVideo value: I32(14)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeSteamVideo;

/// @brief Field k_EWorkshopFileTypeSteamworksAccessInvite value: I32(13)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeSteamworksAccessInvite;

/// @brief Field k_EWorkshopFileTypeVideo value: I32(4)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeVideo;

/// @brief Field k_EWorkshopFileTypeWebGuide value: I32(9)
static ::Steamworks::EWorkshopFileType const k_EWorkshopFileTypeWebGuide;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EWorkshopFileType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EWorkshopFileType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
