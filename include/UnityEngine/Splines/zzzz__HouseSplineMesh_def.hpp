#pragma once
// IWYU pragma private; include "UnityEngine/Splines/HouseSplineMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseSplineMesh)
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
namespace UnityEngine::Splines {
class HouseSplineMesh_ISplineVertexData;
}
namespace UnityEngine::Splines {
struct HouseSplineMesh_Settings;
}
namespace UnityEngine::Splines {
struct HouseSplineMesh_VertexData;
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
class HouseSplineMesh;
}
namespace UnityEngine::Splines {
class HouseSplineMesh_ISplineVertexData;
}
namespace UnityEngine::Splines {
struct HouseSplineMesh_Settings;
}
namespace UnityEngine::Splines {
struct HouseSplineMesh_VertexData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::HouseSplineMesh*);
MARK_REF_T(::UnityEngine::Splines::HouseSplineMesh_ISplineVertexData*);
MARK_VAL_T(::UnityEngine::Splines::HouseSplineMesh_Settings);
MARK_VAL_T(::UnityEngine::Splines::HouseSplineMesh_VertexData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::HouseSplineMesh*, "UnityEngine.Splines", "HouseSplineMesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::HouseSplineMesh_ISplineVertexData*, "UnityEngine.Splines", "HouseSplineMesh/ISplineVertexData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::HouseSplineMesh_Settings, "UnityEngine.Splines", "HouseSplineMesh/Settings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::HouseSplineMesh_VertexData, "UnityEngine.Splines", "HouseSplineMesh/VertexData");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.HouseSplineMesh/ISplineVertexData
class CORDL_TYPE HouseSplineMesh_ISplineVertexData {
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

// Ctor Parameters [CppParam { name: "", ty: "HouseSplineMesh_ISplineVertexData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseSplineMesh_ISplineVertexData(HouseSplineMesh_ISplineVertexData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.HouseSplineMesh/VertexData
struct CORDL_TYPE HouseSplineMesh_VertexData {
public:
// Declarations
 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_texture, put=set_texture)) ::UnityEngine::Vector2  texture;

/// @brief Convert operator to "::UnityEngine::Splines::HouseSplineMesh_ISplineVertexData"
constexpr operator  ::UnityEngine::Splines::HouseSplineMesh_ISplineVertexData*() ;

/// @brief Method get_normal, addr 0x1802d5350, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method get_position, addr 0x1802d5330, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_texture, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_texture() ;

/// @brief Convert to "::UnityEngine::Splines::HouseSplineMesh_ISplineVertexData"
constexpr ::UnityEngine::Splines::HouseSplineMesh_ISplineVertexData* i___UnityEngine__Splines__HouseSplineMesh_ISplineVertexData() ;

/// @brief Method set_normal, addr 0x1802d5410, size 0x10, virtual true, abstract: false, final true
inline void set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method set_position, addr 0x1802d5400, size 0x10, virtual true, abstract: false, final true
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_texture, addr 0x1803bda70, size 0x10, virtual true, abstract: false, final true
inline void set_texture(::UnityEngine::Vector2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseSplineMesh_VertexData() ;

// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_texture_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr HouseSplineMesh_VertexData(::UnityEngine::Vector3  _position_k__BackingField, ::UnityEngine::Vector3  _normal_k__BackingField, ::UnityEngine::Vector2  _texture_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5791};

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
static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_VertexData, _position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_VertexData, _normal_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_VertexData, _texture_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::HouseSplineMesh_VertexData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies Unity.Mathematics.float2
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.HouseSplineMesh/Settings
struct CORDL_TYPE HouseSplineMesh_Settings {
public:
// Declarations
 __declspec(property(get=get_capped, put=set_capped)) bool  capped;

 __declspec(property(get=get_closed, put=set_closed)) bool  closed;

 __declspec(property(get=get_radius, put=set_radius)) float_t  radius;

 __declspec(property(get=get_range, put=set_range)) ::Unity::Mathematics::float2  range;

 __declspec(property(get=get_segments, put=set_segments)) int32_t  segments;

 __declspec(property(get=get_sides, put=set_sides)) int32_t  sides;

/// @brief Method .ctor, addr 0x1803d0a20, size 0x260, virtual false, abstract: false, final false
inline void _ctor(int32_t  sides, int32_t  segments, bool  capped, bool  closed, ::Unity::Mathematics::float2  range, float_t  radius) ;

/// @brief Method get_capped, addr 0x1803bd9e0, size 0x10, virtual false, abstract: false, final false
inline bool get_capped() ;

/// @brief Method get_closed, addr 0x1803bd9f0, size 0x10, virtual false, abstract: false, final false
inline bool get_closed() ;

/// @brief Method get_radius, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_range, addr 0x1803bda10, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_range() ;

/// @brief Method get_segments, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_segments() ;

/// @brief Method get_sides, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_sides() ;

/// @brief Method set_capped, addr 0x1803bda20, size 0x10, virtual false, abstract: false, final false
inline void set_capped(bool  value) ;

/// @brief Method set_closed, addr 0x1803bda30, size 0x10, virtual false, abstract: false, final false
inline void set_closed(bool  value) ;

/// @brief Method set_radius, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_radius(float_t  value) ;

/// @brief Method set_range, addr 0x1803bda50, size 0x10, virtual false, abstract: false, final false
inline void set_range(::Unity::Mathematics::float2  value) ;

/// @brief Method set_segments, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_segments(int32_t  value) ;

/// @brief Method set_sides, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_sides(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseSplineMesh_Settings() ;

// Ctor Parameters [CppParam { name: "_sides_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_segments_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_capped_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_closed_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_range_k__BackingField", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr HouseSplineMesh_Settings(int32_t  _sides_k__BackingField, int32_t  _segments_k__BackingField, bool  _capped_k__BackingField, bool  _closed_k__BackingField, ::Unity::Mathematics::float2  _range_k__BackingField, float_t  _radius_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <sides>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _sides_k__BackingField;

/// @brief Field <segments>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _segments_k__BackingField;

/// @brief Field <capped>k__BackingField, offset: 0x8, size: 0x1, def value: None
 bool  _capped_k__BackingField;

/// @brief Field <closed>k__BackingField, offset: 0x9, size: 0x1, def value: None
 bool  _closed_k__BackingField;

/// @brief Field <range>k__BackingField, offset: 0xc, size: 0x8, def value: None
 ::Unity::Mathematics::float2  _range_k__BackingField;

/// @brief Field <radius>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  _radius_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_Settings, _sides_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_Settings, _segments_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_Settings, _capped_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_Settings, _closed_k__BackingField) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_Settings, _range_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::HouseSplineMesh_Settings, _radius_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::HouseSplineMesh_Settings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Rendering.VertexAttributeDescriptor
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.HouseSplineMesh
class CORDL_TYPE HouseSplineMesh : public ::System::Object {
public:
// Declarations
using ISplineVertexData = ::UnityEngine::Splines::HouseSplineMesh_ISplineVertexData;

using Settings = ::UnityEngine::Splines::HouseSplineMesh_Settings;

using VertexData = ::UnityEngine::Splines::HouseSplineMesh_VertexData;

/// @brief Field k_PipeVertexAttribs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_PipeVertexAttribs, put=setStaticF_k_PipeVertexAttribs)) ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  k_PipeVertexAttribs;

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
template<typename TSplineType,typename TVertexType,typename TIndexType>
static inline void Extrude(TSplineType  spline, ::Unity::Collections::NativeArray_1<TVertexType>  vertices, ::Unity::Collections::NativeArray_1<TIndexType>  indices, ::UnityEngine::Splines::HouseSplineMesh_Settings  settings, int32_t  vertexArrayOffset, int32_t  indicesArrayOffset) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Extrude(::System::Collections::Generic::IReadOnlyList_1<T>*  splines, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, float_t  segmentsPerUnit, bool  capped, ::Unity::Mathematics::float2  range) ;

/// @brief Method ExtrudeRing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
static inline void ExtrudeRing(T  spline, float_t  t, ::Unity::Collections::NativeArray_1<K>  data, int32_t  start, int32_t  count, float_t  radius) ;

/// @brief Method GetVertexAndIndexCount, addr 0x1803cc050, size 0x50, virtual false, abstract: false, final false
static inline void GetVertexAndIndexCount(::UnityEngine::Splines::HouseSplineMesh_Settings  settings, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method GetVertexAndIndexCount, addr 0x1803cc0a0, size 0x190, virtual false, abstract: false, final false
static inline void GetVertexAndIndexCount(int32_t  sides, int32_t  segments, bool  capped, bool  closed, ::UnityEngine::Vector2  range, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method WindTris, addr 0x1803cc230, size 0x220, virtual false, abstract: false, final false
static inline void WindTris(::Unity::Collections::NativeArray_1<uint16_t>  indices, ::UnityEngine::Splines::HouseSplineMesh_Settings  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset) ;

/// @brief Method WindTris, addr 0x1803cc450, size 0x1f0, virtual false, abstract: false, final false
static inline void WindTris(::Unity::Collections::NativeArray_1<uint32_t>  indices, ::UnityEngine::Splines::HouseSplineMesh_Settings  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset) ;

static inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> getStaticF_k_PipeVertexAttribs() ;

static inline void setStaticF_k_PipeVertexAttribs(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseSplineMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseSplineMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseSplineMesh(HouseSplineMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseSplineMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseSplineMesh(HouseSplineMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5793};

/// @brief Field k_RadiusMax offset 0xffffffff size 0x4
static constexpr float_t  k_RadiusMax{static_cast<float_t>(10000.0f)};

/// @brief Field k_RadiusMin offset 0xffffffff size 0x4
static constexpr float_t  k_RadiusMin{static_cast<float_t>(1e-5f)};

/// @brief Field k_SegmentsMax offset 0xffffffff size 0x4
static constexpr int32_t  k_SegmentsMax{static_cast<int32_t>(0x1000)};

/// @brief Field k_SegmentsMin offset 0xffffffff size 0x4
static constexpr int32_t  k_SegmentsMin{static_cast<int32_t>(0x2)};

/// @brief Field k_SidesMax offset 0xffffffff size 0x4
static constexpr int32_t  k_SidesMax{static_cast<int32_t>(0x824)};

/// @brief Field k_SidesMin offset 0xffffffff size 0x4
static constexpr int32_t  k_SidesMin{static_cast<int32_t>(0x3)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::HouseSplineMesh) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
