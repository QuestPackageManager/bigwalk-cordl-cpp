#pragma once
// IWYU pragma private; include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Quaternion)
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Quaternion;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Quaternion);
DEFINE_IL2CPP_CLASS(::UnityEngine::Quaternion, "UnityEngine", "Quaternion");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Quaternion
struct CORDL_TYPE Quaternion {
public:
// Declarations
 __declspec(property(get=get_Item)) float_t  Item[];

 __declspec(property(get=get_eulerAngles)) ::UnityEngine::Vector3  eulerAngles;

/// @brief Field identityQuaternion, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_identityQuaternion, put=setStaticF_identityQuaternion)) ::UnityEngine::Quaternion  identityQuaternion;

 __declspec(property(get=get_normalized)) ::UnityEngine::Quaternion  normalized;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Quaternion>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Quaternion>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Angle, addr 0x182266590, size 0x80, virtual false, abstract: false, final false
static inline float_t Angle(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b) ;

/// @brief Method Angle, addr 0x182266590, size 0x80, virtual false, abstract: false, final false
static inline float_t Angle(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b) ;

/// @brief Method AngleAxis, addr 0x182266560, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion AngleAxis(float_t  angle, ::UnityEngine::Vector3  axis) ;

/// @brief Method Dot, addr 0x181f0ae00, size 0x40, virtual false, abstract: false, final false
static inline float_t Dot(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b) ;

/// @brief Method Equals, addr 0x180646b20, size 0xd0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x180645dd0, size 0x1c0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Quaternion  other) ;

/// @brief Method Equals, addr 0x180645dd0, size 0x1c0, virtual false, abstract: false, final false
inline bool Equals(::by_ref<::UnityEngine::Quaternion>  other) ;

/// @brief Method Euler, addr 0x182266610, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Euler(::UnityEngine::Vector3  euler) ;

/// @brief Method Euler, addr 0x182266680, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Euler(float_t  x, float_t  y, float_t  z) ;

/// @brief Method FromToRotation, addr 0x1822666d0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3  fromDirection, ::UnityEngine::Vector3  toDirection) ;

/// @brief Method GetHashCode, addr 0x180785370, size 0xb0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Internal_AngleAxis, addr 0x182266560, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_AngleAxis(float_t  angle, ::by_ref<::UnityEngine::Vector3>  axis) ;

/// @brief Method Internal_AngleAxis_Injected, addr 0x182266700, size 0x10, virtual false, abstract: false, final false
static inline void Internal_AngleAxis_Injected(float_t  angle, ::by_ref<::UnityEngine::Vector3>  axis, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_FromEulerRad, addr 0x182266720, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_FromEulerRad(::by_ref<::UnityEngine::Vector3>  euler) ;

/// @brief Method Internal_FromEulerRad_Injected, addr 0x182266710, size 0x10, virtual false, abstract: false, final false
static inline void Internal_FromEulerRad_Injected(::by_ref<::UnityEngine::Vector3>  euler, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_FromToRotation, addr 0x1822666d0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_FromToRotation(::by_ref<::UnityEngine::Vector3>  fromDirection, ::by_ref<::UnityEngine::Vector3>  toDirection) ;

/// @brief Method Internal_FromToRotation_Injected, addr 0x182266750, size 0x10, virtual false, abstract: false, final false
static inline void Internal_FromToRotation_Injected(::by_ref<::UnityEngine::Vector3>  fromDirection, ::by_ref<::UnityEngine::Vector3>  toDirection, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_Inverse, addr 0x182266770, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_Inverse(::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method Internal_Inverse_Injected, addr 0x182266760, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Inverse_Injected(::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_Lerp, addr 0x1822667f0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_Lerp(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t) ;

/// @brief Method Internal_LerpUnclamped, addr 0x1822667b0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_LerpUnclamped(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t) ;

/// @brief Method Internal_LerpUnclamped_Injected, addr 0x1822667a0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_LerpUnclamped_Injected(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_Lerp_Injected, addr 0x1822667e0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Lerp_Injected(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_LookRotation, addr 0x182266830, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_LookRotation(::by_ref<::UnityEngine::Vector3>  forward, ::by_ref<::UnityEngine::Vector3>  upwards) ;

/// @brief Method Internal_LookRotation_Injected, addr 0x182266820, size 0x10, virtual false, abstract: false, final false
static inline void Internal_LookRotation_Injected(::by_ref<::UnityEngine::Vector3>  forward, ::by_ref<::UnityEngine::Vector3>  upwards, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_MakePositive, addr 0x182266860, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Internal_MakePositive(::UnityEngine::Vector3  euler) ;

/// @brief Method Internal_Slerp, addr 0x182266940, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_Slerp(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t) ;

/// @brief Method Internal_SlerpUnclamped, addr 0x182266900, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Internal_SlerpUnclamped(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t) ;

/// @brief Method Internal_SlerpUnclamped_Injected, addr 0x1822668f0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SlerpUnclamped_Injected(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_Slerp_Injected, addr 0x182266930, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Slerp_Injected(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method Internal_ToAxisAngleRad, addr 0x182266970, size 0x10, virtual false, abstract: false, final false
static inline void Internal_ToAxisAngleRad(::by_ref<::UnityEngine::Quaternion>  q, ::by_ref<::UnityEngine::Vector3>  axis, ::by_ref<float_t>  angle) ;

/// @brief Method Internal_ToEulerRad, addr 0x182266990, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Internal_ToEulerRad(::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method Internal_ToEulerRad_Injected, addr 0x182266980, size 0x10, virtual false, abstract: false, final false
static inline void Internal_ToEulerRad_Injected(::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method Inverse, addr 0x182266770, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion  rotation) ;

/// @brief Method IsEqualUsingDot, addr 0x1822669c0, size 0x10, virtual false, abstract: false, final false
static inline bool IsEqualUsingDot(float_t  dot) ;

/// @brief Method Lerp, addr 0x1822667f0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  t) ;

/// @brief Method LerpUnclamped, addr 0x1822667b0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion LerpUnclamped(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  t) ;

/// @brief Method LookRotation, addr 0x1822669d0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3  forward) ;

/// @brief Method LookRotation, addr 0x182266830, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  upwards) ;

/// @brief Method Normalize, addr 0x18158f820, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Normalize(::by_ref<::UnityEngine::Quaternion>  q) ;

/// @brief Method RotateTowards, addr 0x182266a20, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Quaternion  from, ::UnityEngine::Quaternion  to, float_t  maxDegreesDelta) ;

/// @brief Method Slerp, addr 0x182266940, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  t) ;

/// @brief Method SlerpUnclamped, addr 0x182266900, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SlerpUnclamped(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  t) ;

/// @brief Method SlerpUnclamped, addr 0x182266900, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SlerpUnclamped(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b, float_t  t) ;

/// @brief Method ToAngleAxis, addr 0x182261d40, size 0x50, virtual false, abstract: false, final false
inline void ToAngleAxis(::by_ref<float_t>  angle, ::by_ref<::UnityEngine::Vector3>  axis) ;

/// @brief Method ToString, addr 0x182266b30, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x180c4e0c0, size 0x230, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1802d5420, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z, float_t  w) ;

static inline ::UnityEngine::Quaternion getStaticF_identityQuaternion() ;

/// @brief Method get_Item, addr 0x181aaba80, size 0x50, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_eulerAngles, addr 0x182266b90, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method get_identity, addr 0x182263110, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion get_identity() ;

/// @brief Method get_normalized, addr 0x182266cb0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_normalized() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Quaternion>"
constexpr ::System::IEquatable_1<::UnityEngine::Quaternion>* i___System__IEquatable_1___UnityEngine__Quaternion_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Equality, addr 0x182266d00, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Quaternion  lhs, ::UnityEngine::Quaternion  rhs) ;

/// @brief Method op_Inequality, addr 0x182266d40, size 0x60, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Quaternion  lhs, ::UnityEngine::Quaternion  rhs) ;

/// @brief Method op_Multiply, addr 0x182266da0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion op_Multiply(::UnityEngine::Quaternion  lhs, ::UnityEngine::Quaternion  rhs) ;

/// @brief Method op_Multiply, addr 0x182266e90, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  point) ;

static inline void setStaticF_identityQuaternion(::UnityEngine::Quaternion  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Quaternion() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr Quaternion(float_t  x, float_t  y, float_t  z, float_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kEpsilon{static_cast<float_t>(1e-6f)};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 float_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Quaternion, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Quaternion, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Quaternion, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Quaternion, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Quaternion) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
