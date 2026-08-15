#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/CopyStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__TreePrototypeSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CopyStamp)
namespace JBooth::MicroVerseCore {
class CopyStamp_DetailCopyData;
}
namespace JBooth::MicroVerseCore {
class CopyStamp_TreeCopyData;
}
namespace JBooth::MicroVerseCore {
class DetailCopyData_CopyStamp_Layer;
}
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class CopyStamp;
}
namespace JBooth::MicroVerseCore {
class CopyStamp_DetailCopyData;
}
namespace JBooth::MicroVerseCore {
class CopyStamp_TreeCopyData;
}
namespace JBooth::MicroVerseCore {
class DetailCopyData_CopyStamp_Layer;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::CopyStamp*);
MARK_REF_T(::JBooth::MicroVerseCore::CopyStamp_DetailCopyData*);
MARK_REF_T(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData*);
MARK_REF_T(::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::CopyStamp*, "JBooth.MicroVerseCore", "CopyStamp");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::CopyStamp_DetailCopyData*, "JBooth.MicroVerseCore", "CopyStamp/DetailCopyData");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData*, "JBooth.MicroVerseCore", "CopyStamp/TreeCopyData");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer*, "JBooth.MicroVerseCore", "CopyStamp/DetailCopyData/Layer");
// Dependencies JBooth.MicroVerseCore.TreePrototypeSerializable, System.Object, UnityEngine.Vector2Int
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.CopyStamp/TreeCopyData
class CORDL_TYPE CopyStamp_TreeCopyData : public ::System::Object {
public:
// Declarations
/// @brief Field <positonsTex>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__positonsTex_k__BackingField, put=__cordl_internal_set__positonsTex_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _positonsTex_k__BackingField;

/// @brief Field <randomsTex>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__randomsTex_k__BackingField, put=__cordl_internal_set__randomsTex_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _randomsTex_k__BackingField;

/// @brief Field dataSize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataSize, put=__cordl_internal_set_dataSize)) ::UnityEngine::Vector2Int  dataSize;

/// @brief Field positionsData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionsData, put=__cordl_internal_set_positionsData)) ::ArrayW<uint8_t>  positionsData;

 __declspec(property(get=get_positonsTex, put=set_positonsTex)) ::UnityW<::UnityEngine::Texture2D>  positonsTex;

/// @brief Field prototypes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototypes, put=__cordl_internal_set_prototypes)) ::ArrayW<::JBooth::MicroVerseCore::TreePrototypeSerializable*>  prototypes;

/// @brief Field randomsData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomsData, put=__cordl_internal_set_randomsData)) ::ArrayW<uint8_t>  randomsData;

 __declspec(property(get=get_randomsTex, put=set_randomsTex)) ::UnityW<::UnityEngine::Texture2D>  randomsTex;

static inline ::JBooth::MicroVerseCore::CopyStamp_TreeCopyData* New_ctor() ;

/// @brief Method Unpack, addr 0x181426450, size 0x220, virtual false, abstract: false, final false
inline void Unpack() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__positonsTex_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__positonsTex_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__randomsTex_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__randomsTex_k__BackingField() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_dataSize() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_dataSize() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_positionsData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_positionsData() ;

constexpr ::ArrayW<::JBooth::MicroVerseCore::TreePrototypeSerializable*> const& __cordl_internal_get_prototypes() const;

constexpr ::ArrayW<::JBooth::MicroVerseCore::TreePrototypeSerializable*>& __cordl_internal_get_prototypes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_randomsData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_randomsData() ;

constexpr void __cordl_internal_set__positonsTex_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__randomsTex_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_dataSize(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_positionsData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_prototypes(::ArrayW<::JBooth::MicroVerseCore::TreePrototypeSerializable*>  value) ;

constexpr void __cordl_internal_set_randomsData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_positonsTex, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_positonsTex() ;

/// @brief Method get_randomsTex, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_randomsTex() ;

/// @brief Method set_positonsTex, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_positonsTex(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_randomsTex, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_randomsTex(::UnityEngine::Texture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyStamp_TreeCopyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyStamp_TreeCopyData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyStamp_TreeCopyData(CopyStamp_TreeCopyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyStamp_TreeCopyData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyStamp_TreeCopyData(CopyStamp_TreeCopyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17993};

/// @brief Field <positonsTex>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____positonsTex_k__BackingField;

/// @brief Field <randomsTex>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____randomsTex_k__BackingField;

/// @brief Field prototypes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::JBooth::MicroVerseCore::TreePrototypeSerializable*>  ___prototypes;

/// @brief Field randomsData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___randomsData;

/// @brief Field positionsData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___positionsData;

/// @brief Field dataSize, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___dataSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData, ____positonsTex_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData, ____randomsTex_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData, ___prototypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData, ___randomsData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData, ___positionsData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData, ___dataSize) == 0x38, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData) == 0x40, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object, UnityEngine.Vector2Int
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.CopyStamp/DetailCopyData/Layer
class CORDL_TYPE DetailCopyData_CopyStamp_Layer : public ::System::Object {
public:
// Declarations
/// @brief Field <texture>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__texture_k__BackingField, put=__cordl_internal_set__texture_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _texture_k__BackingField;

/// @brief Field bytes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bytes, put=__cordl_internal_set_bytes)) ::ArrayW<uint8_t>  bytes;

/// @brief Field dataSize, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataSize, put=__cordl_internal_set_dataSize)) ::UnityEngine::Vector2Int  dataSize;

/// @brief Field prototype, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototype, put=__cordl_internal_set_prototype)) ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  prototype;

 __declspec(property(get=get_texture, put=set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

static inline ::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__texture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__texture_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_bytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_bytes() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_dataSize() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_dataSize() ;

constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable* const& __cordl_internal_get_prototype() const;

constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable*& __cordl_internal_get_prototype() ;

constexpr void __cordl_internal_set__texture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_dataSize(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_prototype(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_texture, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_texture() ;

/// @brief Method set_texture, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_texture(::UnityEngine::Texture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailCopyData_CopyStamp_Layer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailCopyData_CopyStamp_Layer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailCopyData_CopyStamp_Layer(DetailCopyData_CopyStamp_Layer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailCopyData_CopyStamp_Layer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailCopyData_CopyStamp_Layer(DetailCopyData_CopyStamp_Layer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17994};

/// @brief Field <texture>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____texture_k__BackingField;

/// @brief Field bytes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___bytes;

/// @brief Field prototype, offset: 0x20, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  ___prototype;

/// @brief Field dataSize, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___dataSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer, ____texture_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer, ___bytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer, ___prototype) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer, ___dataSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.CopyStamp/DetailCopyData
class CORDL_TYPE CopyStamp_DetailCopyData : public ::System::Object {
public:
// Declarations
using Layer = ::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer;

/// @brief Field layers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_layers, put=__cordl_internal_set_layers)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer*>*  layers;

/// @brief Method FindOrCreateLayer, addr 0x18142a970, size 0x140, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer* FindOrCreateLayer(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  prototype) ;

static inline ::JBooth::MicroVerseCore::CopyStamp_DetailCopyData* New_ctor() ;

/// @brief Method Unpack, addr 0x18142aab0, size 0x1a0, virtual false, abstract: false, final false
inline void Unpack() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer*>* const& __cordl_internal_get_layers() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer*>*& __cordl_internal_get_layers() ;

constexpr void __cordl_internal_set_layers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer*>*  value) ;

/// @brief Method .ctor, addr 0x18142ac50, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyStamp_DetailCopyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyStamp_DetailCopyData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyStamp_DetailCopyData(CopyStamp_DetailCopyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyStamp_DetailCopyData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyStamp_DetailCopyData(CopyStamp_DetailCopyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17995};

/// @brief Field layers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailCopyData_CopyStamp_Layer*>*  ___layers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp_DetailCopyData, ___layers) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::CopyStamp_DetailCopyData) == 0x18, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies UnityEngine.ScriptableObject, UnityEngine.TerrainLayer, UnityEngine.Vector2, UnityEngine.Vector2Int
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.CopyStamp
class CORDL_TYPE CopyStamp : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using DetailCopyData = ::JBooth::MicroVerseCore::CopyStamp_DetailCopyData;

using TreeCopyData = ::JBooth::MicroVerseCore::CopyStamp_TreeCopyData;

/// @brief Field <heightMap>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__heightMap_k__BackingField, put=__cordl_internal_set__heightMap_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _heightMap_k__BackingField;

/// @brief Field <holeMap>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__holeMap_k__BackingField, put=__cordl_internal_set__holeMap_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _holeMap_k__BackingField;

/// @brief Field <indexMap>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__indexMap_k__BackingField, put=__cordl_internal_set__indexMap_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _indexMap_k__BackingField;

/// @brief Field <weightMap>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__weightMap_k__BackingField, put=__cordl_internal_set__weightMap_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _weightMap_k__BackingField;

/// @brief Field detailData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailData, put=__cordl_internal_set_detailData)) ::JBooth::MicroVerseCore::CopyStamp_DetailCopyData*  detailData;

/// @brief Field heightData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightData, put=__cordl_internal_set_heightData)) ::ArrayW<uint8_t>  heightData;

 __declspec(property(get=get_heightMap, put=set_heightMap)) ::UnityW<::UnityEngine::Texture2D>  heightMap;

/// @brief Field heightRenorm, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightRenorm, put=__cordl_internal_set_heightRenorm)) ::UnityEngine::Vector2  heightRenorm;

/// @brief Field heightSize, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightSize, put=__cordl_internal_set_heightSize)) ::UnityEngine::Vector2Int  heightSize;

/// @brief Field holeData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_holeData, put=__cordl_internal_set_holeData)) ::ArrayW<uint8_t>  holeData;

 __declspec(property(get=get_holeMap, put=set_holeMap)) ::UnityW<::UnityEngine::Texture2D>  holeMap;

/// @brief Field holeSize, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_holeSize, put=__cordl_internal_set_holeSize)) ::UnityEngine::Vector2Int  holeSize;

/// @brief Field indexData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexData, put=__cordl_internal_set_indexData)) ::ArrayW<uint8_t>  indexData;

 __declspec(property(get=get_indexMap, put=set_indexMap)) ::UnityW<::UnityEngine::Texture2D>  indexMap;

/// @brief Field indexWeightSize, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexWeightSize, put=__cordl_internal_set_indexWeightSize)) ::UnityEngine::Vector2Int  indexWeightSize;

/// @brief Field layers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_layers, put=__cordl_internal_set_layers)) ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>>  layers;

/// @brief Field treeData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeData, put=__cordl_internal_set_treeData)) ::JBooth::MicroVerseCore::CopyStamp_TreeCopyData*  treeData;

/// @brief Field weightData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_weightData, put=__cordl_internal_set_weightData)) ::ArrayW<uint8_t>  weightData;

 __declspec(property(get=get_weightMap, put=set_weightMap)) ::UnityW<::UnityEngine::Texture2D>  weightMap;

/// @brief Method Create, addr 0x18141b060, size 0x2b0, virtual false, abstract: false, final false
static inline ::UnityW<::JBooth::MicroVerseCore::CopyStamp> Create(::UnityEngine::Texture2D*  height, ::UnityEngine::Texture2D*  index, ::UnityEngine::Texture2D*  weight, ::UnityEngine::Texture2D*  hole, ::ArrayW<::UnityEngine::TerrainLayer*>  tLayers, ::UnityEngine::Vector2  heightRenorm, ::JBooth::MicroVerseCore::CopyStamp_TreeCopyData*  treeData, ::JBooth::MicroVerseCore::CopyStamp_DetailCopyData*  detailData) ;

static inline ::JBooth::MicroVerseCore::CopyStamp* New_ctor() ;

/// @brief Method Unpack, addr 0x18141b310, size 0x460, virtual false, abstract: false, final false
inline void Unpack() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__heightMap_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__heightMap_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__holeMap_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__holeMap_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__indexMap_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__indexMap_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__weightMap_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__weightMap_k__BackingField() ;

constexpr ::JBooth::MicroVerseCore::CopyStamp_DetailCopyData* const& __cordl_internal_get_detailData() const;

constexpr ::JBooth::MicroVerseCore::CopyStamp_DetailCopyData*& __cordl_internal_get_detailData() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_heightData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_heightData() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_heightRenorm() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_heightRenorm() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_heightSize() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_heightSize() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_holeData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_holeData() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_holeSize() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_holeSize() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_indexData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_indexData() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_indexWeightSize() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_indexWeightSize() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>> const& __cordl_internal_get_layers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>>& __cordl_internal_get_layers() ;

constexpr ::JBooth::MicroVerseCore::CopyStamp_TreeCopyData* const& __cordl_internal_get_treeData() const;

constexpr ::JBooth::MicroVerseCore::CopyStamp_TreeCopyData*& __cordl_internal_get_treeData() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_weightData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_weightData() ;

constexpr void __cordl_internal_set__heightMap_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__holeMap_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__indexMap_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__weightMap_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_detailData(::JBooth::MicroVerseCore::CopyStamp_DetailCopyData*  value) ;

constexpr void __cordl_internal_set_heightData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_heightRenorm(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_heightSize(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_holeData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_holeSize(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_indexData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_indexWeightSize(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_layers(::ArrayW<::UnityW<::UnityEngine::TerrainLayer>>  value) ;

constexpr void __cordl_internal_set_treeData(::JBooth::MicroVerseCore::CopyStamp_TreeCopyData*  value) ;

constexpr void __cordl_internal_set_weightData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_heightMap, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_heightMap() ;

/// @brief Method get_holeMap, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_holeMap() ;

/// @brief Method get_indexMap, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_indexMap() ;

/// @brief Method get_weightMap, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_weightMap() ;

/// @brief Method set_heightMap, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_heightMap(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_holeMap, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_holeMap(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_indexMap, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_indexMap(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_weightMap, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_weightMap(::UnityEngine::Texture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyStamp(CopyStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyStamp(CopyStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17996};

/// @brief Field <heightMap>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____heightMap_k__BackingField;

/// @brief Field <indexMap>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____indexMap_k__BackingField;

/// @brief Field <weightMap>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____weightMap_k__BackingField;

/// @brief Field <holeMap>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____holeMap_k__BackingField;

/// @brief Field layers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>>  ___layers;

/// @brief Field heightRenorm, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___heightRenorm;

/// @brief Field treeData, offset: 0x48, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::CopyStamp_TreeCopyData*  ___treeData;

/// @brief Field detailData, offset: 0x50, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::CopyStamp_DetailCopyData*  ___detailData;

/// @brief Field heightData, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___heightData;

/// @brief Field indexData, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___indexData;

/// @brief Field weightData, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___weightData;

/// @brief Field holeData, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___holeData;

/// @brief Field heightSize, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___heightSize;

/// @brief Field indexWeightSize, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___indexWeightSize;

/// @brief Field holeSize, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___holeSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ____heightMap_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ____indexMap_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ____weightMap_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ____holeMap_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___layers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___heightRenorm) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___treeData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___detailData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___heightData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___indexData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___weightData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___holeData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___heightSize) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___indexWeightSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CopyStamp, ___holeSize) == 0x88, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::CopyStamp) == 0x90, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
