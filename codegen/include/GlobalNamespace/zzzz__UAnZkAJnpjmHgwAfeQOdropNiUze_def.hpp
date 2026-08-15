#pragma once
// IWYU pragma private; include "GlobalNamespace/UAnZkAJnpjmHgwAfeQOdropNiUze.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UAnZkAJnpjmHgwAfeQOdropNiUze)
// Forward declare root types
namespace GlobalNamespace {
struct UAnZkAJnpjmHgwAfeQOdropNiUze;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UAnZkAJnpjmHgwAfeQOdropNiUze);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UAnZkAJnpjmHgwAfeQOdropNiUze, "", "UAnZkAJnpjmHgwAfeQOdropNiUze");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UAnZkAJnpjmHgwAfeQOdropNiUze
struct CORDL_TYPE UAnZkAJnpjmHgwAfeQOdropNiUze {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UAnZkAJnpjmHgwAfeQOdropNiUze_Unwrapped
enum struct __UAnZkAJnpjmHgwAfeQOdropNiUze_Unwrapped : int32_t {
__E_ConstantBufferUserpacked = static_cast<int32_t>(0x1),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UAnZkAJnpjmHgwAfeQOdropNiUze_Unwrapped () const noexcept {
return static_cast<__UAnZkAJnpjmHgwAfeQOdropNiUze_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UAnZkAJnpjmHgwAfeQOdropNiUze() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UAnZkAJnpjmHgwAfeQOdropNiUze(int32_t  value__) noexcept;

/// @brief Field ConstantBufferUserpacked value: I32(1)
static ::GlobalNamespace::UAnZkAJnpjmHgwAfeQOdropNiUze const ConstantBufferUserpacked;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::UAnZkAJnpjmHgwAfeQOdropNiUze const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6200};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UAnZkAJnpjmHgwAfeQOdropNiUze, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UAnZkAJnpjmHgwAfeQOdropNiUze) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
