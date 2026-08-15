#pragma once
// IWYU pragma private; include "Dissonance/Networking/NetworkMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMode)
// Forward declare root types
namespace Dissonance::Networking {
struct NetworkMode;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::NetworkMode);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::NetworkMode, "Dissonance.Networking", "NetworkMode");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.NetworkMode
struct CORDL_TYPE NetworkMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkMode_Unwrapped
enum struct __NetworkMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Host = static_cast<int32_t>(0x1),
__E_Client = static_cast<int32_t>(0x2),
__E_DedicatedServer = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkMode_Unwrapped () const noexcept {
return static_cast<__NetworkMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkMode(int32_t  value__) noexcept;

/// @brief Field Client value: I32(2)
static ::Dissonance::Networking::NetworkMode const Client;

/// @brief Field DedicatedServer value: I32(3)
static ::Dissonance::Networking::NetworkMode const DedicatedServer;

/// @brief Field Host value: I32(1)
static ::Dissonance::Networking::NetworkMode const Host;

/// @brief Field None value: I32(0)
static ::Dissonance::Networking::NetworkMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::NetworkMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::NetworkMode) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Networking
