#pragma once
// IWYU pragma private; include "Steamworks/EFailureType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EFailureType)
// Forward declare root types
namespace Steamworks {
struct EFailureType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EFailureType);
DEFINE_IL2CPP_CLASS(::Steamworks::EFailureType, "Steamworks", "EFailureType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EFailureType
struct CORDL_TYPE EFailureType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EFailureType_Unwrapped
enum struct __EFailureType_Unwrapped : int32_t {
__E_k_EFailureFlushedCallbackQueue = static_cast<int32_t>(0x0),
__E_k_EFailurePipeFail = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EFailureType_Unwrapped () const noexcept {
return static_cast<__EFailureType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EFailureType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EFailureType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16297};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EFailureFlushedCallbackQueue value: I32(0)
static ::Steamworks::EFailureType const k_EFailureFlushedCallbackQueue;

/// @brief Field k_EFailurePipeFail value: I32(1)
static ::Steamworks::EFailureType const k_EFailurePipeFail;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EFailureType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EFailureType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
