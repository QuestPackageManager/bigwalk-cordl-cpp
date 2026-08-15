#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopFileAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EWorkshopFileAction)
// Forward declare root types
namespace Steamworks {
struct EWorkshopFileAction;
}
// Write type traits
MARK_VAL_T(::Steamworks::EWorkshopFileAction);
DEFINE_IL2CPP_CLASS(::Steamworks::EWorkshopFileAction, "Steamworks", "EWorkshopFileAction");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EWorkshopFileAction
struct CORDL_TYPE EWorkshopFileAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EWorkshopFileAction_Unwrapped
enum struct __EWorkshopFileAction_Unwrapped : int32_t {
__E_k_EWorkshopFileActionPlayed = static_cast<int32_t>(0x0),
__E_k_EWorkshopFileActionCompleted = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EWorkshopFileAction_Unwrapped () const noexcept {
return static_cast<__EWorkshopFileAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EWorkshopFileAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EWorkshopFileAction(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EWorkshopFileActionCompleted value: I32(1)
static ::Steamworks::EWorkshopFileAction const k_EWorkshopFileActionCompleted;

/// @brief Field k_EWorkshopFileActionPlayed value: I32(0)
static ::Steamworks::EWorkshopFileAction const k_EWorkshopFileActionPlayed;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EWorkshopFileAction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EWorkshopFileAction) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
