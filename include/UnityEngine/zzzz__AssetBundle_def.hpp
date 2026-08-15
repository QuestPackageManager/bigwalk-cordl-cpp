#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetBundle)
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
// Forward declare root types
namespace UnityEngine {
class AssetBundle;
}
// Write type traits
MARK_REF_T(::UnityEngine::AssetBundle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundle
class CORDL_TYPE AssetBundle : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method LoadAsset, addr 0x182238510, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T LoadAsset(::StringW  name) ;

/// @brief Method LoadAsset_Internal, addr 0x1822383a0, size 0x170, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAsset_Internal_Injected, addr 0x182238390, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadAsset_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundle(AssetBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundle(AssetBundle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundle) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
