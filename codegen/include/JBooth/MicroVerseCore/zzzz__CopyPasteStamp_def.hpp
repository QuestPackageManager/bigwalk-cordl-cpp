#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/CopyPasteStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyPasteStamp)
namespace JBooth::MicroVerseCore {
class CopyStamp;
}
namespace JBooth::MicroVerseCore {
class DetailData;
}
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
namespace JBooth::MicroVerseCore {
class HeightStamp;
}
namespace JBooth::MicroVerseCore {
class HeightmapData;
}
namespace JBooth::MicroVerseCore {
class HoleData;
}
namespace JBooth::MicroVerseCore {
class IDetailModifier;
}
namespace JBooth::MicroVerseCore {
class IHeightModifier;
}
namespace JBooth::MicroVerseCore {
class IHoleModifier;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class ISpawner;
}
namespace JBooth::MicroVerseCore {
class ITextureModifier;
}
namespace JBooth::MicroVerseCore {
class ITreeModifier;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
class TextureData;
}
namespace JBooth::MicroVerseCore {
class TreeData;
}
namespace JBooth::MicroVerseCore {
class TreeJobHolder;
}
namespace JBooth::MicroVerseCore {
class TreePrototypeSerializable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class CopyPasteStamp;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::CopyPasteStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::CopyPasteStamp*, "JBooth.MicroVerseCore", "CopyPasteStamp");
// Dependencies JBooth.MicroVerseCore.Stamp, UnityEngine.RenderBuffer
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.CopyPasteStamp
class CORDL_TYPE CopyPasteStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
/// @brief Field _ClearLayer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearLayer, put=setStaticF__ClearLayer)) int32_t  _ClearLayer;

/// @brief Field _ClearMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearMask, put=setStaticF__ClearMask)) int32_t  _ClearMask;

/// @brief Field _mrt, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mrt, put=__cordl_internal_set__mrt)) ::ArrayW<::UnityEngine::RenderBuffer>  _mrt;

/// @brief Field applyDetails, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyDetails, put=__cordl_internal_set_applyDetails)) bool  applyDetails;

/// @brief Field applyHeights, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyHeights, put=__cordl_internal_set_applyHeights)) bool  applyHeights;

/// @brief Field applyHoles, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyHoles, put=__cordl_internal_set_applyHoles)) bool  applyHoles;

/// @brief Field applyTexturing, offset 0x3e, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyTexturing, put=__cordl_internal_set_applyTexturing)) bool  applyTexturing;

/// @brief Field applyTrees, offset 0x3f, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyTrees, put=__cordl_internal_set_applyTrees)) bool  applyTrees;

/// @brief Field channels, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) ::ArrayW<float_t>  channels;

/// @brief Field copyDetails, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get_copyDetails, put=__cordl_internal_set_copyDetails)) bool  copyDetails;

/// @brief Field copyHeights, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_copyHeights, put=__cordl_internal_set_copyHeights)) bool  copyHeights;

/// @brief Field copyHoles, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_copyHoles, put=__cordl_internal_set_copyHoles)) bool  copyHoles;

/// @brief Field copyTexturing, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_copyTexturing, put=__cordl_internal_set_copyTexturing)) bool  copyTexturing;

/// @brief Field copyTrees, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_copyTrees, put=__cordl_internal_set_copyTrees)) bool  copyTrees;

/// @brief Field detailPasteShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_detailPasteShader, put=setStaticF_detailPasteShader)) ::UnityW<::UnityEngine::Shader>  detailPasteShader;

/// @brief Field heightStamp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightStamp, put=__cordl_internal_set_heightStamp)) ::UnityW<::JBooth::MicroVerseCore::HeightStamp>  heightStamp;

/// @brief Field pasteStampShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pasteStampShader, put=setStaticF_pasteStampShader)) ::UnityW<::UnityEngine::Shader>  pasteStampShader;

/// @brief Field pixelQuantization, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_pixelQuantization, put=__cordl_internal_set_pixelQuantization)) bool  pixelQuantization;

/// @brief Field splatPaste, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_splatPaste, put=__cordl_internal_set_splatPaste)) ::UnityW<::UnityEngine::Material>  splatPaste;

/// @brief Field stamp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stamp, put=__cordl_internal_set_stamp)) ::UnityW<::JBooth::MicroVerseCore::CopyStamp>  stamp;

/// @brief Field treePasteShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_treePasteShader, put=setStaticF_treePasteShader)) ::UnityW<::UnityEngine::Shader>  treePasteShader;

/// @brief Field version, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr operator  ::JBooth::MicroVerseCore::IDetailModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHeightModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHoleModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHoleModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITextureModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITreeModifier*() noexcept;

/// @brief Method ApplyDetailClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td) ;

/// @brief Method ApplyDetailStamp, addr 0x18143d130, size 0x520, virtual true, abstract: false, final true
inline void ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyHeightStamp, addr 0x18143d650, size 0x270, virtual true, abstract: false, final true
inline bool ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyHoleStamp, addr 0x18143d8c0, size 0x380, virtual true, abstract: false, final true
inline void ApplyHoleStamp(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HoleData*  holeData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTextureStamp, addr 0x18143dc40, size 0x570, virtual true, abstract: false, final true
inline bool ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTreeClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td) ;

/// @brief Method ApplyTreeStamp, addr 0x18143e1b0, size 0x9d0, virtual true, abstract: false, final true
inline void ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x18143eb80, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FindClosestDivisible, addr 0x18143ebd0, size 0x80, virtual false, abstract: false, final false
static inline float_t FindClosestDivisible(float_t  inputValue, float_t  increment) ;

/// @brief Method GetBounds, addr 0x18143ec50, size 0x140, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetSDF, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method Initialize, addr 0x18143ed90, size 0x170, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InqDetailPrototypes, addr 0x18143ef00, size 0x150, virtual true, abstract: false, final true
inline void InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes) ;

/// @brief Method InqTerrainLayers, addr 0x18143f050, size 0x190, virtual true, abstract: false, final true
inline void InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes) ;

/// @brief Method InqTreePrototypes, addr 0x18143f1e0, size 0x80, virtual true, abstract: false, final true
inline void InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  prototypes) ;

/// @brief Method IsValidHoleStamp, addr 0x18143f260, size 0x60, virtual true, abstract: false, final true
inline bool IsValidHoleStamp() ;

/// @brief Method NeedCurvatureMap, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedDetailClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedDetailClear() ;

/// @brief Method NeedFlowMap, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

/// @brief Method NeedParentSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedParentSDF() ;

/// @brief Method NeedSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedSDF() ;

/// @brief Method NeedToGenerateSDFForChilden, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedToGenerateSDFForChilden() ;

/// @brief Method NeedTreeClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedTreeClear() ;

static inline ::JBooth::MicroVerseCore::CopyPasteStamp* New_ctor() ;

/// @brief Method OccludesOthers, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool OccludesOthers() ;

/// @brief Method OnDisable, addr 0x18143f2c0, size 0xd0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18143f390, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18143f4e0, size 0x1c0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessTreeStamp, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method SetSDF, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SetTerrainScale, addr 0x18143f6a0, size 0x1c0, virtual false, abstract: false, final false
static inline void SetTerrainScale(::UnityEngine::Transform*  stamp, ::UnityEngine::Terrain*  t, int32_t  textureSize) ;

/// @brief Method UsesOtherObjectSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool UsesOtherObjectSDF() ;

/// @brief Method UsesOtherTreeSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool UsesOtherTreeSDF() ;

constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& __cordl_internal_get__mrt() const;

constexpr ::ArrayW<::UnityEngine::RenderBuffer>& __cordl_internal_get__mrt() ;

constexpr bool const& __cordl_internal_get_applyDetails() const;

constexpr bool& __cordl_internal_get_applyDetails() ;

constexpr bool const& __cordl_internal_get_applyHeights() const;

constexpr bool& __cordl_internal_get_applyHeights() ;

constexpr bool const& __cordl_internal_get_applyHoles() const;

constexpr bool& __cordl_internal_get_applyHoles() ;

constexpr bool const& __cordl_internal_get_applyTexturing() const;

constexpr bool& __cordl_internal_get_applyTexturing() ;

constexpr bool const& __cordl_internal_get_applyTrees() const;

constexpr bool& __cordl_internal_get_applyTrees() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_channels() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_channels() ;

constexpr bool const& __cordl_internal_get_copyDetails() const;

constexpr bool& __cordl_internal_get_copyDetails() ;

constexpr bool const& __cordl_internal_get_copyHeights() const;

constexpr bool& __cordl_internal_get_copyHeights() ;

constexpr bool const& __cordl_internal_get_copyHoles() const;

constexpr bool& __cordl_internal_get_copyHoles() ;

constexpr bool const& __cordl_internal_get_copyTexturing() const;

constexpr bool& __cordl_internal_get_copyTexturing() ;

constexpr bool const& __cordl_internal_get_copyTrees() const;

constexpr bool& __cordl_internal_get_copyTrees() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::HeightStamp> const& __cordl_internal_get_heightStamp() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::HeightStamp>& __cordl_internal_get_heightStamp() ;

constexpr bool const& __cordl_internal_get_pixelQuantization() const;

constexpr bool& __cordl_internal_get_pixelQuantization() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_splatPaste() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_splatPaste() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::CopyStamp> const& __cordl_internal_get_stamp() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::CopyStamp>& __cordl_internal_get_stamp() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set__mrt(::ArrayW<::UnityEngine::RenderBuffer>  value) ;

constexpr void __cordl_internal_set_applyDetails(bool  value) ;

constexpr void __cordl_internal_set_applyHeights(bool  value) ;

constexpr void __cordl_internal_set_applyHoles(bool  value) ;

constexpr void __cordl_internal_set_applyTexturing(bool  value) ;

constexpr void __cordl_internal_set_applyTrees(bool  value) ;

constexpr void __cordl_internal_set_channels(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_copyDetails(bool  value) ;

constexpr void __cordl_internal_set_copyHeights(bool  value) ;

constexpr void __cordl_internal_set_copyHoles(bool  value) ;

constexpr void __cordl_internal_set_copyTexturing(bool  value) ;

constexpr void __cordl_internal_set_copyTrees(bool  value) ;

constexpr void __cordl_internal_set_heightStamp(::UnityW<::JBooth::MicroVerseCore::HeightStamp>  value) ;

constexpr void __cordl_internal_set_pixelQuantization(bool  value) ;

constexpr void __cordl_internal_set_splatPaste(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_stamp(::UnityW<::JBooth::MicroVerseCore::CopyStamp>  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x18143f940, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__ClearLayer() ;

static inline int32_t getStaticF__ClearMask() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_detailPasteShader() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_pasteStampShader() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_treePasteShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* i___JBooth__MicroVerseCore__IDetailModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* i___JBooth__MicroVerseCore__IHeightModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IHoleModifier"
constexpr ::JBooth::MicroVerseCore::IHoleModifier* i___JBooth__MicroVerseCore__IHoleModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* i___JBooth__MicroVerseCore__ITextureModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* i___JBooth__MicroVerseCore__ITreeModifier() noexcept;

static inline void setStaticF__ClearLayer(int32_t  value) ;

static inline void setStaticF__ClearMask(int32_t  value) ;

static inline void setStaticF_detailPasteShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_pasteStampShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_treePasteShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyPasteStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyPasteStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyPasteStamp(CopyPasteStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyPasteStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyPasteStamp(CopyPasteStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18033};

/// @brief Field stamp, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::CopyStamp>  ___stamp;

/// @brief Field copyHeights, offset: 0x38, size: 0x1, def value: None
 bool  ___copyHeights;

/// @brief Field copyTexturing, offset: 0x39, size: 0x1, def value: None
 bool  ___copyTexturing;

/// @brief Field copyTrees, offset: 0x3a, size: 0x1, def value: None
 bool  ___copyTrees;

/// @brief Field copyDetails, offset: 0x3b, size: 0x1, def value: None
 bool  ___copyDetails;

/// @brief Field copyHoles, offset: 0x3c, size: 0x1, def value: None
 bool  ___copyHoles;

/// @brief Field applyHeights, offset: 0x3d, size: 0x1, def value: None
 bool  ___applyHeights;

/// @brief Field applyTexturing, offset: 0x3e, size: 0x1, def value: None
 bool  ___applyTexturing;

/// @brief Field applyTrees, offset: 0x3f, size: 0x1, def value: None
 bool  ___applyTrees;

/// @brief Field applyDetails, offset: 0x40, size: 0x1, def value: None
 bool  ___applyDetails;

/// @brief Field applyHoles, offset: 0x41, size: 0x1, def value: None
 bool  ___applyHoles;

/// @brief Field pixelQuantization, offset: 0x42, size: 0x1, def value: None
 bool  ___pixelQuantization;

/// @brief Field heightStamp, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::HeightStamp>  ___heightStamp;

/// @brief Field splatPaste, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___splatPaste;

/// @brief Field _mrt, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RenderBuffer>  ____mrt;

/// @brief Field channels, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ___channels;

/// @brief Field version, offset: 0x68, size: 0x4, def value: None
 int32_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___stamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___copyHeights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___copyTexturing) == 0x39, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___copyTrees) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___copyDetails) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___copyHoles) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___applyHeights) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___applyTexturing) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___applyTrees) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___applyDetails) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___applyHoles) == 0x41, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___pixelQuantization) == 0x42, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___heightStamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___splatPaste) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ____mrt) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___channels) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyPasteStamp, ___version) == 0x68, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::CopyPasteStamp) == 0x70, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
