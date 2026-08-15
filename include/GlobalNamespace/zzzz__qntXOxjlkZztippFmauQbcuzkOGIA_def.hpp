#pragma once
// IWYU pragma private; include "GlobalNamespace/qntXOxjlkZztippFmauQbcuzkOGIA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(qntXOxjlkZztippFmauQbcuzkOGIA)
// Forward declare root types
namespace GlobalNamespace {
struct qntXOxjlkZztippFmauQbcuzkOGIA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::qntXOxjlkZztippFmauQbcuzkOGIA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::qntXOxjlkZztippFmauQbcuzkOGIA, "", "qntXOxjlkZztippFmauQbcuzkOGIA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: qntXOxjlkZztippFmauQbcuzkOGIA
struct CORDL_TYPE qntXOxjlkZztippFmauQbcuzkOGIA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __qntXOxjlkZztippFmauQbcuzkOGIA_Unwrapped
enum struct __qntXOxjlkZztippFmauQbcuzkOGIA_Unwrapped : int16_t {
};

/// @brief Conversion into unwrapped enum value
constexpr operator __qntXOxjlkZztippFmauQbcuzkOGIA_Unwrapped () const noexcept {
return static_cast<__qntXOxjlkZztippFmauQbcuzkOGIA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr qntXOxjlkZztippFmauQbcuzkOGIA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr qntXOxjlkZztippFmauQbcuzkOGIA(int16_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6198};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::qntXOxjlkZztippFmauQbcuzkOGIA, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::qntXOxjlkZztippFmauQbcuzkOGIA) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
