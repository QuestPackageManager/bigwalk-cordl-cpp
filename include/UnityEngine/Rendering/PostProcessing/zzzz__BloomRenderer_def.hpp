#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/BloomRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomRenderer)
namespace UnityEngine::Rendering::PostProcessing {
struct BloomRenderer_Level;
}
namespace UnityEngine::Rendering::PostProcessing {
struct BloomRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class Bloom;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct BloomRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class BloomRenderer;
}
namespace UnityEngine::Rendering::PostProcessing {
struct BloomRenderer_Level;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::BloomRenderer*);
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass, "UnityEngine.Rendering.PostProcessing", "BloomRenderer/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::BloomRenderer*, "UnityEngine.Rendering.PostProcessing", "BloomRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level, "UnityEngine.Rendering.PostProcessing", "BloomRenderer/Level");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.BloomRenderer/Pass
struct CORDL_TYPE BloomRenderer_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BloomRenderer_Pass_Unwrapped
enum struct __BloomRenderer_Pass_Unwrapped : int32_t {
__E_Prefilter13 = static_cast<int32_t>(0x0),
__E_Prefilter4 = static_cast<int32_t>(0x1),
__E_Downsample13 = static_cast<int32_t>(0x2),
__E_Downsample4 = static_cast<int32_t>(0x3),
__E_UpsampleTent = static_cast<int32_t>(0x4),
__E_UpsampleBox = static_cast<int32_t>(0x5),
__E_DebugOverlayThreshold = static_cast<int32_t>(0x6),
__E_DebugOverlayTent = static_cast<int32_t>(0x7),
__E_DebugOverlayBox = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BloomRenderer_Pass_Unwrapped () const noexcept {
return static_cast<__BloomRenderer_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BloomRenderer_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BloomRenderer_Pass(int32_t  value__) noexcept;

/// @brief Field DebugOverlayBox value: I32(8)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const DebugOverlayBox;

/// @brief Field DebugOverlayTent value: I32(7)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const DebugOverlayTent;

/// @brief Field DebugOverlayThreshold value: I32(6)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const DebugOverlayThreshold;

/// @brief Field Downsample13 value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const Downsample13;

/// @brief Field Downsample4 value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const Downsample4;

/// @brief Field Prefilter13 value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const Prefilter13;

/// @brief Field Prefilter4 value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const Prefilter4;

/// @brief Field UpsampleBox value: I32(5)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const UpsampleBox;

/// @brief Field UpsampleTent value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass const UpsampleTent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18550};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.BloomRenderer/Level
struct CORDL_TYPE BloomRenderer_Level {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BloomRenderer_Level() ;

// Ctor Parameters [CppParam { name: "down", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "up", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BloomRenderer_Level(int32_t  down, int32_t  up) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18551};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field down, offset: 0x0, size: 0x4, def value: None
 int32_t  down;

/// @brief Field up, offset: 0x4, size: 0x4, def value: None
 int32_t  up;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level, down) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level, up) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.Rendering.PostProcessing.BloomRenderer::Level, UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.BloomRenderer
class CORDL_TYPE BloomRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::Bloom>> {
public:
// Declarations
using Level = ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level;

using Pass = ::UnityEngine::Rendering::PostProcessing::BloomRenderer_Pass;

/// @brief Field m_Pyramid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Pyramid, put=__cordl_internal_set_m_Pyramid)) ::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level>  m_Pyramid;

/// @brief Method Init, addr 0x181fb16c0, size 0xd0, virtual true, abstract: false, final false
inline void Init() ;

static inline ::UnityEngine::Rendering::PostProcessing::BloomRenderer* New_ctor() ;

/// @brief Method Render, addr 0x181fb1790, size 0xac0, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level> const& __cordl_internal_get_m_Pyramid() const;

constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level>& __cordl_internal_get_m_Pyramid() ;

constexpr void __cordl_internal_set_m_Pyramid(::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level>  value) ;

/// @brief Method .ctor, addr 0x181fb08a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BloomRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BloomRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomRenderer(BloomRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomRenderer(BloomRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18552};

/// @brief Field k_MaxPyramidSize offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxPyramidSize{static_cast<int32_t>(0x10)};

/// @brief Field m_Pyramid, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::PostProcessing::BloomRenderer_Level>  ___m_Pyramid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::BloomRenderer, ___m_Pyramid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::BloomRenderer) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
