#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TextureStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureStamp)
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class ITextureModifier;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
class TextureData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class TextureStamp;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::TextureStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::TextureStamp*, "JBooth.MicroVerseCore", "TextureStamp");
// Dependencies JBooth.MicroVerseCore.Stamp, UnityEngine.RenderBuffer
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.TextureStamp
class CORDL_TYPE TextureStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
/// @brief Field _Channel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Channel, put=setStaticF__Channel)) int32_t  _Channel;

/// @brief Field _Curvemap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Curvemap, put=setStaticF__Curvemap)) int32_t  _Curvemap;

/// @brief Field _Flowmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Flowmap, put=setStaticF__Flowmap)) int32_t  _Flowmap;

/// @brief Field _Heightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap, put=setStaticF__Heightmap)) int32_t  _Heightmap;

/// @brief Field _IndexMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndexMap, put=setStaticF__IndexMap)) int32_t  _IndexMap;

/// @brief Field _Normalmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normalmap, put=setStaticF__Normalmap)) int32_t  _Normalmap;

/// @brief Field _PlacementMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementMask, put=setStaticF__PlacementMask)) int32_t  _PlacementMask;

/// @brief Field _WeightMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightMap, put=setStaticF__WeightMap)) int32_t  _WeightMap;

/// @brief Field _mrt, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__mrt, put=__cordl_internal_set__mrt)) ::ArrayW<::UnityEngine::RenderBuffer>  _mrt;

/// @brief Field channelIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_channelIndex, put=__cordl_internal_set_channelIndex)) int32_t  channelIndex;

/// @brief Field filterSet, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field ignoreOcclusion, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreOcclusion, put=__cordl_internal_set_ignoreOcclusion)) bool  ignoreOcclusion;

/// @brief Field layer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::UnityW<::UnityEngine::TerrainLayer>  layer;

/// @brief Field material, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field splatFilterShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_splatFilterShader, put=setStaticF_splatFilterShader)) ::UnityW<::UnityEngine::Shader>  splatFilterShader;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITextureModifier*() noexcept;

/// @brief Method ApplyTextureStamp, addr 0x18144b460, size 0x510, virtual true, abstract: false, final true
inline bool ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x18144b970, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x18144b990, size 0x190, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method Initialize, addr 0x18144bb20, size 0x160, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method JBooth.MicroVerseCore.ITextureModifier.InqTerrainLayers, addr 0x18144bc80, size 0x70, virtual true, abstract: false, final true
inline void JBooth_MicroVerseCore_ITextureModifier_InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  layers) ;

/// @brief Method NeedCurvatureMap, addr 0x18141ad40, size 0x20, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedFlowMap, addr 0x18141ad60, size 0x20, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

static inline ::JBooth::MicroVerseCore::TextureStamp* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18144bcf0, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18144bd00, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& __cordl_internal_get__mrt() const;

constexpr ::ArrayW<::UnityEngine::RenderBuffer>& __cordl_internal_get__mrt() ;

constexpr int32_t const& __cordl_internal_get_channelIndex() const;

constexpr int32_t& __cordl_internal_get_channelIndex() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

constexpr bool const& __cordl_internal_get_ignoreOcclusion() const;

constexpr bool& __cordl_internal_get_ignoreOcclusion() ;

constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_layer() const;

constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_layer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr void __cordl_internal_set__mrt(::ArrayW<::UnityEngine::RenderBuffer>  value) ;

constexpr void __cordl_internal_set_channelIndex(int32_t  value) ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_ignoreOcclusion(bool  value) ;

constexpr void __cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x18144bf80, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__Channel() ;

static inline int32_t getStaticF__Curvemap() ;

static inline int32_t getStaticF__Flowmap() ;

static inline int32_t getStaticF__Heightmap() ;

static inline int32_t getStaticF__IndexMap() ;

static inline int32_t getStaticF__Normalmap() ;

static inline int32_t getStaticF__PlacementMask() ;

static inline int32_t getStaticF__WeightMap() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_splatFilterShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* i___JBooth__MicroVerseCore__ITextureModifier() noexcept;

static inline void setStaticF__Channel(int32_t  value) ;

static inline void setStaticF__Curvemap(int32_t  value) ;

static inline void setStaticF__Flowmap(int32_t  value) ;

static inline void setStaticF__Heightmap(int32_t  value) ;

static inline void setStaticF__IndexMap(int32_t  value) ;

static inline void setStaticF__Normalmap(int32_t  value) ;

static inline void setStaticF__PlacementMask(int32_t  value) ;

static inline void setStaticF__WeightMap(int32_t  value) ;

static inline void setStaticF_splatFilterShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureStamp(TextureStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureStamp(TextureStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18055};

/// @brief Field layer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  ___layer;

/// @brief Field filterSet, offset: 0x38, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field ignoreOcclusion, offset: 0x40, size: 0x1, def value: None
 bool  ___ignoreOcclusion;

/// @brief Field material, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field _mrt, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RenderBuffer>  ____mrt;

/// @brief Field channelIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___channelIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::TextureStamp, ___layer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TextureStamp, ___filterSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TextureStamp, ___ignoreOcclusion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TextureStamp, ___material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TextureStamp, ____mrt) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TextureStamp, ___channelIndex) == 0x58, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::TextureStamp) == 0x60, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
