#pragma once
// IWYU pragma private; include "Steamworks/FloatingGamepadTextInputDismissed_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatingGamepadTextInputDismissed_t)
// Forward declare root types
namespace Steamworks {
struct FloatingGamepadTextInputDismissed_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FloatingGamepadTextInputDismissed_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FloatingGamepadTextInputDismissed_t, "Steamworks", "FloatingGamepadTextInputDismissed_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FloatingGamepadTextInputDismissed_t
#pragma pack(push, 8)
struct CORDL_TYPE FloatingGamepadTextInputDismissed_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloatingGamepadTextInputDismissed_t() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x2e2)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Steamworks::FloatingGamepadTextInputDismissed_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks
