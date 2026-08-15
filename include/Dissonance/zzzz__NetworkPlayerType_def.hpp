#pragma once
// IWYU pragma private; include "Dissonance/NetworkPlayerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPlayerType)
// Forward declare root types
namespace Dissonance {
struct NetworkPlayerType;
}
// Write type traits
MARK_VAL_T(::Dissonance::NetworkPlayerType);
DEFINE_IL2CPP_CLASS(::Dissonance::NetworkPlayerType, "Dissonance", "NetworkPlayerType");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.NetworkPlayerType
struct CORDL_TYPE NetworkPlayerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkPlayerType_Unwrapped
enum struct __NetworkPlayerType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_Remote = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkPlayerType_Unwrapped () const noexcept {
return static_cast<__NetworkPlayerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPlayerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkPlayerType(int32_t  value__) noexcept;

/// @brief Field Local value: I32(1)
static ::Dissonance::NetworkPlayerType const Local;

/// @brief Field Remote value: I32(2)
static ::Dissonance::NetworkPlayerType const Remote;

/// @brief Field Unknown value: I32(0)
static ::Dissonance::NetworkPlayerType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::NetworkPlayerType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::NetworkPlayerType) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
