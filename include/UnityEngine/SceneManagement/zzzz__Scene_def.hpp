#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__SceneHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scene)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::SceneManagement {
struct SceneHandle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::Scene);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
// Dependencies UnityEngine.SceneManagement.SceneHandle
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.Scene
struct CORDL_TYPE Scene {
public:
// Declarations
 __declspec(property(get=get_buildIndex)) int32_t  buildIndex;

 __declspec(property(get=get_guid)) ::StringW  guid;

 __declspec(property(get=get_handle)) ::UnityEngine::SceneManagement::SceneHandle  handle;

 __declspec(property(get=get_isLoaded)) bool  isLoaded;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_path)) ::StringW  path;

 __declspec(property(get=get_rootCount)) int32_t  rootCount;

/// @brief Method Equals, addr 0x182286930, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetBuildIndexInternal, addr 0x1822869b0, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetBuildIndexInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle) ;

/// @brief Method GetBuildIndexInternal_Injected, addr 0x1822869a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetBuildIndexInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle) ;

/// @brief Method GetGUIDInternal, addr 0x1822869e0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetGUIDInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle) ;

/// @brief Method GetGUIDInternal_Injected, addr 0x1822869d0, size 0x10, virtual false, abstract: false, final false
static inline void GetGUIDInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetHashCode, addr 0x1812a2f30, size 0x370, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIsLoadedInternal, addr 0x182286a60, size 0x20, virtual false, abstract: false, final false
static inline bool GetIsLoadedInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle) ;

/// @brief Method GetIsLoadedInternal_Injected, addr 0x182286a50, size 0x10, virtual false, abstract: false, final false
static inline bool GetIsLoadedInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle) ;

/// @brief Method GetNameInternal, addr 0x182286a90, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetNameInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle) ;

/// @brief Method GetNameInternal_Injected, addr 0x182286a80, size 0x10, virtual false, abstract: false, final false
static inline void GetNameInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPathInternal, addr 0x182286b10, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetPathInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle) ;

/// @brief Method GetPathInternal_Injected, addr 0x182286b00, size 0x10, virtual false, abstract: false, final false
static inline void GetPathInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetRootCountInternal, addr 0x182286b90, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetRootCountInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle) ;

/// @brief Method GetRootCountInternal_Injected, addr 0x182286b80, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetRootCountInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle) ;

/// @brief Method GetRootGameObjects, addr 0x182286d10, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> GetRootGameObjects() ;

/// @brief Method GetRootGameObjects, addr 0x182286be0, size 0x130, virtual false, abstract: false, final false
inline void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  rootGameObjects) ;

/// @brief Method GetRootGameObjectsInternal, addr 0x182286bc0, size 0x20, virtual false, abstract: false, final false
static inline void GetRootGameObjectsInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle, ::System::Object*  resultRootList) ;

/// @brief Method GetRootGameObjectsInternal_Injected, addr 0x182286bb0, size 0x10, virtual false, abstract: false, final false
static inline void GetRootGameObjectsInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle, ::System::Object*  resultRootList) ;

/// @brief Method IsValid, addr 0x182286dc0, size 0x30, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method IsValidInternal, addr 0x182286da0, size 0x20, virtual false, abstract: false, final false
static inline bool IsValidInternal(::UnityEngine::SceneManagement::SceneHandle  sceneHandle) ;

/// @brief Method IsValidInternal_Injected, addr 0x182286d90, size 0x10, virtual false, abstract: false, final false
static inline bool IsValidInternal_Injected(::by_ref<::UnityEngine::SceneManagement::SceneHandle>  sceneHandle) ;

/// @brief Method get_buildIndex, addr 0x182286df0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_buildIndex() ;

/// @brief Method get_guid, addr 0x182286e20, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_guid() ;

/// @brief Method get_handle, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::SceneHandle get_handle() ;

/// @brief Method get_isLoaded, addr 0x182286e40, size 0x30, virtual false, abstract: false, final false
inline bool get_isLoaded() ;

/// @brief Method get_name, addr 0x182286e70, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_path, addr 0x182286e90, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_path() ;

/// @brief Method get_rootCount, addr 0x182286eb0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_rootCount() ;

/// @brief Method op_Equality, addr 0x1812a32a0, size 0xd0, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::SceneManagement::Scene  lhs, ::UnityEngine::SceneManagement::Scene  rhs) ;

/// @brief Method op_Inequality, addr 0x1812a3370, size 0x330, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::SceneManagement::Scene  lhs, ::UnityEngine::SceneManagement::Scene  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr Scene() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::SceneManagement::SceneHandle", modifiers: "", def_value: None }]
constexpr Scene(::UnityEngine::SceneManagement::SceneHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10877};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::SceneHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::Scene, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
