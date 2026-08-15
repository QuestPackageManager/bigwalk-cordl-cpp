#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScreenSpaceReflectionsRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflectionResolution_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceReflectionsRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
struct ScreenSpaceReflectionsRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScreenSpaceReflectionsRenderer_QualityPreset;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScreenSpaceReflections;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct ScreenSpaceReflectionsRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScreenSpaceReflectionsRenderer;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScreenSpaceReflectionsRenderer_QualityPreset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass, "UnityEngine.Rendering.PostProcessing", "ScreenSpaceReflectionsRenderer/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*, "UnityEngine.Rendering.PostProcessing", "ScreenSpaceReflectionsRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*, "UnityEngine.Rendering.PostProcessing", "ScreenSpaceReflectionsRenderer/QualityPreset");
// Dependencies System.Object, UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset
class CORDL_TYPE ScreenSpaceReflectionsRenderer_QualityPreset : public ::System::Object {
public:
// Declarations
/// @brief Field downsampling, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_downsampling, put=__cordl_internal_set_downsampling)) ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution  downsampling;

/// @brief Field maximumIterationCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumIterationCount, put=__cordl_internal_set_maximumIterationCount)) int32_t  maximumIterationCount;

/// @brief Field thickness, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_thickness, put=__cordl_internal_set_thickness)) float_t  thickness;

static inline ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution const& __cordl_internal_get_downsampling() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution& __cordl_internal_get_downsampling() ;

constexpr int32_t const& __cordl_internal_get_maximumIterationCount() const;

constexpr int32_t& __cordl_internal_get_maximumIterationCount() ;

constexpr float_t const& __cordl_internal_get_thickness() const;

constexpr float_t& __cordl_internal_get_thickness() ;

constexpr void __cordl_internal_set_downsampling(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution  value) ;

constexpr void __cordl_internal_set_maximumIterationCount(int32_t  value) ;

constexpr void __cordl_internal_set_thickness(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceReflectionsRenderer_QualityPreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceReflectionsRenderer_QualityPreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpaceReflectionsRenderer_QualityPreset(ScreenSpaceReflectionsRenderer_QualityPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceReflectionsRenderer_QualityPreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpaceReflectionsRenderer_QualityPreset(ScreenSpaceReflectionsRenderer_QualityPreset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18587};

/// @brief Field maximumIterationCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maximumIterationCount;

/// @brief Field thickness, offset: 0x14, size: 0x4, def value: None
 float_t  ___thickness;

/// @brief Field downsampling, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolution  ___downsampling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset, ___maximumIterationCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset, ___thickness) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset, ___downsampling) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/Pass
struct CORDL_TYPE ScreenSpaceReflectionsRenderer_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceReflectionsRenderer_Pass_Unwrapped
enum struct __ScreenSpaceReflectionsRenderer_Pass_Unwrapped : int32_t {
__E_Test = static_cast<int32_t>(0x0),
__E_Resolve = static_cast<int32_t>(0x1),
__E_Reproject = static_cast<int32_t>(0x2),
__E_Composite = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceReflectionsRenderer_Pass_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceReflectionsRenderer_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceReflectionsRenderer_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScreenSpaceReflectionsRenderer_Pass(int32_t  value__) noexcept;

/// @brief Field Composite value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass const Composite;

/// @brief Field Reproject value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass const Reproject;

/// @brief Field Resolve value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass const Resolve;

/// @brief Field Test value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass const Test;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18588};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>, UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer::QualityPreset
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer
class CORDL_TYPE ScreenSpaceReflectionsRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections>> {
public:
// Declarations
using Pass = ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_Pass;

using QualityPreset = ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset;

/// @brief Field m_History, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_History, put=__cordl_internal_set_m_History)) ::UnityW<::UnityEngine::RenderTexture>  m_History;

/// @brief Field m_MipIDs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MipIDs, put=__cordl_internal_set_m_MipIDs)) ::ArrayW<int32_t>  m_MipIDs;

/// @brief Field m_Presets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Presets, put=__cordl_internal_set_m_Presets)) ::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>  m_Presets;

/// @brief Field m_Resolve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Resolve, put=__cordl_internal_set_m_Resolve)) ::UnityW<::UnityEngine::RenderTexture>  m_Resolve;

/// @brief Method CheckRT, addr 0x181fbc3f0, size 0x150, virtual false, abstract: false, final false
inline void CheckRT(::by_ref<::UnityEngine::RenderTexture*>  rt, int32_t  width, int32_t  height, ::UnityEngine::FilterMode  filterMode, bool  useMipMap) ;

/// @brief Method GetCameraFlags, addr 0x180908b40, size 0x30, virtual true, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

static inline ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181fbc540, size 0x50, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x181fbc590, size 0x1080, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_History() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_History() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_MipIDs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_MipIDs() ;

constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*> const& __cordl_internal_get_m_Presets() const;

constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>& __cordl_internal_get_m_Presets() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_Resolve() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_Resolve() ;

constexpr void __cordl_internal_set_m_History(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_MipIDs(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_Presets(::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>  value) ;

constexpr void __cordl_internal_set_m_Resolve(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x181fbd610, size 0x190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceReflectionsRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceReflectionsRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpaceReflectionsRenderer(ScreenSpaceReflectionsRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceReflectionsRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpaceReflectionsRenderer(ScreenSpaceReflectionsRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18589};

/// @brief Field m_Resolve, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_Resolve;

/// @brief Field m_History, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_History;

/// @brief Field m_MipIDs, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_MipIDs;

/// @brief Field m_Presets, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer_QualityPreset*>  ___m_Presets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer, ___m_Resolve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer, ___m_History) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer, ___m_MipIDs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer, ___m_Presets) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
