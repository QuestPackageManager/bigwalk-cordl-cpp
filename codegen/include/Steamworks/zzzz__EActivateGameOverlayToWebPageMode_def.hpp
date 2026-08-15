#pragma once
// IWYU pragma private; include "Steamworks/EActivateGameOverlayToWebPageMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EActivateGameOverlayToWebPageMode)
// Forward declare root types
namespace Steamworks {
struct EActivateGameOverlayToWebPageMode;
}
// Write type traits
MARK_VAL_T(::Steamworks::EActivateGameOverlayToWebPageMode);
DEFINE_IL2CPP_CLASS(::Steamworks::EActivateGameOverlayToWebPageMode, "Steamworks", "EActivateGameOverlayToWebPageMode");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EActivateGameOverlayToWebPageMode
struct CORDL_TYPE EActivateGameOverlayToWebPageMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EActivateGameOverlayToWebPageMode_Unwrapped
enum struct __EActivateGameOverlayToWebPageMode_Unwrapped : int32_t {
__E_k_EActivateGameOverlayToWebPageMode_Default = static_cast<int32_t>(0x0),
__E_k_EActivateGameOverlayToWebPageMode_Modal = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EActivateGameOverlayToWebPageMode_Unwrapped () const noexcept {
return static_cast<__EActivateGameOverlayToWebPageMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EActivateGameOverlayToWebPageMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EActivateGameOverlayToWebPageMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16245};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EActivateGameOverlayToWebPageMode_Default value: I32(0)
static ::Steamworks::EActivateGameOverlayToWebPageMode const k_EActivateGameOverlayToWebPageMode_Default;

/// @brief Field k_EActivateGameOverlayToWebPageMode_Modal value: I32(1)
static ::Steamworks::EActivateGameOverlayToWebPageMode const k_EActivateGameOverlayToWebPageMode_Modal;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EActivateGameOverlayToWebPageMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EActivateGameOverlayToWebPageMode) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
