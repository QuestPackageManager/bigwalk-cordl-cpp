#pragma once
// IWYU pragma private; include "Steamworks/EHTMLKeyModifiers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EHTMLKeyModifiers)
// Forward declare root types
namespace Steamworks {
struct EHTMLKeyModifiers;
}
// Write type traits
MARK_VAL_T(::Steamworks::EHTMLKeyModifiers);
DEFINE_IL2CPP_CLASS(::Steamworks::EHTMLKeyModifiers, "Steamworks", "EHTMLKeyModifiers");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EHTMLKeyModifiers
struct CORDL_TYPE EHTMLKeyModifiers {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EHTMLKeyModifiers_Unwrapped
enum struct __EHTMLKeyModifiers_Unwrapped : int32_t {
__E_k_eHTMLKeyModifier_None = static_cast<int32_t>(0x0),
__E_k_eHTMLKeyModifier_AltDown = static_cast<int32_t>(0x1),
__E_k_eHTMLKeyModifier_CtrlDown = static_cast<int32_t>(0x2),
__E_k_eHTMLKeyModifier_ShiftDown = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EHTMLKeyModifiers_Unwrapped () const noexcept {
return static_cast<__EHTMLKeyModifiers_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EHTMLKeyModifiers() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EHTMLKeyModifiers(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_eHTMLKeyModifier_AltDown value: I32(1)
static ::Steamworks::EHTMLKeyModifiers const k_eHTMLKeyModifier_AltDown;

/// @brief Field k_eHTMLKeyModifier_CtrlDown value: I32(2)
static ::Steamworks::EHTMLKeyModifiers const k_eHTMLKeyModifier_CtrlDown;

/// @brief Field k_eHTMLKeyModifier_None value: I32(0)
static ::Steamworks::EHTMLKeyModifiers const k_eHTMLKeyModifier_None;

/// @brief Field k_eHTMLKeyModifier_ShiftDown value: I32(4)
static ::Steamworks::EHTMLKeyModifiers const k_eHTMLKeyModifier_ShiftDown;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EHTMLKeyModifiers, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EHTMLKeyModifiers) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
