#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraInstanceTransform)
namespace MA::Flora {
struct FloraLocalToWorld;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace MA::Flora {
struct FloraInstanceTransform;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraInstanceTransform);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceTransform, "MA.Flora", "FloraInstanceTransform");
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraInstanceTransform
struct CORDL_TYPE FloraInstanceTransform {
public:
// Declarations
/// @brief Field Identity, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_Identity, put=setStaticF_Identity)) ::MA::Flora::FloraInstanceTransform  Identity;

 __declspec(property(get=get_ScaleDeterminant)) float_t  ScaleDeterminant;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>*() ;

/// @brief Method ApplyScale, addr 0x1814dbb90, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform ApplyScale(::Unity::Mathematics::float3  scale) ;

/// @brief Method ClampMinimumScale, addr 0x1814dbbf0, size 0xb0, virtual false, abstract: false, final false
inline void ClampMinimumScale(float_t  minimumScale) ;

/// @brief Method Equals, addr 0x1814e4c30, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x180645f90, size 0x400, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::FloraInstanceTransform  other) ;

/// @brief Method Forward, addr 0x1814dbca0, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 Forward() ;

/// @brief Method FromMatrix, addr 0x181464d00, size 0x210, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromMatrix(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method FromPosition, addr 0x1814e4de0, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromPosition(::Unity::Mathematics::float3  position) ;

/// @brief Method FromPosition, addr 0x1814e4e20, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromPosition(float_t  x, float_t  y, float_t  z) ;

/// @brief Method FromPositionRotation, addr 0x1814e4d60, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromPositionRotation(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method FromPositionRotationScale, addr 0x1814e4d30, size 0x30, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromPositionRotationScale(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale) ;

/// @brief Method FromPositionScale, addr 0x1814e4da0, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromPositionScale(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  scale) ;

/// @brief Method FromRotation, addr 0x1814e4e60, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromRotation(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method FromScale, addr 0x1814e4ea0, size 0x60, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromScale(::Unity::Mathematics::float3  scale) ;

/// @brief Method FromUnityTransform, addr 0x1814dbce0, size 0x180, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform FromUnityTransform(::UnityEngine::Transform*  unityTransform, ::UnityEngine::Space  space) ;

/// @brief Method GetHashCode, addr 0x1814dbe60, size 0xf0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMaximumAxisScale, addr 0x1814dbf50, size 0x80, virtual false, abstract: false, final false
inline float_t GetMaximumAxisScale() ;

/// @brief Method GetScaleReciprocalSafe, addr 0x1814e4f00, size 0xd30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetScaleReciprocalSafe(::Unity::Mathematics::float3  scale, float_t  tolerance) ;

/// @brief Method HasNonUniformScale, addr 0x1814dbfd0, size 0x60, virtual false, abstract: false, final false
inline bool HasNonUniformScale(float_t  tolerance) ;

/// @brief Method Inverse, addr 0x1814dccd0, size 0x280, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform Inverse() ;

/// @brief Method InverseTransform, addr 0x1814dcbc0, size 0x110, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform InverseTransform(::MA::Flora::FloraInstanceTransform  instanceTransform) ;

/// @brief Method InverseTransformDirection, addr 0x1814dc030, size 0x170, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformDirection(::Unity::Mathematics::float3  direction) ;

/// @brief Method InverseTransformNormal, addr 0x1814dc1a0, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformNormal(::Unity::Mathematics::float3  normal) ;

/// @brief Method InverseTransformPoint, addr 0x1814dc2e0, size 0x240, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformPoint(::Unity::Mathematics::float3  point) ;

/// @brief Method InverseTransformRay, addr 0x1814dc520, size 0x290, virtual false, abstract: false, final false
inline ::UnityEngine::Ray InverseTransformRay(::UnityEngine::Ray  ray) ;

/// @brief Method InverseTransformRotation, addr 0x1814dc7b0, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Mathematics::quaternion InverseTransformRotation(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method InverseTransformScale, addr 0x1814dc900, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformScale(::Unity::Mathematics::float3  scale) ;

/// @brief Method InverseTransformScaleSafe, addr 0x1814dc820, size 0xe0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformScaleSafe(::Unity::Mathematics::float3  scale) ;

/// @brief Method InverseTransformVector, addr 0x1814dc950, size 0x270, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 InverseTransformVector(::Unity::Mathematics::float3  vector) ;

/// @brief Method LookAtDirection, addr 0x1814dcf50, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform LookAtDirection(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up) ;

/// @brief Method LookAtPoint, addr 0x1814dcfd0, size 0xc0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform LookAtPoint(::Unity::Mathematics::float3  target, ::Unity::Mathematics::float3  up) ;

/// @brief Method Right, addr 0x1814dd090, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 Right() ;

/// @brief Method Rotate, addr 0x1814dda70, size 0x120, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform Rotate(::Unity::Mathematics::float3  axis, float_t  angle) ;

/// @brief Method Rotate, addr 0x1814dd930, size 0xc0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform Rotate(::Unity::Mathematics::float3  eulers) ;

/// @brief Method Rotate, addr 0x1814dd9f0, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform Rotate(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method RotateAround, addr 0x1814dd0d0, size 0x190, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform RotateAround(::UnityEngine::Transform*  parent, ::Unity::Mathematics::float3  point, ::Unity::Mathematics::float3  axis, float_t  angle) ;

/// @brief Method RotateAround, addr 0x1814dd260, size 0x3e0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform RotateAround(::Unity::Mathematics::float3  point, ::Unity::Mathematics::float3  axis, float_t  angle) ;

/// @brief Method RotateX, addr 0x1814dd640, size 0xf0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform RotateX(float_t  angleRadians) ;

/// @brief Method RotateY, addr 0x1814dd730, size 0x100, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform RotateY(float_t  angleRadians) ;

/// @brief Method RotateZ, addr 0x1814dd830, size 0x100, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform RotateZ(float_t  angleRadians) ;

/// @brief Method ToInverseMatrix, addr 0x1814ddb90, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 ToInverseMatrix() ;

/// @brief Method ToLocalToWorld, addr 0x1814785e0, size 0x140, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld ToLocalToWorld() ;

/// @brief Method ToLocalToWorldMatrix, addr 0x1814ddbe0, size 0x50, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld ToLocalToWorldMatrix() ;

/// @brief Method ToLocalToWorldNoScale, addr 0x1814ddc30, size 0xe0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraLocalToWorld ToLocalToWorldNoScale() ;

/// @brief Method ToMatrix, addr 0x181464f10, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 ToMatrix() ;

/// @brief Method ToMatrixNoScale, addr 0x1814ddd10, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4x4 ToMatrixNoScale() ;

/// @brief Method ToString, addr 0x1814ddd70, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Transform, addr 0x1814de740, size 0x100, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform Transform(::MA::Flora::FloraInstanceTransform  instanceTransform) ;

/// @brief Method TransformDirection, addr 0x1814dde20, size 0x150, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 TransformDirection(::Unity::Mathematics::float3  direction) ;

/// @brief Method TransformNormal, addr 0x1814ddf70, size 0x180, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 TransformNormal(::Unity::Mathematics::float3  normal) ;

/// @brief Method TransformPoint, addr 0x1814de0f0, size 0x1a0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 TransformPoint(::Unity::Mathematics::float3  point) ;

/// @brief Method TransformRay, addr 0x1814de290, size 0x290, virtual false, abstract: false, final false
inline ::UnityEngine::Ray TransformRay(::UnityEngine::Ray  ray) ;

/// @brief Method TransformRotation, addr 0x1814de520, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Mathematics::quaternion TransformRotation(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method TransformScale, addr 0x1814de580, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 TransformScale(::Unity::Mathematics::float3  scale) ;

/// @brief Method TransformVector, addr 0x1814de5d0, size 0x170, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 TransformVector(::Unity::Mathematics::float3  vector) ;

/// @brief Method Translate, addr 0x1814de840, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform Translate(::Unity::Mathematics::float3  translation) ;

/// @brief Method Up, addr 0x1814de8a0, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 Up() ;

/// @brief Method WithPosition, addr 0x1814de8e0, size 0x30, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform WithPosition(::Unity::Mathematics::float3  position) ;

/// @brief Method WithRotation, addr 0x1814de910, size 0x30, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform WithRotation(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method WithScale, addr 0x1814de940, size 0x30, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform WithScale(::Unity::Mathematics::float3  scale) ;

/// @brief Method .ctor, addr 0x1814c2410, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale) ;

static inline ::MA::Flora::FloraInstanceTransform getStaticF_Identity() ;

/// @brief Method get_ScaleDeterminant, addr 0x1814de970, size 0x10, virtual false, abstract: false, final false
inline float_t get_ScaleDeterminant() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>"
constexpr ::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>* i___System__IEquatable_1___MA__Flora__FloraInstanceTransform_() ;

/// @brief Method op_Addition, addr 0x1814de840, size 0x60, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform op_Addition(::MA::Flora::FloraInstanceTransform  lhs, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Equality, addr 0x1814e5d10, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::FloraInstanceTransform  lhs, ::MA::Flora::FloraInstanceTransform  rhs) ;

/// @brief Method op_Inequality, addr 0x1814e5d50, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::FloraInstanceTransform  lhs, ::MA::Flora::FloraInstanceTransform  rhs) ;

/// @brief Method op_Subtraction, addr 0x1814e5d90, size 0x70, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform op_Subtraction(::MA::Flora::FloraInstanceTransform  lhs, ::Unity::Mathematics::float3  rhs) ;

static inline void setStaticF_Identity(::MA::Flora::FloraInstanceTransform  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceTransform() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None }, CppParam { name: "Scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr FloraInstanceTransform(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::quaternion  Rotation, ::Unity::Mathematics::float3  Scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field Rotation, offset: 0xc, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  Rotation;

/// @brief Field Scale, offset: 0x1c, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceTransform, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceTransform, Rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceTransform, Scale) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceTransform) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
