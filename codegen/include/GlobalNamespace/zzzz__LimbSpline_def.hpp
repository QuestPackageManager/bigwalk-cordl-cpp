#pragma once
// IWYU pragma private; include "GlobalNamespace/LimbSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LimbSpline)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LimbSpline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LimbSpline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LimbSpline*, "", "LimbSpline");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LimbSpline
class CORDL_TYPE LimbSpline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _materialInstance, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field armThickness, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_armThickness, put=__cordl_internal_set_armThickness)) float_t  armThickness;

/// @brief Field endName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_endName, put=__cordl_internal_set_endName)) ::StringW  endName;

/// @brief Field endTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTransform, put=__cordl_internal_set_endTransform)) ::UnityW<::UnityEngine::Transform>  endTransform;

/// @brief Field endX, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_endX, put=__cordl_internal_set_endX)) float_t  endX;

/// @brief Field handleName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleName, put=__cordl_internal_set_handleName)) ::StringW  handleName;

/// @brief Field handleTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleTransform, put=__cordl_internal_set_handleTransform)) ::UnityW<::UnityEngine::Transform>  handleTransform;

/// @brief Field initialized, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

 __declspec(property(get=get_materialInstance)) ::UnityW<::UnityEngine::Material>  materialInstance;

/// @brief Field meshFilter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field newNormals, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_newNormals, put=__cordl_internal_set_newNormals)) ::ArrayW<::UnityEngine::Vector3>  newNormals;

/// @brief Field newVerts, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_newVerts, put=__cordl_internal_set_newVerts)) ::ArrayW<::UnityEngine::Vector3>  newVerts;

/// @brief Field originalMesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalMesh, put=__cordl_internal_set_originalMesh)) ::UnityW<::UnityEngine::Mesh>  originalMesh;

/// @brief Field originalNormals, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalNormals, put=__cordl_internal_set_originalNormals)) ::ArrayW<::UnityEngine::Vector3>  originalNormals;

/// @brief Field originalVerts, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalVerts, put=__cordl_internal_set_originalVerts)) ::ArrayW<::UnityEngine::Vector3>  originalVerts;

/// @brief Field showGizmos, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGizmos, put=__cordl_internal_set_showGizmos)) bool  showGizmos;

/// @brief Field startName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_startName, put=__cordl_internal_set_startName)) ::StringW  startName;

/// @brief Field startTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTransform, put=__cordl_internal_set_startTransform)) ::UnityW<::UnityEngine::Transform>  startTransform;

/// @brief Field startX, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_startX, put=__cordl_internal_set_startX)) float_t  startX;

static inline ::GlobalNamespace::LimbSpline* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803ecb10, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803ecb50, size 0x240, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Refresh, addr 0x1803ed0c0, size 0x10, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RefreshShaderMode, addr 0x1803ecd90, size 0x330, virtual false, abstract: false, final false
inline void RefreshShaderMode() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr float_t const& __cordl_internal_get_armThickness() const;

constexpr float_t& __cordl_internal_get_armThickness() ;

constexpr ::StringW const& __cordl_internal_get_endName() const;

constexpr ::StringW& __cordl_internal_get_endName() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endTransform() ;

constexpr float_t const& __cordl_internal_get_endX() const;

constexpr float_t& __cordl_internal_get_endX() ;

constexpr ::StringW const& __cordl_internal_get_handleName() const;

constexpr ::StringW& __cordl_internal_get_handleName() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handleTransform() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_newNormals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_newNormals() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_newVerts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_newVerts() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_originalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_originalMesh() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_originalNormals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_originalNormals() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_originalVerts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_originalVerts() ;

constexpr bool const& __cordl_internal_get_showGizmos() const;

constexpr bool& __cordl_internal_get_showGizmos() ;

constexpr ::StringW const& __cordl_internal_get_startName() const;

constexpr ::StringW& __cordl_internal_get_startName() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startTransform() ;

constexpr float_t const& __cordl_internal_get_startX() const;

constexpr float_t& __cordl_internal_get_startX() ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_armThickness(float_t  value) ;

constexpr void __cordl_internal_set_endName(::StringW  value) ;

constexpr void __cordl_internal_set_endTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_endX(float_t  value) ;

constexpr void __cordl_internal_set_handleName(::StringW  value) ;

constexpr void __cordl_internal_set_handleTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_newNormals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_newVerts(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_originalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_originalNormals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_originalVerts(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_showGizmos(bool  value) ;

constexpr void __cordl_internal_set_startName(::StringW  value) ;

constexpr void __cordl_internal_set_startTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startX(float_t  value) ;

/// @brief Method .ctor, addr 0x1803ed0d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_materialInstance, addr 0x1803ed0e0, size 0xe0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_materialInstance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LimbSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LimbSpline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LimbSpline(LimbSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LimbSpline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LimbSpline(LimbSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4947};

/// @brief Field startTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startTransform;

/// @brief Field handleTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handleTransform;

/// @brief Field endTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endTransform;

/// @brief Field startName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___startName;

/// @brief Field handleName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___handleName;

/// @brief Field endName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___endName;

/// @brief Field meshRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field originalMesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___originalMesh;

/// @brief Field meshFilter, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field startX, offset: 0x68, size: 0x4, def value: None
 float_t  ___startX;

/// @brief Field endX, offset: 0x6c, size: 0x4, def value: None
 float_t  ___endX;

/// @brief Field armThickness, offset: 0x70, size: 0x4, def value: None
 float_t  ___armThickness;

/// @brief Field showGizmos, offset: 0x74, size: 0x1, def value: None
 bool  ___showGizmos;

/// @brief Field originalVerts, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___originalVerts;

/// @brief Field newVerts, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___newVerts;

/// @brief Field originalNormals, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___originalNormals;

/// @brief Field newNormals, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___newNormals;

/// @brief Field initialized, offset: 0x98, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field _materialInstance, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LimbSpline, ___startTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___handleTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___endTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___startName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___handleName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___endName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___meshRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___originalMesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___meshFilter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___startX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___endX) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___armThickness) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___showGizmos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___originalVerts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___newVerts) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___originalNormals) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___newNormals) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ___initialized) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LimbSpline, ____materialInstance) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LimbSpline) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
