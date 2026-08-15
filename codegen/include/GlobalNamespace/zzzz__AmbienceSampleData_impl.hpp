#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSampleData.hpp"
#include "GlobalNamespace/zzzz__AmbienceScatterTriggerInfo_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AmbienceSampleData_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceSamplePosition_def.hpp"
#include "GlobalNamespace/zzzz__BiomeRegion_def.hpp"
#include "GlobalNamespace/zzzz__OceanSoundSample_def.hpp"
#include "GlobalNamespace/zzzz__SplineSampleStruct_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.get_BiomeRegionLookUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>* (::GlobalNamespace::AmbienceSampleData::*)()>(&::GlobalNamespace::AmbienceSampleData::get_BiomeRegionLookUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803223b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"get_BiomeRegionLookUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.set_BiomeRegionLookUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSampleData::*)(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*)>(&::GlobalNamespace::AmbienceSampleData::set_BiomeRegionLookUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803223c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"set_BiomeRegionLookUp", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSampleData::*)()>(&::GlobalNamespace::AmbienceSampleData::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180321c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.FindNearestFour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSampleData::*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GlobalNamespace::AmbienceSampleData::FindNearestFour)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x180320810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"FindNearestFour", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.FindNearestFourRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSampleData::*)(::UnityEngine::Vector2, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::AmbienceSampleData::FindNearestFourRuntime)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1803205a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"FindNearestFourRuntime", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.GetSplineSamplesRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* (::GlobalNamespace::AmbienceSampleData::*)(::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<::GlobalNamespace::OceanSoundSample>)>(&::GlobalNamespace::AmbienceSampleData::GetSplineSamplesRuntime)> {
  constexpr static std::size_t size = 0x10c0;
  constexpr static std::size_t addrs = 0x180320b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"GetSplineSamplesRuntime", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OceanSoundSample>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.GetSplineSamplesRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* (::GlobalNamespace::AmbienceSampleData::*)(::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::OceanSoundSample>)>(&::GlobalNamespace::AmbienceSampleData::GetSplineSamplesRuntime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180320ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"GetSplineSamplesRuntime", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OceanSoundSample>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.RotateBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t, bool)>(&::GlobalNamespace::AmbienceSampleData::RotateBy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180321d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"RotateBy", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData.ClearData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSampleData::*)()>(&::GlobalNamespace::AmbienceSampleData::ClearData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180320450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"ClearData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSampleData::*)()>(&::GlobalNamespace::AmbienceSampleData::_ctor)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x180322060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSampleData._GetSplineSamplesRuntime_g___addSampleData_44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSampleData::*)(int32_t, float_t)>(&::GlobalNamespace::AmbienceSampleData::_GetSplineSamplesRuntime_g___addSampleData_44_0)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180321df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"<GetSplineSamplesRuntime>g___addSampleData|44_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layer;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_Layer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Layer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BiomesParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomesParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BiomesParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomesParent;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_BiomesParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BiomesParent = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanDepthImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanDepthImage;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanDepthImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanDepthImage;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_OceanDepthImage(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanDepthImage = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanImagePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanImagePos;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanImagePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanImagePos;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_OceanImagePos(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanImagePos = value;
}
constexpr float_t& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanImageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanImageSize;
}
constexpr float_t const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanImageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanImageSize;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_OceanImageSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanImageSize = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BiomeSplines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeSplines;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BiomeSplines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeSplines;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_BiomeSplines(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BiomeSplines = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_TopLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TopLeft;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_TopLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TopLeft;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_TopLeft(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TopLeft = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BottomRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomRight;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BottomRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomRight;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_BottomRight(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BottomRight = value;
}
constexpr float_t& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanCloseDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanCloseDistance;
}
constexpr float_t const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanCloseDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanCloseDistance;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_OceanCloseDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanCloseDistance = value;
}
constexpr float_t& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanFarDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanFarDistance;
}
constexpr float_t const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanFarDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanFarDistance;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_OceanFarDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanFarDistance = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BorderPolylines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BorderPolylines;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BorderPolylines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BorderPolylines;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_BorderPolylines(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BorderPolylines = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BiomeRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeRegions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BiomeRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeRegions;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_BiomeRegions(::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BiomeRegions = value;
}
constexpr ::GlobalNamespace::BiomeRegion*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_VoidRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoidRegion;
}
constexpr ::GlobalNamespace::BiomeRegion* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_VoidRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoidRegion;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_VoidRegion(::GlobalNamespace::BiomeRegion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoidRegion = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_CastPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CastPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_CastPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CastPoints;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_CastPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CastPoints = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_HitPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_HitPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitPoints;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_HitPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HitPoints = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_SamplePositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SamplePositions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_SamplePositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SamplePositions;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_SamplePositions(::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SamplePositions = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_SampleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_SampleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleData;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_SampleData(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SampleData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_InSplinePositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InSplinePositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_InSplinePositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InSplinePositions;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_InSplinePositions(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InSplinePositions = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanSampleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanSampleData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_OceanSampleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanSampleData;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_OceanSampleData(::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanSampleData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BeachWavesData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachWavesData;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_BeachWavesData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachWavesData;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_BeachWavesData(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeachWavesData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_RockyWaterData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RockyWaterData;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_RockyWaterData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RockyWaterData;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_RockyWaterData(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RockyWaterData = value;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*>& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_ScatterTriggerInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterTriggerInfo;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*> const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_ScatterTriggerInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterTriggerInfo;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_ScatterTriggerInfo(::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScatterTriggerInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_AllScatterPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllScatterPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get_AllScatterPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllScatterPositions;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set_AllScatterPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllScatterPositions = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__BiomeRegionLookUp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BiomeRegionLookUp_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__BiomeRegionLookUp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BiomeRegionLookUp_k__BackingField;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set__BiomeRegionLookUp_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BiomeRegionLookUp_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__xLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xLength;
}
constexpr int32_t const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__xLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xLength;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set__xLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xLength = value;
}
constexpr int32_t& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__yLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yLength;
}
constexpr int32_t const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__yLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yLength;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set__yLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yLength = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__splineSamplesTemp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____splineSamplesTemp;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__splineSamplesTemp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____splineSamplesTemp;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set__splineSamplesTemp(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____splineSamplesTemp = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__outputSamplesTemp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputSamplesTemp;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& GlobalNamespace::AmbienceSampleData::__cordl_internal_get__outputSamplesTemp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputSamplesTemp;
}
constexpr void GlobalNamespace::AmbienceSampleData::__cordl_internal_set__outputSamplesTemp(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputSamplesTemp = value;
}
inline void GlobalNamespace::AmbienceSampleData::setStaticF_s_invSampleStep(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_invSampleStep", ::GlobalNamespace::AmbienceSampleData*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::AmbienceSampleData::getStaticF_s_invSampleStep()  {
return ::cordl_internals::getStaticField<float_t, "s_invSampleStep", ::GlobalNamespace::AmbienceSampleData*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>* GlobalNamespace::AmbienceSampleData::get_BiomeRegionLookUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"get_BiomeRegionLookUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSampleData::set_BiomeRegionLookUp(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"set_BiomeRegionLookUp", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AmbienceSampleData::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSampleData::FindNearestFour(::UnityEngine::Vector2  testPosition, ::by_ref<::UnityEngine::Vector3>  nw, ::by_ref<::UnityEngine::Vector3>  ne, ::by_ref<::UnityEngine::Vector3>  sw, ::by_ref<::UnityEngine::Vector3>  se, ::by_ref<float_t>  avgY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"FindNearestFour", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, testPosition, nw, ne, sw, se, avgY);
}
inline void GlobalNamespace::AmbienceSampleData::FindNearestFourRuntime(::UnityEngine::Vector2  testPosition, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  nw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  ne, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  sw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  se, ::by_ref<int32_t>  nwIndex, ::by_ref<int32_t>  neIndex, ::by_ref<int32_t>  swIndex, ::by_ref<int32_t>  seIndex, ::by_ref<float_t>  nwWeight, ::by_ref<float_t>  neWeight, ::by_ref<float_t>  swWeight, ::by_ref<float_t>  seWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"FindNearestFourRuntime", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, testPosition, nw, ne, sw, se, nwIndex, neIndex, swIndex, seIndex, nwWeight, neWeight, swWeight, seWeight);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* GlobalNamespace::AmbienceSampleData::GetSplineSamplesRuntime(::UnityEngine::Vector3  testPos, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  nw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  ne, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  sw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  se, ::by_ref<int32_t>  nwIndex, ::by_ref<int32_t>  neIndex, ::by_ref<int32_t>  swIndex, ::by_ref<int32_t>  seIndex, ::by_ref<float_t>  nwWeight, ::by_ref<float_t>  neWeight, ::by_ref<float_t>  swWeight, ::by_ref<float_t>  seWeight, ::by_ref<::GlobalNamespace::OceanSoundSample>  oceanSample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"GetSplineSamplesRuntime", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AmbienceSamplePosition>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OceanSoundSample>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*>(this, ___internal_method, testPos, nw, ne, sw, se, nwIndex, neIndex, swIndex, seIndex, nwWeight, neWeight, swWeight, seWeight, oceanSample);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* GlobalNamespace::AmbienceSampleData::GetSplineSamplesRuntime(::UnityEngine::Vector3  testPos, ::by_ref<::GlobalNamespace::OceanSoundSample>  oceanSample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"GetSplineSamplesRuntime", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OceanSoundSample>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*>(this, ___internal_method, testPos, oceanSample);
}
inline ::UnityEngine::Vector2 GlobalNamespace::AmbienceSampleData::RotateBy(::UnityEngine::Vector2  v, float_t  a, bool  bUseRadians)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"RotateBy", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v, a, bUseRadians);
}
inline void GlobalNamespace::AmbienceSampleData::ClearData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"ClearData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSampleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSampleData::_GetSplineSamplesRuntime_g___addSampleData_44_0(int32_t  i, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSampleData*>(),
                        {"<GetSplineSamplesRuntime>g___addSampleData|44_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, weight);
}
inline ::GlobalNamespace::AmbienceSampleData* GlobalNamespace::AmbienceSampleData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbienceSampleData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceSampleData::AmbienceSampleData()   {
}
