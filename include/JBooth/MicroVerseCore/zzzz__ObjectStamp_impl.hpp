#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IObjectModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Lock::ObjectStamp_Lock(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Lock::ObjectStamp_Lock()   {
}
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Lock  JBooth::MicroVerseCore::ObjectStamp_Lock::None{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Lock  JBooth::MicroVerseCore::ObjectStamp_Lock::XY{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Lock  JBooth::MicroVerseCore::ObjectStamp_Lock::XZ{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Lock  JBooth::MicroVerseCore::ObjectStamp_Lock::YZ{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Lock  JBooth::MicroVerseCore::ObjectStamp_Lock::XYZ{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_Randomization.get_densityByWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::ObjectStamp_Randomization::get_densityByWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18140de80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"get_densityByWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_Randomization.set_densityByWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::ObjectStamp_Randomization::set_densityByWeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"set_densityByWeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_Randomization.get_disabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::ObjectStamp_Randomization::get_disabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18140dea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"get_disabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_Randomization.set_disabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::ObjectStamp_Randomization::set_disabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140df20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"set_disabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_Randomization.get_alignDownhill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::ObjectStamp_Randomization::get_alignDownhill)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18140de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"get_alignDownhill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_Randomization.set_alignDownhill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::ObjectStamp_Randomization::set_alignDownhill)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"set_alignDownhill", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool JBooth::MicroVerseCore::ObjectStamp_Randomization::get_densityByWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"get_densityByWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp_Randomization::set_densityByWeight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"set_densityByWeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::ObjectStamp_Randomization::get_disabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"get_disabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp_Randomization::set_disabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"set_disabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::ObjectStamp_Randomization::get_alignDownhill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"get_alignDownhill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp_Randomization::set_alignDownhill(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_Randomization>(),
                        {"set_alignDownhill", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "weightRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationRangeX", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationRangeY", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationRangeZ", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleRangeX", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleRangeY", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleRangeZ", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleLock", ty: "::JBooth::MicroVerseCore::ObjectStamp_Lock", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationLock", ty: "::JBooth::MicroVerseCore::ObjectStamp_Lock", modifiers: "", def_value: Some("{}") }, CppParam { name: "slopeAlignment", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sink", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleMultiplierAtBoundaries", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Randomization::ObjectStamp_Randomization(float_t  weight, ::UnityEngine::Vector2  weightRange, ::UnityEngine::Vector2  rotationRangeX, ::UnityEngine::Vector2  rotationRangeY, ::UnityEngine::Vector2  rotationRangeZ, ::UnityEngine::Vector2  scaleRangeX, ::UnityEngine::Vector2  scaleRangeY, ::UnityEngine::Vector2  scaleRangeZ, ::JBooth::MicroVerseCore::ObjectStamp_Lock  scaleLock, ::JBooth::MicroVerseCore::ObjectStamp_Lock  rotationLock, float_t  slopeAlignment, ::UnityEngine::Vector2  sink, float_t  scaleMultiplierAtBoundaries, int32_t  flags) noexcept  {
this->weight = weight;
this->weightRange = weightRange;
this->rotationRangeX = rotationRangeX;
this->rotationRangeY = rotationRangeY;
this->rotationRangeZ = rotationRangeZ;
this->scaleRangeX = scaleRangeX;
this->scaleRangeY = scaleRangeY;
this->scaleRangeZ = scaleRangeZ;
this->scaleLock = scaleLock;
this->rotationLock = rotationLock;
this->slopeAlignment = slopeAlignment;
this->sink = sink;
this->scaleMultiplierAtBoundaries = scaleMultiplierAtBoundaries;
this->flags = flags;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectStamp_Randomization::ObjectStamp_Randomization()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::*)()>(&::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Terrain>& JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::__cordl_internal_get_terrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::__cordl_internal_get_terrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::__cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrain = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
inline void JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry* JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry::ObjectStamp_ParentObjectEntry()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp_ReturnData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp_ReturnData::*)()>(&::JBooth::MicroVerseCore::ObjectStamp_ReturnData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_get_positionWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionWeight;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_get_positionWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionWeight;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_set_positionWeight(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionWeight = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_get_rotationIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationIndex;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_get_rotationIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationIndex;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_set_rotationIndex(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationIndex = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp_ReturnData::__cordl_internal_set_scale(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
inline void JBooth::MicroVerseCore::ObjectStamp_ReturnData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjectStamp_ReturnData* JBooth::MicroVerseCore::ObjectStamp_ReturnData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectStamp_ReturnData::ObjectStamp_ReturnData()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::NeedFlowMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140c440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.FindParentObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::JBooth::MicroVerseCore::ObjectStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::ObjectStamp::FindParentObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18140bd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"FindParentObject", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::GetBounds)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18140be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.OccludesOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::OccludesOthers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.UsesOtherTreeSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::UsesOtherTreeSDF)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140d330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.UsesOtherObjectSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::UsesOtherObjectSDF)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140d300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::NeedSDF)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18140c4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.NeedParentSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::NeedParentSDF)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18140c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.NeedToGenerateSDFForChilden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::NeedToGenerateSDFForChilden)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18140c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.SetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::ObjectStamp::SetSDF)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18140d170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.GetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::ObjectStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::ObjectStamp::GetSDF)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18140bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.get_destroyOnNextClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::get_destroyOnNextClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"get_destroyOnNextClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.set_destroyOnNextClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)(bool)>(&::JBooth::MicroVerseCore::ObjectStamp::set_destroyOnNextClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"set_destroyOnNextClear", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.ClearSpawnedInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::ClearSpawnedInstances)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18140b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ClearSpawnedInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::Initialize)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18140c030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.FindParentInScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::JBooth::MicroVerseCore::ObjectStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::ObjectStamp::FindParentInScene)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18140bc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"FindParentInScene", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.ApplyObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ObjectStamp::ApplyObjectStamp)> {
  constexpr static std::size_t size = 0x1390;
  constexpr static std::size_t addrs = 0x18140a490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ApplyObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.ProcessObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ObjectStamp::ProcessObjectStamp)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x18140c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ProcessObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18140c5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::Dispose)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18140ba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.RevealHiddenObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::RevealHiddenObjects)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18140cf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"RevealHiddenObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18140c6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.ApplyTextureStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::TextureData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ObjectStamp::ApplyTextureStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.InqTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::ObjectStamp::InqTerrainLayers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18140c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18140c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18140c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.SyncContainerActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::SyncContainerActiveState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18140d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"SyncContainerActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.ApplyObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)(::JBooth::MicroVerseCore::ObjectData*)>(&::JBooth::MicroVerseCore::ObjectStamp::ApplyObjectClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ApplyObjectClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp.NeedObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::NeedObjectClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedObjectClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStamp::*)()>(&::JBooth::MicroVerseCore::ObjectStamp::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18140d6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_spawnedInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedInstances;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_spawnedInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedInstances;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_spawnedInstances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedInstances = value;
}
constexpr bool& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_spawnAsPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAsPrefab;
}
constexpr bool const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_spawnAsPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAsPrefab;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_spawnAsPrefab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnAsPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>*& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_randomizations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizations;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>* const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_randomizations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizations;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_randomizations(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_Randomization>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomizations = value;
}
constexpr bool& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_hideInHierarchy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideInHierarchy;
}
constexpr bool const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_hideInHierarchy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideInHierarchy;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_hideInHierarchy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideInHierarchy = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_parentObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentObject;
}
constexpr ::UnityW<::UnityEngine::Transform> const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_parentObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentObject;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_parentObject(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentObject = value;
}
constexpr uint32_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr uint32_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_seed(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_poissonDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDisk;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_poissonDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDisk;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_poissonDisk(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poissonDisk = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_poissonDiskStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDiskStrength;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_poissonDiskStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDiskStrength;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_poissonDiskStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poissonDiskStrength = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_density(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___density = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_prototypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_prototypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypes;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_prototypes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototypes = value;
}
constexpr bool& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_occludeOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeOthers;
}
constexpr bool const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_occludeOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeOthers;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_occludeOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeOthers = value;
}
constexpr bool& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_occludedByOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludedByOthers;
}
constexpr bool const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_occludedByOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludedByOthers;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_occludedByOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludedByOthers = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minDistanceFromTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromTree;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minDistanceFromTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromTree;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_minDistanceFromTree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromTree = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_maxDistanceFromTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTree;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_maxDistanceFromTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTree;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_maxDistanceFromTree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromTree = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minDistanceFromObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromObject;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minDistanceFromObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromObject;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_minDistanceFromObject(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromObject = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_maxDistanceFromObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromObject;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_maxDistanceFromObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromObject;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_maxDistanceFromObject(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromObject = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minDistanceFromParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromParent;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minDistanceFromParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromParent;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_minDistanceFromParent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromParent = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_maxDistanceFromParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromParent;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_maxDistanceFromParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromParent;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_maxDistanceFromParent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromParent = value;
}
constexpr bool& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_sdfClamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfClamp;
}
constexpr bool const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_sdfClamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfClamp;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_sdfClamp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfClamp = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHeight;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_minHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHeight;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_minHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_heightModAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModAmount;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_heightModAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModAmount;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_heightModAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightModAmount = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_heightModWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_heightModWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModWidth;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_heightModWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightModWidth = value;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer>& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_layerWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_layerWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWeight;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_layerWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerWeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_layerWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_layerWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWidth;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_layerWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerWidth = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet*& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_filterSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr ::JBooth::MicroVerseCore::FilterSet* const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_filterSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterSet = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>*& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_parentObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentObjects;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>* const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_parentObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentObjects;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_parentObjects(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectStamp_ParentObjectEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_sdfs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_sdfs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfs;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_sdfs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfs = value;
}
constexpr bool& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get__destroyOnNextClear_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroyOnNextClear_k__BackingField;
}
constexpr bool const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get__destroyOnNextClear_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroyOnNextClear_k__BackingField;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set__destroyOnNextClear_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destroyOnNextClear_k__BackingField = value;
}
constexpr ::ArrayW<int32_t>& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_prototypeIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypeIndexes;
}
constexpr ::ArrayW<int32_t> const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_prototypeIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypeIndexes;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_prototypeIndexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototypeIndexes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>*& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_returnedRTs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnedRTs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>* const& JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_get_returnedRTs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnedRTs;
}
constexpr void JBooth::MicroVerseCore::ObjectStamp::__cordl_internal_set_returnedRTs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnedRTs = value;
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF_randomTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "randomTexture", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> JBooth::MicroVerseCore::ObjectStamp::getStaticF_randomTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "randomTexture", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF_objectShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "objectShader", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::ObjectStamp::getStaticF_objectShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "objectShader", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__RandomTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RandomTex", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__RandomTex()  {
return ::cordl_internals::getStaticField<int32_t, "_RandomTex", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Disc(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Disc", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Disc()  {
return ::cordl_internals::getStaticField<int32_t, "_Disc", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__DiscStrength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DiscStrength", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__DiscStrength()  {
return ::cordl_internals::getStaticField<int32_t, "_DiscStrength", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Density(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Density", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Density()  {
return ::cordl_internals::getStaticField<int32_t, "_Density", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__InstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InstanceCount", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__InstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "_InstanceCount", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Heightmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Heightmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Normalmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Normalmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Curvemap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Curvemap()  {
return ::cordl_internals::getStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Flowmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Flowmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__ClearLayer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__ClearLayer()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__ClearMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__ClearMask()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__MinHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_MinHeight", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__MinHeight()  {
return ::cordl_internals::getStaticField<int32_t, "_MinHeight", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__TotalWeights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TotalWeights", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__TotalWeights()  {
return ::cordl_internals::getStaticField<int32_t, "_TotalWeights", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__HeightOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightOffset", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__HeightOffset()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightOffset", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__PlacementMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__PlacementMask()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__ObjectMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ObjectMask", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__ObjectMask()  {
return ::cordl_internals::getStaticField<int32_t, "_ObjectMask", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__TerrainPixelCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerrainPixelCount", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__TerrainPixelCount()  {
return ::cordl_internals::getStaticField<int32_t, "_TerrainPixelCount", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__ModWidth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ModWidth", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__ModWidth()  {
return ::cordl_internals::getStaticField<int32_t, "_ModWidth", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__IndexMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__IndexMap()  {
return ::cordl_internals::getStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__WeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__WeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Seed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Seed", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Seed()  {
return ::cordl_internals::getStaticField<int32_t, "_Seed", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__TextureLayerWeights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TextureLayerWeights", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__TextureLayerWeights()  {
return ::cordl_internals::getStaticField<int32_t, "_TextureLayerWeights", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__Randomizations(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Randomizations", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__Randomizations()  {
return ::cordl_internals::getStaticField<int32_t, "_Randomizations", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF__YCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_YCount", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectStamp::getStaticF__YCount()  {
return ::cordl_internals::getStaticField<int32_t, "_YCount", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF_heightModMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "heightModMat", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::ObjectStamp::getStaticF_heightModMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "heightModMat", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline void JBooth::MicroVerseCore::ObjectStamp::setStaticF_splatModMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "splatModMat", ::JBooth::MicroVerseCore::ObjectStamp*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::ObjectStamp::getStaticF_splatModMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "splatModMat", ::JBooth::MicroVerseCore::ObjectStamp*>();
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::ObjectStamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> JBooth::MicroVerseCore::ObjectStamp::FindParentObject(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"FindParentObject", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, t);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::ObjectStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::OccludesOthers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::UsesOtherTreeSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::UsesOtherObjectSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::NeedSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::NeedParentSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::NeedToGenerateSDFForChilden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, rt);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::ObjectStamp::GetSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::get_destroyOnNextClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"get_destroyOnNextClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::set_destroyOnNextClear(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"set_destroyOnNextClear", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::ObjectStamp::ClearSpawnedInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ClearSpawnedInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> JBooth::MicroVerseCore::ObjectStamp::FindParentInScene(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"FindParentInScene", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::ObjectStamp::ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ApplyObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td, jobs, od);
}
inline void JBooth::MicroVerseCore::ObjectStamp::ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ProcessObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::ObjectStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::RevealHiddenObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"RevealHiddenObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexSrc, indexDest, weightSrc, weightDest, splatmapData, od);
}
inline void JBooth::MicroVerseCore::ObjectStamp::InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, prototypes);
}
inline void JBooth::MicroVerseCore::ObjectStamp::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::SyncContainerActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"SyncContainerActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"ApplyObjectClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, od);
}
inline bool JBooth::MicroVerseCore::ObjectStamp::NeedObjectClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {"NeedObjectClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjectStamp* JBooth::MicroVerseCore::ObjectStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjectStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr  JBooth::MicroVerseCore::ObjectStamp::operator ::JBooth::MicroVerseCore::IObjectModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IObjectModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr ::JBooth::MicroVerseCore::IObjectModifier* JBooth::MicroVerseCore::ObjectStamp::i___JBooth__MicroVerseCore__IObjectModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IObjectModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::ObjectStamp::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::ObjectStamp::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::ObjectStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::ObjectStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr  JBooth::MicroVerseCore::ObjectStamp::operator ::JBooth::MicroVerseCore::ITextureModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* JBooth::MicroVerseCore::ObjectStamp::i___JBooth__MicroVerseCore__ITextureModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectStamp::ObjectStamp()   {
}
