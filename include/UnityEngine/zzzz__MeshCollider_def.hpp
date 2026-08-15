#pragma once
// IWYU pragma private; include "UnityEngine/MeshCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
CORDL_MODULE_EXPORT(MeshCollider)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshCollider;
}
// Write type traits
MARK_REF_T(::UnityEngine::MeshCollider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshCollider*, "UnityEngine", "MeshCollider");
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshCollider
class CORDL_TYPE MeshCollider : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_convex, put=set_convex)) bool  convex;

 __declspec(property(get=get_sharedMesh, put=set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

static inline ::UnityEngine::MeshCollider* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_convex, addr 0x1822fcb00, size 0x30, virtual false, abstract: false, final false
inline bool get_convex() ;

/// @brief Method get_convex_Injected, addr 0x1822fcaf0, size 0x10, virtual false, abstract: false, final false
static inline bool get_convex_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sharedMesh, addr 0x1822fcb40, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh() ;

/// @brief Method get_sharedMesh_Injected, addr 0x1822fcb30, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_convex, addr 0x1822fcb90, size 0x30, virtual false, abstract: false, final false
inline void set_convex(bool  value) ;

/// @brief Method set_convex_Injected, addr 0x1822fcb80, size 0x10, virtual false, abstract: false, final false
static inline void set_convex_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_sharedMesh, addr 0x1822fcbd0, size 0x50, virtual false, abstract: false, final false
inline void set_sharedMesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_sharedMesh_Injected, addr 0x1822fcbc0, size 0x10, virtual false, abstract: false, final false
static inline void set_sharedMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshCollider(MeshCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshCollider(MeshCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MeshCollider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
