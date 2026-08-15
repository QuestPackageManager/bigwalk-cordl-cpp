#pragma once
// IWYU pragma private; include "Steamworks/ERegisterActivationCodeResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ERegisterActivationCodeResult)
// Forward declare root types
namespace Steamworks {
struct ERegisterActivationCodeResult;
}
// Write type traits
MARK_VAL_T(::Steamworks::ERegisterActivationCodeResult);
DEFINE_IL2CPP_CLASS(::Steamworks::ERegisterActivationCodeResult, "Steamworks", "ERegisterActivationCodeResult");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ERegisterActivationCodeResult
struct CORDL_TYPE ERegisterActivationCodeResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ERegisterActivationCodeResult_Unwrapped
enum struct __ERegisterActivationCodeResult_Unwrapped : int32_t {
__E_k_ERegisterActivationCodeResultOK = static_cast<int32_t>(0x0),
__E_k_ERegisterActivationCodeResultFail = static_cast<int32_t>(0x1),
__E_k_ERegisterActivationCodeResultAlreadyRegistered = static_cast<int32_t>(0x2),
__E_k_ERegisterActivationCodeResultTimeout = static_cast<int32_t>(0x3),
__E_k_ERegisterActivationCodeAlreadyOwned = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ERegisterActivationCodeResult_Unwrapped () const noexcept {
return static_cast<__ERegisterActivationCodeResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ERegisterActivationCodeResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ERegisterActivationCodeResult(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16239};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ERegisterActivationCodeAlreadyOwned value: I32(4)
static ::Steamworks::ERegisterActivationCodeResult const k_ERegisterActivationCodeAlreadyOwned;

/// @brief Field k_ERegisterActivationCodeResultAlreadyRegistered value: I32(2)
static ::Steamworks::ERegisterActivationCodeResult const k_ERegisterActivationCodeResultAlreadyRegistered;

/// @brief Field k_ERegisterActivationCodeResultFail value: I32(1)
static ::Steamworks::ERegisterActivationCodeResult const k_ERegisterActivationCodeResultFail;

/// @brief Field k_ERegisterActivationCodeResultOK value: I32(0)
static ::Steamworks::ERegisterActivationCodeResult const k_ERegisterActivationCodeResultOK;

/// @brief Field k_ERegisterActivationCodeResultTimeout value: I32(3)
static ::Steamworks::ERegisterActivationCodeResult const k_ERegisterActivationCodeResultTimeout;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ERegisterActivationCodeResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ERegisterActivationCodeResult) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
