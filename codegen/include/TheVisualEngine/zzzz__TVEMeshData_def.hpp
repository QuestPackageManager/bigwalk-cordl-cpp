#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEMeshData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TVEMeshData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEMeshData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEMeshData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEMeshData*, "TheVisualEngine", "TVEMeshData");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEMeshData
class CORDL_TYPE TVEMeshData : public ::System::Object {
public:
// Declarations
/// @brief Field UV0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_UV0, put=__cordl_internal_set_UV0)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  UV0;

/// @brief Field UV2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_UV2, put=__cordl_internal_set_UV2)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  UV2;

/// @brief Field UV4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_UV4, put=__cordl_internal_set_UV4)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  UV4;

/// @brief Field colors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors;

/// @brief Field mesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field normals, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals;

/// @brief Field tangents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tangents, put=__cordl_internal_set_tangents)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents;

/// @brief Field vertices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices;

static inline ::TheVisualEngine::TVEMeshData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_UV0() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_UV0() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_UV2() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_UV2() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_UV4() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_UV4() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get_colors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get_colors() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_normals() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_normals() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_tangents() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_tangents() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_vertices() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set_UV0(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_UV2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_UV4(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_colors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEMeshData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEMeshData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEMeshData(TVEMeshData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEMeshData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEMeshData(TVEMeshData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19607};

/// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___vertices;

/// @brief Field colors, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color>*  ___colors;

/// @brief Field normals, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___normals;

/// @brief Field tangents, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___tangents;

/// @brief Field UV0, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___UV0;

/// @brief Field UV2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___UV2;

/// @brief Field UV4, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___UV4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___colors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___normals) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___tangents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___UV0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___UV2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMeshData, ___UV4) == 0x48, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEMeshData) == 0x50, "Size mismatch!");

} // namespace end def TheVisualEngine
