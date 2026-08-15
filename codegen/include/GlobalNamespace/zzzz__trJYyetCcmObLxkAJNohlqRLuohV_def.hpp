#pragma once
// IWYU pragma private; include "GlobalNamespace/trJYyetCcmObLxkAJNohlqRLuohV.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(trJYyetCcmObLxkAJNohlqRLuohV)
// Forward declare root types
namespace GlobalNamespace {
struct trJYyetCcmObLxkAJNohlqRLuohV;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV, "", "trJYyetCcmObLxkAJNohlqRLuohV");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: trJYyetCcmObLxkAJNohlqRLuohV
struct CORDL_TYPE trJYyetCcmObLxkAJNohlqRLuohV {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __trJYyetCcmObLxkAJNohlqRLuohV_Unwrapped
enum struct __trJYyetCcmObLxkAJNohlqRLuohV_Unwrapped : int32_t {
__E_Other = static_cast<int32_t>(0x0),
__E_ForegroundOnlyMedia = static_cast<int32_t>(0x1),
__E_BackgroundCapableMedia = static_cast<int32_t>(0x2),
__E_Communications = static_cast<int32_t>(0x3),
__E_Alerts = static_cast<int32_t>(0x4),
__E_SoundEffects = static_cast<int32_t>(0x5),
__E_GameEffects = static_cast<int32_t>(0x6),
__E_GameMedia = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __trJYyetCcmObLxkAJNohlqRLuohV_Unwrapped () const noexcept {
return static_cast<__trJYyetCcmObLxkAJNohlqRLuohV_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr trJYyetCcmObLxkAJNohlqRLuohV() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr trJYyetCcmObLxkAJNohlqRLuohV(int32_t  value__) noexcept;

/// @brief Field Alerts value: I32(4)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const Alerts;

/// @brief Field BackgroundCapableMedia value: I32(2)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const BackgroundCapableMedia;

/// @brief Field Communications value: I32(3)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const Communications;

/// @brief Field ForegroundOnlyMedia value: I32(1)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const ForegroundOnlyMedia;

/// @brief Field GameEffects value: I32(6)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const GameEffects;

/// @brief Field GameMedia value: I32(7)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const GameMedia;

/// @brief Field Other value: I32(0)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const Other;

/// @brief Field SoundEffects value: I32(5)
static ::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV const SoundEffects;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::trJYyetCcmObLxkAJNohlqRLuohV) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
