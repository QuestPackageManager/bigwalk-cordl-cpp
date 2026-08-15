#pragma once
// IWYU pragma private; include "Steamworks/EUniverse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUniverse)
// Forward declare root types
namespace Steamworks {
struct EUniverse;
}
// Write type traits
MARK_VAL_T(::Steamworks::EUniverse);
DEFINE_IL2CPP_CLASS(::Steamworks::EUniverse, "Steamworks", "EUniverse");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EUniverse
struct CORDL_TYPE EUniverse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUniverse_Unwrapped
enum struct __EUniverse_Unwrapped : int32_t {
__E_k_EUniverseInvalid = static_cast<int32_t>(0x0),
__E_k_EUniversePublic = static_cast<int32_t>(0x1),
__E_k_EUniverseBeta = static_cast<int32_t>(0x2),
__E_k_EUniverseInternal = static_cast<int32_t>(0x3),
__E_k_EUniverseDev = static_cast<int32_t>(0x4),
__E_k_EUniverseMax = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUniverse_Unwrapped () const noexcept {
return static_cast<__EUniverse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUniverse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUniverse(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EUniverseBeta value: I32(2)
static ::Steamworks::EUniverse const k_EUniverseBeta;

/// @brief Field k_EUniverseDev value: I32(4)
static ::Steamworks::EUniverse const k_EUniverseDev;

/// @brief Field k_EUniverseInternal value: I32(3)
static ::Steamworks::EUniverse const k_EUniverseInternal;

/// @brief Field k_EUniverseInvalid value: I32(0)
static ::Steamworks::EUniverse const k_EUniverseInvalid;

/// @brief Field k_EUniverseMax value: I32(5)
static ::Steamworks::EUniverse const k_EUniverseMax;

/// @brief Field k_EUniversePublic value: I32(1)
static ::Steamworks::EUniverse const k_EUniversePublic;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EUniverse, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EUniverse) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
