#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGameObjectData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TVEGameObjectData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshCollider;
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
// Forward declare root types
namespace TheVisualEngine {
class TVEGameObjectData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEGameObjectData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEGameObjectData*, "TheVisualEngine", "TVEGameObjectData");
// Dependencies System.Object, UnityEngine.Material
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEGameObjectData
class CORDL_TYPE TVEGameObjectData : public ::System::Object {
public:
// Declarations
/// @brief Field gameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field instanceColliders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceColliders, put=__cordl_internal_set_instanceColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  instanceColliders;

/// @brief Field instanceMaterials, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceMaterials, put=__cordl_internal_set_instanceMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  instanceMaterials;

/// @brief Field instanceMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceMesh, put=__cordl_internal_set_instanceMesh)) ::UnityW<::UnityEngine::Mesh>  instanceMesh;

/// @brief Field isZUp, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isZUp, put=__cordl_internal_set_isZUp)) bool  isZUp;

/// @brief Field meshColliders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshColliders, put=__cordl_internal_set_meshColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  meshColliders;

/// @brief Field meshFilter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field originalColliders, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalColliders, put=__cordl_internal_set_originalColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  originalColliders;

/// @brief Field originalMaterials, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalMaterials, put=__cordl_internal_set_originalMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  originalMaterials;

/// @brief Field originalMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalMesh, put=__cordl_internal_set_originalMesh)) ::UnityW<::UnityEngine::Mesh>  originalMesh;

/// @brief Field parentPrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentPrefab, put=__cordl_internal_set_parentPrefab)) ::UnityW<::UnityEngine::GameObject>  parentPrefab;

static inline ::TheVisualEngine::TVEGameObjectData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_instanceColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_instanceColliders() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_instanceMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_instanceMaterials() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_instanceMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_instanceMesh() ;

constexpr bool const& __cordl_internal_get_isZUp() const;

constexpr bool& __cordl_internal_get_isZUp() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& __cordl_internal_get_meshColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& __cordl_internal_get_meshColliders() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_originalColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_originalColliders() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_originalMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_originalMaterials() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_originalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_originalMesh() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_parentPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_parentPrefab() ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_instanceColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_instanceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_instanceMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_isZUp(bool  value) ;

constexpr void __cordl_internal_set_meshColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_originalColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_originalMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_originalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_parentPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1804b9600, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEGameObjectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEGameObjectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEGameObjectData(TVEGameObjectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEGameObjectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEGameObjectData(TVEGameObjectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19593};

/// @brief Field parentPrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___parentPrefab;

/// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field meshFilter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field originalMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___originalMesh;

/// @brief Field instanceMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___instanceMesh;

/// @brief Field meshColliders, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  ___meshColliders;

/// @brief Field originalColliders, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___originalColliders;

/// @brief Field instanceColliders, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___instanceColliders;

/// @brief Field meshRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field originalMaterials, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___originalMaterials;

/// @brief Field instanceMaterials, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___instanceMaterials;

/// @brief Field isZUp, offset: 0x68, size: 0x1, def value: None
 bool  ___isZUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___parentPrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___meshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___originalMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___instanceMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___meshColliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___originalColliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___instanceColliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___meshRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___originalMaterials) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___instanceMaterials) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGameObjectData, ___isZUp) == 0x68, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEGameObjectData) == 0x70, "Size mismatch!");

} // namespace end def TheVisualEngine
