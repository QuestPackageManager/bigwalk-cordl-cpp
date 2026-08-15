#pragma once
// IWYU pragma private; include "UnityEngine/MeshFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(MeshFilter)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::MeshFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshFilter*, "UnityEngine", "MeshFilter");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshFilter
class CORDL_TYPE MeshFilter : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(put=set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

 __declspec(property(get=get_sharedMesh, put=set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

/// @brief Method DontStripMeshFilter, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void DontStripMeshFilter() ;

static inline ::UnityEngine::MeshFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_sharedMesh, addr 0x1822567f0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh() ;

/// @brief Method get_sharedMesh_Injected, addr 0x1822567e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_mesh, addr 0x182256840, size 0x50, virtual false, abstract: false, final false
inline void set_mesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_mesh_Injected, addr 0x182256830, size 0x10, virtual false, abstract: false, final false
static inline void set_mesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_sharedMesh, addr 0x1822568a0, size 0x50, virtual false, abstract: false, final false
inline void set_sharedMesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_sharedMesh_Injected, addr 0x182256890, size 0x10, virtual false, abstract: false, final false
static inline void set_sharedMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshFilter(MeshFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshFilter(MeshFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MeshFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
