#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectStamp)
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class IObjectModifier;
}
namespace JBooth::MicroVerseCore {
class ISpawner;
}
namespace JBooth::MicroVerseCore {
class ITextureModifier;
}
namespace JBooth::MicroVerseCore {
class ObjectData;
}
namespace JBooth::MicroVerseCore {
class ObjectJobHolder;
}
namespace JBooth::MicroVerseCore {
struct ObjectStamp_Lock;
}
namespace JBooth::MicroVerseCore {
class ObjectStamp_ParentObjectEntry;
}
namespace JBooth::MicroVerseCore {
struct ObjectStamp_Randomization;
}
namespace JBooth::MicroVerseCore {
class ObjectStamp_ReturnData;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
class TextureData;
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
class GameObject;
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
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct ObjectStamp_Lock;
}
namespace JBooth::MicroVerseCore {
class ObjectStamp;
}
namespace JBooth::MicroVerseCore {
class ObjectStamp_ParentObjectEntry;
}
namespace JBooth::MicroVerseCore {
class ObjectStamp_ReturnData;
}
namespace JBooth::MicroVerseCore {
struct ObjectStamp_Randomization;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::ObjectStamp_Lock);
MARK_REF_T(::JBooth::MicroVerseCore::ObjectStamp*);
MARK_REF_T(::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*);
MARK_REF_T(::JBooth::MicroVerseCore::ObjectStamp_ReturnData*);
MARK_VAL_T(::JBooth::MicroVerseCore::ObjectStamp_Randomization);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectStamp_Lock, "JBooth.MicroVerseCore", "ObjectStamp/Lock");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectStamp*, "JBooth.MicroVerseCore", "ObjectStamp");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*, "JBooth.MicroVerseCore", "ObjectStamp/ParentObjectEntry");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectStamp_ReturnData*, "JBooth.MicroVerseCore", "ObjectStamp/ReturnData");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectStamp_Randomization, "JBooth.MicroVerseCore", "ObjectStamp/Randomization");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.ObjectStamp/Lock
struct CORDL_TYPE ObjectStamp_Lock {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ObjectStamp_Lock_Unwrapped
enum struct __ObjectStamp_Lock_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_XY = static_cast<int32_t>(0x1),
__E_XZ = static_cast<int32_t>(0x2),
__E_YZ = static_cast<int32_t>(0x3),
__E_XYZ = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ObjectStamp_Lock_Unwrapped () const noexcept {
return static_cast<__ObjectStamp_Lock_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ObjectStamp_Lock() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ObjectStamp_Lock(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::JBooth::MicroVerseCore::ObjectStamp_Lock const None;

/// @brief Field XY value: I32(1)
static ::JBooth::MicroVerseCore::ObjectStamp_Lock const XY;

/// @brief Field XYZ value: I32(4)
static ::JBooth::MicroVerseCore::ObjectStamp_Lock const XYZ;

/// @brief Field XZ value: I32(2)
static ::JBooth::MicroVerseCore::ObjectStamp_Lock const XZ;

/// @brief Field YZ value: I32(3)
static ::JBooth::MicroVerseCore::ObjectStamp_Lock const YZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Lock, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectStamp_Lock) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.ObjectStamp::Lock, UnityEngine.Vector2
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.ObjectStamp/Randomization
struct CORDL_TYPE ObjectStamp_Randomization {
public:
// Declarations
 __declspec(property(get=get_alignDownhill, put=set_alignDownhill)) bool  alignDownhill;

 __declspec(property(get=get_densityByWeight, put=set_densityByWeight)) bool  densityByWeight;

 __declspec(property(get=get_disabled, put=set_disabled)) bool  disabled;

/// @brief Method get_alignDownhill, addr 0x18140de60, size 0x20, virtual false, abstract: false, final false
inline bool get_alignDownhill() ;

/// @brief Method get_densityByWeight, addr 0x18140de80, size 0x20, virtual false, abstract: false, final false
inline bool get_densityByWeight() ;

/// @brief Method get_disabled, addr 0x18140dea0, size 0x20, virtual false, abstract: false, final false
inline bool get_disabled() ;

/// @brief Method set_alignDownhill, addr 0x18140dec0, size 0x30, virtual false, abstract: false, final false
inline void set_alignDownhill(bool  value) ;

/// @brief Method set_densityByWeight, addr 0x18140def0, size 0x30, virtual false, abstract: false, final false
inline void set_densityByWeight(bool  value) ;

/// @brief Method set_disabled, addr 0x18140df20, size 0x30, virtual false, abstract: false, final false
inline void set_disabled(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectStamp_Randomization() ;

// Ctor Parameters [CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "weightRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rotationRangeX", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rotationRangeY", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rotationRangeZ", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleRangeX", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleRangeY", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleRangeZ", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleLock", ty: "::JBooth::MicroVerseCore::ObjectStamp_Lock", modifiers: "", def_value: None }, CppParam { name: "rotationLock", ty: "::JBooth::MicroVerseCore::ObjectStamp_Lock", modifiers: "", def_value: None }, CppParam { name: "slopeAlignment", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sink", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleMultiplierAtBoundaries", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ObjectStamp_Randomization(float_t  weight, ::UnityEngine::Vector2  weightRange, ::UnityEngine::Vector2  rotationRangeX, ::UnityEngine::Vector2  rotationRangeY, ::UnityEngine::Vector2  rotationRangeZ, ::UnityEngine::Vector2  scaleRangeX, ::UnityEngine::Vector2  scaleRangeY, ::UnityEngine::Vector2  scaleRangeZ, ::JBooth::MicroVerseCore::ObjectStamp_Lock  scaleLock, ::JBooth::MicroVerseCore::ObjectStamp_Lock  rotationLock, float_t  slopeAlignment, ::UnityEngine::Vector2  sink, float_t  scaleMultiplierAtBoundaries, int32_t  flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17920};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field weight, offset: 0x0, size: 0x4, def value: None
 float_t  weight;

/// @brief Field weightRange, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::Vector2  weightRange;

/// @brief Field rotationRangeX, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  rotationRangeX;

/// @brief Field rotationRangeY, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  rotationRangeY;

/// @brief Field rotationRangeZ, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  rotationRangeZ;

/// @brief Field scaleRangeX, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleRangeX;

/// @brief Field scaleRangeY, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleRangeY;

/// @brief Field scaleRangeZ, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleRangeZ;

/// @brief Field scaleLock, offset: 0x3c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::ObjectStamp_Lock  scaleLock;

/// @brief Field rotationLock, offset: 0x40, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::ObjectStamp_Lock  rotationLock;

/// @brief Field slopeAlignment, offset: 0x44, size: 0x4, def value: None
 float_t  slopeAlignment;

/// @brief Field sink, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  sink;

/// @brief Field scaleMultiplierAtBoundaries, offset: 0x50, size: 0x4, def value: None
 float_t  scaleMultiplierAtBoundaries;

/// @brief Field flags, offset: 0x54, size: 0x4, def value: None
 int32_t  flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, weight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, weightRange) == 0x4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, rotationRangeX) == 0xc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, rotationRangeY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, rotationRangeZ) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, scaleRangeX) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, scaleRangeY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, scaleRangeZ) == 0x34, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, scaleLock) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, rotationLock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, slopeAlignment) == 0x44, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, sink) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, scaleMultiplierAtBoundaries) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_Randomization, flags) == 0x54, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectStamp_Randomization) == 0x58, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjectStamp/ParentObjectEntry
class CORDL_TYPE ObjectStamp_ParentObjectEntry : public ::System::Object {
public:
// Declarations
/// @brief Field terrain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrain, put=__cordl_internal_set_terrain)) ::UnityW<::UnityEngine::Terrain>  terrain;

/// @brief Field transform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

static inline ::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_terrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_terrain() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectStamp_ParentObjectEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectStamp_ParentObjectEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectStamp_ParentObjectEntry(ObjectStamp_ParentObjectEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectStamp_ParentObjectEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectStamp_ParentObjectEntry(ObjectStamp_ParentObjectEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17921};

/// @brief Field terrain, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___terrain;

/// @brief Field transform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry, ___terrain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry, ___transform) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjectStamp/ReturnData
class CORDL_TYPE ObjectStamp_ReturnData : public ::System::Object {
public:
// Declarations
/// @brief Field positionWeight, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionWeight, put=__cordl_internal_set_positionWeight)) ::UnityW<::UnityEngine::RenderTexture>  positionWeight;

/// @brief Field rotationIndex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationIndex, put=__cordl_internal_set_rotationIndex)) ::UnityW<::UnityEngine::RenderTexture>  rotationIndex;

/// @brief Field scale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::UnityW<::UnityEngine::RenderTexture>  scale;

static inline ::JBooth::MicroVerseCore::ObjectStamp_ReturnData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_positionWeight() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_positionWeight() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_rotationIndex() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_rotationIndex() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_scale() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_positionWeight(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_rotationIndex(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_scale(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectStamp_ReturnData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectStamp_ReturnData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectStamp_ReturnData(ObjectStamp_ReturnData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectStamp_ReturnData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectStamp_ReturnData(ObjectStamp_ReturnData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17922};

/// @brief Field positionWeight, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___positionWeight;

/// @brief Field rotationIndex, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___rotationIndex;

/// @brief Field scale, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_ReturnData, ___positionWeight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_ReturnData, ___rotationIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp_ReturnData, ___scale) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectStamp_ReturnData) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.Stamp
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjectStamp
class CORDL_TYPE ObjectStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using Lock = ::JBooth::MicroVerseCore::ObjectStamp_Lock;

using ParentObjectEntry = ::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry;

using Randomization = ::JBooth::MicroVerseCore::ObjectStamp_Randomization;

using ReturnData = ::JBooth::MicroVerseCore::ObjectStamp_ReturnData;

/// @brief Field _ClearLayer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearLayer, put=setStaticF__ClearLayer)) int32_t  _ClearLayer;

/// @brief Field _ClearMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearMask, put=setStaticF__ClearMask)) int32_t  _ClearMask;

/// @brief Field _Curvemap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Curvemap, put=setStaticF__Curvemap)) int32_t  _Curvemap;

/// @brief Field _Density, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Density, put=setStaticF__Density)) int32_t  _Density;

/// @brief Field _Disc, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Disc, put=setStaticF__Disc)) int32_t  _Disc;

/// @brief Field _DiscStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DiscStrength, put=setStaticF__DiscStrength)) int32_t  _DiscStrength;

/// @brief Field _Flowmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Flowmap, put=setStaticF__Flowmap)) int32_t  _Flowmap;

/// @brief Field _HeightOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightOffset, put=setStaticF__HeightOffset)) int32_t  _HeightOffset;

/// @brief Field _Heightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap, put=setStaticF__Heightmap)) int32_t  _Heightmap;

/// @brief Field _IndexMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndexMap, put=setStaticF__IndexMap)) int32_t  _IndexMap;

/// @brief Field _InstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InstanceCount, put=setStaticF__InstanceCount)) int32_t  _InstanceCount;

/// @brief Field _MinHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MinHeight, put=setStaticF__MinHeight)) int32_t  _MinHeight;

/// @brief Field _ModWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ModWidth, put=setStaticF__ModWidth)) int32_t  _ModWidth;

/// @brief Field _Normalmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normalmap, put=setStaticF__Normalmap)) int32_t  _Normalmap;

/// @brief Field _ObjectMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ObjectMask, put=setStaticF__ObjectMask)) int32_t  _ObjectMask;

/// @brief Field _PlacementMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementMask, put=setStaticF__PlacementMask)) int32_t  _PlacementMask;

/// @brief Field _RandomTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RandomTex, put=setStaticF__RandomTex)) int32_t  _RandomTex;

/// @brief Field _Randomizations, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Randomizations, put=setStaticF__Randomizations)) int32_t  _Randomizations;

/// @brief Field _Seed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Seed, put=setStaticF__Seed)) int32_t  _Seed;

/// @brief Field _TerrainPixelCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainPixelCount, put=setStaticF__TerrainPixelCount)) int32_t  _TerrainPixelCount;

/// @brief Field _TextureLayerWeights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TextureLayerWeights, put=setStaticF__TextureLayerWeights)) int32_t  _TextureLayerWeights;

/// @brief Field _TotalWeights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TotalWeights, put=setStaticF__TotalWeights)) int32_t  _TotalWeights;

/// @brief Field _WeightMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightMap, put=setStaticF__WeightMap)) int32_t  _WeightMap;

/// @brief Field _YCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__YCount, put=setStaticF__YCount)) int32_t  _YCount;

/// @brief Field <destroyOnNextClear>k__BackingField, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__destroyOnNextClear_k__BackingField, put=__cordl_internal_set__destroyOnNextClear_k__BackingField)) bool  _destroyOnNextClear_k__BackingField;

/// @brief Field density, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) float_t  density;

 __declspec(property(get=get_destroyOnNextClear, put=set_destroyOnNextClear)) bool  destroyOnNextClear;

/// @brief Field filterSet, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field heightModAmount, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightModAmount, put=__cordl_internal_set_heightModAmount)) float_t  heightModAmount;

/// @brief Field heightModMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_heightModMat, put=setStaticF_heightModMat)) ::UnityW<::UnityEngine::Material>  heightModMat;

/// @brief Field heightModWidth, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightModWidth, put=__cordl_internal_set_heightModWidth)) float_t  heightModWidth;

/// @brief Field hideInHierarchy, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideInHierarchy, put=__cordl_internal_set_hideInHierarchy)) bool  hideInHierarchy;

/// @brief Field id, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field layer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::UnityW<::UnityEngine::TerrainLayer>  layer;

/// @brief Field layerWeight, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerWeight, put=__cordl_internal_set_layerWeight)) float_t  layerWeight;

/// @brief Field layerWidth, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerWidth, put=__cordl_internal_set_layerWidth)) float_t  layerWidth;

/// @brief Field material, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field maxDistanceFromObject, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromObject, put=__cordl_internal_set_maxDistanceFromObject)) float_t  maxDistanceFromObject;

/// @brief Field maxDistanceFromParent, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromParent, put=__cordl_internal_set_maxDistanceFromParent)) float_t  maxDistanceFromParent;

/// @brief Field maxDistanceFromTree, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromTree, put=__cordl_internal_set_maxDistanceFromTree)) float_t  maxDistanceFromTree;

/// @brief Field minDistanceFromObject, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromObject, put=__cordl_internal_set_minDistanceFromObject)) float_t  minDistanceFromObject;

/// @brief Field minDistanceFromParent, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromParent, put=__cordl_internal_set_minDistanceFromParent)) float_t  minDistanceFromParent;

/// @brief Field minDistanceFromTree, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromTree, put=__cordl_internal_set_minDistanceFromTree)) float_t  minDistanceFromTree;

/// @brief Field minHeight, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHeight, put=__cordl_internal_set_minHeight)) float_t  minHeight;

/// @brief Field objectShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_objectShader, put=setStaticF_objectShader)) ::UnityW<::UnityEngine::Shader>  objectShader;

/// @brief Field occludeOthers, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_occludeOthers, put=__cordl_internal_set_occludeOthers)) bool  occludeOthers;

/// @brief Field occludedByOthers, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_occludedByOthers, put=__cordl_internal_set_occludedByOthers)) bool  occludedByOthers;

/// @brief Field parentObject, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentObject, put=__cordl_internal_set_parentObject)) ::UnityW<::UnityEngine::Transform>  parentObject;

/// @brief Field parentObjects, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentObjects, put=__cordl_internal_set_parentObjects)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>*  parentObjects;

/// @brief Field poissonDisk, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_poissonDisk, put=__cordl_internal_set_poissonDisk)) ::UnityW<::UnityEngine::Texture2D>  poissonDisk;

/// @brief Field poissonDiskStrength, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_poissonDiskStrength, put=__cordl_internal_set_poissonDiskStrength)) float_t  poissonDiskStrength;

/// @brief Field prototypeIndexes, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototypeIndexes, put=__cordl_internal_set_prototypeIndexes)) ::ArrayW<int32_t>  prototypeIndexes;

/// @brief Field prototypes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototypes, put=__cordl_internal_set_prototypes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prototypes;

/// @brief Field randomTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_randomTexture, put=setStaticF_randomTexture)) ::UnityW<::UnityEngine::Texture2D>  randomTexture;

/// @brief Field randomizations, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomizations, put=__cordl_internal_set_randomizations)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>*  randomizations;

/// @brief Field returnedRTs, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnedRTs, put=__cordl_internal_set_returnedRTs)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>*  returnedRTs;

/// @brief Field sdfClamp, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_sdfClamp, put=__cordl_internal_set_sdfClamp)) bool  sdfClamp;

/// @brief Field sdfs, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sdfs, put=__cordl_internal_set_sdfs)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  sdfs;

/// @brief Field seed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) uint32_t  seed;

/// @brief Field spawnAsPrefab, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawnAsPrefab, put=__cordl_internal_set_spawnAsPrefab)) bool  spawnAsPrefab;

/// @brief Field spawnedInstances, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedInstances, put=__cordl_internal_set_spawnedInstances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  spawnedInstances;

/// @brief Field splatModMat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_splatModMat, put=setStaticF_splatModMat)) ::UnityW<::UnityEngine::Material>  splatModMat;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr operator  ::JBooth::MicroVerseCore::IObjectModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITextureModifier*() noexcept;

/// @brief Method ApplyObjectClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  od) ;

/// @brief Method ApplyObjectStamp, addr 0x18140a490, size 0x1390, virtual true, abstract: false, final true
inline void ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTextureStamp, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ClearSpawnedInstances, addr 0x18140b820, size 0x250, virtual false, abstract: false, final false
inline void ClearSpawnedInstances() ;

/// @brief Method Dispose, addr 0x18140ba70, size 0x1d0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FindParentInScene, addr 0x18140bc40, size 0x120, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindParentInScene(::UnityEngine::Terrain*  t) ;

/// @brief Method FindParentObject, addr 0x18140bd60, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindParentObject(::UnityEngine::Terrain*  t) ;

/// @brief Method GetBounds, addr 0x18140be20, size 0x1a0, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802edc30, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method GetSDF, addr 0x18140bfc0, size 0x70, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method Initialize, addr 0x18140c030, size 0x340, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InqTerrainLayers, addr 0x18140c370, size 0xa0, virtual true, abstract: false, final true
inline void InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes) ;

/// @brief Method NeedCurvatureMap, addr 0x18140c410, size 0x30, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedFlowMap, addr 0x18140c440, size 0x30, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

/// @brief Method NeedObjectClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedObjectClear() ;

/// @brief Method NeedParentSDF, addr 0x18140c470, size 0x30, virtual true, abstract: false, final true
inline bool NeedParentSDF() ;

/// @brief Method NeedSDF, addr 0x18140c4a0, size 0xa0, virtual true, abstract: false, final true
inline bool NeedSDF() ;

/// @brief Method NeedToGenerateSDFForChilden, addr 0x18140c540, size 0x90, virtual true, abstract: false, final true
inline bool NeedToGenerateSDFForChilden() ;

static inline ::JBooth::MicroVerseCore::ObjectStamp* New_ctor() ;

/// @brief Method OccludesOthers, addr 0x1802e56a0, size 0x10, virtual true, abstract: false, final true
inline bool OccludesOthers() ;

/// @brief Method OnDestroy, addr 0x18140c5d0, size 0xb0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18140c680, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18140c6a0, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18140c7f0, size 0x70, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessObjectStamp, addr 0x18140c860, size 0x730, virtual true, abstract: false, final true
inline void ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method RevealHiddenObjects, addr 0x18140cf90, size 0x1e0, virtual false, abstract: false, final false
inline void RevealHiddenObjects() ;

/// @brief Method SetSDF, addr 0x18140d170, size 0xc0, virtual true, abstract: false, final true
inline void SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SyncContainerActiveState, addr 0x18140d230, size 0xd0, virtual false, abstract: false, final false
inline void SyncContainerActiveState() ;

/// @brief Method UsesOtherObjectSDF, addr 0x18140d300, size 0x30, virtual true, abstract: false, final true
inline bool UsesOtherObjectSDF() ;

/// @brief Method UsesOtherTreeSDF, addr 0x18140d330, size 0x30, virtual true, abstract: false, final true
inline bool UsesOtherTreeSDF() ;

constexpr bool const& __cordl_internal_get__destroyOnNextClear_k__BackingField() const;

constexpr bool& __cordl_internal_get__destroyOnNextClear_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_density() const;

constexpr float_t& __cordl_internal_get_density() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

constexpr float_t const& __cordl_internal_get_heightModAmount() const;

constexpr float_t& __cordl_internal_get_heightModAmount() ;

constexpr float_t const& __cordl_internal_get_heightModWidth() const;

constexpr float_t& __cordl_internal_get_heightModWidth() ;

constexpr bool const& __cordl_internal_get_hideInHierarchy() const;

constexpr bool& __cordl_internal_get_hideInHierarchy() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_layer() const;

constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_layer() ;

constexpr float_t const& __cordl_internal_get_layerWeight() const;

constexpr float_t& __cordl_internal_get_layerWeight() ;

constexpr float_t const& __cordl_internal_get_layerWidth() const;

constexpr float_t& __cordl_internal_get_layerWidth() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromObject() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromObject() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromParent() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromParent() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromTree() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromTree() ;

constexpr float_t const& __cordl_internal_get_minDistanceFromObject() const;

constexpr float_t& __cordl_internal_get_minDistanceFromObject() ;

constexpr float_t const& __cordl_internal_get_minDistanceFromParent() const;

constexpr float_t& __cordl_internal_get_minDistanceFromParent() ;

constexpr float_t const& __cordl_internal_get_minDistanceFromTree() const;

constexpr float_t& __cordl_internal_get_minDistanceFromTree() ;

constexpr float_t const& __cordl_internal_get_minHeight() const;

constexpr float_t& __cordl_internal_get_minHeight() ;

constexpr bool const& __cordl_internal_get_occludeOthers() const;

constexpr bool& __cordl_internal_get_occludeOthers() ;

constexpr bool const& __cordl_internal_get_occludedByOthers() const;

constexpr bool& __cordl_internal_get_occludedByOthers() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentObject() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentObject() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>* const& __cordl_internal_get_parentObjects() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>*& __cordl_internal_get_parentObjects() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_poissonDisk() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_poissonDisk() ;

constexpr float_t const& __cordl_internal_get_poissonDiskStrength() const;

constexpr float_t& __cordl_internal_get_poissonDiskStrength() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_prototypeIndexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_prototypeIndexes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_prototypes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_prototypes() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>* const& __cordl_internal_get_randomizations() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>*& __cordl_internal_get_randomizations() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>* const& __cordl_internal_get_returnedRTs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>*& __cordl_internal_get_returnedRTs() ;

constexpr bool const& __cordl_internal_get_sdfClamp() const;

constexpr bool& __cordl_internal_get_sdfClamp() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_sdfs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_sdfs() ;

constexpr uint32_t const& __cordl_internal_get_seed() const;

constexpr uint32_t& __cordl_internal_get_seed() ;

constexpr bool const& __cordl_internal_get_spawnAsPrefab() const;

constexpr bool& __cordl_internal_get_spawnAsPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_spawnedInstances() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_spawnedInstances() ;

constexpr void __cordl_internal_set__destroyOnNextClear_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_density(float_t  value) ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_heightModAmount(float_t  value) ;

constexpr void __cordl_internal_set_heightModWidth(float_t  value) ;

constexpr void __cordl_internal_set_hideInHierarchy(bool  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value) ;

constexpr void __cordl_internal_set_layerWeight(float_t  value) ;

constexpr void __cordl_internal_set_layerWidth(float_t  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_maxDistanceFromObject(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceFromParent(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceFromTree(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromObject(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromParent(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromTree(float_t  value) ;

constexpr void __cordl_internal_set_minHeight(float_t  value) ;

constexpr void __cordl_internal_set_occludeOthers(bool  value) ;

constexpr void __cordl_internal_set_occludedByOthers(bool  value) ;

constexpr void __cordl_internal_set_parentObject(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentObjects(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>*  value) ;

constexpr void __cordl_internal_set_poissonDisk(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_poissonDiskStrength(float_t  value) ;

constexpr void __cordl_internal_set_prototypeIndexes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_prototypes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_randomizations(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>*  value) ;

constexpr void __cordl_internal_set_returnedRTs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>*  value) ;

constexpr void __cordl_internal_set_sdfClamp(bool  value) ;

constexpr void __cordl_internal_set_sdfs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_seed(uint32_t  value) ;

constexpr void __cordl_internal_set_spawnAsPrefab(bool  value) ;

constexpr void __cordl_internal_set_spawnedInstances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x18140d6f0, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__ClearLayer() ;

static inline int32_t getStaticF__ClearMask() ;

static inline int32_t getStaticF__Curvemap() ;

static inline int32_t getStaticF__Density() ;

static inline int32_t getStaticF__Disc() ;

static inline int32_t getStaticF__DiscStrength() ;

static inline int32_t getStaticF__Flowmap() ;

static inline int32_t getStaticF__HeightOffset() ;

static inline int32_t getStaticF__Heightmap() ;

static inline int32_t getStaticF__IndexMap() ;

static inline int32_t getStaticF__InstanceCount() ;

static inline int32_t getStaticF__MinHeight() ;

static inline int32_t getStaticF__ModWidth() ;

static inline int32_t getStaticF__Normalmap() ;

static inline int32_t getStaticF__ObjectMask() ;

static inline int32_t getStaticF__PlacementMask() ;

static inline int32_t getStaticF__RandomTex() ;

static inline int32_t getStaticF__Randomizations() ;

static inline int32_t getStaticF__Seed() ;

static inline int32_t getStaticF__TerrainPixelCount() ;

static inline int32_t getStaticF__TextureLayerWeights() ;

static inline int32_t getStaticF__TotalWeights() ;

static inline int32_t getStaticF__WeightMap() ;

static inline int32_t getStaticF__YCount() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_heightModMat() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_objectShader() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_randomTexture() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_splatModMat() ;

/// @brief Method get_destroyOnNextClear, addr 0x18140d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_destroyOnNextClear() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr ::JBooth::MicroVerseCore::IObjectModifier* i___JBooth__MicroVerseCore__IObjectModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* i___JBooth__MicroVerseCore__ITextureModifier() noexcept;

static inline void setStaticF__ClearLayer(int32_t  value) ;

static inline void setStaticF__ClearMask(int32_t  value) ;

static inline void setStaticF__Curvemap(int32_t  value) ;

static inline void setStaticF__Density(int32_t  value) ;

static inline void setStaticF__Disc(int32_t  value) ;

static inline void setStaticF__DiscStrength(int32_t  value) ;

static inline void setStaticF__Flowmap(int32_t  value) ;

static inline void setStaticF__HeightOffset(int32_t  value) ;

static inline void setStaticF__Heightmap(int32_t  value) ;

static inline void setStaticF__IndexMap(int32_t  value) ;

static inline void setStaticF__InstanceCount(int32_t  value) ;

static inline void setStaticF__MinHeight(int32_t  value) ;

static inline void setStaticF__ModWidth(int32_t  value) ;

static inline void setStaticF__Normalmap(int32_t  value) ;

static inline void setStaticF__ObjectMask(int32_t  value) ;

static inline void setStaticF__PlacementMask(int32_t  value) ;

static inline void setStaticF__RandomTex(int32_t  value) ;

static inline void setStaticF__Randomizations(int32_t  value) ;

static inline void setStaticF__Seed(int32_t  value) ;

static inline void setStaticF__TerrainPixelCount(int32_t  value) ;

static inline void setStaticF__TextureLayerWeights(int32_t  value) ;

static inline void setStaticF__TotalWeights(int32_t  value) ;

static inline void setStaticF__WeightMap(int32_t  value) ;

static inline void setStaticF__YCount(int32_t  value) ;

static inline void setStaticF_heightModMat(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_objectShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_randomTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

static inline void setStaticF_splatModMat(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method set_destroyOnNextClear, addr 0x18140d8b0, size 0x10, virtual false, abstract: false, final false
inline void set_destroyOnNextClear(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectStamp(ObjectStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectStamp(ObjectStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17923};

/// @brief Field id, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field spawnedInstances, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___spawnedInstances;

/// @brief Field spawnAsPrefab, offset: 0x40, size: 0x1, def value: None
 bool  ___spawnAsPrefab;

/// @brief Field randomizations, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>*  ___randomizations;

/// @brief Field hideInHierarchy, offset: 0x50, size: 0x1, def value: None
 bool  ___hideInHierarchy;

/// @brief Field parentObject, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentObject;

/// @brief Field seed, offset: 0x60, size: 0x4, def value: None
 uint32_t  ___seed;

/// @brief Field poissonDisk, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___poissonDisk;

/// @brief Field poissonDiskStrength, offset: 0x70, size: 0x4, def value: None
 float_t  ___poissonDiskStrength;

/// @brief Field density, offset: 0x74, size: 0x4, def value: None
 float_t  ___density;

/// @brief Field prototypes, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___prototypes;

/// @brief Field occludeOthers, offset: 0x80, size: 0x1, def value: None
 bool  ___occludeOthers;

/// @brief Field occludedByOthers, offset: 0x81, size: 0x1, def value: None
 bool  ___occludedByOthers;

/// @brief Field minDistanceFromTree, offset: 0x84, size: 0x4, def value: None
 float_t  ___minDistanceFromTree;

/// @brief Field maxDistanceFromTree, offset: 0x88, size: 0x4, def value: None
 float_t  ___maxDistanceFromTree;

/// @brief Field minDistanceFromObject, offset: 0x8c, size: 0x4, def value: None
 float_t  ___minDistanceFromObject;

/// @brief Field maxDistanceFromObject, offset: 0x90, size: 0x4, def value: None
 float_t  ___maxDistanceFromObject;

/// @brief Field minDistanceFromParent, offset: 0x94, size: 0x4, def value: None
 float_t  ___minDistanceFromParent;

/// @brief Field maxDistanceFromParent, offset: 0x98, size: 0x4, def value: None
 float_t  ___maxDistanceFromParent;

/// @brief Field sdfClamp, offset: 0x9c, size: 0x1, def value: None
 bool  ___sdfClamp;

/// @brief Field minHeight, offset: 0xa0, size: 0x4, def value: None
 float_t  ___minHeight;

/// @brief Field heightModAmount, offset: 0xa4, size: 0x4, def value: None
 float_t  ___heightModAmount;

/// @brief Field heightModWidth, offset: 0xa8, size: 0x4, def value: None
 float_t  ___heightModWidth;

/// @brief Field layer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  ___layer;

/// @brief Field layerWeight, offset: 0xb8, size: 0x4, def value: None
 float_t  ___layerWeight;

/// @brief Field layerWidth, offset: 0xbc, size: 0x4, def value: None
 float_t  ___layerWidth;

/// @brief Field filterSet, offset: 0xc0, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field material, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field parentObjects, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>*  ___parentObjects;

/// @brief Field sdfs, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___sdfs;

/// @brief Field <destroyOnNextClear>k__BackingField, offset: 0xe0, size: 0x1, def value: None
 bool  ____destroyOnNextClear_k__BackingField;

/// @brief Field prototypeIndexes, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___prototypeIndexes;

/// @brief Field returnedRTs, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>*  ___returnedRTs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___spawnedInstances) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___spawnAsPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___randomizations) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___hideInHierarchy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___parentObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___seed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___poissonDisk) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___poissonDiskStrength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___density) == 0x74, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___prototypes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___occludeOthers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___occludedByOthers) == 0x81, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___minDistanceFromTree) == 0x84, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___maxDistanceFromTree) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___minDistanceFromObject) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___maxDistanceFromObject) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___minDistanceFromParent) == 0x94, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___maxDistanceFromParent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___sdfClamp) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___minHeight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___heightModAmount) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___heightModWidth) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___layer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___layerWeight) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___layerWidth) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___filterSet) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___material) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___parentObjects) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___sdfs) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ____destroyOnNextClear_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___prototypeIndexes) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStamp, ___returnedRTs) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectStamp) == 0xf8, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
