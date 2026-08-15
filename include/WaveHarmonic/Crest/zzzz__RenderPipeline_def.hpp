#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RenderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPipeline)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct RenderPipeline;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::RenderPipeline);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RenderPipeline, "WaveHarmonic.Crest", "RenderPipeline");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.RenderPipeline
struct CORDL_TYPE RenderPipeline {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderPipeline_Unwrapped
enum struct __RenderPipeline_Unwrapped : int32_t {
__E_Legacy = static_cast<int32_t>(0x0),
__E_HighDefinition = static_cast<int32_t>(0x1),
__E_Universal = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderPipeline_Unwrapped () const noexcept {
return static_cast<__RenderPipeline_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderPipeline() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderPipeline(int32_t  value__) noexcept;

/// @brief Field HighDefinition value: I32(1)
static ::WaveHarmonic::Crest::RenderPipeline const HighDefinition;

/// @brief Field Legacy value: I32(0)
static ::WaveHarmonic::Crest::RenderPipeline const Legacy;

/// @brief Field Universal value: I32(2)
static ::WaveHarmonic::Crest::RenderPipeline const Universal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::RenderPipeline, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::RenderPipeline) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
