#pragma once
// IWYU pragma private; include "MA/Flora/TemplateRenderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateRenderType)
// Forward declare root types
namespace MA::Flora {
struct TemplateRenderType;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateRenderType);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateRenderType, "MA.Flora", "TemplateRenderType");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateRenderType
struct CORDL_TYPE TemplateRenderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TemplateRenderType_Unwrapped
enum struct __TemplateRenderType_Unwrapped : int32_t {
__E_LodGroup = static_cast<int32_t>(0x0),
__E_MeshRenderer = static_cast<int32_t>(0x1),
__E_MeshLod = static_cast<int32_t>(0x2),
__E_Billboard = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TemplateRenderType_Unwrapped () const noexcept {
return static_cast<__TemplateRenderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TemplateRenderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TemplateRenderType(int32_t  value__) noexcept;

/// @brief Field Billboard value: I32(3)
static ::MA::Flora::TemplateRenderType const Billboard;

/// @brief Field LodGroup value: I32(0)
static ::MA::Flora::TemplateRenderType const LodGroup;

/// @brief Field MeshLod value: I32(2)
static ::MA::Flora::TemplateRenderType const MeshLod;

/// @brief Field MeshRenderer value: I32(1)
static ::MA::Flora::TemplateRenderType const MeshRenderer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateRenderType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateRenderType) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
