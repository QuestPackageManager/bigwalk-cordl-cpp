#pragma once
// IWYU pragma private; include "Rewired/Utils/UI/PositionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PositionType)
// Forward declare root types
namespace Rewired::Utils::UI {
struct PositionType;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::UI::PositionType);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::UI::PositionType, "Rewired.Utils.UI", "PositionType");
// Dependencies 
namespace Rewired::Utils::UI {
// Is value type: true
// CS Name: Rewired.Utils.UI.PositionType
struct CORDL_TYPE PositionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PositionType_Unwrapped
enum struct __PositionType_Unwrapped : int32_t {
__E_World = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_Anchored = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PositionType_Unwrapped () const noexcept {
return static_cast<__PositionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PositionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PositionType(int32_t  value__) noexcept;

/// @brief Field Anchored value: I32(2)
static ::Rewired::Utils::UI::PositionType const Anchored;

/// @brief Field Local value: I32(1)
static ::Rewired::Utils::UI::PositionType const Local;

/// @brief Field World value: I32(0)
static ::Rewired::Utils::UI::PositionType const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::UI::PositionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::UI::PositionType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::UI
