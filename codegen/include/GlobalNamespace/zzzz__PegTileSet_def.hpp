#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PegTileSet)
// Forward declare root types
namespace GlobalNamespace {
struct PegTileSet;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PegTileSet);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileSet, "", "PegTileSet");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PegTileSet
struct CORDL_TYPE PegTileSet {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PegTileSet_Unwrapped
enum struct __PegTileSet_Unwrapped : int32_t {
__E_PegTileSetA = static_cast<int32_t>(0xa),
__E_PegTileSetB = static_cast<int32_t>(0x14),
__E_PegTileSetC = static_cast<int32_t>(0x1e),
__E_PegTileSetD = static_cast<int32_t>(0x28),
__E_PegTileSetLargeA = static_cast<int32_t>(0x6e),
__E_PegTileSetCamo = static_cast<int32_t>(0x51),
__E_PegTileSetScout = static_cast<int32_t>(0x32),
__E_PegTileSetCircle = static_cast<int32_t>(0x3c),
__E_PegTileSetPontiff = static_cast<int32_t>(0x46),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PegTileSet_Unwrapped () const noexcept {
return static_cast<__PegTileSet_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PegTileSet() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PegTileSet(int32_t  value__) noexcept;

/// @brief Field PegTileSetA value: I32(10)
static ::GlobalNamespace::PegTileSet const PegTileSetA;

/// @brief Field PegTileSetB value: I32(20)
static ::GlobalNamespace::PegTileSet const PegTileSetB;

/// @brief Field PegTileSetC value: I32(30)
static ::GlobalNamespace::PegTileSet const PegTileSetC;

/// @brief Field PegTileSetCamo value: I32(81)
static ::GlobalNamespace::PegTileSet const PegTileSetCamo;

/// @brief Field PegTileSetCircle value: I32(60)
static ::GlobalNamespace::PegTileSet const PegTileSetCircle;

/// @brief Field PegTileSetD value: I32(40)
static ::GlobalNamespace::PegTileSet const PegTileSetD;

/// @brief Field PegTileSetLargeA value: I32(110)
static ::GlobalNamespace::PegTileSet const PegTileSetLargeA;

/// @brief Field PegTileSetPontiff value: I32(70)
static ::GlobalNamespace::PegTileSet const PegTileSetPontiff;

/// @brief Field PegTileSetScout value: I32(50)
static ::GlobalNamespace::PegTileSet const PegTileSetScout;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5095};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileSet, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileSet) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
