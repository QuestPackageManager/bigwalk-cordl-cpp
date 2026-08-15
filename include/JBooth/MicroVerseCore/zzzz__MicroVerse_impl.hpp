#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MicroVerse.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Terrain_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__MicroVerse_def.hpp"
#include "JBooth/MicroSplat/zzzz__TextureArrayConfig_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__BufferCaptureTarget_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHeightModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHoleModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MicroVerse_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Options_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystem_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Road_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SpawnProcessor_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::*)(::System::Object*, ::System::IntPtr)>(&::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805450a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::*)(::ArrayW<::UnityEngine::TerrainLayer*>)>(&::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::*)(::ArrayW<::UnityEngine::TerrainLayer*>, ::System::AsyncCallback*, ::System::Object*)>(&::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::*)(::System::IAsyncResult*)>(&::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::Invoke(::ArrayW<::UnityEngine::TerrainLayer*>  newLayers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLayers);
}
inline ::System::IAsyncResult* JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::BeginInvoke(::ArrayW<::UnityEngine::TerrainLayer*>  newLayers, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, newLayers, callback, object);
}
inline void JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged* JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged::MicroVerse_TerrainLayersChanged()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType::MicroVerse_InvalidateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType::MicroVerse_InvalidateType()   {
}
constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  JBooth::MicroVerseCore::MicroVerse_InvalidateType::All{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  JBooth::MicroVerseCore::MicroVerse_InvalidateType::Splats{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  JBooth::MicroVerseCore::MicroVerse_InvalidateType::Tree{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse_DataCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse_DataCache::*)()>(&::JBooth::MicroVerseCore::MicroVerse_DataCache::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18142a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_heightMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_heightMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMaps;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_heightMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_normalMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_normalMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalMaps;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_normalMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_occlusionDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionDatas;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_occlusionDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionDatas;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_occlusionDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionDatas = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_indexMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_indexMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexMaps;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_indexMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_weightMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_weightMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightMaps;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_weightMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weightMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_curvatureMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curvatureMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_curvatureMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curvatureMaps;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_curvatureMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curvatureMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_flowMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_flowMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMaps;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_flowMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_holeMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeMaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_holeMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeMaps;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_holeMaps(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holeMaps = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_treeDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeDatas;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_treeDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeDatas;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_treeDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::TreeData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeDatas = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_detailDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailDatas;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_detailDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailDatas;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_detailDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::DetailData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailDatas = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>*& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_objectDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectDatas;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>* const& JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_get_objectDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectDatas;
}
constexpr void JBooth::MicroVerseCore::MicroVerse_DataCache::__cordl_internal_set_objectDatas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectDatas = value;
}
inline void JBooth::MicroVerseCore::MicroVerse_DataCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MicroVerse_DataCache* JBooth::MicroVerseCore::MicroVerse_DataCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MicroVerse_DataCache*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache::MicroVerse_DataCache()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse___c::*)()>(&::JBooth::MicroVerseCore::MicroVerse___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse___c._SanatizeTerrainLayers_b__50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse___c::*)(::UnityEngine::TerrainLayer*)>(&::JBooth::MicroVerseCore::MicroVerse___c::_SanatizeTerrainLayers_b__50_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<SanatizeTerrainLayers>b__50_0", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse___c._SanatizeTerrainLayers_b__50_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JBooth::MicroVerseCore::MicroVerse___c::*)(::UnityEngine::TerrainLayer*)>(&::JBooth::MicroVerseCore::MicroVerse___c::_SanatizeTerrainLayers_b__50_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18143d040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<SanatizeTerrainLayers>b__50_1", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse___c._Modify_b__83_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse___c::*)(::JBooth::MicroVerseCore::IModifier*)>(&::JBooth::MicroVerseCore::MicroVerse___c::_Modify_b__83_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181417c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<Modify>b__83_0", {}, {::i2c::type_of<::JBooth::MicroVerseCore::IModifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse___c._Modify_b__83_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse___c::*)(::JBooth::MicroVerseCore::ITextureModifier*)>(&::JBooth::MicroVerseCore::MicroVerse___c::_Modify_b__83_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181417c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<Modify>b__83_1", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ITextureModifier*>()}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::MicroVerse___c::setStaticF___9(::JBooth::MicroVerseCore::MicroVerse___c*  value)  {
::cordl_internals::setStaticField<::JBooth::MicroVerseCore::MicroVerse___c*, "<>9", ::JBooth::MicroVerseCore::MicroVerse___c*>(std::forward<::JBooth::MicroVerseCore::MicroVerse___c*>(value));
}
inline ::JBooth::MicroVerseCore::MicroVerse___c* JBooth::MicroVerseCore::MicroVerse___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::JBooth::MicroVerseCore::MicroVerse___c*, "<>9", ::JBooth::MicroVerseCore::MicroVerse___c*>();
}
inline void JBooth::MicroVerseCore::MicroVerse___c::setStaticF___9__50_0(::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>*, "<>9__50_0", ::JBooth::MicroVerseCore::MicroVerse___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>* JBooth::MicroVerseCore::MicroVerse___c::getStaticF___9__50_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::TerrainLayer>>*, "<>9__50_0", ::JBooth::MicroVerseCore::MicroVerse___c*>();
}
inline void JBooth::MicroVerseCore::MicroVerse___c::setStaticF___9__50_1(::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>*, "<>9__50_1", ::JBooth::MicroVerseCore::MicroVerse___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>* JBooth::MicroVerseCore::MicroVerse___c::getStaticF___9__50_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::TerrainLayer>,::StringW>*, "<>9__50_1", ::JBooth::MicroVerseCore::MicroVerse___c*>();
}
inline void JBooth::MicroVerseCore::MicroVerse___c::setStaticF___9__83_0(::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>*, "<>9__83_0", ::JBooth::MicroVerseCore::MicroVerse___c*>(std::forward<::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>*>(value));
}
inline ::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>* JBooth::MicroVerseCore::MicroVerse___c::getStaticF___9__83_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::JBooth::MicroVerseCore::IModifier*>*, "<>9__83_0", ::JBooth::MicroVerseCore::MicroVerse___c*>();
}
inline void JBooth::MicroVerseCore::MicroVerse___c::setStaticF___9__83_1(::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>*, "<>9__83_1", ::JBooth::MicroVerseCore::MicroVerse___c*>(std::forward<::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>*>(value));
}
inline ::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>* JBooth::MicroVerseCore::MicroVerse___c::getStaticF___9__83_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::JBooth::MicroVerseCore::ITextureModifier*>*, "<>9__83_1", ::JBooth::MicroVerseCore::MicroVerse___c*>();
}
inline void JBooth::MicroVerseCore::MicroVerse___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::MicroVerse___c::_SanatizeTerrainLayers_b__50_0(::UnityEngine::TerrainLayer*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<SanatizeTerrainLayers>b__50_0", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::StringW JBooth::MicroVerseCore::MicroVerse___c::_SanatizeTerrainLayers_b__50_1(::UnityEngine::TerrainLayer*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<SanatizeTerrainLayers>b__50_1", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline bool JBooth::MicroVerseCore::MicroVerse___c::_Modify_b__83_0(::JBooth::MicroVerseCore::IModifier*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<Modify>b__83_0", {}, {::i2c::type_of<::JBooth::MicroVerseCore::IModifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool JBooth::MicroVerseCore::MicroVerse___c::_Modify_b__83_1(::JBooth::MicroVerseCore::ITextureModifier*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse___c*>(),
                        {"<Modify>b__83_1", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ITextureModifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::JBooth::MicroVerseCore::MicroVerse___c* JBooth::MicroVerseCore::MicroVerse___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MicroVerse___c*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MicroVerse___c::MicroVerse___c()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.add_OnTerrainLayersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*)>(&::JBooth::MicroVerseCore::MicroVerse::add_OnTerrainLayersChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18143b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"add_OnTerrainLayersChanged", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.remove_OnTerrainLayersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*)>(&::JBooth::MicroVerseCore::MicroVerse::remove_OnTerrainLayersChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18143b550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"remove_OnTerrainLayersChanged", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.get_terrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>> (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::get_terrains)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18143b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_terrains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.set_terrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(::ArrayW<::UnityEngine::Terrain*>)>(&::JBooth::MicroVerseCore::MicroVerse::set_terrains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_terrains", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::JBooth::MicroVerseCore::MicroVerse> (*)()>(&::JBooth::MicroVerseCore::MicroVerse::get_instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18143b440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814340e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.GetAllTerrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>> (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::GetAllTerrains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181435390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GetAllTerrains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.SyncTerrainList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::SyncTerrainList)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18143a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SyncTerrainList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.Invalidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(::System::Nullable_1<::UnityEngine::Bounds>, ::JBooth::MicroVerseCore::MicroVerse_InvalidateType)>(&::JBooth::MicroVerseCore::MicroVerse::Invalidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814353b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Invalidate", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_InvalidateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18143aca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::LateUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814354b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181438020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181437fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.get_IsHeightSyncd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::get_IsHeightSyncd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180422700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_IsHeightSyncd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.set_IsHeightSyncd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(bool)>(&::JBooth::MicroVerseCore::MicroVerse::set_IsHeightSyncd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143b600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_IsHeightSyncd", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.get_IsModifyingTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::get_IsModifyingTerrain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143b430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_IsModifyingTerrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.set_IsModifyingTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(bool)>(&::JBooth::MicroVerseCore::MicroVerse::set_IsModifyingTerrain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18143b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_IsModifyingTerrain", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.get_IsAddingHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::get_IsAddingHeightStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803115f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_IsAddingHeightStamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.set_IsAddingHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(bool)>(&::JBooth::MicroVerseCore::MicroVerse::set_IsAddingHeightStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_IsAddingHeightStamp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.RequestHeightSaveback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::RequestHeightSaveback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181438610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"RequestHeightSaveback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.SaveBackToTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(bool, bool)>(&::JBooth::MicroVerseCore::MicroVerse::SaveBackToTerrain)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181438b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SaveBackToTerrain", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.DoTerrainLayersMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse::*)(::ArrayW<::UnityEngine::TerrainLayer*>, ::ArrayW<::UnityEngine::TerrainLayer*>)>(&::JBooth::MicroVerseCore::MicroVerse::DoTerrainLayersMatch)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814346f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"DoTerrainLayersMatch", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.SanatizeTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*, ::ArrayW<::UnityEngine::Terrain*>)>(&::JBooth::MicroVerseCore::MicroVerse::SanatizeTerrainLayers)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181438710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SanatizeTerrainLayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.SeamHeightMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::MicroVerse::SeamHeightMaps)> {
  constexpr static std::size_t size = 0xae0;
  constexpr static std::size_t addrs = 0x181439ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SeamHeightMaps", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.FindIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::JBooth::MicroVerseCore::MicroVerse::*)(::ArrayW<::UnityEngine::TerrainLayer*>, ::UnityEngine::TerrainLayer*)>(&::JBooth::MicroVerseCore::MicroVerse::FindIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181434750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"FindIndex", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>(), ::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.MapIndecies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(int32_t, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::MicroVerse::MapIndecies)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181435550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"MapIndecies", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.SeamAlphaMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(::JBooth::MicroVerseCore::MicroVerse_DataCache*)>(&::JBooth::MicroVerseCore::MicroVerse::SeamAlphaMaps)> {
  constexpr static std::size_t size = 0x11f0;
  constexpr static std::size_t addrs = 0x181438cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SeamAlphaMaps", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.CullTerrainList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(bool)>(&::JBooth::MicroVerseCore::MicroVerse::CullTerrainList)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181434260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"CullTerrainList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.AddRoadJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(::JBooth::MicroVerseCore::Road*, ::JBooth::MicroVerseCore::RoadSystem*, ::UnityEngine::Bounds)>(&::JBooth::MicroVerseCore::MicroVerse::AddRoadJob)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181433e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"AddRoadJob", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Road*>(), ::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.RevisionAllStamps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::RevisionAllStamps)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"RevisionAllStamps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.get_noAsyncReadback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::JBooth::MicroVerseCore::MicroVerse::get_noAsyncReadback)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18143b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_noAsyncReadback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.set_noAsyncReadback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::JBooth::MicroVerseCore::MicroVerse::set_noAsyncReadback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18143b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_noAsyncReadback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.Modify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(bool, bool, bool)>(&::JBooth::MicroVerseCore::MicroVerse::Modify)> {
  constexpr static std::size_t size = 0x28c0;
  constexpr static std::size_t addrs = 0x181435710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Modify", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.CancelModify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(bool)>(&::JBooth::MicroVerseCore::MicroVerse::CancelModify)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181434140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"CancelModify", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.GenerateSplatmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::JBooth::MicroVerseCore::TextureData*, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*, ::UnityEngine::Bounds, ::JBooth::MicroVerseCore::OcclusionData*, bool)>(&::JBooth::MicroVerseCore::MicroVerse::GenerateSplatmaps)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x181434c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GenerateSplatmaps", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.RasterizeSplatMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, bool)>(&::JBooth::MicroVerseCore::MicroVerse::RasterizeSplatMaps)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x181438030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"RasterizeSplatMaps", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.GenerateHeightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::JBooth::MicroVerseCore::HeightmapData*, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*, ::UnityEngine::Bounds, ::JBooth::MicroVerseCore::OcclusionData*, bool)>(&::JBooth::MicroVerseCore::MicroVerse::GenerateHeightmap)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1814347c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GenerateHeightmap", {}, {::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.IsUsingMicroSplat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::IsUsingMicroSplat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181435490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"IsUsingMicroSplat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse.GetMegasplatTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::MicroVerse::GetMegasplatTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GetMegasplatTexture", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MicroVerse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MicroVerse::*)()>(&::JBooth::MicroVerseCore::MicroVerse::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18143b180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::Options*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::JBooth::MicroVerseCore::Options* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_options(::JBooth::MicroVerseCore::Options*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
constexpr bool& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_needHoleSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needHoleSync;
}
constexpr bool const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_needHoleSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needHoleSync;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_needHoleSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needHoleSync = value;
}
constexpr int32_t& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_holeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeCount;
}
constexpr int32_t const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_holeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeCount;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_holeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holeCount = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_explicitTerrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explicitTerrains;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_explicitTerrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explicitTerrains;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_explicitTerrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explicitTerrains = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__terrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____terrains;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__terrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____terrains;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set__terrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____terrains = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget>& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_bufferCaptureTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferCaptureTarget;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget> const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_bufferCaptureTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferCaptureTarget;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_bufferCaptureTarget(::UnityW<::JBooth::MicroVerseCore::BufferCaptureTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferCaptureTarget = value;
}
constexpr ::JBooth::MicroVerseCore::SpawnProcessor*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_spawnProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnProcessor;
}
constexpr ::JBooth::MicroVerseCore::SpawnProcessor* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_spawnProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnProcessor;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_spawnProcessor(::JBooth::MicroVerseCore::SpawnProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnProcessor = value;
}
constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_invalidateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidateType;
}
constexpr ::JBooth::MicroVerseCore::MicroVerse_InvalidateType const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_invalidateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidateType;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_invalidateType(::JBooth::MicroVerseCore::MicroVerse_InvalidateType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invalidateType = value;
}
constexpr bool& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_needUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needUpdate;
}
constexpr bool const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_needUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needUpdate;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_needUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needUpdate = value;
}
constexpr ::UnityEngine::Bounds& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_invalidateBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidateBounds;
}
constexpr ::UnityEngine::Bounds const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_invalidateBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidateBounds;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_invalidateBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invalidateBounds = value;
}
constexpr ::UnityEngine::Bounds& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_lastInvalidBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastInvalidBounds;
}
constexpr ::UnityEngine::Bounds const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_lastInvalidBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastInvalidBounds;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_lastInvalidBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastInvalidBounds = value;
}
constexpr bool& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_boundsSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsSet;
}
constexpr bool const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_boundsSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsSet;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_boundsSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundsSet = value;
}
constexpr bool& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_firstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstUpdate;
}
constexpr bool const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_firstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstUpdate;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_firstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstUpdate = value;
}
constexpr bool& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__isHeightSyncd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHeightSyncd;
}
constexpr bool const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__isHeightSyncd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHeightSyncd;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set__isHeightSyncd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHeightSyncd = value;
}
constexpr bool& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__isModifyingTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isModifyingTerrain;
}
constexpr bool const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__isModifyingTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isModifyingTerrain;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set__isModifyingTerrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isModifyingTerrain = value;
}
constexpr bool& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__isAddingHeightStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAddingHeightStamp;
}
constexpr bool const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get__isAddingHeightStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAddingHeightStamp;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set__isAddingHeightStamp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAddingHeightStamp = value;
}
constexpr ::ArrayW<float_t>& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_indexRemap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexRemap;
}
constexpr ::ArrayW<float_t> const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_indexRemap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexRemap;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_indexRemap(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexRemap = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_indexRemapBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexRemapBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_indexRemapBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexRemapBuffer;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_indexRemapBuffer(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexRemapBuffer = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_roadJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadJobs;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_roadJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadJobs;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_roadJobs(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::JBooth::MicroVerseCore::Road>,::UnityW<::JBooth::MicroVerseCore::RoadSystem>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadJobs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_roadSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSystems;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_roadSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSystems;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_roadSystems(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::RoadSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadSystems = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Bounds>& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_roadUpdateBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadUpdateBounds;
}
constexpr ::System::Nullable_1<::UnityEngine::Bounds> const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_roadUpdateBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadUpdateBounds;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_roadUpdateBounds(::System::Nullable_1<::UnityEngine::Bounds>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadUpdateBounds = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_allModifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allModifiers;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_allModifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allModifiers;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_allModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IModifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allModifiers = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_heightmapModifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightmapModifiers;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_heightmapModifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightmapModifiers;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_heightmapModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightmapModifiers = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_splatmapModifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatmapModifiers;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_splatmapModifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatmapModifiers;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_splatmapModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatmapModifiers = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_holeModifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeModifiers;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_holeModifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeModifiers;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_holeModifiers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHoleModifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holeModifiers = value;
}
constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_dataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataCache;
}
constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_dataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataCache;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_dataCache(::JBooth::MicroVerseCore::MicroVerse_DataCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataCache = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_modifiedTerrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiedTerrains;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_modifiedTerrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiedTerrains;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_modifiedTerrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiedTerrains = value;
}
constexpr ::UnityW<::JBooth::MicroSplat::TextureArrayConfig>& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_msConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___msConfig;
}
constexpr ::UnityW<::JBooth::MicroSplat::TextureArrayConfig> const& JBooth::MicroVerseCore::MicroVerse::__cordl_internal_get_msConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___msConfig;
}
constexpr void JBooth::MicroVerseCore::MicroVerse::__cordl_internal_set_msConfig(::UnityW<::JBooth::MicroSplat::TextureArrayConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___msConfig = value;
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_OnTerrainLayersChanged(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*  value)  {
::cordl_internals::setStaticField<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*, "OnTerrainLayersChanged", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>(value));
}
inline ::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged* JBooth::MicroVerseCore::MicroVerse::getStaticF_OnTerrainLayersChanged()  {
return ::cordl_internals::getStaticField<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*, "OnTerrainLayersChanged", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_OnFinishedUpdating(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnFinishedUpdating", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* JBooth::MicroVerseCore::MicroVerse::getStaticF_OnFinishedUpdating()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnFinishedUpdating", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_OnBeginUpdating(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnBeginUpdating", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* JBooth::MicroVerseCore::MicroVerse::getStaticF_OnBeginUpdating()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnBeginUpdating", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_OnCancelUpdating(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnCancelUpdating", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* JBooth::MicroVerseCore::MicroVerse::getStaticF_OnCancelUpdating()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnCancelUpdating", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__instance(::UnityW<::JBooth::MicroVerseCore::MicroVerse>  value)  {
::cordl_internals::setStaticField<::UnityW<::JBooth::MicroVerseCore::MicroVerse>, "_instance", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityW<::JBooth::MicroVerseCore::MicroVerse>>(value));
}
inline ::UnityW<::JBooth::MicroVerseCore::MicroVerse> JBooth::MicroVerseCore::MicroVerse::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::JBooth::MicroVerseCore::MicroVerse>, "_instance", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_heightSeamShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "heightSeamShader", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> JBooth::MicroVerseCore::MicroVerse::getStaticF_heightSeamShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "heightSeamShader", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__Mapping(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Mapping", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MicroVerse::getStaticF__Mapping()  {
return ::cordl_internals::getStaticField<int32_t, "_Mapping", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__TerrainIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerrainIndex", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MicroVerse::getStaticF__TerrainIndex()  {
return ::cordl_internals::getStaticField<int32_t, "_TerrainIndex", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__TerrainWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerrainWeight", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MicroVerse::getStaticF__TerrainWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_TerrainWeight", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__NeighborIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NeighborIndex", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MicroVerse::getStaticF__NeighborIndex()  {
return ::cordl_internals::getStaticField<int32_t, "_NeighborIndex", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__NeighborWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NeighborWeight", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MicroVerse::getStaticF__NeighborWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_NeighborWeight", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__Width(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MicroVerse::getStaticF__Width()  {
return ::cordl_internals::getStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__Height(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Height", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MicroVerse::getStaticF__Height()  {
return ::cordl_internals::getStaticField<int32_t, "_Height", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_alphaSeamShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "alphaSeamShader", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> JBooth::MicroVerseCore::MicroVerse::getStaticF_alphaSeamShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "alphaSeamShader", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF__noAsyncReadback_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<noAsyncReadback>k__BackingField", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<bool>(value));
}
inline bool JBooth::MicroVerseCore::MicroVerse::getStaticF__noAsyncReadback_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<noAsyncReadback>k__BackingField", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_rasterToTerrain(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "rasterToTerrain", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> JBooth::MicroVerseCore::MicroVerse::getStaticF_rasterToTerrain()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "rasterToTerrain", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::setStaticF_rasterToMega(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "rasterToMega", ::JBooth::MicroVerseCore::MicroVerse*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> JBooth::MicroVerseCore::MicroVerse::getStaticF_rasterToMega()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "rasterToMega", ::JBooth::MicroVerseCore::MicroVerse*>();
}
inline void JBooth::MicroVerseCore::MicroVerse::add_OnTerrainLayersChanged(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"add_OnTerrainLayersChanged", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::MicroVerse::remove_OnTerrainLayersChanged(::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"remove_OnTerrainLayersChanged", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_TerrainLayersChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> JBooth::MicroVerseCore::MicroVerse::get_terrains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_terrains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>>>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::set_terrains(::ArrayW<::UnityEngine::Terrain*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_terrains", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::JBooth::MicroVerseCore::MicroVerse> JBooth::MicroVerseCore::MicroVerse::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::JBooth::MicroVerseCore::MicroVerse>>(nullptr, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> JBooth::MicroVerseCore::MicroVerse::GetAllTerrains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GetAllTerrains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>>>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::SyncTerrainList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SyncTerrainList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::Invalidate(::System::Nullable_1<::UnityEngine::Bounds>  bounds, ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Invalidate", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_InvalidateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, type);
}
inline void JBooth::MicroVerseCore::MicroVerse::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::MicroVerse::get_IsHeightSyncd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_IsHeightSyncd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::set_IsHeightSyncd(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_IsHeightSyncd", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::MicroVerse::get_IsModifyingTerrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_IsModifyingTerrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::set_IsModifyingTerrain(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_IsModifyingTerrain", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::MicroVerse::get_IsAddingHeightStamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_IsAddingHeightStamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::set_IsAddingHeightStamp(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_IsAddingHeightStamp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::MicroVerse::RequestHeightSaveback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"RequestHeightSaveback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::SaveBackToTerrain(bool  forceFinishSpawnProcssing, bool  saveHoles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SaveBackToTerrain", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceFinishSpawnProcssing, saveHoles);
}
inline bool JBooth::MicroVerseCore::MicroVerse::DoTerrainLayersMatch(::ArrayW<::UnityEngine::TerrainLayer*>  a, ::ArrayW<::UnityEngine::TerrainLayer*>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"DoTerrainLayersMatch", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void JBooth::MicroVerseCore::MicroVerse::SanatizeTerrainLayers(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  splatmapModifiers, ::ArrayW<::UnityEngine::Terrain*>  allTerrains)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SanatizeTerrainLayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splatmapModifiers, allTerrains);
}
inline void JBooth::MicroVerseCore::MicroVerse::SeamHeightMaps(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SeamHeightMaps", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataCache);
}
inline float_t JBooth::MicroVerseCore::MicroVerse::FindIndex(::ArrayW<::UnityEngine::TerrainLayer*>  protos, ::UnityEngine::TerrainLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"FindIndex", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>(), ::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, protos, layer);
}
inline void JBooth::MicroVerseCore::MicroVerse::MapIndecies(int32_t  kernelIndex, ::UnityEngine::Terrain*  terrain, ::UnityEngine::Terrain*  neighbor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"MapIndecies", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernelIndex, terrain, neighbor);
}
inline void JBooth::MicroVerseCore::MicroVerse::SeamAlphaMaps(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"SeamAlphaMaps", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MicroVerse_DataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataCache);
}
inline void JBooth::MicroVerseCore::MicroVerse::CullTerrainList(bool  boundsCull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"CullTerrainList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boundsCull);
}
inline void JBooth::MicroVerseCore::MicroVerse::AddRoadJob(::JBooth::MicroVerseCore::Road*  road, ::JBooth::MicroVerseCore::RoadSystem*  rs, ::UnityEngine::Bounds  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"AddRoadJob", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Road*>(), ::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, road, rs, b);
}
inline void JBooth::MicroVerseCore::MicroVerse::RevisionAllStamps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"RevisionAllStamps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::MicroVerse::get_noAsyncReadback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"get_noAsyncReadback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void JBooth::MicroVerseCore::MicroVerse::set_noAsyncReadback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"set_noAsyncReadback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::MicroVerse::Modify(bool  writeToCPU, bool  noAsync, bool  boundsCull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"Modify", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeToCPU, noAsync, boundsCull);
}
inline void JBooth::MicroVerseCore::MicroVerse::CancelModify(bool  cancelRoads)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"CancelModify", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancelRoads);
}
inline void JBooth::MicroVerseCore::MicroVerse::GenerateSplatmaps(::JBooth::MicroVerseCore::TextureData*  splatmapData, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*  splatmapModifiers, ::UnityEngine::Bounds  terrainBounds, ::JBooth::MicroVerseCore::OcclusionData*  od, bool  writeToCPU)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GenerateSplatmaps", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ITextureModifier*>*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, splatmapData, splatmapModifiers, terrainBounds, od, writeToCPU);
}
inline void JBooth::MicroVerseCore::MicroVerse::RasterizeSplatMaps(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  indexMap, ::UnityEngine::RenderTexture*  weightMap, bool  writeToCPU)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"RasterizeSplatMaps", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, indexMap, weightMap, writeToCPU);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MicroVerse::GenerateHeightmap(::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*  heightmapModifiers, ::UnityEngine::Bounds  terrainBounds, ::JBooth::MicroVerseCore::OcclusionData*  od, bool  writeToCPU)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GenerateHeightmap", {}, {::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::IHeightModifier*>*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, heightmapData, heightmapModifiers, terrainBounds, od, writeToCPU);
}
inline bool JBooth::MicroVerseCore::MicroVerse::IsUsingMicroSplat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"IsUsingMicroSplat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> JBooth::MicroVerseCore::MicroVerse::GetMegasplatTexture(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {"GetMegasplatTexture", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, terrain);
}
inline void JBooth::MicroVerseCore::MicroVerse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MicroVerse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MicroVerse* JBooth::MicroVerseCore::MicroVerse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MicroVerse*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MicroVerse::MicroVerse()   {
}
