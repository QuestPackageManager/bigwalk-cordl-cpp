#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MotionBlurRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MotionBlurRenderer)
namespace UnityEngine::Rendering::PostProcessing {
struct MotionBlurRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class MotionBlur;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct MotionBlurRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class MotionBlurRenderer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass, "UnityEngine.Rendering.PostProcessing", "MotionBlurRenderer/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer*, "UnityEngine.Rendering.PostProcessing", "MotionBlurRenderer");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.MotionBlurRenderer/Pass
struct CORDL_TYPE MotionBlurRenderer_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MotionBlurRenderer_Pass_Unwrapped
enum struct __MotionBlurRenderer_Pass_Unwrapped : int32_t {
__E_VelocitySetup = static_cast<int32_t>(0x0),
__E_TileMax1 = static_cast<int32_t>(0x1),
__E_TileMax2 = static_cast<int32_t>(0x2),
__E_TileMaxV = static_cast<int32_t>(0x3),
__E_NeighborMax = static_cast<int32_t>(0x4),
__E_Reconstruction = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MotionBlurRenderer_Pass_Unwrapped () const noexcept {
return static_cast<__MotionBlurRenderer_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MotionBlurRenderer_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MotionBlurRenderer_Pass(int32_t  value__) noexcept;

/// @brief Field NeighborMax value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass const NeighborMax;

/// @brief Field Reconstruction value: I32(5)
static ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass const Reconstruction;

/// @brief Field TileMax1 value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass const TileMax1;

/// @brief Field TileMax2 value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass const TileMax2;

/// @brief Field TileMaxV value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass const TileMaxV;

/// @brief Field VelocitySetup value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass const VelocitySetup;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18575};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.MotionBlurRenderer
class CORDL_TYPE MotionBlurRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::MotionBlur>> {
public:
// Declarations
using Pass = ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer_Pass;

/// @brief Method CreateTemporaryRT, addr 0x181fb7910, size 0xb0, virtual false, abstract: false, final false
inline void CreateTemporaryRT(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, int32_t  nameID, int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  RTFormat) ;

/// @brief Method GetCameraFlags, addr 0x180908b40, size 0x30, virtual true, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

static inline ::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer* New_ctor() ;

/// @brief Method Render, addr 0x181fb79c0, size 0x960, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method .ctor, addr 0x181fb08a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MotionBlurRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MotionBlurRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MotionBlurRenderer(MotionBlurRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MotionBlurRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MotionBlurRenderer(MotionBlurRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MotionBlurRenderer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
