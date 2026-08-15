#pragma once
// IWYU pragma private; include "UnityEngine/GameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObject)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
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
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct PrimitiveType;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class GameObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::GameObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GameObject*, "UnityEngine", "GameObject");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GameObject
class CORDL_TYPE GameObject : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_activeInHierarchy)) bool  activeInHierarchy;

 __declspec(property(get=get_activeSelf)) bool  activeSelf;

 __declspec(property(get=get_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

 __declspec(property(get=get_isStatic)) bool  isStatic;

 __declspec(property(get=get_layer, put=set_layer)) int32_t  layer;

 __declspec(property(get=get_scene)) ::UnityEngine::SceneManagement::Scene  scene;

 __declspec(property(get=get_sceneCullingMask)) uint64_t  sceneCullingMask;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method AddComponent, addr 0x182271a90, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> AddComponent(::System::Type*  componentType) ;

/// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T AddComponent() ;

/// @brief Method CompareTag, addr 0x182271c30, size 0x10, virtual false, abstract: false, final false
inline bool CompareTag(::StringW  tag) ;

/// @brief Method CompareTag_Internal, addr 0x182271af0, size 0x140, virtual false, abstract: false, final false
inline bool CompareTag_Internal(::StringW  tag) ;

/// @brief Method CompareTag_Internal_Injected, addr 0x182271ae0, size 0x10, virtual false, abstract: false, final false
static inline bool CompareTag_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  tag) ;

/// @brief Method CreatePrimitive, addr 0x182271c50, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreatePrimitive(::UnityEngine::PrimitiveType  type) ;

/// @brief Method CreatePrimitive_Injected, addr 0x182271c40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr CreatePrimitive_Injected(::UnityEngine::PrimitiveType  type) ;

/// @brief Method Find, addr 0x182271dd0, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Find(::StringW  name) ;

/// @brief Method FindGameObjectWithTag, addr 0x182271c80, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> FindGameObjectWithTag(::StringW  tag) ;

/// @brief Method FindGameObjectWithTag_Injected, addr 0x182271c70, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr FindGameObjectWithTag_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  tag) ;

/// @brief Method Find_Injected, addr 0x182271dc0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Find_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetComponent, addr 0x182272050, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type*  type) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponent() ;

/// @brief Method GetComponentFastPath, addr 0x182271f20, size 0x40, virtual false, abstract: false, final false
inline void GetComponentFastPath(::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// @brief Method GetComponentFastPath_Injected, addr 0x182271f10, size 0x10, virtual false, abstract: false, final false
static inline void GetComponentFastPath_Injected(::System::IntPtr  _unity_self, ::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// @brief Method GetComponentInChildren, addr 0x182271f70, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type*  type, bool  includeInactive) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInChildren() ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInChildren(bool  includeInactive) ;

/// @brief Method GetComponentInChildren_Injected, addr 0x182271f60, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetComponentInChildren_Injected(::System::IntPtr  _unity_self, ::System::Type*  type, bool  includeInactive) ;

/// @brief Method GetComponentInParent, addr 0x182271fe0, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type*  type, bool  includeInactive) ;

/// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInParent() ;

/// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInParent(bool  includeInactive) ;

/// @brief Method GetComponentInParent_Injected, addr 0x182271fd0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetComponentInParent_Injected(::System::IntPtr  _unity_self, ::System::Type*  type, bool  includeInactive) ;

/// @brief Method GetComponent_Injected, addr 0x182272040, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetComponent_Injected(::System::IntPtr  _unity_self, ::System::Type*  type) ;

/// @brief Method GetComponents, addr 0x182272230, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponents(::System::Type*  type) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponents() ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponents(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponents, addr 0x1822721d0, size 0x60, virtual false, abstract: false, final false
inline void GetComponents(::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results) ;

/// @brief Method GetComponentsInChildren, addr 0x1822720a0, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Component>> GetComponentsInChildren(::System::Type*  type, bool  includeInactive) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponentsInChildren() ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponentsInChildren(bool  includeInactive) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInChildren(bool  includeInactive, ::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetComponentsInParent(bool  includeInactive) ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInParent(bool  includeInactive, ::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponentsInternal, addr 0x182272160, size 0x70, virtual false, abstract: false, final false
inline ::System::Array* GetComponentsInternal(::System::Type*  type, bool  useSearchTypeAsArrayReturnType, bool  recursive, bool  includeInactive, bool  reverse, ::System::Object*  resultList) ;

/// @brief Method GetComponentsInternal_Injected, addr 0x182272140, size 0x20, virtual false, abstract: false, final false
static inline ::System::Array* GetComponentsInternal_Injected(::System::IntPtr  _unity_self, ::System::Type*  type, bool  useSearchTypeAsArrayReturnType, bool  recursive, bool  includeInactive, bool  reverse, ::System::Object*  resultList) ;

/// @brief Method Internal_AddComponentWithType, addr 0x182271a90, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> Internal_AddComponentWithType(::System::Type*  componentType) ;

/// @brief Method Internal_AddComponentWithType_Injected, addr 0x1822722c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_AddComponentWithType_Injected(::System::IntPtr  _unity_self, ::System::Type*  componentType) ;

/// @brief Method Internal_CreateGameObject, addr 0x1822722e0, size 0x100, virtual false, abstract: false, final false
static inline void Internal_CreateGameObject(::UnityEngine::GameObject*  self, ::StringW  name) ;

/// @brief Method Internal_CreateGameObject_Injected, addr 0x1822722d0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CreateGameObject_Injected(::UnityEngine::GameObject*  self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

static inline ::UnityEngine::GameObject* New_ctor() ;

static inline ::UnityEngine::GameObject* New_ctor(::StringW  name) ;

static inline ::UnityEngine::GameObject* New_ctor(::StringW  name, ::ArrayW<::System::Type*>  components) ;

/// @brief Method SendMessage, addr 0x1822723f0, size 0x130, virtual false, abstract: false, final false
inline void SendMessage(::StringW  methodName, ::System::Object*  value, ::UnityEngine::SendMessageOptions  options) ;

/// @brief Method SendMessage_Injected, addr 0x1822723e0, size 0x10, virtual false, abstract: false, final false
static inline void SendMessage_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName, ::System::Object*  value, ::UnityEngine::SendMessageOptions  options) ;

/// @brief Method SetActive, addr 0x182272530, size 0x30, virtual false, abstract: false, final false
inline void SetActive(bool  value) ;

/// @brief Method SetActive_Injected, addr 0x182272520, size 0x10, virtual false, abstract: false, final false
static inline void SetActive_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetComponent(::by_ref<T>  component) ;

/// @brief Method TryGetComponent, addr 0x182272610, size 0x90, virtual false, abstract: false, final false
inline bool TryGetComponent(::System::Type*  type, ::by_ref<::UnityEngine::Component*>  component) ;

/// @brief Method TryGetComponentFastPath, addr 0x182272570, size 0x40, virtual false, abstract: false, final false
inline void TryGetComponentFastPath(::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// @brief Method TryGetComponentFastPath_Injected, addr 0x182272560, size 0x10, virtual false, abstract: false, final false
static inline void TryGetComponentFastPath_Injected(::System::IntPtr  _unity_self, ::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// @brief Method TryGetComponentInternal, addr 0x1822725c0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> TryGetComponentInternal(::System::Type*  type) ;

/// @brief Method TryGetComponentInternal_Injected, addr 0x1822725b0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr TryGetComponentInternal_Injected(::System::IntPtr  _unity_self, ::System::Type*  type) ;

/// @brief Method .ctor, addr 0x182272740, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1822726a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x1822726b0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::ArrayW<::System::Type*>  components) ;

/// @brief Method get_activeInHierarchy, addr 0x182272760, size 0x30, virtual false, abstract: false, final false
inline bool get_activeInHierarchy() ;

/// @brief Method get_activeInHierarchy_Injected, addr 0x182272750, size 0x10, virtual false, abstract: false, final false
static inline bool get_activeInHierarchy_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_activeSelf, addr 0x1822727a0, size 0x30, virtual false, abstract: false, final false
inline bool get_activeSelf() ;

/// @brief Method get_activeSelf_Injected, addr 0x182272790, size 0x10, virtual false, abstract: false, final false
static inline bool get_activeSelf_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_gameObject, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_gameObject() ;

/// @brief Method get_isStatic, addr 0x1822727e0, size 0x30, virtual false, abstract: false, final false
inline bool get_isStatic() ;

/// @brief Method get_isStatic_Injected, addr 0x1822727d0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isStatic_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_layer, addr 0x182272820, size 0x30, virtual false, abstract: false, final false
inline int32_t get_layer() ;

/// @brief Method get_layer_Injected, addr 0x182272810, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_layer_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_scene, addr 0x1822728a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene get_scene() ;

/// @brief Method get_sceneCullingMask, addr 0x182272860, size 0x30, virtual false, abstract: false, final false
inline uint64_t get_sceneCullingMask() ;

/// @brief Method get_sceneCullingMask_Injected, addr 0x182272850, size 0x10, virtual false, abstract: false, final false
static inline uint64_t get_sceneCullingMask_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_scene_Injected, addr 0x182272890, size 0x10, virtual false, abstract: false, final false
static inline void get_scene_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret) ;

/// @brief Method get_tag, addr 0x1822728f0, size 0xb0, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Method get_tag_Injected, addr 0x1822728e0, size 0x10, virtual false, abstract: false, final false
static inline void get_tag_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_transform, addr 0x1822729b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// @brief Method get_transform_Injected, addr 0x1822729a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_transform_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_layer, addr 0x182272a00, size 0x30, virtual false, abstract: false, final false
inline void set_layer(int32_t  value) ;

/// @brief Method set_layer_Injected, addr 0x1822729f0, size 0x10, virtual false, abstract: false, final false
static inline void set_layer_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_tag, addr 0x182272a40, size 0x120, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

/// @brief Method set_tag_Injected, addr 0x182272a30, size 0x10, virtual false, abstract: false, final false
static inline void set_tag_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObject(GameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObject(GameObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10708};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GameObject) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
