#pragma once
// IWYU pragma private; include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Transform)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform_Enumerator;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Transform_Enumerator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Transform*);
MARK_REF_T(::UnityEngine::Transform_Enumerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Transform*, "UnityEngine", "Transform");
DEFINE_IL2CPP_CLASS(::UnityEngine::Transform_Enumerator*, "UnityEngine", "Transform/Enumerator");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform/Enumerator
class CORDL_TYPE Transform_Enumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field outer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_outer, put=__cordl_internal_set_outer)) ::UnityW<::UnityEngine::Transform>  outer;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x18227edc0, size 0x40, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Transform_Enumerator* New_ctor(::UnityEngine::Transform*  outer) ;

/// @brief Method Reset, addr 0x18172edb0, size 0x10, virtual true, abstract: false, final true
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outer() ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_outer(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x181d1c7a0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  outer) ;

/// @brief Method get_Current, addr 0x18227ee00, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Transform_Enumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transform_Enumerator(Transform_Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transform_Enumerator(Transform_Enumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10778};

/// @brief Field outer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___outer;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Transform_Enumerator) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
// Declarations
using Enumerator = ::UnityEngine::Transform_Enumerator;

 __declspec(property(get=get_childCount)) int32_t  childCount;

 __declspec(property(get=get_eulerAngles, put=set_eulerAngles)) ::UnityEngine::Vector3  eulerAngles;

 __declspec(property(get=get_forward, put=set_forward)) ::UnityEngine::Vector3  forward;

 __declspec(property(get=get_hasChanged, put=set_hasChanged)) bool  hasChanged;

 __declspec(property(get=get_localEulerAngles, put=set_localEulerAngles)) ::UnityEngine::Vector3  localEulerAngles;

 __declspec(property(get=get_localPosition, put=set_localPosition)) ::UnityEngine::Vector3  localPosition;

 __declspec(property(get=get_localRotation, put=set_localRotation)) ::UnityEngine::Quaternion  localRotation;

 __declspec(property(get=get_localScale, put=set_localScale)) ::UnityEngine::Vector3  localScale;

 __declspec(property(get=get_localToWorldMatrix)) ::UnityEngine::Matrix4x4  localToWorldMatrix;

 __declspec(property(get=get_lossyScale)) ::UnityEngine::Vector3  lossyScale;

 __declspec(property(get=get_parent, put=set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

 __declspec(property(get=get_parentInternal, put=set_parentInternal)) ::UnityW<::UnityEngine::Transform>  parentInternal;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_right)) ::UnityEngine::Vector3  right;

 __declspec(property(get=get_root)) ::UnityW<::UnityEngine::Transform>  root;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(get=get_up)) ::UnityEngine::Vector3  up;

 __declspec(property(get=get_worldToLocalMatrix)) ::UnityEngine::Matrix4x4  worldToLocalMatrix;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Find, addr 0x1822892b0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> Find(::StringW  n) ;

/// @brief Method FindRelativeTransformWithPath, addr 0x182289160, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindRelativeTransformWithPath(::StringW  path, bool  isActiveOnly) ;

/// @brief Method FindRelativeTransformWithPath_Injected, addr 0x182289150, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr FindRelativeTransformWithPath_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  path, bool  isActiveOnly) ;

/// @brief Method GetChild, addr 0x1822892f0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetChild(int32_t  index) ;

/// @brief Method GetChild_Injected, addr 0x1822892e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetChild_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x182289330, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetParent, addr 0x182289390, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetParent() ;

/// @brief Method GetParent_Injected, addr 0x182289380, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetParent_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPositionAndRotation, addr 0x1822893e0, size 0x30, virtual false, abstract: false, final false
inline void GetPositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetPositionAndRotation_Injected, addr 0x1822893d0, size 0x10, virtual false, abstract: false, final false
static inline void GetPositionAndRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetRoot, addr 0x182289420, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetRoot() ;

/// @brief Method GetRoot_Injected, addr 0x182289410, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetRoot_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetSiblingIndex, addr 0x182289470, size 0x30, virtual false, abstract: false, final false
inline int32_t GetSiblingIndex() ;

/// @brief Method GetSiblingIndex_Injected, addr 0x182289460, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetSiblingIndex_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_LookAt, addr 0x1822894b0, size 0x30, virtual false, abstract: false, final false
inline void Internal_LookAt(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  worldUp) ;

/// @brief Method Internal_LookAt_Injected, addr 0x1822894a0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_LookAt_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<::UnityEngine::Vector3>  worldUp) ;

/// @brief Method InverseTransformDirection, addr 0x1822894f0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method InverseTransformDirection_Injected, addr 0x1822894e0, size 0x10, virtual false, abstract: false, final false
static inline void InverseTransformDirection_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method InverseTransformPoint, addr 0x182289540, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3  position) ;

/// @brief Method InverseTransformPoint_Injected, addr 0x182289530, size 0x10, virtual false, abstract: false, final false
static inline void InverseTransformPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method InverseTransformPoints, addr 0x182289630, size 0xc0, virtual false, abstract: false, final false
inline void InverseTransformPoints(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::Span_1<::UnityEngine::Vector3>  transformedPositions) ;

/// @brief Method InverseTransformPointsInternal, addr 0x182289590, size 0xa0, virtual false, abstract: false, final false
inline void InverseTransformPointsInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::Span_1<::UnityEngine::Vector3>  transformedPositions) ;

/// @brief Method InverseTransformPointsInternal_Injected, addr 0x182289580, size 0x10, virtual false, abstract: false, final false
static inline void InverseTransformPointsInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  transformedPositions) ;

/// @brief Method IsChildOf, addr 0x182289700, size 0x60, virtual false, abstract: false, final false
inline bool IsChildOf(::UnityEngine::Transform*  parent) ;

/// @brief Method IsChildOf_Injected, addr 0x1822896f0, size 0x10, virtual false, abstract: false, final false
static inline bool IsChildOf_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  parent) ;

/// @brief Method LookAt, addr 0x182289760, size 0xb0, virtual false, abstract: false, final false
inline void LookAt(::UnityEngine::Transform*  target) ;

/// @brief Method LookAt, addr 0x182289870, size 0x60, virtual false, abstract: false, final false
inline void LookAt(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method LookAt, addr 0x182289810, size 0x60, virtual false, abstract: false, final false
inline void LookAt(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  worldUp) ;

static inline ::UnityEngine::Transform* New_ctor() ;

/// @brief Method Rotate, addr 0x182289940, size 0x100, virtual false, abstract: false, final false
inline void Rotate(::UnityEngine::Vector3  axis, float_t  angle, ::UnityEngine::Space  relativeTo) ;

/// @brief Method Rotate, addr 0x182289910, size 0x30, virtual false, abstract: false, final false
inline void Rotate(::UnityEngine::Vector3  eulers) ;

/// @brief Method Rotate, addr 0x182289a70, size 0x530, virtual false, abstract: false, final false
inline void Rotate(::UnityEngine::Vector3  eulers, ::UnityEngine::Space  relativeTo) ;

/// @brief Method Rotate, addr 0x182289a40, size 0x30, virtual false, abstract: false, final false
inline void Rotate(float_t  xAngle, float_t  yAngle, float_t  zAngle) ;

/// @brief Method RotateAroundInternal, addr 0x1822898e0, size 0x30, virtual false, abstract: false, final false
inline void RotateAroundInternal(::UnityEngine::Vector3  axis, float_t  angle) ;

/// @brief Method RotateAroundInternal_Injected, addr 0x1822898d0, size 0x10, virtual false, abstract: false, final false
static inline void RotateAroundInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  axis, float_t  angle) ;

/// @brief Method SetAsFirstSibling, addr 0x182289fb0, size 0x30, virtual false, abstract: false, final false
inline void SetAsFirstSibling() ;

/// @brief Method SetAsFirstSibling_Injected, addr 0x182289fa0, size 0x10, virtual false, abstract: false, final false
static inline void SetAsFirstSibling_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SetAsLastSibling, addr 0x182289ff0, size 0x30, virtual false, abstract: false, final false
inline void SetAsLastSibling() ;

/// @brief Method SetAsLastSibling_Injected, addr 0x182289fe0, size 0x10, virtual false, abstract: false, final false
static inline void SetAsLastSibling_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SetLocalPositionAndRotation, addr 0x18228a030, size 0x30, virtual false, abstract: false, final false
inline void SetLocalPositionAndRotation(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method SetLocalPositionAndRotation_Injected, addr 0x18228a020, size 0x10, virtual false, abstract: false, final false
static inline void SetLocalPositionAndRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  localPosition, ::by_ref<::UnityEngine::Quaternion>  localRotation) ;

/// @brief Method SetParent, addr 0x18228a070, size 0x40, virtual false, abstract: false, final false
inline void SetParent(::UnityEngine::Transform*  p) ;

/// @brief Method SetParent, addr 0x18228a0b0, size 0x40, virtual false, abstract: false, final false
inline void SetParent(::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method SetParent_Injected, addr 0x18228a060, size 0x10, virtual false, abstract: false, final false
static inline void SetParent_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  parent, bool  worldPositionStays) ;

/// @brief Method SetPositionAndRotation, addr 0x18228a100, size 0x30, virtual false, abstract: false, final false
inline void SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetPositionAndRotation_Injected, addr 0x18228a0f0, size 0x10, virtual false, abstract: false, final false
static inline void SetPositionAndRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method SetSiblingIndex, addr 0x18228a140, size 0x30, virtual false, abstract: false, final false
inline void SetSiblingIndex(int32_t  index) ;

/// @brief Method SetSiblingIndex_Injected, addr 0x18228a130, size 0x10, virtual false, abstract: false, final false
static inline void SetSiblingIndex_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method TransformDirection, addr 0x18228a180, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method TransformDirection_Injected, addr 0x18228a170, size 0x10, virtual false, abstract: false, final false
static inline void TransformDirection_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method TransformPoint, addr 0x18228a1d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3  position) ;

/// @brief Method TransformPoint_Injected, addr 0x18228a1c0, size 0x10, virtual false, abstract: false, final false
static inline void TransformPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method TransformVector, addr 0x18228a220, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3  vector) ;

/// @brief Method TransformVector_Injected, addr 0x18228a210, size 0x10, virtual false, abstract: false, final false
static inline void TransformVector_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  vector, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method Translate, addr 0x18228a260, size 0x150, virtual false, abstract: false, final false
inline void Translate(::UnityEngine::Vector3  translation, ::UnityEngine::Space  relativeTo) ;

/// @brief Method Translate, addr 0x18228a3b0, size 0x110, virtual false, abstract: false, final false
inline void Translate(float_t  x, float_t  y, float_t  z) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_childCount, addr 0x18228a4d0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_childCount() ;

/// @brief Method get_childCount_Injected, addr 0x18228a4c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_childCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_eulerAngles, addr 0x18228a500, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method get_forward, addr 0x18228a5b0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_forward() ;

/// @brief Method get_hasChanged, addr 0x18228a640, size 0x30, virtual false, abstract: false, final false
inline bool get_hasChanged() ;

/// @brief Method get_hasChanged_Injected, addr 0x18228a630, size 0x10, virtual false, abstract: false, final false
static inline bool get_hasChanged_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_localEulerAngles, addr 0x18228a670, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localEulerAngles() ;

/// @brief Method get_localPosition, addr 0x18228a730, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method get_localPosition_Injected, addr 0x18228a720, size 0x10, virtual false, abstract: false, final false
static inline void get_localPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_localRotation, addr 0x18228a780, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_localRotation() ;

/// @brief Method get_localRotation_Injected, addr 0x18228a770, size 0x10, virtual false, abstract: false, final false
static inline void get_localRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_localScale, addr 0x18228a7d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localScale() ;

/// @brief Method get_localScale_Injected, addr 0x18228a7c0, size 0x10, virtual false, abstract: false, final false
static inline void get_localScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_localToWorldMatrix, addr 0x18228a820, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix() ;

/// @brief Method get_localToWorldMatrix_Injected, addr 0x18228a810, size 0x10, virtual false, abstract: false, final false
static inline void get_localToWorldMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_lossyScale, addr 0x18228a880, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_lossyScale() ;

/// @brief Method get_lossyScale_Injected, addr 0x18228a870, size 0x10, virtual false, abstract: false, final false
static inline void get_lossyScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_parent, addr 0x182289390, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_parent() ;

/// @brief Method get_parentInternal, addr 0x182289390, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_parentInternal() ;

/// @brief Method get_position, addr 0x18228a8d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_position_Injected, addr 0x18228a8c0, size 0x10, virtual false, abstract: false, final false
static inline void get_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_right, addr 0x18228a910, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_right() ;

/// @brief Method get_root, addr 0x182289420, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_root() ;

/// @brief Method get_rotation, addr 0x18228a9a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_rotation_Injected, addr 0x18228a990, size 0x10, virtual false, abstract: false, final false
static inline void get_rotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_up, addr 0x18228a9e0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_up() ;

/// @brief Method get_worldToLocalMatrix, addr 0x18228aa70, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix() ;

/// @brief Method get_worldToLocalMatrix_Injected, addr 0x18228aa60, size 0x10, virtual false, abstract: false, final false
static inline void get_worldToLocalMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_eulerAngles, addr 0x18228aac0, size 0x90, virtual false, abstract: false, final false
inline void set_eulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method set_forward, addr 0x18228ab50, size 0x80, virtual false, abstract: false, final false
inline void set_forward(::UnityEngine::Vector3  value) ;

/// @brief Method set_hasChanged, addr 0x18228abe0, size 0x30, virtual false, abstract: false, final false
inline void set_hasChanged(bool  value) ;

/// @brief Method set_hasChanged_Injected, addr 0x18228abd0, size 0x10, virtual false, abstract: false, final false
static inline void set_hasChanged_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_localEulerAngles, addr 0x18228ac10, size 0x90, virtual false, abstract: false, final false
inline void set_localEulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method set_localPosition, addr 0x18228acb0, size 0x30, virtual false, abstract: false, final false
inline void set_localPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_localPosition_Injected, addr 0x18228aca0, size 0x10, virtual false, abstract: false, final false
static inline void set_localPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_localRotation, addr 0x18228acf0, size 0x30, virtual false, abstract: false, final false
inline void set_localRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_localRotation_Injected, addr 0x18228ace0, size 0x10, virtual false, abstract: false, final false
static inline void set_localRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_localScale, addr 0x18228ad30, size 0x30, virtual false, abstract: false, final false
inline void set_localScale(::UnityEngine::Vector3  value) ;

/// @brief Method set_localScale_Injected, addr 0x18228ad20, size 0x10, virtual false, abstract: false, final false
static inline void set_localScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_parent, addr 0x18228ad60, size 0x80, virtual false, abstract: false, final false
inline void set_parent(::UnityEngine::Transform*  value) ;

/// @brief Method set_parentInternal, addr 0x18228a070, size 0x40, virtual false, abstract: false, final false
inline void set_parentInternal(::UnityEngine::Transform*  value) ;

/// @brief Method set_position, addr 0x18228adf0, size 0x30, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_position_Injected, addr 0x18228ade0, size 0x10, virtual false, abstract: false, final false
static inline void set_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rotation, addr 0x18228ae30, size 0x30, virtual false, abstract: false, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rotation_Injected, addr 0x18228ae20, size 0x10, virtual false, abstract: false, final false
static inline void set_rotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Transform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transform(Transform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transform(Transform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10779};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Transform) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
