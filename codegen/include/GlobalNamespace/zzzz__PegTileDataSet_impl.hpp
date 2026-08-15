#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileDataSet.hpp"
#include "GlobalNamespace/zzzz__PegTileSetCollection_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileDataSet_def.hpp"
#include "GlobalNamespace/zzzz__PegTileDataSet_def.hpp"
#include "GlobalNamespace/zzzz__PegTileSetCollection_def.hpp"
#include "GlobalNamespace/zzzz__PegTileSet_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PegTileDataSet_Int2.get_Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PegTileDataSet_Int2::*)()>(&::GlobalNamespace::PegTileDataSet_Int2::get_Vector2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803ff380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet_Int2>(),
                        {"get_Vector2", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 GlobalNamespace::PegTileDataSet_Int2::get_Vector2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet_Int2>(),
                        {"get_Vector2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PegTileDataSet_Int2::PegTileDataSet_Int2(int32_t  x, int32_t  y) noexcept  {
this->x = x;
this->y = y;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileDataSet_Int2::PegTileDataSet_Int2()   {
}
// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: Some("{}") }, CppParam { name: "xIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PegTileDataSet_TileIndexData::PegTileDataSet_TileIndexData(::GlobalNamespace::PropGroup  propGroup, int32_t  xIndex, int32_t  yIndex, int32_t  textureIndex) noexcept  {
this->propGroup = propGroup;
this->xIndex = xIndex;
this->yIndex = yIndex;
this->textureIndex = textureIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileDataSet_TileIndexData::PegTileDataSet_TileIndexData()   {
}
//  Writing Method size for method: ::GlobalNamespace::PegTileDataSet.GetIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PegTileDataSet_TileIndexData (::GlobalNamespace::PegTileDataSet::*)(::GlobalNamespace::PropGroup)>(&::GlobalNamespace::PegTileDataSet::GetIndexData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180405ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {"GetIndexData", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileDataSet.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PegTileDataSet::*)(::GlobalNamespace::PropGroup, ::by_ref<::UnityEngine::Vector2>, ::by_ref<int32_t>)>(&::GlobalNamespace::PegTileDataSet::GetPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180405f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {"GetPosition", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileDataSet.GetCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PegTileSetCollection (::GlobalNamespace::PegTileDataSet::*)(::GlobalNamespace::PegTileSet)>(&::GlobalNamespace::PegTileDataSet::GetCollection)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180405e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {"GetCollection", {}, {::i2c::type_of<::GlobalNamespace::PegTileSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileDataSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileDataSet::*)()>(&::GlobalNamespace::PegTileDataSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_Int2>& GlobalNamespace::PegTileDataSet::__cordl_internal_get_sizePerTextureIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePerTextureIndex;
}
constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_Int2> const& GlobalNamespace::PegTileDataSet::__cordl_internal_get_sizePerTextureIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePerTextureIndex;
}
constexpr void GlobalNamespace::PegTileDataSet::__cordl_internal_set_sizePerTextureIndex(::ArrayW<::GlobalNamespace::PegTileDataSet_Int2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizePerTextureIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::PegTileDataSet::__cordl_internal_get_materialPerTextureIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPerTextureIndex;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::PegTileDataSet::__cordl_internal_get_materialPerTextureIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPerTextureIndex;
}
constexpr void GlobalNamespace::PegTileDataSet::__cordl_internal_set_materialPerTextureIndex(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialPerTextureIndex = value;
}
constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData>& GlobalNamespace::PegTileDataSet::__cordl_internal_get_indexDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexDatas;
}
constexpr ::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData> const& GlobalNamespace::PegTileDataSet::__cordl_internal_get_indexDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexDatas;
}
constexpr void GlobalNamespace::PegTileDataSet::__cordl_internal_set_indexDatas(::ArrayW<::GlobalNamespace::PegTileDataSet_TileIndexData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexDatas = value;
}
constexpr ::ArrayW<::GlobalNamespace::PegTileSetCollection>& GlobalNamespace::PegTileDataSet::__cordl_internal_get_collections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collections;
}
constexpr ::ArrayW<::GlobalNamespace::PegTileSetCollection> const& GlobalNamespace::PegTileDataSet::__cordl_internal_get_collections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collections;
}
constexpr void GlobalNamespace::PegTileDataSet::__cordl_internal_set_collections(::ArrayW<::GlobalNamespace::PegTileSetCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collections = value;
}
inline ::GlobalNamespace::PegTileDataSet_TileIndexData GlobalNamespace::PegTileDataSet::GetIndexData(::GlobalNamespace::PropGroup  propGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {"GetIndexData", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PegTileDataSet_TileIndexData>(this, ___internal_method, propGroup);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PegTileDataSet::GetPosition(::GlobalNamespace::PropGroup  propGroup, ::by_ref<::UnityEngine::Vector2>  tiling, ::by_ref<int32_t>  textureIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {"GetPosition", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, propGroup, tiling, textureIndex);
}
inline ::GlobalNamespace::PegTileSetCollection GlobalNamespace::PegTileDataSet::GetCollection(::GlobalNamespace::PegTileSet  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {"GetCollection", {}, {::i2c::type_of<::GlobalNamespace::PegTileSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PegTileSetCollection>(this, ___internal_method, set);
}
inline void GlobalNamespace::PegTileDataSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileDataSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PegTileDataSet* GlobalNamespace::PegTileDataSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PegTileDataSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileDataSet::PegTileDataSet()   {
}
