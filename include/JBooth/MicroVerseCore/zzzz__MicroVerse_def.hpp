#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MicroVerse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MicroVerse)
namespace JBooth::MicroSplat {
class TextureArrayConfig;
}
namespace JBooth::MicroVerseCore {
class BufferCaptureTarget;
}
namespace JBooth::MicroVerseCore {
class DetailData;
}
namespace JBooth::MicroVerseCore {
class HeightmapData;
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
class ITextureModifier;
}
namespace JBooth::MicroVerseCore {
class MicroVerse_DataCache;
}
namespace JBooth::MicroVerseCore {
struct MicroVerse_InvalidateType;
}
namespace JBooth::MicroVerseCore {
class MicroVerse_TerrainLayersChanged;
}
namespace JBooth::MicroVerseCore {
class MicroVerse___c;
}
namespace JBooth::MicroVerseCore {
class ObjectData;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
class Options;
}
namespace JBooth::MicroVerseCore {
class RoadSystem;
}
namespace JBooth::MicroVerseCore {
class Road;
}
namespace JBooth::MicroVerseCore {
class SpawnProcessor;
}
namespace JBooth::MicroVerseCore {
class TextureData;
}
namespace JBooth::MicroVerseCore {
class TreeData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct MicroVerse_InvalidateType;
}
namespace JBooth::MicroVerseCore {
class MicroVerse;
}
namespace JBooth::MicroVerseCore {
class MicroVerse_DataCache;
}
namespace JBooth::MicroVerseCore {
class MicroVerse_TerrainLayersChanged;
}
namespace JBooth::MicroVerseCore {
class MicroVerse___c;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::MicroVerse_InvalidateType);
MARK_REF_T(::JBooth::MicroVerseCore::MicroVerse*);
MARK_REF_T(::JBooth::MicroVerseCore::MicroVerse_DataCache*);
MARK_REF_T(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*);
MARK_REF_T(::JBooth::MicroVerseCore::MicroVerse___c*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MicroVerse_InvalidateType, "JBooth.MicroVerseCore", "MicroVerse/InvalidateType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MicroVerse*, "JBooth.MicroVerseCore", "MicroVerse");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MicroVerse_DataCache*, "JBooth.MicroVerseCore", "MicroVerse/DataCache");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*, "JBooth.MicroVerseCore", "MicroVerse/TerrainLayersChanged");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MicroVerse___c*, "JBooth.MicroVerseCore", "MicroVerse/<>c");
// Dependencies System.MulticastDelegate
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MicroVerse/TerrainLayersChanged
class CORDL_TYPE MicroVerse_TerrainLayersChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::UnityEngine::TerrainLayer*>  newLayers, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<::UnityEngine::TerrainLayer*>  newLayers) ;

static inline ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroVerse_TerrainLayersChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse_TerrainLayersChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroVerse_TerrainLayersChanged(MicroVerse_TerrainLayersChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse_TerrainLayersChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroVerse_TerrainLayersChanged(MicroVerse_TerrainLayersChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged) == 0x80, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.MicroVerse/InvalidateType
struct CORDL_TYPE MicroVerse_InvalidateType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MicroVerse_InvalidateType_Unwrapped
enum struct __MicroVerse_InvalidateType_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_Splats = static_cast<int32_t>(0x1),
__E_Tree = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MicroVerse_InvalidateType_Unwrapped () const noexcept {
return static_cast<__MicroVerse_InvalidateType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MicroVerse_InvalidateType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MicroVerse_InvalidateType(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::JBooth::MicroVerseCore::MicroVerse_InvalidateType const All;

/// @brief Field Splats value: I32(1)
static ::JBooth::MicroVerseCore::MicroVerse_InvalidateType const Splats;

/// @brief Field Tree value: I32(2)
static ::JBooth::MicroVerseCore::MicroVerse_InvalidateType const Tree;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_InvalidateType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MicroVerse_InvalidateType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MicroVerse/DataCache
class CORDL_TYPE MicroVerse_DataCache : public ::System::Object {
public:
// Declarations
/// @brief Field curvatureMaps, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_curvatureMaps, put=__cordl_internal_set_curvatureMaps)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  curvatureMaps;

/// @brief Field detailDatas, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailDatas, put=__cordl_internal_set_detailDatas)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>*  detailDatas;

/// @brief Field flowMaps, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowMaps, put=__cordl_internal_set_flowMaps)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  flowMaps;

/// @brief Field heightMaps, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightMaps, put=__cordl_internal_set_heightMaps)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  heightMaps;

/// @brief Field holeMaps, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_holeMaps, put=__cordl_internal_set_holeMaps)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  holeMaps;

/// @brief Field indexMaps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexMaps, put=__cordl_internal_set_indexMaps)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  indexMaps;

/// @brief Field normalMaps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalMaps, put=__cordl_internal_set_normalMaps)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  normalMaps;

/// @brief Field objectDatas, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectDatas, put=__cordl_internal_set_objectDatas)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>*  objectDatas;

/// @brief Field occlusionDatas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusionDatas, put=__cordl_internal_set_occlusionDatas)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  occlusionDatas;

/// @brief Field treeDatas, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeDatas, put=__cordl_internal_set_treeDatas)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>*  treeDatas;

/// @brief Field weightMaps, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_weightMaps, put=__cordl_internal_set_weightMaps)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  weightMaps;

static inline ::JBooth::MicroVerseCore::MicroVerse_DataCache* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_curvatureMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_curvatureMaps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>* const& __cordl_internal_get_detailDatas() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>*& __cordl_internal_get_detailDatas() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_flowMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_flowMaps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_heightMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_heightMaps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_holeMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_holeMaps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_indexMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_indexMaps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_normalMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_normalMaps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>* const& __cordl_internal_get_objectDatas() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>*& __cordl_internal_get_objectDatas() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>* const& __cordl_internal_get_occlusionDatas() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*& __cordl_internal_get_occlusionDatas() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>* const& __cordl_internal_get_treeDatas() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>*& __cordl_internal_get_treeDatas() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_weightMaps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_weightMaps() ;

constexpr void __cordl_internal_set_curvatureMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_detailDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>*  value) ;

constexpr void __cordl_internal_set_flowMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_heightMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_holeMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_indexMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_normalMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_objectDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>*  value) ;

constexpr void __cordl_internal_set_occlusionDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  value) ;

constexpr void __cordl_internal_set_treeDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>*  value) ;

constexpr void __cordl_internal_set_weightMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

/// @brief Method .ctor, addr 0x18142a730, size 0x240, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroVerse_DataCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse_DataCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroVerse_DataCache(MicroVerse_DataCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse_DataCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroVerse_DataCache(MicroVerse_DataCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18019};

/// @brief Field heightMaps, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___heightMaps;

/// @brief Field normalMaps, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___normalMaps;

/// @brief Field occlusionDatas, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  ___occlusionDatas;

/// @brief Field indexMaps, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___indexMaps;

/// @brief Field weightMaps, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___weightMaps;

/// @brief Field curvatureMaps, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___curvatureMaps;

/// @brief Field flowMaps, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___flowMaps;

/// @brief Field holeMaps, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___holeMaps;

/// @brief Field treeDatas, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>*  ___treeDatas;

/// @brief Field detailDatas, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>*  ___detailDatas;

/// @brief Field objectDatas, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>*  ___objectDatas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___heightMaps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___normalMaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___occlusionDatas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___indexMaps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___weightMaps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___curvatureMaps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___flowMaps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___holeMaps) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___treeDatas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___detailDatas) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse_DataCache, ___objectDatas) == 0x60, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MicroVerse_DataCache) == 0x68, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MicroVerse/<>c
class CORDL_TYPE MicroVerse___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::JBooth::MicroVerseCore::MicroVerse___c*  __9;

/// @brief Field <>9__50_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__50_0, put=setStaticF___9__50_0)) ::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>*  __9__50_0;

/// @brief Field <>9__50_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__50_1, put=setStaticF___9__50_1)) ::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>*  __9__50_1;

/// @brief Field <>9__83_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__83_0, put=setStaticF___9__83_0)) ::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>*  __9__83_0;

/// @brief Field <>9__83_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__83_1, put=setStaticF___9__83_1)) ::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>*  __9__83_1;

static inline ::JBooth::MicroVerseCore::MicroVerse___c* New_ctor() ;

/// @brief Method <Modify>b__83_0, addr 0x181417c60, size 0x30, virtual false, abstract: false, final false
inline bool _Modify_b__83_0(::JBooth::MicroVerseCore::IModifier*  p) ;

/// @brief Method <Modify>b__83_1, addr 0x181417c60, size 0x30, virtual false, abstract: false, final false
inline bool _Modify_b__83_1(::JBooth::MicroVerseCore::ITextureModifier*  p) ;

/// @brief Method <SanatizeTerrainLayers>b__50_0, addr 0x18143d030, size 0x10, virtual false, abstract: false, final false
inline bool _SanatizeTerrainLayers_b__50_0(::UnityEngine::TerrainLayer*  item) ;

/// @brief Method <SanatizeTerrainLayers>b__50_1, addr 0x18143d040, size 0x20, virtual false, abstract: false, final false
inline ::StringW _SanatizeTerrainLayers_b__50_1(::UnityEngine::TerrainLayer*  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::JBooth::MicroVerseCore::MicroVerse___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>* getStaticF___9__50_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>* getStaticF___9__50_1() ;

static inline ::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>* getStaticF___9__83_0() ;

static inline ::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>* getStaticF___9__83_1() ;

static inline void setStaticF___9(::JBooth::MicroVerseCore::MicroVerse___c*  value) ;

static inline void setStaticF___9__50_0(::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>*  value) ;

static inline void setStaticF___9__50_1(::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>*  value) ;

static inline void setStaticF___9__83_0(::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>*  value) ;

static inline void setStaticF___9__83_1(::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroVerse___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroVerse___c(MicroVerse___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroVerse___c(MicroVerse___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::MicroVerse___c) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.MicroVerse::InvalidateType, System.Nullable`1<T>, UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Terrain
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MicroVerse
class CORDL_TYPE MicroVerse : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DataCache = ::JBooth::MicroVerseCore::MicroVerse_DataCache;

using InvalidateType = ::JBooth::MicroVerseCore::MicroVerse_InvalidateType;

using TerrainLayersChanged = ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged;

using __c = ::JBooth::MicroVerseCore::MicroVerse___c;

 __declspec(property(get=get_IsAddingHeightStamp, put=set_IsAddingHeightStamp)) bool  IsAddingHeightStamp;

 __declspec(property(get=get_IsHeightSyncd, put=set_IsHeightSyncd)) bool  IsHeightSyncd;

 __declspec(property(get=get_IsModifyingTerrain, put=set_IsModifyingTerrain)) bool  IsModifyingTerrain;

/// @brief Field OnBeginUpdating, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBeginUpdating, put=setStaticF_OnBeginUpdating)) ::UnityEngine::Events::UnityEvent*  OnBeginUpdating;

/// @brief Field OnCancelUpdating, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCancelUpdating, put=setStaticF_OnCancelUpdating)) ::UnityEngine::Events::UnityEvent*  OnCancelUpdating;

/// @brief Field OnFinishedUpdating, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnFinishedUpdating, put=setStaticF_OnFinishedUpdating)) ::UnityEngine::Events::UnityEvent*  OnFinishedUpdating;

/// @brief Field OnTerrainLayersChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTerrainLayersChanged, put=setStaticF_OnTerrainLayersChanged)) ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*  OnTerrainLayersChanged;

/// @brief Field _Height, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Height, put=setStaticF__Height)) int32_t  _Height;

/// @brief Field _Mapping, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mapping, put=setStaticF__Mapping)) int32_t  _Mapping;

/// @brief Field _NeighborIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NeighborIndex, put=setStaticF__NeighborIndex)) int32_t  _NeighborIndex;

/// @brief Field _NeighborWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NeighborWeight, put=setStaticF__NeighborWeight)) int32_t  _NeighborWeight;

/// @brief Field _TerrainIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainIndex, put=setStaticF__TerrainIndex)) int32_t  _TerrainIndex;

/// @brief Field _TerrainWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainWeight, put=setStaticF__TerrainWeight)) int32_t  _TerrainWeight;

/// @brief Field _Width, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Width, put=setStaticF__Width)) int32_t  _Width;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::JBooth::MicroVerseCore::MicroVerse>  _instance;

/// @brief Field _isAddingHeightStamp, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAddingHeightStamp, put=__cordl_internal_set__isAddingHeightStamp)) bool  _isAddingHeightStamp;

/// @brief Field _isHeightSyncd, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHeightSyncd, put=__cordl_internal_set__isHeightSyncd)) bool  _isHeightSyncd;

/// @brief Field _isModifyingTerrain, offset 0x8b, size 0x1 
 __declspec(property(get=__cordl_internal_get__isModifyingTerrain, put=__cordl_internal_set__isModifyingTerrain)) bool  _isModifyingTerrain;

/// @brief Field <noAsyncReadback>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__noAsyncReadback_k__BackingField, put=setStaticF__noAsyncReadback_k__BackingField)) bool  _noAsyncReadback_k__BackingField;

/// @brief Field _terrains, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__terrains, put=__cordl_internal_set__terrains)) ::ArrayW<::UnityW<::UnityEngine::Terrain>>  _terrains;

/// @brief Field allModifiers, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allModifiers, put=__cordl_internal_set_allModifiers)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>*  allModifiers;

/// @brief Field alphaSeamShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_alphaSeamShader, put=setStaticF_alphaSeamShader)) ::UnityW<::UnityEngine::ComputeShader>  alphaSeamShader;

/// @brief Field boundsSet, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_boundsSet, put=__cordl_internal_set_boundsSet)) bool  boundsSet;

/// @brief Field bufferCaptureTarget, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferCaptureTarget, put=__cordl_internal_set_bufferCaptureTarget)) ::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget>  bufferCaptureTarget;

/// @brief Field dataCache, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataCache, put=__cordl_internal_set_dataCache)) ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache;

/// @brief Field explicitTerrains, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_explicitTerrains, put=__cordl_internal_set_explicitTerrains)) ::ArrayW<::UnityW<::UnityEngine::Terrain>>  explicitTerrains;

/// @brief Field firstUpdate, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstUpdate, put=__cordl_internal_set_firstUpdate)) bool  firstUpdate;

/// @brief Field heightSeamShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_heightSeamShader, put=setStaticF_heightSeamShader)) ::UnityW<::UnityEngine::ComputeShader>  heightSeamShader;

/// @brief Field heightmapModifiers, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightmapModifiers, put=__cordl_internal_set_heightmapModifiers)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*  heightmapModifiers;

/// @brief Field holeCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_holeCount, put=__cordl_internal_set_holeCount)) int32_t  holeCount;

/// @brief Field holeModifiers, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_holeModifiers, put=__cordl_internal_set_holeModifiers)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>*  holeModifiers;

/// @brief Field indexRemap, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexRemap, put=__cordl_internal_set_indexRemap)) ::ArrayW<float_t>  indexRemap;

/// @brief Field indexRemapBuffer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexRemapBuffer, put=__cordl_internal_set_indexRemapBuffer)) ::UnityEngine::GraphicsBuffer*  indexRemapBuffer;

/// @brief Field invalidateBounds, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get_invalidateBounds, put=__cordl_internal_set_invalidateBounds)) ::UnityEngine::Bounds  invalidateBounds;

/// @brief Field invalidateType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_invalidateType, put=__cordl_internal_set_invalidateType)) ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  invalidateType;

/// @brief Field lastInvalidBounds, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get_lastInvalidBounds, put=__cordl_internal_set_lastInvalidBounds)) ::UnityEngine::Bounds  lastInvalidBounds;

/// @brief Field modifiedTerrains, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifiedTerrains, put=__cordl_internal_set_modifiedTerrains)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  modifiedTerrains;

/// @brief Field msConfig, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_msConfig, put=__cordl_internal_set_msConfig)) ::UnityW<::JBooth::MicroSplat::TextureArrayConfig>  msConfig;

/// @brief Field needHoleSync, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_needHoleSync, put=__cordl_internal_set_needHoleSync)) bool  needHoleSync;

/// @brief Field needUpdate, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_needUpdate, put=__cordl_internal_set_needUpdate)) bool  needUpdate;

/// @brief Field options, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::JBooth::MicroVerseCore::Options*  options;

/// @brief Field rasterToMega, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rasterToMega, put=setStaticF_rasterToMega)) ::UnityW<::UnityEngine::ComputeShader>  rasterToMega;

/// @brief Field rasterToTerrain, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rasterToTerrain, put=setStaticF_rasterToTerrain)) ::UnityW<::UnityEngine::ComputeShader>  rasterToTerrain;

/// @brief Field roadJobs, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_roadJobs, put=__cordl_internal_set_roadJobs)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>*  roadJobs;

/// @brief Field roadSystems, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_roadSystems, put=__cordl_internal_set_roadSystems)) ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>*  roadSystems;

/// @brief Field roadUpdateBounds, offset 0xb0, size 0x1c 
 __declspec(property(get=__cordl_internal_get_roadUpdateBounds, put=__cordl_internal_set_roadUpdateBounds)) ::System::Nullable_1<::UnityEngine::Bounds>  roadUpdateBounds;

/// @brief Field spawnProcessor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnProcessor, put=__cordl_internal_set_spawnProcessor)) ::JBooth::MicroVerseCore::SpawnProcessor*  spawnProcessor;

/// @brief Field splatmapModifiers, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_splatmapModifiers, put=__cordl_internal_set_splatmapModifiers)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  splatmapModifiers;

 __declspec(property(get=get_terrains, put=set_terrains)) ::ArrayW<::UnityW<::UnityEngine::Terrain>>  terrains;

/// @brief Method AddRoadJob, addr 0x181433e90, size 0x250, virtual false, abstract: false, final false
inline void AddRoadJob(::JBooth::MicroVerseCore::Road*  road, ::JBooth::MicroVerseCore::RoadSystem*  rs, ::UnityEngine::Bounds  b) ;

/// @brief Method Awake, addr 0x1814340e0, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelModify, addr 0x181434140, size 0x120, virtual false, abstract: false, final false
inline void CancelModify(bool  cancelRoads) ;

/// @brief Method CullTerrainList, addr 0x181434260, size 0x490, virtual false, abstract: false, final false
inline void CullTerrainList(bool  boundsCull) ;

/// @brief Method DoTerrainLayersMatch, addr 0x1814346f0, size 0x60, virtual false, abstract: false, final false
inline bool DoTerrainLayersMatch(::ArrayW<::UnityEngine::TerrainLayer*>  a, ::ArrayW<::UnityEngine::TerrainLayer*>  b) ;

/// @brief Method FindIndex, addr 0x181434750, size 0x70, virtual false, abstract: false, final false
inline float_t FindIndex(::ArrayW<::UnityEngine::TerrainLayer*>  protos, ::UnityEngine::TerrainLayer*  layer) ;

/// @brief Method GenerateHeightmap, addr 0x1814347c0, size 0x490, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GenerateHeightmap(::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*  heightmapModifiers, ::UnityEngine::Bounds  terrainBounds, ::JBooth::MicroVerseCore::OcclusionData*  od, bool  writeToCPU) ;

/// @brief Method GenerateSplatmaps, addr 0x181434c50, size 0x740, virtual false, abstract: false, final false
static inline void GenerateSplatmaps(::JBooth::MicroVerseCore::TextureData*  splatmapData, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  splatmapModifiers, ::UnityEngine::Bounds  terrainBounds, ::JBooth::MicroVerseCore::OcclusionData*  od, bool  writeToCPU) ;

/// @brief Method GetAllTerrains, addr 0x181435390, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> GetAllTerrains() ;

/// @brief Method GetMegasplatTexture, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> GetMegasplatTexture(::UnityEngine::Terrain*  terrain) ;

/// @brief Method Invalidate, addr 0x1814353b0, size 0xe0, virtual false, abstract: false, final false
inline void Invalidate(::System::Nullable_1<::UnityEngine::Bounds>  bounds, ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  type) ;

/// @brief Method IsUsingMicroSplat, addr 0x181435490, size 0x20, virtual false, abstract: false, final false
inline bool IsUsingMicroSplat() ;

/// @brief Method LateUpdate, addr 0x1814354b0, size 0xa0, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MapIndecies, addr 0x181435550, size 0x1c0, virtual false, abstract: false, final false
inline void MapIndecies(int32_t  kernelIndex, ::UnityEngine::Terrain*  terrain, ::UnityEngine::Terrain*  neighbor) ;

/// @brief Method Modify, addr 0x181435710, size 0x28c0, virtual false, abstract: false, final false
inline void Modify(bool  writeToCPU, bool  noAsync, bool  boundsCull) ;

static inline ::JBooth::MicroVerseCore::MicroVerse* New_ctor() ;

/// @brief Method OnDisable, addr 0x181437fd0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181438020, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RasterizeSplatMaps, addr 0x181438030, size 0x5e0, virtual false, abstract: false, final false
inline void RasterizeSplatMaps(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  indexMap, ::UnityEngine::RenderTexture*  weightMap, bool  writeToCPU) ;

/// @brief Method RequestHeightSaveback, addr 0x181438610, size 0x100, virtual false, abstract: false, final false
inline void RequestHeightSaveback() ;

/// @brief Method RevisionAllStamps, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void RevisionAllStamps() ;

/// @brief Method SanatizeTerrainLayers, addr 0x181438710, size 0x3f0, virtual false, abstract: false, final false
inline void SanatizeTerrainLayers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  splatmapModifiers, ::ArrayW<::UnityEngine::Terrain*>  allTerrains) ;

/// @brief Method SaveBackToTerrain, addr 0x181438b00, size 0x1b0, virtual false, abstract: false, final false
inline void SaveBackToTerrain(bool  forceFinishSpawnProcssing, bool  saveHoles) ;

/// @brief Method SeamAlphaMaps, addr 0x181438cb0, size 0x11f0, virtual false, abstract: false, final false
inline void SeamAlphaMaps(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method SeamHeightMaps, addr 0x181439ea0, size 0xae0, virtual false, abstract: false, final false
inline void SeamHeightMaps(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method SyncTerrainList, addr 0x18143a980, size 0x320, virtual false, abstract: false, final false
inline void SyncTerrainList() ;

/// @brief Method Update, addr 0x18143aca0, size 0x240, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__isAddingHeightStamp() const;

constexpr bool& __cordl_internal_get__isAddingHeightStamp() ;

constexpr bool const& __cordl_internal_get__isHeightSyncd() const;

constexpr bool& __cordl_internal_get__isHeightSyncd() ;

constexpr bool const& __cordl_internal_get__isModifyingTerrain() const;

constexpr bool& __cordl_internal_get__isModifyingTerrain() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& __cordl_internal_get__terrains() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& __cordl_internal_get__terrains() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>* const& __cordl_internal_get_allModifiers() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>*& __cordl_internal_get_allModifiers() ;

constexpr bool const& __cordl_internal_get_boundsSet() const;

constexpr bool& __cordl_internal_get_boundsSet() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget> const& __cordl_internal_get_bufferCaptureTarget() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget>& __cordl_internal_get_bufferCaptureTarget() ;

constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache* const& __cordl_internal_get_dataCache() const;

constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache*& __cordl_internal_get_dataCache() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& __cordl_internal_get_explicitTerrains() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& __cordl_internal_get_explicitTerrains() ;

constexpr bool const& __cordl_internal_get_firstUpdate() const;

constexpr bool& __cordl_internal_get_firstUpdate() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>* const& __cordl_internal_get_heightmapModifiers() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*& __cordl_internal_get_heightmapModifiers() ;

constexpr int32_t const& __cordl_internal_get_holeCount() const;

constexpr int32_t& __cordl_internal_get_holeCount() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>* const& __cordl_internal_get_holeModifiers() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>*& __cordl_internal_get_holeModifiers() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_indexRemap() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_indexRemap() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_indexRemapBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_indexRemapBuffer() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_invalidateBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_invalidateBounds() ;

constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType const& __cordl_internal_get_invalidateType() const;

constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType& __cordl_internal_get_invalidateType() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_lastInvalidBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_lastInvalidBounds() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get_modifiedTerrains() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get_modifiedTerrains() ;

constexpr ::UnityW<::JBooth::MicroSplat::TextureArrayConfig> const& __cordl_internal_get_msConfig() const;

constexpr ::UnityW<::JBooth::MicroSplat::TextureArrayConfig>& __cordl_internal_get_msConfig() ;

constexpr bool const& __cordl_internal_get_needHoleSync() const;

constexpr bool& __cordl_internal_get_needHoleSync() ;

constexpr bool const& __cordl_internal_get_needUpdate() const;

constexpr bool& __cordl_internal_get_needUpdate() ;

constexpr ::JBooth::MicroVerseCore::Options* const& __cordl_internal_get_options() const;

constexpr ::JBooth::MicroVerseCore::Options*& __cordl_internal_get_options() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>* const& __cordl_internal_get_roadJobs() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>*& __cordl_internal_get_roadJobs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>* const& __cordl_internal_get_roadSystems() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>*& __cordl_internal_get_roadSystems() ;

constexpr ::System::Nullable_1<::UnityEngine::Bounds> const& __cordl_internal_get_roadUpdateBounds() const;

constexpr ::System::Nullable_1<::UnityEngine::Bounds>& __cordl_internal_get_roadUpdateBounds() ;

constexpr ::JBooth::MicroVerseCore::SpawnProcessor* const& __cordl_internal_get_spawnProcessor() const;

constexpr ::JBooth::MicroVerseCore::SpawnProcessor*& __cordl_internal_get_spawnProcessor() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>* const& __cordl_internal_get_splatmapModifiers() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*& __cordl_internal_get_splatmapModifiers() ;

constexpr void __cordl_internal_set__isAddingHeightStamp(bool  value) ;

constexpr void __cordl_internal_set__isHeightSyncd(bool  value) ;

constexpr void __cordl_internal_set__isModifyingTerrain(bool  value) ;

constexpr void __cordl_internal_set__terrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value) ;

constexpr void __cordl_internal_set_allModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>*  value) ;

constexpr void __cordl_internal_set_boundsSet(bool  value) ;

constexpr void __cordl_internal_set_bufferCaptureTarget(::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget>  value) ;

constexpr void __cordl_internal_set_dataCache(::JBooth::MicroVerseCore::MicroVerse_DataCache*  value) ;

constexpr void __cordl_internal_set_explicitTerrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value) ;

constexpr void __cordl_internal_set_firstUpdate(bool  value) ;

constexpr void __cordl_internal_set_heightmapModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*  value) ;

constexpr void __cordl_internal_set_holeCount(int32_t  value) ;

constexpr void __cordl_internal_set_holeModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>*  value) ;

constexpr void __cordl_internal_set_indexRemap(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_indexRemapBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_invalidateBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_invalidateType(::JBooth::MicroVerseCore::MicroVerse_InvalidateType  value) ;

constexpr void __cordl_internal_set_lastInvalidBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_modifiedTerrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value) ;

constexpr void __cordl_internal_set_msConfig(::UnityW<::JBooth::MicroSplat::TextureArrayConfig>  value) ;

constexpr void __cordl_internal_set_needHoleSync(bool  value) ;

constexpr void __cordl_internal_set_needUpdate(bool  value) ;

constexpr void __cordl_internal_set_options(::JBooth::MicroVerseCore::Options*  value) ;

constexpr void __cordl_internal_set_roadJobs(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>*  value) ;

constexpr void __cordl_internal_set_roadSystems(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>*  value) ;

constexpr void __cordl_internal_set_roadUpdateBounds(::System::Nullable_1<::UnityEngine::Bounds>  value) ;

constexpr void __cordl_internal_set_spawnProcessor(::JBooth::MicroVerseCore::SpawnProcessor*  value) ;

constexpr void __cordl_internal_set_splatmapModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  value) ;

/// @brief Method .ctor, addr 0x18143b180, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnTerrainLayersChanged, addr 0x18143b380, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnTerrainLayersChanged(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*  value) ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnBeginUpdating() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnCancelUpdating() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnFinishedUpdating() ;

static inline ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged* getStaticF_OnTerrainLayersChanged() ;

static inline int32_t getStaticF__Height() ;

static inline int32_t getStaticF__Mapping() ;

static inline int32_t getStaticF__NeighborIndex() ;

static inline int32_t getStaticF__NeighborWeight() ;

static inline int32_t getStaticF__TerrainIndex() ;

static inline int32_t getStaticF__TerrainWeight() ;

static inline int32_t getStaticF__Width() ;

static inline ::UnityW<::JBooth::MicroVerseCore::MicroVerse> getStaticF__instance() ;

static inline bool getStaticF__noAsyncReadback_k__BackingField() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_alphaSeamShader() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_heightSeamShader() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_rasterToMega() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_rasterToTerrain() ;

/// @brief Method get_IsAddingHeightStamp, addr 0x1803115f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsAddingHeightStamp() ;

/// @brief Method get_IsHeightSyncd, addr 0x180422700, size 0x10, virtual false, abstract: false, final false
inline bool get_IsHeightSyncd() ;

/// @brief Method get_IsModifyingTerrain, addr 0x18143b430, size 0x10, virtual false, abstract: false, final false
inline bool get_IsModifyingTerrain() ;

/// @brief Method get_instance, addr 0x18143b440, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::JBooth::MicroVerseCore::MicroVerse> get_instance() ;

/// @brief Method get_noAsyncReadback, addr 0x18143b490, size 0x40, virtual false, abstract: false, final false
static inline bool get_noAsyncReadback() ;

/// @brief Method get_terrains, addr 0x18143b4d0, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_terrains() ;

/// @brief Method remove_OnTerrainLayersChanged, addr 0x18143b550, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnTerrainLayersChanged(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*  value) ;

static inline void setStaticF_OnBeginUpdating(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnCancelUpdating(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnFinishedUpdating(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnTerrainLayersChanged(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*  value) ;

static inline void setStaticF__Height(int32_t  value) ;

static inline void setStaticF__Mapping(int32_t  value) ;

static inline void setStaticF__NeighborIndex(int32_t  value) ;

static inline void setStaticF__NeighborWeight(int32_t  value) ;

static inline void setStaticF__TerrainIndex(int32_t  value) ;

static inline void setStaticF__TerrainWeight(int32_t  value) ;

static inline void setStaticF__Width(int32_t  value) ;

static inline void setStaticF__instance(::UnityW<::JBooth::MicroVerseCore::MicroVerse>  value) ;

static inline void setStaticF__noAsyncReadback_k__BackingField(bool  value) ;

static inline void setStaticF_alphaSeamShader(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_heightSeamShader(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_rasterToMega(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_rasterToTerrain(::UnityW<::UnityEngine::ComputeShader>  value) ;

/// @brief Method set_IsAddingHeightStamp, addr 0x180311a10, size 0x10, virtual false, abstract: false, final false
inline void set_IsAddingHeightStamp(bool  value) ;

/// @brief Method set_IsHeightSyncd, addr 0x18143b600, size 0x10, virtual false, abstract: false, final false
inline void set_IsHeightSyncd(bool  value) ;

/// @brief Method set_IsModifyingTerrain, addr 0x18143b610, size 0x60, virtual false, abstract: false, final false
inline void set_IsModifyingTerrain(bool  value) ;

/// @brief Method set_noAsyncReadback, addr 0x18143b670, size 0x50, virtual false, abstract: false, final false
static inline void set_noAsyncReadback(bool  value) ;

/// @brief Method set_terrains, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_terrains(::ArrayW<::UnityEngine::Terrain*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroVerse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroVerse(MicroVerse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroVerse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroVerse(MicroVerse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18021};

/// @brief Field options, offset: 0x20, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Options*  ___options;

/// @brief Field needHoleSync, offset: 0x28, size: 0x1, def value: None
 bool  ___needHoleSync;

/// @brief Field holeCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___holeCount;

/// @brief Field explicitTerrains, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Terrain>>  ___explicitTerrains;

/// @brief Field _terrains, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Terrain>>  ____terrains;

/// @brief Field bufferCaptureTarget, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget>  ___bufferCaptureTarget;

/// @brief Field spawnProcessor, offset: 0x48, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::SpawnProcessor*  ___spawnProcessor;

/// @brief Field invalidateType, offset: 0x50, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  ___invalidateType;

/// @brief Field needUpdate, offset: 0x54, size: 0x1, def value: None
 bool  ___needUpdate;

/// @brief Field invalidateBounds, offset: 0x58, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___invalidateBounds;

/// @brief Field lastInvalidBounds, offset: 0x70, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___lastInvalidBounds;

/// @brief Field boundsSet, offset: 0x88, size: 0x1, def value: None
 bool  ___boundsSet;

/// @brief Field firstUpdate, offset: 0x89, size: 0x1, def value: None
 bool  ___firstUpdate;

/// @brief Field _isHeightSyncd, offset: 0x8a, size: 0x1, def value: None
 bool  ____isHeightSyncd;

/// @brief Field _isModifyingTerrain, offset: 0x8b, size: 0x1, def value: None
 bool  ____isModifyingTerrain;

/// @brief Field _isAddingHeightStamp, offset: 0x8c, size: 0x1, def value: None
 bool  ____isAddingHeightStamp;

/// @brief Field indexRemap, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<float_t>  ___indexRemap;

/// @brief Field indexRemapBuffer, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___indexRemapBuffer;

/// @brief Field roadJobs, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>*  ___roadJobs;

/// @brief Field roadSystems, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>*  ___roadSystems;

/// @brief Field roadUpdateBounds, offset: 0xb0, size: 0x1c, def value: None
 ::System::Nullable_1<::UnityEngine::Bounds>  ___roadUpdateBounds;

/// @brief Field allModifiers, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>*  ___allModifiers;

/// @brief Field heightmapModifiers, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*  ___heightmapModifiers;

/// @brief Field splatmapModifiers, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  ___splatmapModifiers;

/// @brief Field holeModifiers, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>*  ___holeModifiers;

/// @brief Field dataCache, offset: 0xf0, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::MicroVerse_DataCache*  ___dataCache;

/// @brief Field modifiedTerrains, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  ___modifiedTerrains;

/// @brief Field msConfig, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroSplat::TextureArrayConfig>  ___msConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___needHoleSync) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___holeCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___explicitTerrains) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ____terrains) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___bufferCaptureTarget) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___spawnProcessor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___invalidateType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___needUpdate) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___invalidateBounds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___lastInvalidBounds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___boundsSet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___firstUpdate) == 0x89, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ____isHeightSyncd) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ____isModifyingTerrain) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ____isAddingHeightStamp) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___indexRemap) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___indexRemapBuffer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___roadJobs) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___roadSystems) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___roadUpdateBounds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___allModifiers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___heightmapModifiers) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___splatmapModifiers) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___holeModifiers) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___dataCache) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___modifiedTerrains) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MicroVerse, ___msConfig) == 0x100, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MicroVerse) == 0x108, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
