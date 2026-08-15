#pragma once
// IWYU pragma private; include "MA/Flora/AxisAlignedBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisAlignedBox)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace MA::Flora {
struct AxisAlignedBox;
}
// Write type traits
MARK_VAL_T(::MA::Flora::AxisAlignedBox);
DEFINE_IL2CPP_CLASS(::MA::Flora::AxisAlignedBox, "MA.Flora", "AxisAlignedBox");
// Dependencies Unity.Mathematics.float3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.AxisAlignedBox
struct CORDL_TYPE AxisAlignedBox {
public:
// Declarations
 __declspec(property(get=get_Center, put=set_Center)) ::Unity::Mathematics::float3  Center;

 __declspec(property(get=get_Depth)) float_t  Depth;

 __declspec(property(get=get_DiagonalLength)) float_t  DiagonalLength;

 __declspec(property(get=get_DiagonalLengthSq)) float_t  DiagonalLengthSq;

/// @brief Field Empty, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::MA::Flora::AxisAlignedBox  Empty;

 __declspec(property(get=get_Extent, put=set_Extent)) ::Unity::Mathematics::float3  Extent;

 __declspec(property(get=get_Height)) float_t  Height;

/// @brief Field Infinite, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_Infinite, put=setStaticF_Infinite)) ::MA::Flora::AxisAlignedBox  Infinite;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_MaxDim)) float_t  MaxDim;

 __declspec(property(get=get_MinDim)) float_t  MinDim;

 __declspec(property(get=get_Radius)) float_t  Radius;

 __declspec(property(get=get_RadiusSq)) float_t  RadiusSq;

 __declspec(property(get=get_Size, put=set_Size)) ::Unity::Mathematics::float3  Size;

 __declspec(property(get=get_SurfaceArea)) float_t  SurfaceArea;

 __declspec(property(get=get_Volume)) float_t  Volume;

 __declspec(property(get=get_Width)) float_t  Width;

/// @brief Field Zero, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::MA::Flora::AxisAlignedBox  Zero;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::AxisAlignedBox>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::AxisAlignedBox>*() ;

/// @brief Method ComputeCorners, addr 0x1814d9610, size 0x100, virtual false, abstract: false, final false
inline void ComputeCorners(::System::Span_1<::Unity::Mathematics::float3>  cornerVertices) ;

/// @brief Method Contains, addr 0x1814d97b0, size 0x90, virtual false, abstract: false, final false
inline bool Contains(::Unity::Mathematics::float3  point) ;

/// @brief Method Contains, addr 0x1814d9710, size 0xa0, virtual false, abstract: false, final false
inline bool Contains(::MA::Flora::AxisAlignedBox  rhs) ;

/// @brief Method Dimension, addr 0x1814d9840, size 0x90, virtual false, abstract: false, final false
inline float_t Dimension(int32_t  axisIndex) ;

/// @brief Method DistanceSquared, addr 0x1814d98d0, size 0x1d0, virtual false, abstract: false, final false
inline float_t DistanceSquared(::MA::Flora::AxisAlignedBox  other) ;

/// @brief Method DistanceSquared, addr 0x1814d9aa0, size 0x160, virtual false, abstract: false, final false
inline float_t DistanceSquared(::Unity::Mathematics::float3  point) ;

/// @brief Method Encapsulate, addr 0x18149a910, size 0x140, virtual false, abstract: false, final false
inline void Encapsulate(::MA::Flora::AxisAlignedBox  other) ;

/// @brief Method Encapsulate, addr 0x1814d9c00, size 0x140, virtual false, abstract: false, final false
inline void Encapsulate(::Unity::Mathematics::float3  point) ;

/// @brief Method Equals, addr 0x1814e28a0, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x180673e70, size 0xb0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::AxisAlignedBox  other) ;

/// @brief Method Expand, addr 0x1814d9d40, size 0x60, virtual false, abstract: false, final false
inline void Expand(float_t  radius) ;

/// @brief Method FromExtents, addr 0x1814e2960, size 0x2f0, virtual false, abstract: false, final false
static inline ::MA::Flora::AxisAlignedBox FromExtents(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent) ;

/// @brief Method GetBoundingSphere, addr 0x1814d9da0, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::BoundingSphere GetBoundingSphere() ;

/// @brief Method GetClosestPointTo, addr 0x1814d9eb0, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 GetClosestPointTo(::Unity::Mathematics::float3  point) ;

/// @brief Method GetHashCode, addr 0x180c86510, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Intersect, addr 0x1814d9ff0, size 0x290, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox Intersect(::MA::Flora::AxisAlignedBox  other) ;

/// @brief Method IntersectsAABB, addr 0x1814da280, size 0xa0, virtual false, abstract: false, final false
inline bool IntersectsAABB(::MA::Flora::AxisAlignedBox  other) ;

/// @brief Method IntersectsSphere, addr 0x1814da490, size 0x1a0, virtual false, abstract: false, final false
inline bool IntersectsSphere(::Unity::Mathematics::float3  center, float_t  radius) ;

/// @brief Method IntersectsSphere, addr 0x1814da630, size 0x1d0, virtual false, abstract: false, final false
inline bool IntersectsSphere(::UnityEngine::BoundingSphere  sphere) ;

/// @brief Method IntersectsSphereSq, addr 0x1814da320, size 0x170, virtual false, abstract: false, final false
inline bool IntersectsSphereSq(::Unity::Mathematics::float3  center, float_t  radiusSq) ;

/// @brief Method InverseTransformBy, addr 0x1814da800, size 0xa0, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox InverseTransformBy(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method IsInside, addr 0x1814da8a0, size 0x90, virtual false, abstract: false, final false
inline bool IsInside(::MA::Flora::AxisAlignedBox  rhs) ;

/// @brief Method RotateBy, addr 0x1814da930, size 0x370, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox RotateBy(::Unity::Mathematics::float3x3  m) ;

/// @brief Method RotateExtent, addr 0x1814e2c50, size 0x290, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 RotateExtent(::Unity::Mathematics::float3  extents, ::Unity::Mathematics::float3  m0, ::Unity::Mathematics::float3  m1, ::Unity::Mathematics::float3  m2) ;

/// @brief Method ToString, addr 0x1814dad80, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1814daca0, size 0xe0, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method TransformBy, addr 0x18149aa50, size 0x2e0, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox TransformBy(::Unity::Mathematics::float4x4  m) ;

/// @brief Method TransformProjectBy, addr 0x1814dae00, size 0x3b0, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox TransformProjectBy(::Unity::Mathematics::float4x4  projectionMatrix) ;

/// @brief Method Translate, addr 0x1814db1b0, size 0x150, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox Translate(::Unity::Mathematics::float3  offset) ;

/// @brief Method .ctor, addr 0x1814db3c0, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c) ;

/// @brief Method .ctor, addr 0x1814db300, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Bounds  bounds) ;

/// @brief Method .ctor, addr 0x180fa7a70, size 0xd210, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  min, ::Unity::Mathematics::float3  max) ;

static inline ::MA::Flora::AxisAlignedBox getStaticF_Empty() ;

static inline ::MA::Flora::AxisAlignedBox getStaticF_Infinite() ;

static inline ::MA::Flora::AxisAlignedBox getStaticF_Zero() ;

/// @brief Method get_Center, addr 0x181464b00, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Center() ;

/// @brief Method get_Depth, addr 0x1814db5e0, size 0x30, virtual false, abstract: false, final false
inline float_t get_Depth() ;

/// @brief Method get_DiagonalLength, addr 0x1814db660, size 0x50, virtual false, abstract: false, final false
inline float_t get_DiagonalLength() ;

/// @brief Method get_DiagonalLengthSq, addr 0x1814db610, size 0x50, virtual false, abstract: false, final false
inline float_t get_DiagonalLengthSq() ;

/// @brief Method get_Extent, addr 0x18149ad30, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Extent() ;

/// @brief Method get_Height, addr 0x1814db6b0, size 0x30, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_IsEmpty, addr 0x18149ad90, size 0x40, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_MaxDim, addr 0x18149add0, size 0x80, virtual false, abstract: false, final false
inline float_t get_MaxDim() ;

/// @brief Method get_MinDim, addr 0x1814db6e0, size 0x80, virtual false, abstract: false, final false
inline float_t get_MinDim() ;

/// @brief Method get_Radius, addr 0x1814db7c0, size 0x60, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_RadiusSq, addr 0x1814db760, size 0x60, virtual false, abstract: false, final false
inline float_t get_RadiusSq() ;

/// @brief Method get_Size, addr 0x181464b60, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Size() ;

/// @brief Method get_SurfaceArea, addr 0x1814db820, size 0x110, virtual false, abstract: false, final false
inline float_t get_SurfaceArea() ;

/// @brief Method get_Volume, addr 0x1814db930, size 0xa0, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method get_Width, addr 0x1814db9d0, size 0x30, virtual false, abstract: false, final false
inline float_t get_Width() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::AxisAlignedBox>"
constexpr ::System::IEquatable_1<::MA::Flora::AxisAlignedBox>* i___System__IEquatable_1___MA__Flora__AxisAlignedBox_() ;

/// @brief Method op_Addition, addr 0x1814e3130, size 0x160, virtual false, abstract: false, final false
static inline ::MA::Flora::AxisAlignedBox op_Addition(::MA::Flora::AxisAlignedBox  lhs, ::MA::Flora::AxisAlignedBox  rhs) ;

/// @brief Method op_Addition, addr 0x1814e3290, size 0x170, virtual false, abstract: false, final false
static inline ::MA::Flora::AxisAlignedBox op_Addition(::MA::Flora::AxisAlignedBox  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Equality, addr 0x1814e3400, size 0xb0, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::AxisAlignedBox  lhs, ::MA::Flora::AxisAlignedBox  rhs) ;

/// @brief Method op_Implicit, addr 0x18149ae50, size 0xd0, virtual false, abstract: false, final false
static inline ::MA::Flora::AxisAlignedBox op_Implicit___MA__Flora__AxisAlignedBox(::UnityEngine::Bounds  rhs) ;

/// @brief Method op_Implicit, addr 0x181464bb0, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds op_Implicit___UnityEngine__Bounds(::MA::Flora::AxisAlignedBox  rhs) ;

/// @brief Method op_Inequality, addr 0x1814e34b0, size 0x130, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::AxisAlignedBox  lhs, ::MA::Flora::AxisAlignedBox  rhs) ;

static inline void setStaticF_Empty(::MA::Flora::AxisAlignedBox  value) ;

static inline void setStaticF_Infinite(::MA::Flora::AxisAlignedBox  value) ;

static inline void setStaticF_Zero(::MA::Flora::AxisAlignedBox  value) ;

/// @brief Method set_Center, addr 0x1814dba00, size 0xa0, virtual false, abstract: false, final false
inline void set_Center(::Unity::Mathematics::float3  value) ;

/// @brief Method set_Extent, addr 0x18149af20, size 0xb0, virtual false, abstract: false, final false
inline void set_Extent(::Unity::Mathematics::float3  value) ;

/// @brief Method set_Size, addr 0x1814dbaa0, size 0xf0, virtual false, abstract: false, final false
inline void set_Size(::Unity::Mathematics::float3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AxisAlignedBox() ;

// Ctor Parameters [CppParam { name: "Min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Max", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr AxisAlignedBox(::Unity::Mathematics::float3  Min, ::Unity::Mathematics::float3  Max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Min, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Min;

/// @brief Field Max, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::AxisAlignedBox, Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AxisAlignedBox, Max) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::AxisAlignedBox) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
