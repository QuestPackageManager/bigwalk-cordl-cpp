#pragma once
// IWYU pragma private; include "GlobalNamespace/jCwdyProjpcxZVGhwCfVkZVbaPBo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(jCwdyProjpcxZVGhwCfVkZVbaPBo)
// Forward declare root types
namespace GlobalNamespace {
struct jCwdyProjpcxZVGhwCfVkZVbaPBo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo, "", "jCwdyProjpcxZVGhwCfVkZVbaPBo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: jCwdyProjpcxZVGhwCfVkZVbaPBo
struct CORDL_TYPE jCwdyProjpcxZVGhwCfVkZVbaPBo {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __jCwdyProjpcxZVGhwCfVkZVbaPBo_Unwrapped
enum struct __jCwdyProjpcxZVGhwCfVkZVbaPBo_Unwrapped : int32_t {
__E_UNorm = static_cast<int32_t>(0x1),
__E_SNorm = static_cast<int32_t>(0x2),
__E_SInt = static_cast<int32_t>(0x3),
__E_UInt = static_cast<int32_t>(0x4),
__E_Float = static_cast<int32_t>(0x5),
__E_Mixed = static_cast<int32_t>(0x6),
__E_Double = static_cast<int32_t>(0x7),
__E_Continued = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __jCwdyProjpcxZVGhwCfVkZVbaPBo_Unwrapped () const noexcept {
return static_cast<__jCwdyProjpcxZVGhwCfVkZVbaPBo_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr jCwdyProjpcxZVGhwCfVkZVbaPBo() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr jCwdyProjpcxZVGhwCfVkZVbaPBo(int32_t  value__) noexcept;

/// @brief Field Continued value: I32(8)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const Continued;

/// @brief Field Double value: I32(7)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const Double;

/// @brief Field Float value: I32(5)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const Float;

/// @brief Field Mixed value: I32(6)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const Mixed;

/// @brief Field SInt value: I32(3)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const SInt;

/// @brief Field SNorm value: I32(2)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const SNorm;

/// @brief Field UInt value: I32(4)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const UInt;

/// @brief Field UNorm value: I32(1)
static ::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo const UNorm;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::jCwdyProjpcxZVGhwCfVkZVbaPBo) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
