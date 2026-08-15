#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceTypeMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraInstanceTypeMask)
// Forward declare root types
namespace MA::Flora {
struct FloraInstanceTypeMask;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraInstanceTypeMask);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceTypeMask, "MA.Flora", "FloraInstanceTypeMask");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraInstanceTypeMask
struct CORDL_TYPE FloraInstanceTypeMask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __FloraInstanceTypeMask_Unwrapped
enum struct __FloraInstanceTypeMask_Unwrapped : uint32_t {
__E_Default = static_cast<uint32_t>(0x0u),
__E_TerrainTree = static_cast<uint32_t>(0x800000u),
__E_TerrainDetail = static_cast<uint32_t>(0x1000000u),
__E_Any = static_cast<uint32_t>(0x1800000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraInstanceTypeMask_Unwrapped () const noexcept {
return static_cast<__FloraInstanceTypeMask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceTypeMask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FloraInstanceTypeMask(uint32_t  value__) noexcept;

/// @brief Field Any value: U32(25165824)
static ::MA::Flora::FloraInstanceTypeMask const Any;

/// @brief Field Default value: U32(0)
static ::MA::Flora::FloraInstanceTypeMask const Default;

/// @brief Field TerrainDetail value: U32(16777216)
static ::MA::Flora::FloraInstanceTypeMask const TerrainDetail;

/// @brief Field TerrainTree value: U32(8388608)
static ::MA::Flora::FloraInstanceTypeMask const TerrainTree;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13301};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceTypeMask, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceTypeMask) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
