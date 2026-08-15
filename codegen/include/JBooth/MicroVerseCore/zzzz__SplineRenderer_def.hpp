#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplineRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineRenderer)
namespace JBooth::MicroVerseCore {
class Easing;
}
namespace JBooth::MicroVerseCore {
class Noise;
}
namespace JBooth::MicroVerseCore {
struct RenderDesc_SplineRenderer_Mode;
}
namespace JBooth::MicroVerseCore {
class SplinePath_SplineWidthData;
}
namespace JBooth::MicroVerseCore {
struct SplineRenderer_RenderDesc;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct RenderDesc_SplineRenderer_Mode;
}
namespace JBooth::MicroVerseCore {
class SplineRenderer;
}
namespace JBooth::MicroVerseCore {
struct SplineRenderer_RenderDesc;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode);
MARK_REF_T(::JBooth::MicroVerseCore::SplineRenderer*);
MARK_VAL_T(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode, "JBooth.MicroVerseCore", "SplineRenderer/RenderDesc/Mode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplineRenderer*, "JBooth.MicroVerseCore", "SplineRenderer");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, "JBooth.MicroVerseCore", "SplineRenderer/RenderDesc");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.SplineRenderer/RenderDesc/Mode
struct CORDL_TYPE RenderDesc_SplineRenderer_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderDesc_SplineRenderer_Mode_Unwrapped
enum struct __RenderDesc_SplineRenderer_Mode_Unwrapped : int32_t {
__E_Path = static_cast<int32_t>(0x0),
__E_Area = static_cast<int32_t>(0x1),
__E_Intersection = static_cast<int32_t>(0x2),
__E_Road = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderDesc_SplineRenderer_Mode_Unwrapped () const noexcept {
return static_cast<__RenderDesc_SplineRenderer_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderDesc_SplineRenderer_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderDesc_SplineRenderer_Mode(int32_t  value__) noexcept;

/// @brief Field Area value: I32(1)
static ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode const Area;

/// @brief Field Intersection value: I32(2)
static ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode const Intersection;

/// @brief Field Path value: I32(0)
static ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode const Path;

/// @brief Field Road value: I32(3)
static ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode const Road;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17966};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.SplineRenderer::RenderDesc::Mode
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.SplineRenderer/RenderDesc
struct CORDL_TYPE SplineRenderer_RenderDesc {
public:
// Declarations
using Mode = ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode;

// Ctor Parameters []
// @brief default ctor
constexpr SplineRenderer_RenderDesc() ;

// Ctor Parameters [CppParam { name: "splineContainer", ty: "::UnityW<::UnityEngine::Splines::SplineContainer>", modifiers: "", def_value: None }, CppParam { name: "widths", ty: "::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*", modifiers: "", def_value: None }, CppParam { name: "widthEasing", ty: "::JBooth::MicroVerseCore::Easing*", modifiers: "", def_value: None }, CppParam { name: "positionNoise", ty: "::JBooth::MicroVerseCore::Noise*", modifiers: "", def_value: None }, CppParam { name: "widthNoise", ty: "::JBooth::MicroVerseCore::Noise*", modifiers: "", def_value: None }, CppParam { name: "widthBoost", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sdfMult", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode", modifiers: "", def_value: None }, CppParam { name: "numSteps", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineRenderer_RenderDesc(::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  widths, ::JBooth::MicroVerseCore::Easing*  widthEasing, ::JBooth::MicroVerseCore::Noise*  positionNoise, ::JBooth::MicroVerseCore::Noise*  widthNoise, float_t  widthBoost, float_t  sdfMult, ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  mode, int32_t  numSteps) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17967};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field splineContainer, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer;

/// @brief Field widths, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  widths;

/// @brief Field widthEasing, offset: 0x10, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Easing*  widthEasing;

/// @brief Field positionNoise, offset: 0x18, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  positionNoise;

/// @brief Field widthNoise, offset: 0x20, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Noise*  widthNoise;

/// @brief Field widthBoost, offset: 0x28, size: 0x4, def value: None
 float_t  widthBoost;

/// @brief Field sdfMult, offset: 0x2c, size: 0x4, def value: None
 float_t  sdfMult;

/// @brief Field mode, offset: 0x30, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  mode;

/// @brief Field numSteps, offset: 0x34, size: 0x4, def value: None
 int32_t  numSteps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, splineContainer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, widths) == 0x8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, widthEasing) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, positionNoise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, widthNoise) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, widthBoost) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, sdfMult) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc, numSteps) == 0x34, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplineRenderer_RenderDesc) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SplineRenderer
class CORDL_TYPE SplineRenderer : public ::System::Object {
public:
// Declarations
using RenderDesc = ::JBooth::MicroVerseCore::SplineRenderer_RenderDesc;

/// @brief Field _CurveLengths, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurveLengths, put=setStaticF__CurveLengths)) int32_t  _CurveLengths;

/// @brief Field _Curves, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Curves, put=setStaticF__Curves)) int32_t  _Curves;

/// @brief Field _Info, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Info, put=setStaticF__Info)) int32_t  _Info;

/// @brief Field _MaxSDF, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxSDF, put=setStaticF__MaxSDF)) int32_t  _MaxSDF;

/// @brief Field _NumSegments, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NumSegments, put=setStaticF__NumSegments)) int32_t  _NumSegments;

/// @brief Field _RealSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealSize, put=setStaticF__RealSize)) int32_t  _RealSize;

/// @brief Field _SDFMult, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SDFMult, put=setStaticF__SDFMult)) int32_t  _SDFMult;

/// @brief Field _SplineBounds, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SplineBounds, put=setStaticF__SplineBounds)) int32_t  _SplineBounds;

/// @brief Field _Transform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Transform, put=setStaticF__Transform)) int32_t  _Transform;

/// @brief Field _WidthBoost, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WidthBoost, put=setStaticF__WidthBoost)) int32_t  _WidthBoost;

/// @brief Field _WidthInfo, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WidthInfo, put=setStaticF__WidthInfo)) int32_t  _WidthInfo;

/// @brief Field _Widths, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Widths, put=setStaticF__Widths)) int32_t  _Widths;

/// @brief Field curveBuffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_curveBuffer, put=__cordl_internal_set_curveBuffer)) ::UnityEngine::ComputeBuffer*  curveBuffer;

/// @brief Field info, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::UnityEngine::Vector4  info;

/// @brief Field lastMaxSDF, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastMaxSDF, put=__cordl_internal_set_lastMaxSDF)) float_t  lastMaxSDF;

/// @brief Field lengthBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lengthBuffer, put=__cordl_internal_set_lengthBuffer)) ::UnityEngine::ComputeBuffer*  lengthBuffer;

/// @brief Field slineRenderShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_slineRenderShader, put=setStaticF_slineRenderShader)) ::UnityW<::UnityEngine::Shader>  slineRenderShader;

/// @brief Field splineClearShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_splineClearShader, put=setStaticF_splineClearShader)) ::UnityW<::UnityEngine::Shader>  splineClearShader;

/// @brief Field splineSDF, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineSDF, put=__cordl_internal_set_splineSDF)) ::UnityW<::UnityEngine::RenderTexture>  splineSDF;

/// @brief Field widthBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_widthBuffer, put=__cordl_internal_set_widthBuffer)) ::UnityEngine::ComputeBuffer*  widthBuffer;

/// @brief Field widthInfo, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_widthInfo, put=__cordl_internal_set_widthInfo)) ::UnityEngine::Vector4  widthInfo;

/// @brief Method Dispose, addr 0x181424900, size 0x60, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::JBooth::MicroVerseCore::SplineRenderer* New_ctor() ;

/// @brief Method Render, addr 0x181424c30, size 0x15f0, virtual false, abstract: false, final false
inline void Render(::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>  renderDescs, ::UnityEngine::Terrain*  terrain, int32_t  sdfRes, float_t  maxSDF, int32_t  numSteps) ;

/// @brief Method Render, addr 0x181424960, size 0x150, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Splines::SplineContainer*  sc, ::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::Noise*  positionNoise, ::JBooth::MicroVerseCore::Noise*  widthNoise, int32_t  sdfRes, float_t  maxSDF, ::JBooth::MicroVerseCore::RenderDesc_SplineRenderer_Mode  mode, int32_t  numSteps) ;

/// @brief Method Render, addr 0x181424ab0, size 0x180, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Splines::SplineContainer*  sc, ::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::Noise*  positionNoise, ::JBooth::MicroVerseCore::Noise*  widthNoise, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  widths, ::JBooth::MicroVerseCore::Easing*  easing, int32_t  sdfRes, float_t  maxSDF, int32_t  numSteps) ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_curveBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_curveBuffer() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_info() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_info() ;

constexpr float_t const& __cordl_internal_get_lastMaxSDF() const;

constexpr float_t& __cordl_internal_get_lastMaxSDF() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_lengthBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_lengthBuffer() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_splineSDF() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_splineSDF() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_widthBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_widthBuffer() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_widthInfo() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_widthInfo() ;

constexpr void __cordl_internal_set_curveBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_info(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_lastMaxSDF(float_t  value) ;

constexpr void __cordl_internal_set_lengthBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_splineSDF(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_widthBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_widthInfo(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__CurveLengths() ;

static inline int32_t getStaticF__Curves() ;

static inline int32_t getStaticF__Info() ;

static inline int32_t getStaticF__MaxSDF() ;

static inline int32_t getStaticF__NumSegments() ;

static inline int32_t getStaticF__RealSize() ;

static inline int32_t getStaticF__SDFMult() ;

static inline int32_t getStaticF__SplineBounds() ;

static inline int32_t getStaticF__Transform() ;

static inline int32_t getStaticF__WidthBoost() ;

static inline int32_t getStaticF__WidthInfo() ;

static inline int32_t getStaticF__Widths() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_slineRenderShader() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_splineClearShader() ;

static inline void setStaticF__CurveLengths(int32_t  value) ;

static inline void setStaticF__Curves(int32_t  value) ;

static inline void setStaticF__Info(int32_t  value) ;

static inline void setStaticF__MaxSDF(int32_t  value) ;

static inline void setStaticF__NumSegments(int32_t  value) ;

static inline void setStaticF__RealSize(int32_t  value) ;

static inline void setStaticF__SDFMult(int32_t  value) ;

static inline void setStaticF__SplineBounds(int32_t  value) ;

static inline void setStaticF__Transform(int32_t  value) ;

static inline void setStaticF__WidthBoost(int32_t  value) ;

static inline void setStaticF__WidthInfo(int32_t  value) ;

static inline void setStaticF__Widths(int32_t  value) ;

static inline void setStaticF_slineRenderShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_splineClearShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineRenderer(SplineRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineRenderer(SplineRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17968};

/// @brief Field curveBuffer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___curveBuffer;

/// @brief Field lengthBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___lengthBuffer;

/// @brief Field widthBuffer, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___widthBuffer;

/// @brief Field info, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___info;

/// @brief Field widthInfo, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___widthInfo;

/// @brief Field splineSDF, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___splineSDF;

/// @brief Field lastMaxSDF, offset: 0x50, size: 0x4, def value: None
 float_t  ___lastMaxSDF;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer, ___curveBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer, ___lengthBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer, ___widthBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer, ___info) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer, ___widthInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer, ___splineSDF) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRenderer, ___lastMaxSDF) == 0x50, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplineRenderer) == 0x58, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
