#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipelineType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraRenderPipelineType)
// Forward declare root types
namespace MA::Flora {
struct FloraRenderPipelineType;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraRenderPipelineType);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineType, "MA.Flora", "FloraRenderPipelineType");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraRenderPipelineType
struct CORDL_TYPE FloraRenderPipelineType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraRenderPipelineType_Unwrapped
enum struct __FloraRenderPipelineType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Builtin = static_cast<int32_t>(0x1),
__E_Universal = static_cast<int32_t>(0x2),
__E_HighDefinition = static_cast<int32_t>(0x3),
__E_Custom = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraRenderPipelineType_Unwrapped () const noexcept {
return static_cast<__FloraRenderPipelineType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraRenderPipelineType(int32_t  value__) noexcept;

/// @brief Field Builtin value: I32(1)
static ::MA::Flora::FloraRenderPipelineType const Builtin;

/// @brief Field Custom value: I32(4)
static ::MA::Flora::FloraRenderPipelineType const Custom;

/// @brief Field HighDefinition value: I32(3)
static ::MA::Flora::FloraRenderPipelineType const HighDefinition;

/// @brief Field Universal value: I32(2)
static ::MA::Flora::FloraRenderPipelineType const Universal;

/// @brief Field Unknown value: I32(0)
static ::MA::Flora::FloraRenderPipelineType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13300};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRenderPipelineType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRenderPipelineType) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
