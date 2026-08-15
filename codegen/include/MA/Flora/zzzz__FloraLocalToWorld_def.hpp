#pragma once
// IWYU pragma private; include "MA/Flora/FloraLocalToWorld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraLocalToWorld)
namespace MA::Flora {
struct FloraInstanceTransform;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
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
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace MA::Flora {
struct FloraLocalToWorld;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraLocalToWorld);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraLocalToWorld, "MA.Flora", "FloraLocalToWorld");
// Dependencies Unity.Mathematics.float4x4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraLocalToWorld
struct CORDL_TYPE FloraLocalToWorld {
public:
// Declarations
 __declspec(property(get=get_Back)) ::Unity::Mathematics::float3  Back;

 __declspec(property(get=get_BasisDeterminant)) float_t  BasisDeterminant;

 __declspec(property(get=get_BasisMatrix)) ::Unity::Mathematics::float3x3  BasisMatrix;

 __declspec(property(get=get_ContainsNaN)) bool  ContainsNaN;

 __declspec(property(get=get_ContainsZeroScale)) bool  ContainsZeroScale;

 __declspec(property(get=get_Down)) ::Unity::Mathematics::float3  Down;

 __declspec(property(get=get_Forward)) ::Unity::Mathematics::float3  Forward;

/// @brief Field Identity, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_Identity, put=setStaticF_Identity)) ::MA::Flora::FloraLocalToWorld  Identity;

 __declspec(property(get=get_IsFlipped)) bool  IsFlipped;

 __declspec(property(get=get_IsIdentity)) bool  IsIdentity;

 __declspec(property(get=get_IsUniformScale)) bool  IsUniformScale;

 __declspec(property(get=get_Left)) ::Unity::Mathematics::float3  Left;

 __declspec(property(get=get_MaxAxisScale)) float_t  MaxAxisScale;

 __declspec(property(get=get_Position, put=set_Position)) ::Unity::Mathematics::float3  Position;

 __declspec(property(get=get_Right)) ::Unity::Mathematics::float3  Right;

 __declspec(property(get=get_Rotation, put=set_Rotation)) ::Unity::Mathematics::quaternion  Rotation;

 __declspec(property(get=get_RotationMatrix)) ::Unity::Mathematics::float3x3  RotationMatrix;

 __declspec(property(get=get_Scale, put=set_Scale)) ::Unity::Mathematics::float3  Scale;

 __declspec(property(get=get_Up)) ::Unity::Mathematics::float3  Up;

 __declspec(property(get=get_XAxis, put=set_XAxis)) ::Unity::Mathematics::float3  XAxis;

 __declspec(property(get=get_YAxis, put=set_YAxis)) ::Unity::Mathematics::float3  YAxis;

 __declspec(property(get=get_ZAxis, put=set_ZAxis)) ::Unity::Mathematics::float3  ZAxis;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x1814e5e80, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814e5e00, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::FloraLocalToWorld  rhs) ;

/// @brief Method FromPosition, addr 0x1814e6100, size 0xe0, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld FromPosition(::Unity::Mathematics::float3  position) ;

/// @brief Method FromPositionRotation, addr 0x1814e6030, size 0xd0, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld FromPositionRotation(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method FromPositionRotationScale, addr 0x1814e5f20, size 0x110, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld FromPositionRotationScale(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale) ;

/// @brief Method FromRotation, addr 0x1814e61e0, size 0xf0, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld FromRotation(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method FromScale, addr 0x1814e62d0, size 0x160, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld FromScale(::Unity::Mathematics::float3  scale) ;

/// @brief Method FromTransform, addr 0x1814e6430, size 0x9f0, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld FromTransform(::MA::Flora::FloraInstanceTransform  transform) ;

/// @brief Method GetHashCode, addr 0x180901d90, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Inverse, addr 0x1814dedd0, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld Inverse() ;

/// @brief Method InverseFast, addr 0x1814de980, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld InverseFast() ;

/// @brief Method InverseTransformBounds, addr 0x1814de9f0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds InverseTransformBounds(::UnityEngine::Bounds  rhs) ;

/// @brief Method InverseTransformDirection, addr 0x1814deaa0, size 0x180, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformDirection(::Unity::Mathematics::float3  rhs) ;

/// @brief Method InverseTransformPoint, addr 0x1814dec20, size 0x1b0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformPoint(::Unity::Mathematics::float3  rhs) ;

/// @brief Method LookAt, addr 0x1814dee40, size 0x90, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld LookAt(::Unity::Mathematics::float3  target, ::Unity::Mathematics::float3  up) ;

/// @brief Method NearlyEquals, addr 0x181465050, size 0x140, virtual false, abstract: false, final false
inline bool NearlyEquals(::MA::Flora::FloraLocalToWorld  rhs, float_t  epsilon) ;

/// @brief Method RotateAround, addr 0x1814deed0, size 0x240, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld RotateAround(::Unity::Mathematics::float3  point, ::Unity::Mathematics::quaternion  delta) ;

/// @brief Method RotateBy, addr 0x1814df110, size 0x1e0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld RotateBy(::Unity::Mathematics::quaternion  delta) ;

/// @brief Method RotateTowards, addr 0x1814df2f0, size 0x180, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld RotateTowards(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method ScaleBy, addr 0x1814df470, size 0x180, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld ScaleBy(::Unity::Mathematics::float3  scale) ;

/// @brief Method ToInverseMatrix, addr 0x1814df5f0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 ToInverseMatrix() ;

/// @brief Method ToMatrix, addr 0x180511600, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 ToMatrix() ;

/// @brief Method ToMatrixNoScale, addr 0x1814df640, size 0xc0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 ToMatrixNoScale() ;

/// @brief Method ToString, addr 0x1814dfa10, size 0x160, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1814df700, size 0x310, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method Transform, addr 0x1814652e0, size 0x180, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld Transform(::MA::Flora::FloraInstanceTransform  rhs) ;

/// @brief Method Transform, addr 0x181465190, size 0x150, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld Transform(::MA::Flora::FloraLocalToWorld  rhs) ;

/// @brief Method TransformBounds, addr 0x1814dfb70, size 0x450, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds TransformBounds(::UnityEngine::Bounds  rhs) ;

/// @brief Method TransformBy, addr 0x1814dffc0, size 0x180, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld TransformBy(::MA::Flora::FloraInstanceTransform  lhs) ;

/// @brief Method TransformBy, addr 0x1814c2440, size 0x150, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld TransformBy(::MA::Flora::FloraLocalToWorld  lhs) ;

/// @brief Method TransformDirection, addr 0x1814e0140, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 TransformDirection(::Unity::Mathematics::float3  rhs) ;

/// @brief Method TransformPoint, addr 0x1814e0240, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 TransformPoint(::Unity::Mathematics::float3  rhs) ;

/// @brief Method Translate, addr 0x1814e02b0, size 0xf0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld Translate(::Unity::Mathematics::float3  translation) ;

/// @brief Method WithPosition, addr 0x1814e03a0, size 0xe0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld WithPosition(::Unity::Mathematics::float3  position) ;

/// @brief Method WithRotation, addr 0x1814e0480, size 0x150, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld WithRotation(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method WithScale, addr 0x1814e05d0, size 0x130, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld WithScale(::Unity::Mathematics::float3  scale) ;

/// @brief Method WithUniformScale, addr 0x1814e0700, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld WithUniformScale(float_t  s) ;

/// @brief Method WithoutScale, addr 0x1814e0740, size 0xd0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld WithoutScale() ;

/// @brief Method .ctor, addr 0x1814e0810, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  position) ;

/// @brief Method .ctor, addr 0x1814e08b0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  xAxis, ::Unity::Mathematics::float3  yAxis, ::Unity::Mathematics::float3  zAxis, ::Unity::Mathematics::float3  position) ;

static inline ::MA::Flora::FloraLocalToWorld getStaticF_Identity() ;

/// @brief Method get_Back, addr 0x1814e0950, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Back() ;

/// @brief Method get_BasisDeterminant, addr 0x181465460, size 0xc0, virtual false, abstract: false, final false
inline float_t get_BasisDeterminant() ;

/// @brief Method get_BasisMatrix, addr 0x181465520, size 0x160, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3x3 get_BasisMatrix() ;

/// @brief Method get_ContainsNaN, addr 0x1814e09a0, size 0x180, virtual false, abstract: false, final false
inline bool get_ContainsNaN() ;

/// @brief Method get_ContainsZeroScale, addr 0x1814e0b20, size 0x70, virtual false, abstract: false, final false
inline bool get_ContainsZeroScale() ;

/// @brief Method get_Down, addr 0x1814e0b90, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Down() ;

/// @brief Method get_Forward, addr 0x1814e0be0, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Forward() ;

/// @brief Method get_IsFlipped, addr 0x1814e7030, size 0x250, virtual false, abstract: false, final false
inline bool get_IsFlipped() ;

/// @brief Method get_IsIdentity, addr 0x1814e0ce0, size 0xb0, virtual false, abstract: false, final false
inline bool get_IsIdentity() ;

/// @brief Method get_IsUniformScale, addr 0x1814e0d90, size 0x70, virtual false, abstract: false, final false
inline bool get_IsUniformScale() ;

/// @brief Method get_Left, addr 0x1814e0e00, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Left() ;

/// @brief Method get_MaxAxisScale, addr 0x1814e0e50, size 0x90, virtual false, abstract: false, final false
inline float_t get_MaxAxisScale() ;

/// @brief Method get_Position, addr 0x1814e0ee0, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Position() ;

/// @brief Method get_Right, addr 0x1814e0f10, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Right() ;

/// @brief Method get_Rotation, addr 0x1814e10e0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::quaternion get_Rotation() ;

/// @brief Method get_RotationMatrix, addr 0x1814e1010, size 0xd0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3x3 get_RotationMatrix() ;

/// @brief Method get_Scale, addr 0x1814e1130, size 0x220, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Scale() ;

/// @brief Method get_Up, addr 0x1814e1350, size 0x100, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Up() ;

/// @brief Method get_XAxis, addr 0x181465680, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_XAxis() ;

/// @brief Method get_YAxis, addr 0x1814656a0, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_YAxis() ;

/// @brief Method get_ZAxis, addr 0x1814656d0, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_ZAxis() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>"
constexpr ::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>* i___System__IEquatable_1___MA__Flora__FloraLocalToWorld_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Equality, addr 0x1814e5e00, size 0x80, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::FloraLocalToWorld  lhs, ::MA::Flora::FloraLocalToWorld  rhs) ;

/// @brief Method op_Implicit, addr 0x180511600, size 0x30, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld op_Implicit___MA__Flora__FloraLocalToWorld(::Unity::Mathematics::float4x4  m) ;

/// @brief Method op_Implicit, addr 0x1814e72d0, size 0x70, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld op_Implicit___MA__Flora__FloraLocalToWorld(::UnityEngine::Matrix4x4  m) ;

/// @brief Method op_Implicit, addr 0x1814e7280, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 op_Implicit___UnityEngine__Matrix4x4(::MA::Flora::FloraLocalToWorld  m) ;

/// @brief Method op_Implicit, addr 0x180511600, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::MA::Flora::FloraLocalToWorld  m) ;

/// @brief Method op_Inequality, addr 0x1814e7340, size 0x140, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::FloraLocalToWorld  lhs, ::MA::Flora::FloraLocalToWorld  rhs) ;

static inline void setStaticF_Identity(::MA::Flora::FloraLocalToWorld  value) ;

/// @brief Method set_Position, addr 0x181478720, size 0x30, virtual false, abstract: false, final false
inline void set_Position(::Unity::Mathematics::float3  value) ;

/// @brief Method set_Rotation, addr 0x1814e1450, size 0xe0, virtual false, abstract: false, final false
inline void set_Rotation(::Unity::Mathematics::quaternion  value) ;

/// @brief Method set_Scale, addr 0x1814e1530, size 0xc0, virtual false, abstract: false, final false
inline void set_Scale(::Unity::Mathematics::float3  value) ;

/// @brief Method set_XAxis, addr 0x181478750, size 0x30, virtual false, abstract: false, final false
inline void set_XAxis(::Unity::Mathematics::float3  value) ;

/// @brief Method set_YAxis, addr 0x181478780, size 0x30, virtual false, abstract: false, final false
inline void set_YAxis(::Unity::Mathematics::float3  value) ;

/// @brief Method set_ZAxis, addr 0x1814787b0, size 0x1bb0, virtual false, abstract: false, final false
inline void set_ZAxis(::Unity::Mathematics::float3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloraLocalToWorld() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: None }]
constexpr FloraLocalToWorld(::Unity::Mathematics::float4x4  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13288};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Value, offset: 0x0, size: 0x40, def value: None
 ::Unity::Mathematics::float4x4  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraLocalToWorld, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraLocalToWorld) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
