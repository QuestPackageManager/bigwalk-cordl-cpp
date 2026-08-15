#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileDataSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PegTileSetCollection_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PegTileDataSet)
namespace GlobalNamespace {
struct PegTileDataSet_Int2;
}
namespace GlobalNamespace {
struct PegTileDataSet_TileIndexData;
}
namespace GlobalNamespace {
struct PegTileSetCollection;
}
namespace GlobalNamespace {
struct PegTileSet;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileDataSet;
}
namespace GlobalNamespace {
struct PegTileDataSet_Int2;
}
namespace GlobalNamespace {
struct PegTileDataSet_TileIndexData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileDataSet*);
MARK_VAL_T(::GlobalNamespace::PegTileDataSet_Int2);
MARK_VAL_T(::GlobalNamespace::PegTileDataSet_TileIndexData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileDataSet*, "", "PegTileDataSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileDataSet_Int2, "", "PegTileDataSet/Int2");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileDataSet_TileIndexData, "", "PegTileDataSet/TileIndexData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PegTileDataSet/Int2
struct CORDL_TYPE PegTileDataSet_Int2 {
public:
// Declarations
 __declspec(property(get=get_Vector2)) ::UnityEngine::Vector2  Vector2;

/// @brief Method get_Vector2, addr 0x1803ff380, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Vector2() ;

// Ctor Parameters []
// @brief default ctor
constexpr PegTileDataSet_Int2() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PegTileDataSet_Int2(int32_t  x, int32_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5085};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileDataSet_Int2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileDataSet_Int2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileDataSet_Int2) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PropGroup
namespace GlobalNamespace {
// Is value type: true
// CS Name: PegTileDataSet/TileIndexData
struct CORDL_TYPE PegTileDataSet_TileIndexData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PegTileDataSet_TileIndexData() ;

// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }, CppParam { name: "xIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PegTileDataSet_TileIndexData(::GlobalNamespace::PropGroup  propGroup, int32_t  xIndex, int32_t  yIndex, int32_t  textureIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field propGroup, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  propGroup;

/// @brief Field xIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  xIndex;

/// @brief Field yIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  yIndex;

/// @brief Field textureIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  textureIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileDataSet_TileIndexData, propGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileDataSet_TileIndexData, xIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileDataSet_TileIndexData, yIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileDataSet_TileIndexData, textureIndex) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileDataSet_TileIndexData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PegTileDataSet::Int2, PegTileDataSet::TileIndexData, PegTileSetCollection, UnityEngine.Material, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileDataSet
class CORDL_TYPE PegTileDataSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Int2 = ::GlobalNamespace::PegTileDataSet_Int2;

using TileIndexData = ::GlobalNamespace::PegTileDataSet_TileIndexData;

/// @brief Field collections, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_collections, put=__cordl_internal_set_collections)) ::ArrayW<::GlobalNamespace::PegTileSetCollection>  collections;

/// @brief Field indexDatas, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexDatas, put=__cordl_internal_set_indexDatas)) ::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData>  indexDatas;

/// @brief Field materialPerTextureIndex, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialPerTextureIndex, put=__cordl_internal_set_materialPerTextureIndex)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materialPerTextureIndex;

/// @brief Field sizePerTextureIndex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizePerTextureIndex, put=__cordl_internal_set_sizePerTextureIndex)) ::ArrayW<::GlobalNamespace::PegTileDataSet_Int2>  sizePerTextureIndex;

/// @brief Method GetCollection, addr 0x180405e30, size 0xa0, virtual false, abstract: false, final false
inline ::GlobalNamespace::PegTileSetCollection GetCollection(::GlobalNamespace::PegTileSet  set) ;

/// @brief Method GetIndexData, addr 0x180405ed0, size 0xa0, virtual false, abstract: false, final false
inline ::GlobalNamespace::PegTileDataSet_TileIndexData GetIndexData(::GlobalNamespace::PropGroup  propGroup) ;

/// @brief Method GetPosition, addr 0x180405f70, size 0x150, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetPosition(::GlobalNamespace::PropGroup  propGroup, ::by_ref<::UnityEngine::Vector2>  tiling, ::by_ref<int32_t>  textureIndex) ;

static inline ::GlobalNamespace::PegTileDataSet* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::PegTileSetCollection> const& __cordl_internal_get_collections() const;

constexpr ::ArrayW<::GlobalNamespace::PegTileSetCollection>& __cordl_internal_get_collections() ;

constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData> const& __cordl_internal_get_indexDatas() const;

constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData>& __cordl_internal_get_indexDatas() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materialPerTextureIndex() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materialPerTextureIndex() ;

constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_Int2> const& __cordl_internal_get_sizePerTextureIndex() const;

constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_Int2>& __cordl_internal_get_sizePerTextureIndex() ;

constexpr void __cordl_internal_set_collections(::ArrayW<::GlobalNamespace::PegTileSetCollection>  value) ;

constexpr void __cordl_internal_set_indexDatas(::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData>  value) ;

constexpr void __cordl_internal_set_materialPerTextureIndex(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_sizePerTextureIndex(::ArrayW<::GlobalNamespace::PegTileDataSet_Int2>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileDataSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileDataSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileDataSet(PegTileDataSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileDataSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileDataSet(PegTileDataSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5087};

/// @brief Field sizePerTextureIndex, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PegTileDataSet_Int2>  ___sizePerTextureIndex;

/// @brief Field materialPerTextureIndex, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materialPerTextureIndex;

/// @brief Field indexDatas, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData>  ___indexDatas;

/// @brief Field collections, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PegTileSetCollection>  ___collections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileDataSet, ___sizePerTextureIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileDataSet, ___materialPerTextureIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileDataSet, ___indexDatas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileDataSet, ___collections) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileDataSet) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
