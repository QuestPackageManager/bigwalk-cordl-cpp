#pragma once
// IWYU pragma private; include "MA/Flora/CullingSystemDebugFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingSystemDebugFlags)
// Forward declare root types
namespace MA::Flora {
struct CullingSystemDebugFlags;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CullingSystemDebugFlags);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystemDebugFlags, "MA.Flora", "CullingSystemDebugFlags");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystemDebugFlags
struct CORDL_TYPE CullingSystemDebugFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CullingSystemDebugFlags_Unwrapped
enum struct __CullingSystemDebugFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CPUCullingStats = static_cast<int32_t>(0x1),
__E_GPUCullingStats = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CullingSystemDebugFlags_Unwrapped () const noexcept {
return static_cast<__CullingSystemDebugFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CullingSystemDebugFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CullingSystemDebugFlags(int32_t  value__) noexcept;

/// @brief Field CPUCullingStats value: I32(1)
static ::MA::Flora::CullingSystemDebugFlags const CPUCullingStats;

/// @brief Field GPUCullingStats value: I32(2)
static ::MA::Flora::CullingSystemDebugFlags const GPUCullingStats;

/// @brief Field None value: I32(0)
static ::MA::Flora::CullingSystemDebugFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13172};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystemDebugFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystemDebugFlags) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
