#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/Splines/zzzz__ExtrudeSettings_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineMesh)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines::ExtrusionShapes {
class Circle;
}
namespace UnityEngine::Splines {
template<typename T>
struct ExtrudeSettings_1;
}
namespace UnityEngine::Splines {
class SplineMesh_ISplineVertexData;
}
namespace UnityEngine::Splines {
struct SplineMesh_VertexData;
}
namespace UnityEngine::Splines {
template<typename T,typename K>
struct SplineMesh___c__DisplayClass19_0_2;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineMesh;
}
namespace UnityEngine::Splines {
class SplineMesh_ISplineVertexData;
}
namespace UnityEngine::Splines {
struct SplineMesh_VertexData;
}
namespace UnityEngine::Splines {
template<typename T,typename K>
struct SplineMesh___c__DisplayClass19_0_2;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineMesh*);
MARK_REF_T(::UnityEngine::Splines::SplineMesh_ISplineVertexData*);
MARK_VAL_T(::UnityEngine::Splines::SplineMesh_VertexData);
MARK_GEN_VAL_T(::UnityEngine::Splines::SplineMesh___c__DisplayClass19_0_2);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineMesh*, "UnityEngine.Splines", "SplineMesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineMesh_ISplineVertexData*, "UnityEngine.Splines", "SplineMesh/ISplineVertexData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineMesh_VertexData, "UnityEngine.Splines", "SplineMesh/VertexData");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Splines::SplineMesh___c__DisplayClass19_0_2, "UnityEngine.Splines", "SplineMesh/<>c__DisplayClass19_0`2");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineMesh/ISplineVertexData
class CORDL_TYPE SplineMesh_ISplineVertexData {
public:
// Declarations
 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_texture, put=set_texture)) ::UnityEngine::Vector2  texture;

/// @brief Method get_normal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method get_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_texture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_texture() ;

/// @brief Method set_normal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method set_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_texture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_texture(::UnityEngine::Vector2  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SplineMesh_ISplineVertexData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineMesh_ISplineVertexData(SplineMesh_ISplineVertexData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18746};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineMesh/VertexData
struct CORDL_TYPE SplineMesh_VertexData {
public:
// Declarations
 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_texture, put=set_texture)) ::UnityEngine::Vector2  texture;

/// @brief Convert operator to "::UnityEngine::Splines::SplineMesh_ISplineVertexData"
constexpr operator  ::UnityEngine::Splines::SplineMesh_ISplineVertexData*() ;

/// @brief Method get_normal, addr 0x1802d5350, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method get_position, addr 0x1802d5330, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_texture, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_texture() ;

/// @brief Convert to "::UnityEngine::Splines::SplineMesh_ISplineVertexData"
constexpr ::UnityEngine::Splines::SplineMesh_ISplineVertexData* i___UnityEngine__Splines__SplineMesh_ISplineVertexData() ;

/// @brief Method set_normal, addr 0x1802d5410, size 0x10, virtual true, abstract: false, final true
inline void set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method set_position, addr 0x1802d5400, size 0x10, virtual true, abstract: false, final true
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_texture, addr 0x1803bda70, size 0x10, virtual true, abstract: false, final true
inline void set_texture(::UnityEngine::Vector2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineMesh_VertexData() ;

// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_texture_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr SplineMesh_VertexData(::UnityEngine::Vector3  _position_k__BackingField, ::UnityEngine::Vector3  _normal_k__BackingField, ::UnityEngine::Vector2  _texture_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18747};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <position>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _position_k__BackingField;

/// @brief Field <normal>k__BackingField, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  _normal_k__BackingField;

/// @brief Field <texture>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  _texture_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineMesh_VertexData, _position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineMesh_VertexData, _normal_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineMesh_VertexData, _texture_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineMesh_VertexData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies UnityEngine.Splines.ExtrudeSettings`1<T>
namespace UnityEngine::Splines {
// cpp template
template<typename T,typename K>
// Is value type: true
// CS Name: UnityEngine.Splines.SplineMesh/<>c__DisplayClass19_0`2<T,K>
struct CORDL_TYPE SplineMesh___c__DisplayClass19_0_2 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SplineMesh___c__DisplayClass19_0_2() ;

// Ctor Parameters [CppParam { name: "settings", ty: "::UnityEngine::Splines::ExtrudeSettings_1<K>", modifiers: "", def_value: None }, CppParam { name: "segmentsPerUnit", ty: "float_t", modifiers: "", def_value: None }]
constexpr SplineMesh___c__DisplayClass19_0_2(::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, float_t  segmentsPerUnit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18748};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field settings, offset: 0x0, size: 0x20, def value: None
 ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings;

/// @brief Field segmentsPerUnit, offset: 0x20, size: 0x4, def value: None
 float_t  segmentsPerUnit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Rendering.VertexAttributeDescriptor
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineMesh
class CORDL_TYPE SplineMesh : public ::System::Object {
public:
// Declarations
using ISplineVertexData = ::UnityEngine::Splines::SplineMesh_ISplineVertexData;

using VertexData = ::UnityEngine::Splines::SplineMesh_VertexData;

template<typename T,typename K>
using __c__DisplayClass19_0_2 = ::UnityEngine::Splines::SplineMesh___c__DisplayClass19_0_2<T, K>;

/// @brief Field k_PipeVertexAttribs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_PipeVertexAttribs, put=setStaticF_k_PipeVertexAttribs)) ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  k_PipeVertexAttribs;

/// @brief Field s_DefaultShape, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultShape, put=setStaticF_s_DefaultShape)) ::UnityEngine::Splines::ExtrusionShapes::Circle*  s_DefaultShape;

/// @brief Field s_IsConvex, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_IsConvex, put=setStaticF_s_IsConvex)) bool  s_IsConvex;

/// @brief Field s_IsConvexComputed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_IsConvexComputed, put=setStaticF_s_IsConvexComputed)) bool  s_IsConvexComputed;

/// @brief Method ComputeIsConvex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TVertex>
static inline void ComputeIsConvex(::Unity::Collections::NativeArray_1<TVertex>  data, ::Unity::Mathematics::float3  normal, int32_t  start, int32_t  sideCount) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline bool Extrude(T  spline, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range, K  shape) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  segments, bool  capped, K  shape) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, int32_t  segments, bool  capped) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSplineType,typename TVertexType,typename TIndexType>
static inline void Extrude(TSplineType  spline, ::Unity::Collections::NativeArray_1<TVertexType>  vertices, ::Unity::Collections::NativeArray_1<TIndexType>  indices, float_t  radius, int32_t  sides, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSplineType,typename TVertexType,typename TIndexType,typename TShapeType>
static inline void Extrude(TSplineType  spline, ::Unity::Collections::NativeArray_1<TVertexType>  vertices, ::Unity::Collections::NativeArray_1<TIndexType>  indices, ::UnityEngine::Splines::ExtrudeSettings_1<TShapeType>  settings, int32_t  vertexArrayOffset, int32_t  indicesArrayOffset) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Extrude(::System::Collections::Generic::IReadOnlyList_1<T>*  splines, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, float_t  segmentsPerUnit, bool  capped, ::Unity::Mathematics::float2  range) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline void Extrude(::System::Collections::Generic::IReadOnlyList_1<T>*  splines, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, float_t  segmentsPerUnit) ;

/// @brief Method ExtrudeRing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSpline,typename TShape,typename TVertex>
static inline void ExtrudeRing(TSpline  spline, ::UnityEngine::Splines::ExtrudeSettings_1<TShape>  settings, int32_t  segment, ::Unity::Collections::NativeArray_1<TVertex>  data, int32_t  start, bool  uvsAreCaps) ;

/// @brief Method GetVertexAndIndexCount, addr 0x18217c740, size 0x60, virtual false, abstract: false, final false
static inline bool GetVertexAndIndexCount(int32_t  sides, int32_t  segments, bool  capped, bool  closed, bool  closeRing, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method GetVertexAndIndexCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline bool GetVertexAndIndexCount(T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method GetVertexAndIndexCount, addr 0x18217c7a0, size 0x60, virtual false, abstract: false, final false
static inline void GetVertexAndIndexCount(int32_t  sides, int32_t  segments, bool  capped, bool  closed, ::UnityEngine::Vector2  range, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method WindTris, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline void WindTris(::Unity::Collections::NativeArray_1<uint16_t>  indices, T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset) ;

/// @brief Method WindTris, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline void WindTris(::Unity::Collections::NativeArray_1<uint32_t>  indices, T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset) ;

/// @brief Method <Extrude>g__GetSegmentCount|19_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline int32_t _Extrude_g__GetSegmentCount_19_0(T  spline, ::by_ref<::UnityEngine::Splines::SplineMesh___c__DisplayClass19_0_2<T,K>>  _cordl_fixed_empty_name_whitespace) ;

static inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> getStaticF_k_PipeVertexAttribs() ;

static inline ::UnityEngine::Splines::ExtrusionShapes::Circle* getStaticF_s_DefaultShape() ;

static inline bool getStaticF_s_IsConvex() ;

static inline bool getStaticF_s_IsConvexComputed() ;

static inline void setStaticF_k_PipeVertexAttribs(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

static inline void setStaticF_s_DefaultShape(::UnityEngine::Splines::ExtrusionShapes::Circle*  value) ;

static inline void setStaticF_s_IsConvex(bool  value) ;

static inline void setStaticF_s_IsConvexComputed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineMesh(SplineMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineMesh(SplineMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18749};

/// @brief Field k_SidesMax offset 0xffffffff size 0x4
static constexpr int32_t  k_SidesMax{static_cast<int32_t>(0x824)};

/// @brief Field k_SidesMin offset 0xffffffff size 0x4
static constexpr int32_t  k_SidesMin{static_cast<int32_t>(0x2)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineMesh) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
