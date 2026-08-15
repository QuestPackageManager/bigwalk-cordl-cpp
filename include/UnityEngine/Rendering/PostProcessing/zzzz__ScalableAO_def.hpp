#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScalableAO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScalableAO)
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusion;
}
namespace UnityEngine::Rendering::PostProcessing {
class IAmbientOcclusionMethod;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheet;
}
namespace UnityEngine::Rendering::PostProcessing {
struct ScalableAO_Pass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct ScalableAO_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScalableAO;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ScalableAO*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass, "UnityEngine.Rendering.PostProcessing", "ScalableAO/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScalableAO*, "UnityEngine.Rendering.PostProcessing", "ScalableAO");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.ScalableAO/Pass
struct CORDL_TYPE ScalableAO_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScalableAO_Pass_Unwrapped
enum struct __ScalableAO_Pass_Unwrapped : int32_t {
__E_OcclusionEstimationForward = static_cast<int32_t>(0x0),
__E_OcclusionEstimationDeferred = static_cast<int32_t>(0x1),
__E_HorizontalBlurForward = static_cast<int32_t>(0x2),
__E_HorizontalBlurDeferred = static_cast<int32_t>(0x3),
__E_VerticalBlur = static_cast<int32_t>(0x4),
__E_CompositionForward = static_cast<int32_t>(0x5),
__E_CompositionDeferred = static_cast<int32_t>(0x6),
__E_DebugOverlay = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScalableAO_Pass_Unwrapped () const noexcept {
return static_cast<__ScalableAO_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScalableAO_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScalableAO_Pass(int32_t  value__) noexcept;

/// @brief Field CompositionDeferred value: I32(6)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const CompositionDeferred;

/// @brief Field CompositionForward value: I32(5)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const CompositionForward;

/// @brief Field DebugOverlay value: I32(7)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const DebugOverlay;

/// @brief Field HorizontalBlurDeferred value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const HorizontalBlurDeferred;

/// @brief Field HorizontalBlurForward value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const HorizontalBlurForward;

/// @brief Field OcclusionEstimationDeferred value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const OcclusionEstimationDeferred;

/// @brief Field OcclusionEstimationForward value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const OcclusionEstimationForward;

/// @brief Field VerticalBlur value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass const VerticalBlur;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18580};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ScalableAO
class CORDL_TYPE ScalableAO : public ::System::Object {
public:
// Declarations
using Pass = ::UnityEngine::Rendering::PostProcessing::ScalableAO_Pass;

/// @brief Field m_MRT, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MRT, put=__cordl_internal_set_m_MRT)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  m_MRT;

/// @brief Field m_PropertySheet, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertySheet, put=__cordl_internal_set_m_PropertySheet)) ::UnityEngine::Rendering::PostProcessing::PropertySheet*  m_PropertySheet;

/// @brief Field m_Result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Result, put=__cordl_internal_set_m_Result)) ::UnityW<::UnityEngine::RenderTexture>  m_Result;

/// @brief Field m_SampleCount, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SampleCount, put=__cordl_internal_set_m_SampleCount)) ::ArrayW<int32_t>  m_SampleCount;

/// @brief Field m_Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  m_Settings;

/// @brief Convert operator to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr operator  ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*() noexcept;

/// @brief Method CompositeAmbientOnly, addr 0x181fbb760, size 0x1a0, virtual true, abstract: false, final true
inline void CompositeAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method DoLazyInitialization, addr 0x181fbb900, size 0x160, virtual false, abstract: false, final false
inline void DoLazyInitialization(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method GetCameraFlags, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

static inline ::UnityEngine::Rendering::PostProcessing::ScalableAO* New_ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings) ;

/// @brief Method Release, addr 0x181fbba60, size 0x30, virtual true, abstract: false, final true
inline void Release() ;

/// @brief Method Render, addr 0x181fbbcb0, size 0x650, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  occlusionSource) ;

/// @brief Method RenderAfterOpaque, addr 0x181fbba90, size 0x1b0, virtual true, abstract: false, final true
inline void RenderAfterOpaque(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderAmbientOnly, addr 0x181fbbc40, size 0x70, virtual true, abstract: false, final true
inline void RenderAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get_m_MRT() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get_m_MRT() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet* const& __cordl_internal_get_m_PropertySheet() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet*& __cordl_internal_get_m_PropertySheet() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_Result() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_Result() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_SampleCount() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_SampleCount() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>& __cordl_internal_get_m_Settings() ;

constexpr void __cordl_internal_set_m_MRT(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

constexpr void __cordl_internal_set_m_PropertySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value) ;

constexpr void __cordl_internal_set_m_Result(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_SampleCount(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  value) ;

/// @brief Method .ctor, addr 0x181fbc300, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings) ;

/// @brief Convert to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod* i___UnityEngine__Rendering__PostProcessing__IAmbientOcclusionMethod() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalableAO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalableAO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalableAO(ScalableAO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalableAO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalableAO(ScalableAO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18581};

/// @brief Field m_Result, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_Result;

/// @brief Field m_PropertySheet, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PropertySheet*  ___m_PropertySheet;

/// @brief Field m_Settings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  ___m_Settings;

/// @brief Field m_MRT, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  ___m_MRT;

/// @brief Field m_SampleCount, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_SampleCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScalableAO, ___m_Result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScalableAO, ___m_PropertySheet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScalableAO, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScalableAO, ___m_MRT) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScalableAO, ___m_SampleCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScalableAO) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
