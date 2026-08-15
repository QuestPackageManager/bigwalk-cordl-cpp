#pragma once
// IWYU pragma private; include "MA/Flora/TemplateRenderFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateRenderFlags)
// Forward declare root types
namespace MA::Flora {
struct TemplateRenderFlags;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateRenderFlags);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateRenderFlags, "MA.Flora", "TemplateRenderFlags");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateRenderFlags
struct CORDL_TYPE TemplateRenderFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TemplateRenderFlags_Unwrapped
enum struct __TemplateRenderFlags_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_HasLightProbes = static_cast<uint8_t>(0x2u),
__E_HasLightmaps = static_cast<uint8_t>(0x4u),
__E_HasShadowCasters = static_cast<uint8_t>(0x8u),
__E_HasPerObjectMotionVectors = static_cast<uint8_t>(0x10u),
__E_HasRandomID = static_cast<uint8_t>(0x20u),
__E_HasVariationColor = static_cast<uint8_t>(0x40u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TemplateRenderFlags_Unwrapped () const noexcept {
return static_cast<__TemplateRenderFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TemplateRenderFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TemplateRenderFlags(uint8_t  value__) noexcept;

/// @brief Field HasLightProbes value: U8(2)
static ::MA::Flora::TemplateRenderFlags const HasLightProbes;

/// @brief Field HasLightmaps value: U8(4)
static ::MA::Flora::TemplateRenderFlags const HasLightmaps;

/// @brief Field HasPerObjectMotionVectors value: U8(16)
static ::MA::Flora::TemplateRenderFlags const HasPerObjectMotionVectors;

/// @brief Field HasRandomID value: U8(32)
static ::MA::Flora::TemplateRenderFlags const HasRandomID;

/// @brief Field HasShadowCasters value: U8(8)
static ::MA::Flora::TemplateRenderFlags const HasShadowCasters;

/// @brief Field HasVariationColor value: U8(64)
static ::MA::Flora::TemplateRenderFlags const HasVariationColor;

/// @brief Field None value: U8(0)
static ::MA::Flora::TemplateRenderFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13082};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateRenderFlags, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateRenderFlags) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
