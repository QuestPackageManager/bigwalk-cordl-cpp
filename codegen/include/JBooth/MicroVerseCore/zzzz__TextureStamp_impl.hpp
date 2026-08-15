#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TextureStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::Initialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18144bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::GetBounds)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18144b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18144b970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18144bcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::NeedFlowMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.ApplyTextureStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TextureStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::TextureData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::TextureStamp::ApplyTextureStamp)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x18144b460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18144bd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp.JBooth_MicroVerseCore_ITextureModifier_InqTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TextureStamp::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::TextureStamp::JBooth_MicroVerseCore_ITextureModifier_InqTerrainLayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18144bc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"JBooth.MicroVerseCore.ITextureModifier.InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TextureStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TextureStamp::*)()>(&::JBooth::MicroVerseCore::TextureStamp::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18144bf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TerrainLayer>& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void JBooth::MicroVerseCore::TextureStamp::__cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet*& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_filterSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr ::JBooth::MicroVerseCore::FilterSet* const& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_filterSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr void JBooth::MicroVerseCore::TextureStamp::__cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterSet = value;
}
constexpr bool& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_ignoreOcclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreOcclusion;
}
constexpr bool const& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_ignoreOcclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreOcclusion;
}
constexpr void JBooth::MicroVerseCore::TextureStamp::__cordl_internal_set_ignoreOcclusion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreOcclusion = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::TextureStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer>& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get__mrt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mrt;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get__mrt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mrt;
}
constexpr void JBooth::MicroVerseCore::TextureStamp::__cordl_internal_set__mrt(::ArrayW<::UnityEngine::RenderBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mrt = value;
}
constexpr int32_t& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_channelIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelIndex;
}
constexpr int32_t const& JBooth::MicroVerseCore::TextureStamp::__cordl_internal_get_channelIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelIndex;
}
constexpr void JBooth::MicroVerseCore::TextureStamp::__cordl_internal_set_channelIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelIndex = value;
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF_splatFilterShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "splatFilterShader", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::TextureStamp::getStaticF_splatFilterShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "splatFilterShader", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__Heightmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__Heightmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__Normalmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__Normalmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__Curvemap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__Curvemap()  {
return ::cordl_internals::getStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__Flowmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__Flowmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__PlacementMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__PlacementMask()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__Channel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Channel", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__Channel()  {
return ::cordl_internals::getStaticField<int32_t, "_Channel", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__IndexMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__IndexMap()  {
return ::cordl_internals::getStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline void JBooth::MicroVerseCore::TextureStamp::setStaticF__WeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::TextureStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TextureStamp::getStaticF__WeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::TextureStamp*>();
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::TextureStamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TextureStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::TextureStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TextureStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TextureStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TextureStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TextureStamp::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TextureStamp::ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexSrc, indexDest, weightSrc, weightDest, splatmapData, od);
}
inline void JBooth::MicroVerseCore::TextureStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TextureStamp::JBooth_MicroVerseCore_ITextureModifier_InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  layers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {"JBooth.MicroVerseCore.ITextureModifier.InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, layers);
}
inline void JBooth::MicroVerseCore::TextureStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TextureStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::TextureStamp* JBooth::MicroVerseCore::TextureStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::TextureStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr  JBooth::MicroVerseCore::TextureStamp::operator ::JBooth::MicroVerseCore::ITextureModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* JBooth::MicroVerseCore::TextureStamp::i___JBooth__MicroVerseCore__ITextureModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::TextureStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::TextureStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::TextureStamp::TextureStamp()   {
}
