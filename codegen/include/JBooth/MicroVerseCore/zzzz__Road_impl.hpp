#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Road.hpp"
#include "JBooth/MicroVerseCore/zzzz__BendRules_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Road_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Intersection_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MeshCacheData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectSpawnJobLinearHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadConfig_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystem_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Road_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__VertexJobHolder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__Random_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road_OverlayEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road_OverlayEntry::*)()>(&::JBooth::MicroVerseCore::Road_OverlayEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_OverlayEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_get_label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr ::StringW const& JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_get_label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr void JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_set_label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___label = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr bool& JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_get_none()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___none;
}
constexpr bool const& JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_get_none() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___none;
}
constexpr void JBooth::MicroVerseCore::Road_OverlayEntry::__cordl_internal_set_none(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___none = value;
}
inline void JBooth::MicroVerseCore::Road_OverlayEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_OverlayEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Road_OverlayEntry* JBooth::MicroVerseCore::Road_OverlayEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Road_OverlayEntry*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Road_OverlayEntry::Road_OverlayEntry()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road_SplineChoiceData.FindOverlayEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::Road_OverlayEntry* (::JBooth::MicroVerseCore::Road_SplineChoiceData::*)(::UnityEngine::GameObject*)>(&::JBooth::MicroVerseCore::Road_SplineChoiceData::FindOverlayEntry)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181417900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoiceData*>(),
                        {"FindOverlayEntry", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road_SplineChoiceData.FindOverlayEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::Road_OverlayEntry* (::JBooth::MicroVerseCore::Road_SplineChoiceData::*)(::StringW)>(&::JBooth::MicroVerseCore::Road_SplineChoiceData::FindOverlayEntry)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181417860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoiceData*>(),
                        {"FindOverlayEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road_SplineChoiceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road_SplineChoiceData::*)()>(&::JBooth::MicroVerseCore::Road_SplineChoiceData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814179a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoiceData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::Road_SplineChoiceData::__cordl_internal_get_roadPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::Road_SplineChoiceData::__cordl_internal_get_roadPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadPrefab;
}
constexpr void JBooth::MicroVerseCore::Road_SplineChoiceData::__cordl_internal_set_roadPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>*& JBooth::MicroVerseCore::Road_SplineChoiceData::__cordl_internal_get_overlayEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayEntries;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>* const& JBooth::MicroVerseCore::Road_SplineChoiceData::__cordl_internal_get_overlayEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayEntries;
}
constexpr void JBooth::MicroVerseCore::Road_SplineChoiceData::__cordl_internal_set_overlayEntries(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_OverlayEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlayEntries = value;
}
inline ::JBooth::MicroVerseCore::Road_OverlayEntry* JBooth::MicroVerseCore::Road_SplineChoiceData::FindOverlayEntry(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoiceData*>(),
                        {"FindOverlayEntry", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::Road_OverlayEntry*>(this, ___internal_method, prefab);
}
inline ::JBooth::MicroVerseCore::Road_OverlayEntry* JBooth::MicroVerseCore::Road_SplineChoiceData::FindOverlayEntry(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoiceData*>(),
                        {"FindOverlayEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::Road_OverlayEntry*>(this, ___internal_method, label);
}
inline void JBooth::MicroVerseCore::Road_SplineChoiceData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoiceData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Road_SplineChoiceData* JBooth::MicroVerseCore::Road_SplineChoiceData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Road_SplineChoiceData*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData::Road_SplineChoiceData()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road_SplineChoices._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road_SplineChoices::*)()>(&::JBooth::MicroVerseCore::Road_SplineChoices::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814179f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoices*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*& JBooth::MicroVerseCore::Road_SplineChoices::__cordl_internal_get_choices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___choices;
}
constexpr ::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>* const& JBooth::MicroVerseCore::Road_SplineChoices::__cordl_internal_get_choices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___choices;
}
constexpr void JBooth::MicroVerseCore::Road_SplineChoices::__cordl_internal_set_choices(::UnityEngine::Splines::SplineData_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___choices = value;
}
inline void JBooth::MicroVerseCore::Road_SplineChoices::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineChoices*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Road_SplineChoices* JBooth::MicroVerseCore::Road_SplineChoices::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Road_SplineChoices*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Road_SplineChoices::Road_SplineChoices()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road_SplineShapeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road_SplineShapeData::*)()>(&::JBooth::MicroVerseCore::Road_SplineShapeData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181417a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineShapeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>*& JBooth::MicroVerseCore::Road_SplineShapeData::__cordl_internal_get_shapeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapeData;
}
constexpr ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>* const& JBooth::MicroVerseCore::Road_SplineShapeData::__cordl_internal_get_shapeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapeData;
}
constexpr void JBooth::MicroVerseCore::Road_SplineShapeData::__cordl_internal_set_shapeData(::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shapeData = value;
}
inline void JBooth::MicroVerseCore::Road_SplineShapeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road_SplineShapeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Road_SplineShapeData* JBooth::MicroVerseCore::Road_SplineShapeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Road_SplineShapeData*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Road_SplineShapeData::Road_SplineShapeData()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Road_Orientation::Road_Orientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Road_Orientation::Road_Orientation()   {
}
constexpr ::JBooth::MicroVerseCore::Road_Orientation  JBooth::MicroVerseCore::Road_Orientation::X{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Road_Orientation  JBooth::MicroVerseCore::Road_Orientation::Z{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "owner", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mf", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mc", ty: "::UnityW<::UnityEngine::MeshCollider>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "orient", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "posQuats", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cacheSplineJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullMode", ty: "::JBooth::MicroVerseCore::BendRules_CullMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalScaleBegin", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalScaleEnd", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Road_BendMeshData::Road_BendMeshData(::UnityW<::UnityEngine::GameObject>  owner, ::UnityW<::UnityEngine::MeshFilter>  mf, ::UnityW<::UnityEngine::MeshCollider>  mc, ::UnityW<::UnityEngine::Mesh>  mesh, float_t  start, float_t  range, float_t  meshLength, float_t  scale, int32_t  orient, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, ::Unity::Jobs::JobHandle  cacheSplineJob, ::JBooth::MicroVerseCore::BendRules_CullMode  cullMode, ::UnityEngine::Vector2  globalScaleBegin, ::UnityEngine::Vector2  globalScaleEnd) noexcept  {
this->owner = owner;
this->mf = mf;
this->mc = mc;
this->mesh = mesh;
this->start = start;
this->range = range;
this->meshLength = meshLength;
this->scale = scale;
this->orient = orient;
this->posQuats = posQuats;
this->cacheSplineJob = cacheSplineJob;
this->cullMode = cullMode;
this->globalScaleBegin = globalScaleBegin;
this->globalScaleEnd = globalScaleEnd;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Road_BendMeshData::Road_BendMeshData()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.FindChoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::Road_SplineChoiceData* (::JBooth::MicroVerseCore::Road::*)(float_t)>(&::JBooth::MicroVerseCore::Road::FindChoiceData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181410240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"FindChoiceData", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.UpdateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)(::JBooth::MicroVerseCore::RoadSystem*, bool, bool, float_t)>(&::JBooth::MicroVerseCore::Road::UpdateConnections)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x1814120a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"UpdateConnections", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)()>(&::JBooth::MicroVerseCore::Road::OnDestroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814113d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.CleanupMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)()>(&::JBooth::MicroVerseCore::Road::CleanupMeshes)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18140fda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"CleanupMeshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.SetHideFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::JBooth::MicroVerseCore::RoadSystem*)>(&::JBooth::MicroVerseCore::Road::SetHideFlags)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181411ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"SetHideFlags", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.BendMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)(::JBooth::MicroVerseCore::Road_BendMeshData)>(&::JBooth::MicroVerseCore::Road::BendMesh)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x18140e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"BendMesh", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Road_BendMeshData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.Bend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)(::UnityEngine::GameObject*, float_t, float_t, float_t, float_t, int32_t, float_t, float_t, ::JBooth::MicroVerseCore::ObjJobHolder*, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>, ::Unity::Jobs::JobHandle, ::by_ref<::Unity::Mathematics::Random>, ::JBooth::MicroVerseCore::RoadSystem*)>(&::JBooth::MicroVerseCore::Road::Bend)> {
  constexpr static std::size_t size = 0x10f0;
  constexpr static std::size_t addrs = 0x18140eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"Bend", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::JBooth::MicroVerseCore::ObjJobHolder*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::Random>>(), ::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.ClearCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::JBooth::MicroVerseCore::Road::ClearCache)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181410140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"ClearCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.LaunchJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)(::JBooth::MicroVerseCore::RoadSystem*)>(&::JBooth::MicroVerseCore::Road::LaunchJobs)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x1814106c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"LaunchJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.CancelJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)()>(&::JBooth::MicroVerseCore::Road::CancelJobs)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18140fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"CancelJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.ProcessJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)(::JBooth::MicroVerseCore::RoadSystem*)>(&::JBooth::MicroVerseCore::Road::ProcessJobs)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0x181411440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"ProcessJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)(::JBooth::MicroVerseCore::RoadSystem*, bool)>(&::JBooth::MicroVerseCore::Road::Generate)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181410400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"Generate", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Road._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Road::*)()>(&::JBooth::MicroVerseCore::Road::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814128c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineContainer = value;
}
constexpr bool& JBooth::MicroVerseCore::Road::__cordl_internal_get_allowRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowRoll;
}
constexpr bool const& JBooth::MicroVerseCore::Road::__cordl_internal_get_allowRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowRoll;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_allowRoll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowRoll = value;
}
constexpr bool& JBooth::MicroVerseCore::Road::__cordl_internal_get_modifiesTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiesTerrain;
}
constexpr bool const& JBooth::MicroVerseCore::Road::__cordl_internal_get_modifiesTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiesTerrain;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_modifiesTerrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiesTerrain = value;
}
constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*& JBooth::MicroVerseCore::Road::__cordl_internal_get_beginConnector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginConnector;
}
constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_beginConnector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginConnector;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_beginConnector(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beginConnector = value;
}
constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint*& JBooth::MicroVerseCore::Road::__cordl_internal_get_endConnector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endConnector;
}
constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_endConnector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endConnector;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_endConnector(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endConnector = value;
}
constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData*& JBooth::MicroVerseCore::Road::__cordl_internal_get_defaultChoiceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultChoiceData;
}
constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_defaultChoiceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultChoiceData;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_defaultChoiceData(::JBooth::MicroVerseCore::Road_SplineChoiceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultChoiceData = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>*& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineOverlayChoices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineOverlayChoices;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineOverlayChoices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineOverlayChoices;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_splineOverlayChoices(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoices*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineOverlayChoices = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>*& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineShapes;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineShapes;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_splineShapes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineShapeData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineShapes = value;
}
constexpr int32_t& JBooth::MicroVerseCore::Road::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr int32_t const& JBooth::MicroVerseCore::Road::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& JBooth::MicroVerseCore::Road::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& JBooth::MicroVerseCore::Road::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr ::StringW& JBooth::MicroVerseCore::Road::__cordl_internal_get_instanceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceName;
}
constexpr ::StringW const& JBooth::MicroVerseCore::Road::__cordl_internal_get_instanceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceName;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_instanceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceName = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& JBooth::MicroVerseCore::Road::__cordl_internal_get_children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_children(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___children = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& JBooth::MicroVerseCore::Road::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::JBooth::MicroVerseCore::ObjJobHolder*& JBooth::MicroVerseCore::Road::__cordl_internal_get_objJobHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objJobHolder;
}
constexpr ::JBooth::MicroVerseCore::ObjJobHolder* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_objJobHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objJobHolder;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_objJobHolder(::JBooth::MicroVerseCore::ObjJobHolder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objJobHolder = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>*& JBooth::MicroVerseCore::Road::__cordl_internal_get_bendJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendJobs;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_bendJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendJobs;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_bendJobs(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::VertexJobHolder*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bendJobs = value;
}
constexpr ::UnityEngine::Splines::NativeSpline& JBooth::MicroVerseCore::Road::__cordl_internal_get_nspline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nspline;
}
constexpr ::UnityEngine::Splines::NativeSpline const& JBooth::MicroVerseCore::Road::__cordl_internal_get_nspline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nspline;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_nspline(::UnityEngine::Splines::NativeSpline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nspline = value;
}
constexpr ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>& JBooth::MicroVerseCore::Road::__cordl_internal_get_cachePosQuats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachePosQuats;
}
constexpr ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat> const& JBooth::MicroVerseCore::Road::__cordl_internal_get_cachePosQuats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachePosQuats;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_cachePosQuats(::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachePosQuats = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineWidthArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineWidthArray;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> const& JBooth::MicroVerseCore::Road::__cordl_internal_get_splineWidthArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineWidthArray;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_splineWidthArray(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineWidthArray = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>*& JBooth::MicroVerseCore::Road::__cordl_internal_get_spawnLinearJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLinearJobs;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>* const& JBooth::MicroVerseCore::Road::__cordl_internal_get_spawnLinearJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLinearJobs;
}
constexpr void JBooth::MicroVerseCore::Road::__cordl_internal_set_spawnLinearJobs(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectSpawnJobLinearHolder*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLinearJobs = value;
}
inline void JBooth::MicroVerseCore::Road::setStaticF_meshCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>*, "meshCache", ::JBooth::MicroVerseCore::Road*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>* JBooth::MicroVerseCore::Road::getStaticF_meshCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::JBooth::MicroVerseCore::MeshCacheData*>*, "meshCache", ::JBooth::MicroVerseCore::Road*>();
}
inline void JBooth::MicroVerseCore::Road::setStaticF_itersectionCache(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>*, "itersectionCache", ::JBooth::MicroVerseCore::Road*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>* JBooth::MicroVerseCore::Road::getStaticF_itersectionCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroVerseCore::Intersection>>*, "itersectionCache", ::JBooth::MicroVerseCore::Road*>();
}
inline ::JBooth::MicroVerseCore::Road_SplineChoiceData* JBooth::MicroVerseCore::Road::FindChoiceData(float_t  normalized_t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"FindChoiceData", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::Road_SplineChoiceData*>(this, ___internal_method, normalized_t);
}
inline void JBooth::MicroVerseCore::Road::UpdateConnections(::JBooth::MicroVerseCore::RoadSystem*  systemRoot, bool  allowDisconnnect, bool  autoGrabDistance, float_t  grabDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"UpdateConnections", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, systemRoot, allowDisconnnect, autoGrabDistance, grabDistance);
}
inline void JBooth::MicroVerseCore::Road::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Road::CleanupMeshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"CleanupMeshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Road::SetHideFlags(::UnityEngine::Object*  o, ::JBooth::MicroVerseCore::RoadSystem*  rs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"SetHideFlags", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o, rs);
}
inline void JBooth::MicroVerseCore::Road::BendMesh(::JBooth::MicroVerseCore::Road_BendMeshData  bd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"BendMesh", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Road_BendMeshData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bd);
}
inline void JBooth::MicroVerseCore::Road::Bend(::UnityEngine::GameObject*  prefab, float_t  start, float_t  range, float_t  meshLength, float_t  scale, int32_t  orient, float_t  curLength, float_t  totalLength, ::JBooth::MicroVerseCore::ObjJobHolder*  objJobHolder, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, ::Unity::Jobs::JobHandle  cacheSplineJob, ::by_ref<::Unity::Mathematics::Random>  random, ::JBooth::MicroVerseCore::RoadSystem*  roadSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"Bend", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::JBooth::MicroVerseCore::ObjJobHolder*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::Random>>(), ::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, start, range, meshLength, scale, orient, curLength, totalLength, objJobHolder, posQuats, cacheSplineJob, random, roadSystem);
}
inline void JBooth::MicroVerseCore::Road::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"ClearCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void JBooth::MicroVerseCore::Road::LaunchJobs(::JBooth::MicroVerseCore::RoadSystem*  rs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"LaunchJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rs);
}
inline void JBooth::MicroVerseCore::Road::CancelJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"CancelJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Road::ProcessJobs(::JBooth::MicroVerseCore::RoadSystem*  rs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"ProcessJobs", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rs);
}
inline void JBooth::MicroVerseCore::Road::Generate(::JBooth::MicroVerseCore::RoadSystem*  rs, bool  updateMS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {"Generate", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rs, updateMS);
}
inline void JBooth::MicroVerseCore::Road::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Road*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Road* JBooth::MicroVerseCore::Road::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Road*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Road::Road()   {
}
