#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPIInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ResourcesAPIInternal)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPIInternal;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourcesAPIInternal*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourcesAPIInternal*, "UnityEngine", "ResourcesAPIInternal");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ResourcesAPIInternal
class CORDL_TYPE ResourcesAPIInternal : public ::System::Object {
public:
// Declarations
/// @brief Method FindObjectsOfTypeAll, addr 0x182278a30, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsOfTypeAll(::System::Type*  type) ;

/// @brief Method FindShaderByName, addr 0x182278a50, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> FindShaderByName(::StringW  name) ;

/// @brief Method FindShaderByName_Injected, addr 0x182278a40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr FindShaderByName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Load, addr 0x182278ba0, size 0x170, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Load(::StringW  path, ::System::Type*  systemTypeInstance) ;

/// @brief Method Load_Injected, addr 0x182278b90, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Load_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  path, ::System::Type*  systemTypeInstance) ;

/// @brief Method UnloadAsset, addr 0x182278d20, size 0x20, virtual false, abstract: false, final false
static inline void UnloadAsset(::UnityEngine::Object*  assetToUnload) ;

/// @brief Method UnloadAsset_Injected, addr 0x182278d10, size 0x10, virtual false, abstract: false, final false
static inline void UnloadAsset_Injected(::System::IntPtr  assetToUnload) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResourcesAPIInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourcesAPIInternal(ResourcesAPIInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourcesAPIInternal(ResourcesAPIInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ResourcesAPIInternal) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
