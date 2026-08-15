#pragma once
// IWYU pragma private; include "Steamworks/EUGCReadAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUGCReadAction)
// Forward declare root types
namespace Steamworks {
struct EUGCReadAction;
}
// Write type traits
MARK_VAL_T(::Steamworks::EUGCReadAction);
DEFINE_IL2CPP_CLASS(::Steamworks::EUGCReadAction, "Steamworks", "EUGCReadAction");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EUGCReadAction
struct CORDL_TYPE EUGCReadAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUGCReadAction_Unwrapped
enum struct __EUGCReadAction_Unwrapped : int32_t {
__E_k_EUGCRead_ContinueReadingUntilFinished = static_cast<int32_t>(0x0),
__E_k_EUGCRead_ContinueReading = static_cast<int32_t>(0x1),
__E_k_EUGCRead_Close = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUGCReadAction_Unwrapped () const noexcept {
return static_cast<__EUGCReadAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUGCReadAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUGCReadAction(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EUGCRead_Close value: I32(2)
static ::Steamworks::EUGCReadAction const k_EUGCRead_Close;

/// @brief Field k_EUGCRead_ContinueReading value: I32(1)
static ::Steamworks::EUGCReadAction const k_EUGCRead_ContinueReading;

/// @brief Field k_EUGCRead_ContinueReadingUntilFinished value: I32(0)
static ::Steamworks::EUGCReadAction const k_EUGCRead_ContinueReadingUntilFinished;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EUGCReadAction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EUGCReadAction) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
