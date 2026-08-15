#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MaskData.hpp"
#include "JBooth/MicroVerseCore/zzzz__StampData_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MicroVerse_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskData::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::MaskData::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181407c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskData.ProcessMasks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Terrain*>, ::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::MaskData::ProcessMasks)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1814076a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskData*>(),
                        {"ProcessMasks", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_heightMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_heightMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMap;
}
constexpr void JBooth::MicroVerseCore::MaskData::__cordl_internal_set_heightMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_normalMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_normalMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMap;
}
constexpr void JBooth::MicroVerseCore::MaskData::__cordl_internal_set_normalMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_curveMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_curveMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveMap;
}
constexpr void JBooth::MicroVerseCore::MaskData::__cordl_internal_set_curveMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curveMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_flowMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_flowMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMap;
}
constexpr void JBooth::MicroVerseCore::MaskData::__cordl_internal_set_flowMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_placementMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementMask;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_placementMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementMask;
}
constexpr void JBooth::MicroVerseCore::MaskData::__cordl_internal_set_placementMask(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementMask = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_indexMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_indexMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexMap;
}
constexpr void JBooth::MicroVerseCore::MaskData::__cordl_internal_set_indexMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexMap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_weightMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MaskData::__cordl_internal_get_weightMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightMap;
}
constexpr void JBooth::MicroVerseCore::MaskData::__cordl_internal_set_weightMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weightMap = value;
}
inline void JBooth::MicroVerseCore::MaskData::_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  heightMap, ::UnityEngine::RenderTexture*  normalMap, ::UnityEngine::RenderTexture*  curveMap, ::UnityEngine::RenderTexture*  flowMap, ::UnityEngine::RenderTexture*  indexMap, ::UnityEngine::RenderTexture*  weightMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, heightMap, normalMap, curveMap, flowMap, indexMap, weightMap);
}
inline void JBooth::MicroVerseCore::MaskData::ProcessMasks(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskData*>(),
                        {"ProcessMasks", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrains, dataCache);
}
inline ::JBooth::MicroVerseCore::MaskData* JBooth::MicroVerseCore::MaskData::New_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  heightMap, ::UnityEngine::RenderTexture*  normalMap, ::UnityEngine::RenderTexture*  curveMap, ::UnityEngine::RenderTexture*  flowMap, ::UnityEngine::RenderTexture*  indexMap, ::UnityEngine::RenderTexture*  weightMap)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MaskData*>(terrain, heightMap, normalMap, curveMap, flowMap, indexMap, weightMap));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskData::MaskData()   {
}
