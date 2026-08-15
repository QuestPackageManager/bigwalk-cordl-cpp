#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Road.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__BendRules_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Road)
namespace JBooth::MicroVerseCore {
struct CacheSplineJob_PosQuat;
}
namespace JBooth::MicroVerseCore {
class Intersection_ConnectionPoint;
}
namespace JBooth::MicroVerseCore {
class Intersection;
}
namespace JBooth::MicroVerseCore {
class MeshCacheData;
}
namespace JBooth::MicroVerseCore {
class ObjJobHolder;
}
namespace JBooth::MicroVerseCore {
class ObjectSpawnJobLinearHolder;
}
namespace JBooth::MicroVerseCore {
class RoadConfig;
}
namespace JBooth::MicroVerseCore {
class RoadSystem;
}
namespace JBooth::MicroVerseCore {
struct Road_BendMeshData;
}
namespace JBooth::MicroVerseCore {
struct Road_Orientation;
}
namespace JBooth::MicroVerseCore {
class Road_OverlayEntry;
}
namespace JBooth::MicroVerseCore {
class Road_SplineChoiceData;
}
namespace JBooth::MicroVerseCore {
class Road_SplineChoices;
}
namespace JBooth::MicroVerseCore {
class Road_SplineShapeData;
}
namespace JBooth::MicroVerseCore {
class VertexJobHolder;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct Random;
}
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct Road_Orientation;
}
namespace JBooth::MicroVerseCore {
class Road;
}
namespace JBooth::MicroVerseCore {
class Road_OverlayEntry;
}
namespace JBooth::MicroVerseCore {
class Road_SplineChoiceData;
}
namespace JBooth::MicroVerseCore {
class Road_SplineChoices;
}
namespace JBooth::MicroVerseCore {
class Road_SplineShapeData;
}
namespace JBooth::MicroVerseCore {
struct Road_BendMeshData;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::Road_Orientation);
MARK_REF_T(::JBooth::MicroVerseCore::Road*);
MARK_REF_T(::JBooth::MicroVerseCore::Road_OverlayEntry*);
MARK_REF_T(::JBooth::MicroVerseCore::Road_SplineChoiceData*);
MARK_REF_T(::JBooth::MicroVerseCore::Road_SplineChoices*);
MARK_REF_T(::JBooth::MicroVerseCore::Road_SplineShapeData*);
MARK_VAL_T(::JBooth::MicroVerseCore::Road_BendMeshData);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Road_Orientation, "JBooth.MicroVerseCore", "Road/Orientation");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Road*, "JBooth.MicroVerseCore", "Road");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Road_OverlayEntry*, "JBooth.MicroVerseCore", "Road/OverlayEntry");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Road_SplineChoiceData*, "JBooth.MicroVerseCore", "Road/SplineChoiceData");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Road_SplineChoices*, "JBooth.MicroVerseCore", "Road/SplineChoices");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Road_SplineShapeData*, "JBooth.MicroVerseCore", "Road/SplineShapeData");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Road_BendMeshData, "JBooth.MicroVerseCore", "Road/BendMeshData");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Road/OverlayEntry
class CORDL_TYPE Road_OverlayEntry : public ::System::Object {
public:
// Declarations
/// @brief Field label, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::StringW  label;

/// @brief Field none, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_none, put=__cordl_internal_set_none)) bool  none;

/// @brief Field prefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

static inline ::JBooth::MicroVerseCore::Road_OverlayEntry* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_label() const;

constexpr ::StringW& __cordl_internal_get_label() ;

constexpr bool const& __cordl_internal_get_none() const;

constexpr bool& __cordl_internal_get_none() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_label(::StringW  value) ;

constexpr void __cordl_internal_set_none(bool  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Road_OverlayEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Road_OverlayEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Road_OverlayEntry(Road_OverlayEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Road_OverlayEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Road_OverlayEntry(Road_OverlayEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17937};

/// @brief Field label, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___label;

/// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field none, offset: 0x20, size: 0x1, def value: None
 bool  ___none;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Road_OverlayEntry, ___label) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_OverlayEntry, ___prefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_OverlayEntry, ___none) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Road_OverlayEntry) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Road/SplineChoiceData
class CORDL_TYPE Road_SplineChoiceData : public ::System::Object {
public:
// Declarations
/// @brief Field overlayEntries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlayEntries, put=__cordl_internal_set_overlayEntries)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>*  overlayEntries;

/// @brief Field roadPrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_roadPrefab, put=__cordl_internal_set_roadPrefab)) ::UnityW<::UnityEngine::GameObject>  roadPrefab;

/// @brief Method FindOverlayEntry, addr 0x181417860, size 0xa0, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::Road_OverlayEntry* FindOverlayEntry(::StringW  label) ;

/// @brief Method FindOverlayEntry, addr 0x181417900, size 0xa0, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::Road_OverlayEntry* FindOverlayEntry(::UnityEngine::GameObject*  prefab) ;

static inline ::JBooth::MicroVerseCore::Road_SplineChoiceData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>* const& __cordl_internal_get_overlayEntries() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>*& __cordl_internal_get_overlayEntries() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_roadPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_roadPrefab() ;

constexpr void __cordl_internal_set_overlayEntries(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>*  value) ;

constexpr void __cordl_internal_set_roadPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1814179a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Road_SplineChoiceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Road_SplineChoiceData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Road_SplineChoiceData(Road_SplineChoiceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Road_SplineChoiceData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Road_SplineChoiceData(Road_SplineChoiceData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17938};

/// @brief Field roadPrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___roadPrefab;

/// @brief Field overlayEntries, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>*  ___overlayEntries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Road_SplineChoiceData, ___roadPrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_SplineChoiceData, ___overlayEntries) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Road_SplineChoiceData) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Road/SplineChoices
class CORDL_TYPE Road_SplineChoices : public ::System::Object {
public:
// Declarations
/// @brief Field choices, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_choices, put=__cordl_internal_set_choices)) ::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  choices;

static inline ::JBooth::MicroVerseCore::Road_SplineChoices* New_ctor() ;

constexpr ::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>* const& __cordl_internal_get_choices() const;

constexpr ::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*& __cordl_internal_get_choices() ;

constexpr void __cordl_internal_set_choices(::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  value) ;

/// @brief Method .ctor, addr 0x1814179f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Road_SplineChoices() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Road_SplineChoices", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Road_SplineChoices(Road_SplineChoices && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Road_SplineChoices", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Road_SplineChoices(Road_SplineChoices const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17939};

/// @brief Field choices, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  ___choices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Road_SplineChoices, ___choices) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Road_SplineChoices) == 0x18, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Road/SplineShapeData
class CORDL_TYPE Road_SplineShapeData : public ::System::Object {
public:
// Declarations
/// @brief Field shapeData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shapeData, put=__cordl_internal_set_shapeData)) ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>*  shapeData;

static inline ::JBooth::MicroVerseCore::Road_SplineShapeData* New_ctor() ;

constexpr ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>* const& __cordl_internal_get_shapeData() const;

constexpr ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>*& __cordl_internal_get_shapeData() ;

constexpr void __cordl_internal_set_shapeData(::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>*  value) ;

/// @brief Method .ctor, addr 0x181417a40, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Road_SplineShapeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Road_SplineShapeData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Road_SplineShapeData(Road_SplineShapeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Road_SplineShapeData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Road_SplineShapeData(Road_SplineShapeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17940};

/// @brief Field shapeData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>*  ___shapeData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Road_SplineShapeData, ___shapeData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Road_SplineShapeData) == 0x18, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Road/Orientation
struct CORDL_TYPE Road_Orientation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Road_Orientation_Unwrapped
enum struct __Road_Orientation_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Road_Orientation_Unwrapped () const noexcept {
return static_cast<__Road_Orientation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Road_Orientation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Road_Orientation(int32_t  value__) noexcept;

/// @brief Field X value: I32(0)
static ::JBooth::MicroVerseCore::Road_Orientation const X;

/// @brief Field Z value: I32(2)
static ::JBooth::MicroVerseCore::Road_Orientation const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Road_Orientation, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Road_Orientation) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.BendRules::CullMode, JBooth.MicroVerseCore.CacheSplineJob::PosQuat, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.Vector2
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Road/BendMeshData
struct CORDL_TYPE Road_BendMeshData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Road_BendMeshData() ;

// Ctor Parameters [CppParam { name: "owner", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "mf", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: None }, CppParam { name: "mc", ty: "::UnityW<::UnityEngine::MeshCollider>", modifiers: "", def_value: None }, CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "orient", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "posQuats", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: None }, CppParam { name: "cacheSplineJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "cullMode", ty: "::JBooth::MicroVerseCore::BendRules_CullMode", modifiers: "", def_value: None }, CppParam { name: "globalScaleBegin", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "globalScaleEnd", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr Road_BendMeshData(::UnityW<::UnityEngine::GameObject>  owner, ::UnityW<::UnityEngine::MeshFilter>  mf, ::UnityW<::UnityEngine::MeshCollider>  mc, ::UnityW<::UnityEngine::Mesh>  mesh, float_t  start, float_t  range, float_t  meshLength, float_t  scale, int32_t  orient, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, ::Unity::Jobs::JobHandle  cacheSplineJob, ::JBooth::MicroVerseCore::BendRules_CullMode  cullMode, ::UnityEngine::Vector2  globalScaleBegin, ::UnityEngine::Vector2  globalScaleEnd) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field owner, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  owner;

/// @brief Field mf, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  mf;

/// @brief Field mc, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  mc;

/// @brief Field mesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field start, offset: 0x20, size: 0x4, def value: None
 float_t  start;

/// @brief Field range, offset: 0x24, size: 0x4, def value: None
 float_t  range;

/// @brief Field meshLength, offset: 0x28, size: 0x4, def value: None
 float_t  meshLength;

/// @brief Field scale, offset: 0x2c, size: 0x4, def value: None
 float_t  scale;

/// @brief Field orient, offset: 0x30, size: 0x4, def value: None
 int32_t  orient;

/// @brief Field posQuats, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats;

/// @brief Field cacheSplineJob, offset: 0x48, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  cacheSplineJob;

/// @brief Field cullMode, offset: 0x58, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BendRules_CullMode  cullMode;

/// @brief Field globalScaleBegin, offset: 0x5c, size: 0x8, def value: None
 ::UnityEngine::Vector2  globalScaleBegin;

/// @brief Field globalScaleEnd, offset: 0x64, size: 0x8, def value: None
 ::UnityEngine::Vector2  globalScaleEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, owner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, mf) == 0x8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, mc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, start) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, range) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, meshLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, scale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, orient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, posQuats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, cacheSplineJob) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, cullMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, globalScaleBegin) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road_BendMeshData, globalScaleEnd) == 0x64, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Road_BendMeshData) == 0x70, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.CacheSplineJob::PosQuat, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, UnityEngine.MonoBehaviour, UnityEngine.Splines.NativeSpline
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Road
class CORDL_TYPE Road : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BendMeshData = ::JBooth::MicroVerseCore::Road_BendMeshData;

using Orientation = ::JBooth::MicroVerseCore::Road_Orientation;

using OverlayEntry = ::JBooth::MicroVerseCore::Road_OverlayEntry;

using SplineChoiceData = ::JBooth::MicroVerseCore::Road_SplineChoiceData;

using SplineChoices = ::JBooth::MicroVerseCore::Road_SplineChoices;

using SplineShapeData = ::JBooth::MicroVerseCore::Road_SplineShapeData;

/// @brief Field allowRoll, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowRoll, put=__cordl_internal_set_allowRoll)) bool  allowRoll;

/// @brief Field beginConnector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_beginConnector, put=__cordl_internal_set_beginConnector)) ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  beginConnector;

/// @brief Field bendJobs, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_bendJobs, put=__cordl_internal_set_bendJobs)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>*  bendJobs;

/// @brief Field cachePosQuats, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_cachePosQuats, put=__cordl_internal_set_cachePosQuats)) ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  cachePosQuats;

/// @brief Field children, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_children, put=__cordl_internal_set_children)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  children;

/// @brief Field config, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  config;

/// @brief Field defaultChoiceData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultChoiceData, put=__cordl_internal_set_defaultChoiceData)) ::JBooth::MicroVerseCore::Road_SplineChoiceData*  defaultChoiceData;

/// @brief Field endConnector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_endConnector, put=__cordl_internal_set_endConnector)) ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  endConnector;

/// @brief Field instanceName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceName, put=__cordl_internal_set_instanceName)) ::StringW  instanceName;

/// @brief Field itersectionCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itersectionCache, put=setStaticF_itersectionCache)) ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>*  itersectionCache;

/// @brief Field meshCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_meshCache, put=setStaticF_meshCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>*  meshCache;

/// @brief Field meshes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes;

/// @brief Field modifiesTerrain, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifiesTerrain, put=__cordl_internal_set_modifiesTerrain)) bool  modifiesTerrain;

/// @brief Field nspline, offset 0x90, size 0x48 
 __declspec(property(get=__cordl_internal_get_nspline, put=__cordl_internal_set_nspline)) ::UnityEngine::Splines::NativeSpline  nspline;

/// @brief Field objJobHolder, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_objJobHolder, put=__cordl_internal_set_objJobHolder)) ::JBooth::MicroVerseCore::ObjJobHolder*  objJobHolder;

/// @brief Field seed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) int32_t  seed;

/// @brief Field spawnLinearJobs, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnLinearJobs, put=__cordl_internal_set_spawnLinearJobs)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>*  spawnLinearJobs;

/// @brief Field splineContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineContainer, put=__cordl_internal_set_splineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer;

/// @brief Field splineOverlayChoices, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineOverlayChoices, put=__cordl_internal_set_splineOverlayChoices)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>*  splineOverlayChoices;

/// @brief Field splineShapes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineShapes, put=__cordl_internal_set_splineShapes)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>*  splineShapes;

/// @brief Field splineWidthArray, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_splineWidthArray, put=__cordl_internal_set_splineWidthArray)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  splineWidthArray;

/// @brief Method Bend, addr 0x18140eaa0, size 0x10f0, virtual false, abstract: false, final false
inline void Bend(::UnityEngine::GameObject*  prefab, float_t  start, float_t  range, float_t  meshLength, float_t  scale, int32_t  orient, float_t  curLength, float_t  totalLength, ::JBooth::MicroVerseCore::ObjJobHolder*  objJobHolder, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, ::Unity::Jobs::JobHandle  cacheSplineJob, ::by_ref<::Unity::Mathematics::Random>  random, ::JBooth::MicroVerseCore::RoadSystem*  roadSystem) ;

/// @brief Method BendMesh, addr 0x18140e280, size 0x820, virtual false, abstract: false, final false
inline void BendMesh(::JBooth::MicroVerseCore::Road_BendMeshData  bd) ;

/// @brief Method CancelJobs, addr 0x18140fb90, size 0x210, virtual false, abstract: false, final false
inline void CancelJobs() ;

/// @brief Method CleanupMeshes, addr 0x18140fda0, size 0x3a0, virtual false, abstract: false, final false
inline void CleanupMeshes() ;

/// @brief Method ClearCache, addr 0x181410140, size 0x100, virtual false, abstract: false, final false
static inline void ClearCache() ;

/// @brief Method FindChoiceData, addr 0x181410240, size 0x1c0, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::Road_SplineChoiceData* FindChoiceData(float_t  normalized_t) ;

/// @brief Method Generate, addr 0x181410400, size 0x2c0, virtual false, abstract: false, final false
inline void Generate(::JBooth::MicroVerseCore::RoadSystem*  rs, bool  updateMS) ;

/// @brief Method LaunchJobs, addr 0x1814106c0, size 0xd10, virtual false, abstract: false, final false
inline void LaunchJobs(::JBooth::MicroVerseCore::RoadSystem*  rs) ;

static inline ::JBooth::MicroVerseCore::Road* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1814113d0, size 0x70, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ProcessJobs, addr 0x181411440, size 0xbb0, virtual false, abstract: false, final false
inline void ProcessJobs(::JBooth::MicroVerseCore::RoadSystem*  rs) ;

/// @brief Method SetHideFlags, addr 0x181411ff0, size 0xb0, virtual false, abstract: false, final false
static inline void SetHideFlags(::UnityEngine::Object*  o, ::JBooth::MicroVerseCore::RoadSystem*  rs) ;

/// @brief Method UpdateConnections, addr 0x1814120a0, size 0x770, virtual false, abstract: false, final false
inline void UpdateConnections(::JBooth::MicroVerseCore::RoadSystem*  systemRoot, bool  allowDisconnnect, bool  autoGrabDistance, float_t  grabDistance) ;

constexpr bool const& __cordl_internal_get_allowRoll() const;

constexpr bool& __cordl_internal_get_allowRoll() ;

constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint* const& __cordl_internal_get_beginConnector() const;

constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*& __cordl_internal_get_beginConnector() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>* const& __cordl_internal_get_bendJobs() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>*& __cordl_internal_get_bendJobs() ;

constexpr ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat> const& __cordl_internal_get_cachePosQuats() const;

constexpr ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>& __cordl_internal_get_cachePosQuats() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_children() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_children() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& __cordl_internal_get_config() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& __cordl_internal_get_config() ;

constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData* const& __cordl_internal_get_defaultChoiceData() const;

constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData*& __cordl_internal_get_defaultChoiceData() ;

constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint* const& __cordl_internal_get_endConnector() const;

constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*& __cordl_internal_get_endConnector() ;

constexpr ::StringW const& __cordl_internal_get_instanceName() const;

constexpr ::StringW& __cordl_internal_get_instanceName() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_meshes() ;

constexpr bool const& __cordl_internal_get_modifiesTerrain() const;

constexpr bool& __cordl_internal_get_modifiesTerrain() ;

constexpr ::UnityEngine::Splines::NativeSpline const& __cordl_internal_get_nspline() const;

constexpr ::UnityEngine::Splines::NativeSpline& __cordl_internal_get_nspline() ;

constexpr ::JBooth::MicroVerseCore::ObjJobHolder* const& __cordl_internal_get_objJobHolder() const;

constexpr ::JBooth::MicroVerseCore::ObjJobHolder*& __cordl_internal_get_objJobHolder() ;

constexpr int32_t const& __cordl_internal_get_seed() const;

constexpr int32_t& __cordl_internal_get_seed() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>* const& __cordl_internal_get_spawnLinearJobs() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>*& __cordl_internal_get_spawnLinearJobs() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_splineContainer() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_splineContainer() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>* const& __cordl_internal_get_splineOverlayChoices() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>*& __cordl_internal_get_splineOverlayChoices() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>* const& __cordl_internal_get_splineShapes() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>*& __cordl_internal_get_splineShapes() ;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> const& __cordl_internal_get_splineWidthArray() const;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>& __cordl_internal_get_splineWidthArray() ;

constexpr void __cordl_internal_set_allowRoll(bool  value) ;

constexpr void __cordl_internal_set_beginConnector(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  value) ;

constexpr void __cordl_internal_set_bendJobs(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>*  value) ;

constexpr void __cordl_internal_set_cachePosQuats(::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  value) ;

constexpr void __cordl_internal_set_children(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value) ;

constexpr void __cordl_internal_set_defaultChoiceData(::JBooth::MicroVerseCore::Road_SplineChoiceData*  value) ;

constexpr void __cordl_internal_set_endConnector(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  value) ;

constexpr void __cordl_internal_set_instanceName(::StringW  value) ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_modifiesTerrain(bool  value) ;

constexpr void __cordl_internal_set_nspline(::UnityEngine::Splines::NativeSpline  value) ;

constexpr void __cordl_internal_set_objJobHolder(::JBooth::MicroVerseCore::ObjJobHolder*  value) ;

constexpr void __cordl_internal_set_seed(int32_t  value) ;

constexpr void __cordl_internal_set_spawnLinearJobs(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>*  value) ;

constexpr void __cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_splineOverlayChoices(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>*  value) ;

constexpr void __cordl_internal_set_splineShapes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>*  value) ;

constexpr void __cordl_internal_set_splineWidthArray(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  value) ;

/// @brief Method .ctor, addr 0x1814128c0, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>* getStaticF_itersectionCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>* getStaticF_meshCache() ;

static inline void setStaticF_itersectionCache(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>*  value) ;

static inline void setStaticF_meshCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Road() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Road", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Road(Road && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Road", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Road(Road const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17943};

/// @brief Field splineContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___splineContainer;

/// @brief Field allowRoll, offset: 0x28, size: 0x1, def value: None
 bool  ___allowRoll;

/// @brief Field modifiesTerrain, offset: 0x29, size: 0x1, def value: None
 bool  ___modifiesTerrain;

/// @brief Field beginConnector, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  ___beginConnector;

/// @brief Field endConnector, offset: 0x38, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  ___endConnector;

/// @brief Field defaultChoiceData, offset: 0x40, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Road_SplineChoiceData*  ___defaultChoiceData;

/// @brief Field splineOverlayChoices, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>*  ___splineOverlayChoices;

/// @brief Field splineShapes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>*  ___splineShapes;

/// @brief Field seed, offset: 0x58, size: 0x4, def value: None
 int32_t  ___seed;

/// @brief Field config, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  ___config;

/// @brief Field instanceName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___instanceName;

/// @brief Field children, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___children;

/// @brief Field meshes, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___meshes;

/// @brief Field objJobHolder, offset: 0x80, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::ObjJobHolder*  ___objJobHolder;

/// @brief Field bendJobs, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>*  ___bendJobs;

/// @brief Field nspline, offset: 0x90, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  ___nspline;

/// @brief Field cachePosQuats, offset: 0xd8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  ___cachePosQuats;

/// @brief Field splineWidthArray, offset: 0xe8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  ___splineWidthArray;

/// @brief Field spawnLinearJobs, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>*  ___spawnLinearJobs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___splineContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___allowRoll) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___modifiesTerrain) == 0x29, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___beginConnector) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___endConnector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___defaultChoiceData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___splineOverlayChoices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___splineShapes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___seed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___config) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___instanceName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___children) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___meshes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___objJobHolder) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___bendJobs) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___nspline) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___cachePosQuats) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___splineWidthArray) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Road, ___spawnLinearJobs) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Road) == 0x100, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
