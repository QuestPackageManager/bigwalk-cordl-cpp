#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEInstanced.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TVEInstanced)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TheVisualEngine {
class TVEElement;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEInstanced;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEInstanced*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEInstanced*, "TheVisualEngine", "TVEInstanced");
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Vector4
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEInstanced
class CORDL_TYPE TVEInstanced : public ::System::Object {
public:
// Declarations
/// @brief Field elements, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  elements;

/// @brief Field instancedDataID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_instancedDataID, put=__cordl_internal_set_instancedDataID)) int32_t  instancedDataID;

/// @brief Field material, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field matrices, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_matrices, put=__cordl_internal_set_matrices)) ::ArrayW<::UnityEngine::Matrix4x4>  matrices;

/// @brief Field mesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field parameters, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::ArrayW<::UnityEngine::Vector4>  parameters;

/// @brief Field propertyBlock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlock, put=__cordl_internal_set_propertyBlock)) ::UnityEngine::MaterialPropertyBlock*  propertyBlock;

/// @brief Field propertyBlockCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_propertyBlockCount, put=__cordl_internal_set_propertyBlockCount)) int32_t  propertyBlockCount;

/// @brief Field renderDataID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderDataID, put=__cordl_internal_set_renderDataID)) int32_t  renderDataID;

/// @brief Field renderLayers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderLayers, put=__cordl_internal_set_renderLayers)) ::System::Collections::Generic::List_1<int32_t>*  renderLayers;

/// @brief Field renderLayersAsPasses, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_renderLayersAsPasses, put=__cordl_internal_set_renderLayersAsPasses)) bool  renderLayersAsPasses;

/// @brief Field renderers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers;

static inline ::TheVisualEngine::TVEInstanced* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>* const& __cordl_internal_get_elements() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*& __cordl_internal_get_elements() ;

constexpr int32_t const& __cordl_internal_get_instancedDataID() const;

constexpr int32_t& __cordl_internal_get_instancedDataID() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_matrices() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_matrices() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_parameters() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_parameters() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_propertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_propertyBlock() ;

constexpr int32_t const& __cordl_internal_get_propertyBlockCount() const;

constexpr int32_t& __cordl_internal_get_propertyBlockCount() ;

constexpr int32_t const& __cordl_internal_get_renderDataID() const;

constexpr int32_t& __cordl_internal_get_renderDataID() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_renderLayers() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_renderLayers() ;

constexpr bool const& __cordl_internal_get_renderLayersAsPasses() const;

constexpr bool& __cordl_internal_get_renderLayersAsPasses() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_renderers() ;

constexpr void __cordl_internal_set_elements(::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  value) ;

constexpr void __cordl_internal_set_instancedDataID(int32_t  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_matrices(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_parameters(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_propertyBlockCount(int32_t  value) ;

constexpr void __cordl_internal_set_renderDataID(int32_t  value) ;

constexpr void __cordl_internal_set_renderLayers(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_renderLayersAsPasses(bool  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method .ctor, addr 0x1804b9800, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEInstanced() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEInstanced", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEInstanced(TVEInstanced && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEInstanced", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEInstanced(TVEInstanced const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19606};

/// @brief Field instancedDataID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___instancedDataID;

/// @brief Field renderDataID, offset: 0x14, size: 0x4, def value: None
 int32_t  ___renderDataID;

/// @brief Field renderLayers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___renderLayers;

/// @brief Field renderLayersAsPasses, offset: 0x20, size: 0x1, def value: None
 bool  ___renderLayersAsPasses;

/// @brief Field material, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field mesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field elements, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  ___elements;

/// @brief Field renderers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___renderers;

/// @brief Field matrices, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___matrices;

/// @brief Field parameters, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___parameters;

/// @brief Field propertyBlock, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___propertyBlock;

/// @brief Field propertyBlockCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___propertyBlockCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___instancedDataID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___renderDataID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___renderLayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___renderLayersAsPasses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___elements) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___renderers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___matrices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___parameters) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___propertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEInstanced, ___propertyBlockCount) == 0x60, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEInstanced) == 0x68, "Size mismatch!");

} // namespace end def TheVisualEngine
