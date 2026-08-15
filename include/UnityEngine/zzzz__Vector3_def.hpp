#pragma once
// IWYU pragma private; include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3)
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
// Forward declare root types
namespace UnityEngine {
struct Vector3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector3);
DEFINE_IL2CPP_CLASS(::UnityEngine::Vector3, "UnityEngine", "Vector3");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Vector3
struct CORDL_TYPE Vector3 {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

/// @brief Field backVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_backVector, put=setStaticF_backVector)) ::UnityEngine::Vector3  backVector;

/// @brief Field downVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_downVector, put=setStaticF_downVector)) ::UnityEngine::Vector3  downVector;

/// @brief Field forwardVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_forwardVector, put=setStaticF_forwardVector)) ::UnityEngine::Vector3  forwardVector;

/// @brief Field leftVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_leftVector, put=setStaticF_leftVector)) ::UnityEngine::Vector3  leftVector;

 __declspec(property(get=get_magnitude)) float_t  magnitude;

/// @brief Field negativeInfinityVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_negativeInfinityVector, put=setStaticF_negativeInfinityVector)) ::UnityEngine::Vector3  negativeInfinityVector;

 __declspec(property(get=get_normalized)) ::UnityEngine::Vector3  normalized;

/// @brief Field oneVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_oneVector, put=setStaticF_oneVector)) ::UnityEngine::Vector3  oneVector;

/// @brief Field positiveInfinityVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_positiveInfinityVector, put=setStaticF_positiveInfinityVector)) ::UnityEngine::Vector3  positiveInfinityVector;

/// @brief Field rightVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_rightVector, put=setStaticF_rightVector)) ::UnityEngine::Vector3  rightVector;

 __declspec(property(get=get_sqrMagnitude)) float_t  sqrMagnitude;

/// @brief Field upVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_upVector, put=setStaticF_upVector)) ::UnityEngine::Vector3  upVector;

/// @brief Field zeroVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_zeroVector, put=setStaticF_zeroVector)) ::UnityEngine::Vector3  zeroVector;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector3>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Vector3>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Angle, addr 0x1802f60f0, size 0x100, virtual false, abstract: false, final false
static inline float_t Angle(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// @brief Method Angle, addr 0x1802f60f0, size 0x100, virtual false, abstract: false, final false
static inline float_t Angle(::by_ref<::UnityEngine::Vector3>  from, ::by_ref<::UnityEngine::Vector3>  to) ;

/// @brief Method ClampMagnitude, addr 0x1802f61f0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClampMagnitude(::UnityEngine::Vector3  vector, float_t  maxLength) ;

/// @brief Method Cross, addr 0x1819319e0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method Distance, addr 0x18226bb70, size 0x60, virtual false, abstract: false, final false
static inline float_t Distance(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Dot, addr 0x181931de0, size 0x60, virtual false, abstract: false, final false
static inline float_t Dot(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method Dot, addr 0x181931de0, size 0x60, virtual false, abstract: false, final false
static inline float_t Dot(::by_ref<::UnityEngine::Vector3>  lhs, ::by_ref<::UnityEngine::Vector3>  rhs) ;

/// @brief Method Equals, addr 0x180651c70, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x180646c30, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Vector3  other) ;

/// @brief Method Equals, addr 0x180646c30, size 0x30, virtual false, abstract: false, final false
inline bool Equals(::by_ref<::UnityEngine::Vector3>  other) ;

/// @brief Method GetHashCode, addr 0x180785530, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Internal_Slerp, addr 0x18226bbe0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Internal_Slerp(::by_ref<::UnityEngine::Vector3>  a, ::by_ref<::UnityEngine::Vector3>  b, float_t  t) ;

/// @brief Method Internal_Slerp_Injected, addr 0x18226bbd0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Slerp_Injected(::by_ref<::UnityEngine::Vector3>  a, ::by_ref<::UnityEngine::Vector3>  b, float_t  t, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method Lerp, addr 0x18226bc60, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method LerpUnclamped, addr 0x18226bc10, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method Magnitude, addr 0x1802d5780, size 0x30, virtual false, abstract: false, final false
static inline float_t Magnitude(::UnityEngine::Vector3  vector) ;

/// @brief Method Max, addr 0x18226bcd0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method Max, addr 0x18226bcd0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Max(::by_ref<::UnityEngine::Vector3>  lhs, ::by_ref<::UnityEngine::Vector3>  rhs) ;

/// @brief Method Min, addr 0x18226bd10, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Min(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method Min, addr 0x18226bd10, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Min(::by_ref<::UnityEngine::Vector3>  lhs, ::by_ref<::UnityEngine::Vector3>  rhs) ;

/// @brief Method MoveTowards, addr 0x18226bd50, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 MoveTowards(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, float_t  maxDistanceDelta) ;

/// @brief Method Normalize, addr 0x1802f62c0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3  value) ;

/// @brief Method Normalize, addr 0x1802f62c0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Normalize(::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method Normalize, addr 0x1802f6340, size 0x70, virtual false, abstract: false, final false
inline void Normalize() ;

/// @brief Method ProjectOnPlane, addr 0x18226be80, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  planeNormal) ;

/// @brief Method Scale, addr 0x181953200, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Scale, addr 0x1803e3230, size 0x30, virtual false, abstract: false, final false
inline void Scale(::UnityEngine::Vector3  scale) ;

/// @brief Method Set, addr 0x1802d5770, size 0x10, virtual false, abstract: false, final false
inline void Set(float_t  newX, float_t  newY, float_t  newZ) ;

/// @brief Method SignedAngle, addr 0x18226bf70, size 0xb0, virtual false, abstract: false, final false
static inline float_t SignedAngle(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  axis) ;

/// @brief Method Slerp, addr 0x18226bbe0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method SmoothDamp, addr 0x18226c6b0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime) ;

/// @brief Method SmoothDamp, addr 0x18226c630, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime, float_t  maxSpeed) ;

/// @brief Method SmoothDamp, addr 0x18226c330, size 0x300, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime, float_t  maxSpeed, float_t  deltaTime) ;

/// @brief Method SmoothDamp, addr 0x18226c020, size 0x310, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SmoothDamp(::by_ref<::UnityEngine::Vector3>  current, ::by_ref<::UnityEngine::Vector3>  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime, float_t  maxSpeed, float_t  deltaTime) ;

/// @brief Method SqrMagnitude, addr 0x1802f63b0, size 0x30, virtual false, abstract: false, final false
static inline float_t SqrMagnitude(::UnityEngine::Vector3  vector) ;

/// @brief Method ToString, addr 0x18226c730, size 0x30, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x180347680, size 0x1f0, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x18045a780, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y) ;

/// @brief Method .ctor, addr 0x1802d5770, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z) ;

static inline ::UnityEngine::Vector3 getStaticF_backVector() ;

static inline ::UnityEngine::Vector3 getStaticF_downVector() ;

static inline ::UnityEngine::Vector3 getStaticF_forwardVector() ;

static inline ::UnityEngine::Vector3 getStaticF_leftVector() ;

static inline ::UnityEngine::Vector3 getStaticF_negativeInfinityVector() ;

static inline ::UnityEngine::Vector3 getStaticF_oneVector() ;

static inline ::UnityEngine::Vector3 getStaticF_positiveInfinityVector() ;

static inline ::UnityEngine::Vector3 getStaticF_rightVector() ;

static inline ::UnityEngine::Vector3 getStaticF_upVector() ;

static inline ::UnityEngine::Vector3 getStaticF_zeroVector() ;

/// @brief Method get_Item, addr 0x1814184e0, size 0x50, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_back, addr 0x181ee2030, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_back() ;

/// @brief Method get_down, addr 0x181ee9f60, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_down() ;

/// @brief Method get_forward, addr 0x181ef08e0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_forward() ;

/// @brief Method get_left, addr 0x181efed60, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_left() ;

/// @brief Method get_magnitude, addr 0x1802d5780, size 0x30, virtual false, abstract: false, final false
inline float_t get_magnitude() ;

/// @brief Method get_normalized, addr 0x18226c8e0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_normalized() ;

/// @brief Method get_one, addr 0x18226c930, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_one() ;

/// @brief Method get_right, addr 0x181f10d50, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_right() ;

/// @brief Method get_sqrMagnitude, addr 0x1802f63b0, size 0x30, virtual false, abstract: false, final false
inline float_t get_sqrMagnitude() ;

/// @brief Method get_up, addr 0x181f1d260, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_up() ;

/// @brief Method get_zero, addr 0x1802e7410, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_zero() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector3>"
constexpr ::System::IEquatable_1<::UnityEngine::Vector3>* i___System__IEquatable_1___UnityEngine__Vector3_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x1802dc450, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method op_Division, addr 0x181931cf0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3  a, float_t  d) ;

/// @brief Method op_Equality, addr 0x18226c960, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method op_Inequality, addr 0x18226c9a0, size 0x60, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method op_Multiply, addr 0x1802dc490, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3  a, float_t  d) ;

/// @brief Method op_Multiply, addr 0x181f7f920, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Multiply(float_t  d, ::UnityEngine::Vector3  a) ;

/// @brief Method op_Subtraction, addr 0x1802d57b0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method op_UnaryNegation, addr 0x181931d20, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_UnaryNegation(::UnityEngine::Vector3  a) ;

static inline void setStaticF_backVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_downVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_forwardVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_leftVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_oneVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_rightVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_upVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_zeroVector(::UnityEngine::Vector3  value) ;

/// @brief Method set_Item, addr 0x18226ca00, size 0x90, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vector3(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field kEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kEpsilon{static_cast<float_t>(1e-5f)};

/// @brief Field kEpsilonNormalSqrt offset 0xffffffff size 0x4
static constexpr float_t  kEpsilonNormalSqrt{static_cast<float_t>(1e-15f)};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Vector3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Vector3) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine
