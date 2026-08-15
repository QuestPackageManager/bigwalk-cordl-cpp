#pragma once
// IWYU pragma private; include "Steamworks/EGCResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGCResults)
// Forward declare root types
namespace Steamworks {
struct EGCResults;
}
// Write type traits
MARK_VAL_T(::Steamworks::EGCResults);
DEFINE_IL2CPP_CLASS(::Steamworks::EGCResults, "Steamworks", "EGCResults");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EGCResults
struct CORDL_TYPE EGCResults {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EGCResults_Unwrapped
enum struct __EGCResults_Unwrapped : int32_t {
__E_k_EGCResultOK = static_cast<int32_t>(0x0),
__E_k_EGCResultNoMessage = static_cast<int32_t>(0x1),
__E_k_EGCResultBufferTooSmall = static_cast<int32_t>(0x2),
__E_k_EGCResultNotLoggedOn = static_cast<int32_t>(0x3),
__E_k_EGCResultInvalidMessage = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EGCResults_Unwrapped () const noexcept {
return static_cast<__EGCResults_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EGCResults() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EGCResults(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16247};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EGCResultBufferTooSmall value: I32(2)
static ::Steamworks::EGCResults const k_EGCResultBufferTooSmall;

/// @brief Field k_EGCResultInvalidMessage value: I32(4)
static ::Steamworks::EGCResults const k_EGCResultInvalidMessage;

/// @brief Field k_EGCResultNoMessage value: I32(1)
static ::Steamworks::EGCResults const k_EGCResultNoMessage;

/// @brief Field k_EGCResultNotLoggedOn value: I32(3)
static ::Steamworks::EGCResults const k_EGCResultNotLoggedOn;

/// @brief Field k_EGCResultOK value: I32(0)
static ::Steamworks::EGCResults const k_EGCResultOK;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EGCResults, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EGCResults) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
