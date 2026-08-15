#pragma once
// IWYU pragma private; include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Object)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct FindObjectsInactive;
}
namespace UnityEngine {
struct FindObjectsSortMode;
}
namespace UnityEngine {
struct HideFlags;
}
namespace UnityEngine {
class Object_MarshalledUnityObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Object_MarshalledUnityObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::Object*);
MARK_REF_T(::UnityEngine::Object_MarshalledUnityObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Object*, "UnityEngine", "Object");
DEFINE_IL2CPP_CLASS(::UnityEngine::Object_MarshalledUnityObject*, "UnityEngine", "Object/MarshalledUnityObject");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Object/MarshalledUnityObject
class CORDL_TYPE Object_MarshalledUnityObject : public ::System::Object {
public:
// Declarations
/// @brief Method Marshal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr Marshal(T  obj) ;

/// @brief Method MarshalNotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr MarshalNotNull(T  obj) ;

/// @brief Method TryThrowEditorNullExceptionObject, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void TryThrowEditorNullExceptionObject(::UnityEngine::Object*  unityObj, ::StringW  paramterName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Object_MarshalledUnityObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Object_MarshalledUnityObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Object_MarshalledUnityObject(Object_MarshalledUnityObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Object_MarshalledUnityObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Object_MarshalledUnityObject(Object_MarshalledUnityObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10739};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Object_MarshalledUnityObject) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Object
class CORDL_TYPE Object : public ::System::Object {
public:
// Declarations
using MarshalledUnityObject = ::UnityEngine::Object_MarshalledUnityObject;

/// @brief Field OffsetOfInstanceIDInCPlusPlusObject, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OffsetOfInstanceIDInCPlusPlusObject, put=setStaticF_OffsetOfInstanceIDInCPlusPlusObject)) int32_t  OffsetOfInstanceIDInCPlusPlusObject;

 __declspec(property(get=get_hideFlags, put=set_hideFlags)) ::UnityEngine::HideFlags  hideFlags;

/// @brief Field m_CachedPtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedPtr, put=__cordl_internal_set_m_CachedPtr)) ::System::IntPtr  m_CachedPtr;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Method CheckNullArgument, addr 0x182275f40, size 0x20, virtual false, abstract: false, final false
static inline void CheckNullArgument(::System::Object*  arg, ::StringW  message) ;

/// @brief Method CompareBaseObjects, addr 0x182275f60, size 0x40, virtual false, abstract: false, final false
static inline bool CompareBaseObjects(::UnityEngine::Object*  lhs, ::UnityEngine::Object*  rhs) ;

/// @brief Method Destroy, addr 0x182276020, size 0x20, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method Destroy, addr 0x182276000, size 0x20, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj, float_t  t) ;

/// @brief Method DestroyImmediate, addr 0x182275fb0, size 0x20, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyImmediate, addr 0x182275fd0, size 0x20, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj, bool  allowDestroyingAssets) ;

/// @brief Method DestroyImmediate_Injected, addr 0x182275fa0, size 0x10, virtual false, abstract: false, final false
static inline void DestroyImmediate_Injected(::System::IntPtr  obj, bool  allowDestroyingAssets) ;

/// @brief Method Destroy_Injected, addr 0x182275ff0, size 0x10, virtual false, abstract: false, final false
static inline void Destroy_Injected(::System::IntPtr  obj, float_t  t) ;

/// @brief Method DontDestroyOnLoad, addr 0x182276050, size 0x50, virtual false, abstract: false, final false
static inline void DontDestroyOnLoad(::UnityEngine::Object*  target) ;

/// @brief Method DontDestroyOnLoad_Injected, addr 0x182276040, size 0x10, virtual false, abstract: false, final false
static inline void DontDestroyOnLoad_Injected(::System::IntPtr  target) ;

/// @brief Method Equals, addr 0x1822760a0, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method FindAnyObjectByType, addr 0x182276150, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindAnyObjectByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindAnyObjectByType() ;

/// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindAnyObjectByType(::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindFirstObjectByType, addr 0x182276180, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindFirstObjectByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindFirstObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindFirstObjectByType() ;

/// @brief Method FindObjectFromInstanceID, addr 0x1822761f0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceID(::UnityEngine::EntityId  instanceID) ;

/// @brief Method FindObjectFromInstanceIDThreadSafe, addr 0x1822761c0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceIDThreadSafe(::UnityEngine::EntityId  instanceID) ;

/// @brief Method FindObjectFromInstanceIDThreadSafe_Injected, addr 0x1822761b0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceIDThreadSafe_Injected(::by_ref<::UnityEngine::EntityId>  instanceID) ;

/// @brief Method FindObjectFromInstanceID_Injected, addr 0x1822761e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr FindObjectFromInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  instanceID) ;

/// @brief Method FindObjectOfType, addr 0x182276220, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindObjectOfType() ;

/// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindObjectOfType(bool  includeInactive) ;

/// @brief Method FindObjectsByType, addr 0x182276250, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> FindObjectsByType(::UnityEngine::FindObjectsInactive  findObjectsInactive, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> FindObjectsByType(::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsOfType, addr 0x182276260, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfType(::System::Type*  type) ;

/// @brief Method FindObjectsOfType, addr 0x182276270, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> FindObjectsOfType() ;

/// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> FindObjectsOfType(bool  includeInactive) ;

/// @brief Method ForceLoadFromInstanceID, addr 0x182276290, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> ForceLoadFromInstanceID(::UnityEngine::EntityId  instanceID) ;

/// @brief Method ForceLoadFromInstanceID_Injected, addr 0x182276280, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ForceLoadFromInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  instanceID) ;

/// @brief Method GetCachedPtr, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr GetCachedPtr() ;

/// @brief Method GetEntityId, addr 0x1822762c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId GetEntityId() ;

/// @brief Method GetHashCode, addr 0x1815f4340, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInstanceID, addr 0x1822762c0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetInstanceID() ;

/// @brief Method GetName, addr 0x182276300, size 0xb0, virtual false, abstract: false, final false
inline ::StringW GetName() ;

/// @brief Method GetName_Injected, addr 0x1822762f0, size 0x10, virtual false, abstract: false, final false
static inline void GetName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject, addr 0x1822763b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetOffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method GetPtrFromInstanceID, addr 0x1822763d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetPtrFromInstanceID(::UnityEngine::EntityId  instanceID, ::System::Type*  objectType, ::by_ref<bool>  isMonoBehaviour) ;

/// @brief Method GetPtrFromInstanceID_Injected, addr 0x1822763c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetPtrFromInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  instanceID, ::System::Type*  objectType, ::by_ref<bool>  isMonoBehaviour) ;

/// @brief Method Instantiate, addr 0x182276620, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original) ;

/// @brief Method Instantiate, addr 0x1822767f0, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Instantiate, addr 0x1822766d0, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x1822763f0, size 0x230, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method Internal_CloneSingle, addr 0x182276a70, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingle(::UnityEngine::Object*  data) ;

/// @brief Method Internal_CloneSingleWithParent, addr 0x1822769a0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Internal_CloneSingleWithParent_Injected, addr 0x182276990, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_CloneSingleWithParent_Injected(::System::IntPtr  data, ::System::IntPtr  parent, bool  worldPositionStays) ;

/// @brief Method Internal_CloneSingle_Injected, addr 0x182276a60, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_CloneSingle_Injected(::System::IntPtr  data) ;

/// @brief Method Internal_InstantiateSingle, addr 0x182276bc0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle(::UnityEngine::Object*  data, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParent, addr 0x182276ae0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParent_Injected, addr 0x182276ad0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_InstantiateSingleWithParent_Injected(::System::IntPtr  data, ::System::IntPtr  parent, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

/// @brief Method Internal_InstantiateSingle_Injected, addr 0x182276bb0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_InstantiateSingle_Injected(::System::IntPtr  data, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

/// @brief Method IsNativeObjectAlive, addr 0x181458e50, size 0x20, virtual false, abstract: false, final false
static inline bool IsNativeObjectAlive(::UnityEngine::Object*  o) ;

/// @brief Method IsPersistent, addr 0x182276c50, size 0x50, virtual false, abstract: false, final false
static inline bool IsPersistent(::UnityEngine::Object*  obj) ;

/// @brief Method IsPersistent_Injected, addr 0x182276c40, size 0x10, virtual false, abstract: false, final false
static inline bool IsPersistent_Injected(::System::IntPtr  obj) ;

/// @brief Method MarkDirty, addr 0x182276cb0, size 0x30, virtual false, abstract: false, final false
inline void MarkDirty() ;

/// @brief Method MarkDirty_Injected, addr 0x182276ca0, size 0x10, virtual false, abstract: false, final false
static inline void MarkDirty_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Object* New_ctor() ;

/// @brief Method SetName, addr 0x182276cf0, size 0x120, virtual false, abstract: false, final false
inline void SetName(::StringW  name) ;

/// @brief Method SetName_Injected, addr 0x182276ce0, size 0x10, virtual false, abstract: false, final false
static inline void SetName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method ToString, addr 0x182276e20, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x182276e30, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Object*  obj) ;

/// @brief Method ToString_Injected, addr 0x182276e10, size 0x10, virtual false, abstract: false, final false
static inline void ToString_Injected(::System::IntPtr  obj, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_CachedPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_CachedPtr() ;

constexpr void __cordl_internal_set_m_CachedPtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_OffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method get_hideFlags, addr 0x182276f10, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::HideFlags get_hideFlags() ;

/// @brief Method get_hideFlags_Injected, addr 0x182276f00, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::HideFlags get_hideFlags_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_name, addr 0x182276f40, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method op_Equality, addr 0x182275f60, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

/// @brief Method op_Implicit, addr 0x182276f50, size 0x20, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::UnityEngine::Object*  exists) ;

/// @brief Method op_Inequality, addr 0x182276f70, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

static inline void setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t  value) ;

/// @brief Method set_hideFlags, addr 0x182276fc0, size 0x30, virtual false, abstract: false, final false
inline void set_hideFlags(::UnityEngine::HideFlags  value) ;

/// @brief Method set_hideFlags_Injected, addr 0x182276fb0, size 0x10, virtual false, abstract: false, final false
static inline void set_hideFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::HideFlags  value) ;

/// @brief Method set_name, addr 0x182276ff0, size 0x10, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Object() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Object(Object && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Object(Object const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10740};

/// @brief Field cloneDestroyedMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  cloneDestroyedMessage{u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake."};

/// @brief Field kInstanceID_None offset 0xffffffff size 0x4
static constexpr int32_t  kInstanceID_None{static_cast<int32_t>(0x0)};

/// @brief Field objectIsNullMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  objectIsNullMessage{u"The Object you want to instantiate is null."};

/// @brief Field m_CachedPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_CachedPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Object, ___m_CachedPtr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Object) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
