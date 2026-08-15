#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailData.hpp"
#include "JBooth/MicroVerseCore/zzzz__StampData_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MicroVerse_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailData::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::DetailData::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18141b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_heightMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_heightMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMap;
}
constexpr void JBooth::MicroVerseCore::DetailData::__cordl_internal_set_heightMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_normalMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_normalMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMap;
}
constexpr void JBooth::MicroVerseCore::DetailData::__cordl_internal_set_normalMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_curveMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_curveMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveMap;
}
constexpr void JBooth::MicroVerseCore::DetailData::__cordl_internal_set_curveMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curveMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_flowMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_flowMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMap;
}
constexpr void JBooth::MicroVerseCore::DetailData::__cordl_internal_set_flowMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_clearMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_clearMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearMap;
}
constexpr void JBooth::MicroVerseCore::DetailData::__cordl_internal_set_clearMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearMap = value;
}
constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache*& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_dataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataCache;
}
constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache* const& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_dataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataCache;
}
constexpr void JBooth::MicroVerseCore::DetailData::__cordl_internal_set_dataCache(::JBooth::MicroVerseCore::MicroVerse_DataCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataCache = value;
}
constexpr int32_t& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_layerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr int32_t const& JBooth::MicroVerseCore::DetailData::__cordl_internal_get_layerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr void JBooth::MicroVerseCore::DetailData::__cordl_internal_set_layerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerIndex = value;
}
inline void JBooth::MicroVerseCore::DetailData::_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  height, ::UnityEngine::RenderTexture*  normal, ::UnityEngine::RenderTexture*  curve, ::UnityEngine::RenderTexture*  flow, ::UnityEngine::RenderTexture*  clearMap, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, height, normal, curve, flow, clearMap, dataCache);
}
inline ::JBooth::MicroVerseCore::DetailData* JBooth::MicroVerseCore::DetailData::New_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  height, ::UnityEngine::RenderTexture*  normal, ::UnityEngine::RenderTexture*  curve, ::UnityEngine::RenderTexture*  flow, ::UnityEngine::RenderTexture*  clearMap, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::DetailData*>(terrain, height, normal, curve, flow, clearMap, dataCache));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::DetailData::DetailData()   {
}
