#pragma once
// IWYU pragma private; include "MA/Flora/DebugInstanceDrawMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugInstanceDrawMode)
// Forward declare root types
namespace MA::Flora {
struct DebugInstanceDrawMode;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DebugInstanceDrawMode);
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugInstanceDrawMode, "MA.Flora", "DebugInstanceDrawMode");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DebugInstanceDrawMode
struct CORDL_TYPE DebugInstanceDrawMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugInstanceDrawMode_Unwrapped
enum struct __DebugInstanceDrawMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LOD = static_cast<int32_t>(0x1),
__E_RandomID = static_cast<int32_t>(0x2),
__E_Template = static_cast<int32_t>(0x3),
__E_Draw = static_cast<int32_t>(0x4),
__E_DrawVariant = static_cast<int32_t>(0x5),
__E_CullingBatch = static_cast<int32_t>(0x6),
__E_BatchDomain = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugInstanceDrawMode_Unwrapped () const noexcept {
return static_cast<__DebugInstanceDrawMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugInstanceDrawMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebugInstanceDrawMode(int32_t  value__) noexcept;

/// @brief Field BatchDomain value: I32(7)
static ::MA::Flora::DebugInstanceDrawMode const BatchDomain;

/// @brief Field CullingBatch value: I32(6)
static ::MA::Flora::DebugInstanceDrawMode const CullingBatch;

/// @brief Field Draw value: I32(4)
static ::MA::Flora::DebugInstanceDrawMode const Draw;

/// @brief Field DrawVariant value: I32(5)
static ::MA::Flora::DebugInstanceDrawMode const DrawVariant;

/// @brief Field LOD value: I32(1)
static ::MA::Flora::DebugInstanceDrawMode const LOD;

/// @brief Field None value: I32(0)
static ::MA::Flora::DebugInstanceDrawMode const None;

/// @brief Field RandomID value: I32(2)
static ::MA::Flora::DebugInstanceDrawMode const RandomID;

/// @brief Field Template value: I32(3)
static ::MA::Flora::DebugInstanceDrawMode const Template;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13253};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugInstanceDrawMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugInstanceDrawMode) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
