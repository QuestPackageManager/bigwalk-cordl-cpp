#pragma once
// IWYU pragma private; include "Steamworks/GamepadTextInputDismissed_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GamepadTextInputDismissed_t)
// Forward declare root types
namespace Steamworks {
struct GamepadTextInputDismissed_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GamepadTextInputDismissed_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GamepadTextInputDismissed_t, "Steamworks", "GamepadTextInputDismissed_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GamepadTextInputDismissed_t
#pragma pack(push, 8)
struct CORDL_TYPE GamepadTextInputDismissed_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GamepadTextInputDismissed_t() ;

// Ctor Parameters [CppParam { name: "m_bSubmitted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_unSubmittedText", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GamepadTextInputDismissed_t(bool  m_bSubmitted, uint32_t  m_unSubmittedText) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16232};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x2ca)};

/// @brief Field m_bSubmitted, offset: 0x0, size: 0x1, def value: None
 bool  m_bSubmitted;

/// @brief Field m_unSubmittedText, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_unSubmittedText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GamepadTextInputDismissed_t, m_bSubmitted) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GamepadTextInputDismissed_t, m_unSubmittedText) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GamepadTextInputDismissed_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
