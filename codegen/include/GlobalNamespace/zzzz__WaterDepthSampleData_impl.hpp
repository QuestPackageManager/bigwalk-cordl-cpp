#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterDepthSampleData.hpp"
#include "GlobalNamespace/zzzz__WaterHeightPatch_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::WaterDepthSampleData_GetDepthMode::WaterDepthSampleData_GetDepthMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterDepthSampleData_GetDepthMode::WaterDepthSampleData_GetDepthMode()   {
}
constexpr ::GlobalNamespace::WaterDepthSampleData_GetDepthMode  GlobalNamespace::WaterDepthSampleData_GetDepthMode::Samples{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WaterDepthSampleData_GetDepthMode  GlobalNamespace::WaterDepthSampleData_GetDepthMode::GPU{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::WaterDepthSampleData_GetDepthMode  GlobalNamespace::WaterDepthSampleData_GetDepthMode::Mixed{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::WaterDepthSampleData.get_BaseResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::WaterDepthSampleData::*)()>(&::GlobalNamespace::WaterDepthSampleData::get_BaseResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"get_BaseResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterDepthSampleData.set_BaseResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterDepthSampleData::*)(float_t)>(&::GlobalNamespace::WaterDepthSampleData::set_BaseResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"set_BaseResolution", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterDepthSampleData.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterDepthSampleData::*)()>(&::GlobalNamespace::WaterDepthSampleData::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterDepthSampleData.BuildRuntimeCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterDepthSampleData::*)()>(&::GlobalNamespace::WaterDepthSampleData::BuildRuntimeCache)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1803f61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"BuildRuntimeCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterDepthSampleData.GetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::WaterDepthSampleData::*)(::UnityEngine::Vector3, ::by_ref<int32_t>, ::by_ref<bool>)>(&::GlobalNamespace::WaterDepthSampleData::GetDepth)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1803f6530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"GetDepth", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterDepthSampleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterDepthSampleData::*)()>(&::GlobalNamespace::WaterDepthSampleData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_oceanMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oceanMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_oceanMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oceanMaterial;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set_oceanMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oceanMaterial = value;
}
constexpr ::UnityEngine::Vector2Int& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_worldMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMin;
}
constexpr ::UnityEngine::Vector2Int const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_worldMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMin;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set_worldMin(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldMin = value;
}
constexpr ::UnityEngine::Vector2Int& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_worldMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMax;
}
constexpr ::UnityEngine::Vector2Int const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_worldMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMax;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set_worldMax(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldMax = value;
}
constexpr float_t& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__baseResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseResolution;
}
constexpr float_t const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__baseResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseResolution;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__baseResolution(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseResolution = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_baseWaterHeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseWaterHeights;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_baseWaterHeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseWaterHeights;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set_baseWaterHeights(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseWaterHeights = value;
}
constexpr ::ArrayW<::GlobalNamespace::WaterHeightPatch*>& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_patches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patches;
}
constexpr ::ArrayW<::GlobalNamespace::WaterHeightPatch*> const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get_patches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patches;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set_patches(::ArrayW<::GlobalNamespace::WaterHeightPatch*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patches = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__patchBuckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patchBuckets;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__patchBuckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patchBuckets;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__patchBuckets(::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____patchBuckets = value;
}
constexpr int32_t& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__bucketGridW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketGridW;
}
constexpr int32_t const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__bucketGridW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketGridW;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__bucketGridW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bucketGridW = value;
}
constexpr int32_t& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__bucketGridH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketGridH;
}
constexpr int32_t const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__bucketGridH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bucketGridH;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__bucketGridH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bucketGridH = value;
}
constexpr int32_t& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__baseResX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseResX;
}
constexpr int32_t const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__baseResX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseResX;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__baseResX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseResX = value;
}
constexpr int32_t& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__baseResZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseResZ;
}
constexpr int32_t const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__baseResZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseResZ;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__baseResZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseResZ = value;
}
constexpr float_t& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__fxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxScale;
}
constexpr float_t const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__fxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxScale;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__fxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fxScale = value;
}
constexpr float_t& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__fzScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fzScale;
}
constexpr float_t const& GlobalNamespace::WaterDepthSampleData::__cordl_internal_get__fzScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fzScale;
}
constexpr void GlobalNamespace::WaterDepthSampleData::__cordl_internal_set__fzScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fzScale = value;
}
inline float_t GlobalNamespace::WaterDepthSampleData::get_BaseResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"get_BaseResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::WaterDepthSampleData::set_BaseResolution(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"set_BaseResolution", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WaterDepthSampleData::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterDepthSampleData::BuildRuntimeCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"BuildRuntimeCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::WaterDepthSampleData::GetDepth(::UnityEngine::Vector3  worldPos, ::by_ref<int32_t>  patchIndex, ::by_ref<bool>  isRiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {"GetDepth", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPos, patchIndex, isRiver);
}
inline void GlobalNamespace::WaterDepthSampleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterDepthSampleData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterDepthSampleData* GlobalNamespace::WaterDepthSampleData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaterDepthSampleData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterDepthSampleData::WaterDepthSampleData()   {
}
