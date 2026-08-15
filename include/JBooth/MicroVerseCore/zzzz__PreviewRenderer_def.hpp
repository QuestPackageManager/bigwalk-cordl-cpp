#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/PreviewRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PreviewRenderer)
namespace JBooth::MicroVerseCore {
class FalloffFilter;
}
namespace JBooth::MicroVerseCore {
class FilterSet_Filter;
}
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class Noise;
}
namespace JBooth::MicroVerseCore {
struct PreviewRenderer_FilterSetType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct PreviewRenderer_FilterSetType;
}
namespace JBooth::MicroVerseCore {
class PreviewRenderer;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType);
MARK_REF_T(::JBooth::MicroVerseCore::PreviewRenderer*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType, "JBooth.MicroVerseCore", "PreviewRenderer/FilterSetType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::PreviewRenderer*, "JBooth.MicroVerseCore", "PreviewRenderer");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.PreviewRenderer/FilterSetType
struct CORDL_TYPE PreviewRenderer_FilterSetType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PreviewRenderer_FilterSetType_Unwrapped
enum struct __PreviewRenderer_FilterSetType_Unwrapped : int32_t {
__E_Height = static_cast<int32_t>(0x0),
__E_Slope = static_cast<int32_t>(0x1),
__E_Angle = static_cast<int32_t>(0x2),
__E_Curvature = static_cast<int32_t>(0x3),
__E_Flow = static_cast<int32_t>(0x4),
__E_Texture = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PreviewRenderer_FilterSetType_Unwrapped () const noexcept {
return static_cast<__PreviewRenderer_FilterSetType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PreviewRenderer_FilterSetType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PreviewRenderer_FilterSetType(int32_t  value__) noexcept;

/// @brief Field Angle value: I32(2)
static ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType const Angle;

/// @brief Field Curvature value: I32(3)
static ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType const Curvature;

/// @brief Field Flow value: I32(4)
static ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType const Flow;

/// @brief Field Height value: I32(0)
static ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType const Height;

/// @brief Field Slope value: I32(1)
static ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType const Slope;

/// @brief Field Texture value: I32(5)
static ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType const Texture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18031};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.PreviewRenderer::FilterSetType, System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.PreviewRenderer
class CORDL_TYPE PreviewRenderer : public ::System::Object {
public:
// Declarations
using FilterSetType = ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType;

/// @brief Field brushPreviewMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_brushPreviewMat, put=setStaticF_brushPreviewMat)) ::UnityW<::UnityEngine::Material>  brushPreviewMat;

/// @brief Field filter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_filter, put=setStaticF_filter)) ::JBooth::MicroVerseCore::FilterSet_Filter*  filter;

/// @brief Field filterSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_filterSet, put=setStaticF_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field filterSetMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_filterSetMat, put=setStaticF_filterSetMat)) ::UnityW<::UnityEngine::Material>  filterSetMat;

/// @brief Field filterSetType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_filterSetType, put=setStaticF_filterSetType)) ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  filterSetType;

/// @brief Field noiseMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_noiseMat, put=setStaticF_noiseMat)) ::UnityW<::UnityEngine::Material>  noiseMat;

/// @brief Field noisePreview, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_noisePreview, put=setStaticF_noisePreview)) ::JBooth::MicroVerseCore::Noise*  noisePreview;

/// @brief Method Draw, addr 0x181448d20, size 0x1d0, virtual false, abstract: false, final false
static inline void Draw(::UnityEngine::Terrain*  terrain, ::UnityEngine::Texture2D*  tex) ;

/// @brief Method Draw, addr 0x1814487d0, size 0x2a0, virtual false, abstract: false, final false
static inline void Draw(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, ::UnityEngine::Vector2  falloffRange, ::UnityEngine::Color  color, ::UnityEngine::Texture2D*  colorTex, int32_t  falloffChannel) ;

/// @brief Method Draw, addr 0x181448a70, size 0x2b0, virtual false, abstract: false, final false
static inline void Draw(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, ::UnityEngine::Texture2D*  tex, ::UnityEngine::Color  color, ::UnityEngine::Texture2D*  colorTex, int32_t  channel) ;

/// @brief Method DrawFilterSetPreview, addr 0x181446f40, size 0x1020, virtual false, abstract: false, final false
static inline void DrawFilterSetPreview() ;

/// @brief Method DrawNoisePreview, addr 0x181447f60, size 0x5d0, virtual false, abstract: false, final false
static inline void DrawNoisePreview() ;

/// @brief Method DrawStampPreview, addr 0x181448530, size 0x2a0, virtual false, abstract: false, final false
static inline void DrawStampPreview(::JBooth::MicroVerseCore::IModifier*  mod, ::ArrayW<::UnityEngine::Terrain*>  terrains, ::UnityEngine::Transform*  transform, ::JBooth::MicroVerseCore::FalloffFilter*  filter, ::UnityEngine::Color  color, ::UnityEngine::Texture2D*  colorTex) ;

static inline ::JBooth::MicroVerseCore::PreviewRenderer* New_ctor() ;

/// @brief Method SetupDrawing, addr 0x181448f90, size 0x690, virtual false, abstract: false, final false
static inline int32_t SetupDrawing(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  mat) ;

/// @brief Method SetupDrawing, addr 0x181448ef0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t SetupDrawing(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  stampTransform, ::UnityEngine::Material*  mat) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_brushPreviewMat() ;

static inline ::JBooth::MicroVerseCore::FilterSet_Filter* getStaticF_filter() ;

static inline ::JBooth::MicroVerseCore::FilterSet* getStaticF_filterSet() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_filterSetMat() ;

static inline ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType getStaticF_filterSetType() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_noiseMat() ;

static inline ::JBooth::MicroVerseCore::Noise* getStaticF_noisePreview() ;

/// @brief Method get_kNormalizedHeightScale, addr 0x181449620, size 0x10, virtual false, abstract: false, final false
static inline float_t get_kNormalizedHeightScale() ;

static inline void setStaticF_brushPreviewMat(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_filter(::JBooth::MicroVerseCore::FilterSet_Filter*  value) ;

static inline void setStaticF_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

static inline void setStaticF_filterSetMat(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_filterSetType(::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  value) ;

static inline void setStaticF_noiseMat(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_noisePreview(::JBooth::MicroVerseCore::Noise*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreviewRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreviewRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreviewRenderer(PreviewRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreviewRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreviewRenderer(PreviewRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::PreviewRenderer) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
