#pragma once
// IWYU pragma private; include "UnityEngine/Resources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Resources)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Resources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Resources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Resources*, "UnityEngine", "Resources");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Resources
class CORDL_TYPE Resources : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ConvertObjects(::ArrayW<::UnityEngine::Object*>  rawObjects) ;

/// @brief Method EntityIdIsValid, addr 0x182278e90, size 0x20, virtual false, abstract: false, final false
static inline bool EntityIdIsValid(::UnityEngine::EntityId  entityId) ;

/// @brief Method EntityIdIsValid_Injected, addr 0x182278e80, size 0x10, virtual false, abstract: false, final false
static inline bool EntityIdIsValid_Injected(::by_ref<::UnityEngine::EntityId>  entityId) ;

/// @brief Method EntityIdToObject, addr 0x182278ec0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> EntityIdToObject(::UnityEngine::EntityId  entityId) ;

/// @brief Method EntityIdToObject_Injected, addr 0x182278eb0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr EntityIdToObject_Injected(::by_ref<::UnityEngine::EntityId>  entityId) ;

/// @brief Method EntityIdsToObjectList, addr 0x182278ef0, size 0x10, virtual false, abstract: false, final false
static inline void EntityIdsToObjectList(::System::IntPtr  entityIds, int32_t  instanceCount, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  objects) ;

/// @brief Method EntityIdsToObjectList, addr 0x182278f00, size 0x90, virtual false, abstract: false, final false
static inline void EntityIdsToObjectList(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  entityIds, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  objects) ;

/// @brief Method FindObjectsOfTypeAll, addr 0x182278f90, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfTypeAll(::System::Type*  type) ;

/// @brief Method FindObjectsOfTypeAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> FindObjectsOfTypeAll() ;

/// @brief Method GetBuiltinResource, addr 0x182279010, size 0x170, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> GetBuiltinResource(::System::Type*  type, ::StringW  path) ;

/// @brief Method GetBuiltinResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetBuiltinResource(::StringW  path) ;

/// @brief Method GetBuiltinResource_Injected, addr 0x182279000, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBuiltinResource_Injected(::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  path) ;

/// @brief Method Load, addr 0x182279200, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Load(::StringW  path) ;

/// @brief Method Load, addr 0x182279180, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Load(::StringW  path, ::System::Type*  systemTypeInstance) ;

/// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Load(::StringW  path) ;

/// @brief Method UnloadAsset, addr 0x182279230, size 0x70, virtual false, abstract: false, final false
static inline void UnloadAsset(::UnityEngine::Object*  assetToUnload) ;

/// @brief Method UnloadUnusedAssets, addr 0x1822792b0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadUnusedAssets() ;

/// @brief Method UnloadUnusedAssets_Injected, addr 0x1822792a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr UnloadUnusedAssets_Injected() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Resources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Resources(Resources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Resources(Resources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Resources) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
