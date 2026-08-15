#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSampleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AmbienceScatterTriggerInfo_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbienceSampleData)
namespace GlobalNamespace {
struct AmbienceSamplePosition;
}
namespace GlobalNamespace {
class BiomeRegion;
}
namespace GlobalNamespace {
struct OceanSoundSample;
}
namespace GlobalNamespace {
struct SplineSampleStruct;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class AmbienceSampleData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AmbienceSampleData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceSampleData*, "", "AmbienceSampleData");
// Dependencies AmbienceScatterTriggerInfo, UnityEngine.LayerMask, UnityEngine.ScriptableObject, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbienceSampleData
class CORDL_TYPE AmbienceSampleData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AllScatterPositions, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_AllScatterPositions, put=__cordl_internal_set_AllScatterPositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  AllScatterPositions;

/// @brief Field BeachWavesData, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeachWavesData, put=__cordl_internal_set_BeachWavesData)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  BeachWavesData;

 __declspec(property(get=get_BiomeRegionLookUp, put=set_BiomeRegionLookUp)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*  BiomeRegionLookUp;

/// @brief Field BiomeRegions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_BiomeRegions, put=__cordl_internal_set_BiomeRegions)) ::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>*  BiomeRegions;

/// @brief Field BiomeSplines, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_BiomeSplines, put=__cordl_internal_set_BiomeSplines)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>*  BiomeSplines;

/// @brief Field BiomesParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BiomesParent, put=__cordl_internal_set_BiomesParent)) ::UnityW<::UnityEngine::GameObject>  BiomesParent;

/// @brief Field BorderPolylines, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_BorderPolylines, put=__cordl_internal_set_BorderPolylines)) ::ArrayW<::UnityEngine::Vector3>  BorderPolylines;

/// @brief Field BottomRight, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_BottomRight, put=__cordl_internal_set_BottomRight)) ::UnityEngine::Vector2  BottomRight;

/// @brief Field CastPoints, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_CastPoints, put=__cordl_internal_set_CastPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  CastPoints;

/// @brief Field HitPoints, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_HitPoints, put=__cordl_internal_set_HitPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  HitPoints;

/// @brief Field InSplinePositions, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_InSplinePositions, put=__cordl_internal_set_InSplinePositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  InSplinePositions;

/// @brief Field Layer, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Layer, put=__cordl_internal_set_Layer)) ::UnityEngine::LayerMask  Layer;

/// @brief Field OceanCloseDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_OceanCloseDistance, put=__cordl_internal_set_OceanCloseDistance)) float_t  OceanCloseDistance;

/// @brief Field OceanDepthImage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OceanDepthImage, put=__cordl_internal_set_OceanDepthImage)) ::UnityW<::UnityEngine::Texture2D>  OceanDepthImage;

/// @brief Field OceanFarDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_OceanFarDistance, put=__cordl_internal_set_OceanFarDistance)) float_t  OceanFarDistance;

/// @brief Field OceanImagePos, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OceanImagePos, put=__cordl_internal_set_OceanImagePos)) ::UnityEngine::Vector2  OceanImagePos;

/// @brief Field OceanImageSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_OceanImageSize, put=__cordl_internal_set_OceanImageSize)) float_t  OceanImageSize;

/// @brief Field OceanSampleData, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OceanSampleData, put=__cordl_internal_set_OceanSampleData)) ::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>*  OceanSampleData;

/// @brief Field RockyWaterData, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_RockyWaterData, put=__cordl_internal_set_RockyWaterData)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  RockyWaterData;

/// @brief Field SampleData, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_SampleData, put=__cordl_internal_set_SampleData)) ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  SampleData;

/// @brief Field SamplePositions, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_SamplePositions, put=__cordl_internal_set_SamplePositions)) ::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>*  SamplePositions;

/// @brief Field ScatterTriggerInfo, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScatterTriggerInfo, put=__cordl_internal_set_ScatterTriggerInfo)) ::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*>  ScatterTriggerInfo;

/// @brief Field TopLeft, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TopLeft, put=__cordl_internal_set_TopLeft)) ::UnityEngine::Vector2  TopLeft;

/// @brief Field VoidRegion, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoidRegion, put=__cordl_internal_set_VoidRegion)) ::GlobalNamespace::BiomeRegion*  VoidRegion;

/// @brief Field <BiomeRegionLookUp>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__BiomeRegionLookUp_k__BackingField, put=__cordl_internal_set__BiomeRegionLookUp_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*  _BiomeRegionLookUp_k__BackingField;

/// @brief Field _outputSamplesTemp, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputSamplesTemp, put=__cordl_internal_set__outputSamplesTemp)) ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  _outputSamplesTemp;

/// @brief Field _splineSamplesTemp, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__splineSamplesTemp, put=__cordl_internal_set__splineSamplesTemp)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>*  _splineSamplesTemp;

/// @brief Field _xLength, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__xLength, put=__cordl_internal_set__xLength)) int32_t  _xLength;

/// @brief Field _yLength, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__yLength, put=__cordl_internal_set__yLength)) int32_t  _yLength;

/// @brief Field s_invSampleStep, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_invSampleStep, put=setStaticF_s_invSampleStep)) float_t  s_invSampleStep;

/// @brief Method ClearData, addr 0x180320450, size 0x150, virtual false, abstract: false, final false
inline void ClearData() ;

/// @brief Method FindNearestFour, addr 0x180320810, size 0x2a0, virtual false, abstract: false, final false
inline void FindNearestFour(::UnityEngine::Vector2  testPosition, ::by_ref<::UnityEngine::Vector3>  nw, ::by_ref<::UnityEngine::Vector3>  ne, ::by_ref<::UnityEngine::Vector3>  sw, ::by_ref<::UnityEngine::Vector3>  se, ::by_ref<float_t>  avgY) ;

/// @brief Method FindNearestFourRuntime, addr 0x1803205a0, size 0x270, virtual false, abstract: false, final false
inline void FindNearestFourRuntime(::UnityEngine::Vector2  testPosition, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  nw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  ne, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  sw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  se, ::by_ref<int32_t>  nwIndex, ::by_ref<int32_t>  neIndex, ::by_ref<int32_t>  swIndex, ::by_ref<int32_t>  seIndex, ::by_ref<float_t>  nwWeight, ::by_ref<float_t>  neWeight, ::by_ref<float_t>  swWeight, ::by_ref<float_t>  seWeight) ;

/// @brief Method GetSplineSamplesRuntime, addr 0x180320b90, size 0x10c0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* GetSplineSamplesRuntime(::UnityEngine::Vector3  testPos, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  nw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  ne, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  sw, ::by_ref<::GlobalNamespace::AmbienceSamplePosition>  se, ::by_ref<int32_t>  nwIndex, ::by_ref<int32_t>  neIndex, ::by_ref<int32_t>  swIndex, ::by_ref<int32_t>  seIndex, ::by_ref<float_t>  nwWeight, ::by_ref<float_t>  neWeight, ::by_ref<float_t>  swWeight, ::by_ref<float_t>  seWeight, ::by_ref<::GlobalNamespace::OceanSoundSample>  oceanSample) ;

/// @brief Method GetSplineSamplesRuntime, addr 0x180320ab0, size 0xe0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* GetSplineSamplesRuntime(::UnityEngine::Vector3  testPos, ::by_ref<::GlobalNamespace::OceanSoundSample>  oceanSample) ;

static inline ::GlobalNamespace::AmbienceSampleData* New_ctor() ;

/// @brief Method OnEnable, addr 0x180321c50, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RotateBy, addr 0x180321d70, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 RotateBy(::UnityEngine::Vector2  v, float_t  a, bool  bUseRadians) ;

/// @brief Method <GetSplineSamplesRuntime>g___addSampleData|44_0, addr 0x180321df0, size 0x240, virtual false, abstract: false, final false
inline void _GetSplineSamplesRuntime_g___addSampleData_44_0(int32_t  i, float_t  weight) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_AllScatterPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_AllScatterPositions() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_BeachWavesData() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_BeachWavesData() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>* const& __cordl_internal_get_BiomeRegions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>*& __cordl_internal_get_BiomeRegions() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>* const& __cordl_internal_get_BiomeSplines() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>*& __cordl_internal_get_BiomeSplines() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_BiomesParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_BiomesParent() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_BorderPolylines() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_BorderPolylines() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_BottomRight() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_BottomRight() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_CastPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_CastPoints() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_HitPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_HitPoints() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_InSplinePositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_InSplinePositions() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_Layer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_Layer() ;

constexpr float_t const& __cordl_internal_get_OceanCloseDistance() const;

constexpr float_t& __cordl_internal_get_OceanCloseDistance() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_OceanDepthImage() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_OceanDepthImage() ;

constexpr float_t const& __cordl_internal_get_OceanFarDistance() const;

constexpr float_t& __cordl_internal_get_OceanFarDistance() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_OceanImagePos() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_OceanImagePos() ;

constexpr float_t const& __cordl_internal_get_OceanImageSize() const;

constexpr float_t& __cordl_internal_get_OceanImageSize() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>* const& __cordl_internal_get_OceanSampleData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>*& __cordl_internal_get_OceanSampleData() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_RockyWaterData() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_RockyWaterData() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& __cordl_internal_get_SampleData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& __cordl_internal_get_SampleData() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>* const& __cordl_internal_get_SamplePositions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>*& __cordl_internal_get_SamplePositions() ;

constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*> const& __cordl_internal_get_ScatterTriggerInfo() const;

constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*>& __cordl_internal_get_ScatterTriggerInfo() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_TopLeft() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_TopLeft() ;

constexpr ::GlobalNamespace::BiomeRegion* const& __cordl_internal_get_VoidRegion() const;

constexpr ::GlobalNamespace::BiomeRegion*& __cordl_internal_get_VoidRegion() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>* const& __cordl_internal_get__BiomeRegionLookUp_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*& __cordl_internal_get__BiomeRegionLookUp_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& __cordl_internal_get__outputSamplesTemp() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& __cordl_internal_get__outputSamplesTemp() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>* const& __cordl_internal_get__splineSamplesTemp() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>*& __cordl_internal_get__splineSamplesTemp() ;

constexpr int32_t const& __cordl_internal_get__xLength() const;

constexpr int32_t& __cordl_internal_get__xLength() ;

constexpr int32_t const& __cordl_internal_get__yLength() const;

constexpr int32_t& __cordl_internal_get__yLength() ;

constexpr void __cordl_internal_set_AllScatterPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_BeachWavesData(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_BiomeRegions(::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>*  value) ;

constexpr void __cordl_internal_set_BiomeSplines(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>*  value) ;

constexpr void __cordl_internal_set_BiomesParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_BorderPolylines(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_BottomRight(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_CastPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_HitPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_InSplinePositions(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_Layer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_OceanCloseDistance(float_t  value) ;

constexpr void __cordl_internal_set_OceanDepthImage(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_OceanFarDistance(float_t  value) ;

constexpr void __cordl_internal_set_OceanImagePos(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_OceanImageSize(float_t  value) ;

constexpr void __cordl_internal_set_OceanSampleData(::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>*  value) ;

constexpr void __cordl_internal_set_RockyWaterData(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_SampleData(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value) ;

constexpr void __cordl_internal_set_SamplePositions(::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>*  value) ;

constexpr void __cordl_internal_set_ScatterTriggerInfo(::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*>  value) ;

constexpr void __cordl_internal_set_TopLeft(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_VoidRegion(::GlobalNamespace::BiomeRegion*  value) ;

constexpr void __cordl_internal_set__BiomeRegionLookUp_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*  value) ;

constexpr void __cordl_internal_set__outputSamplesTemp(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value) ;

constexpr void __cordl_internal_set__splineSamplesTemp(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>*  value) ;

constexpr void __cordl_internal_set__xLength(int32_t  value) ;

constexpr void __cordl_internal_set__yLength(int32_t  value) ;

/// @brief Method .ctor, addr 0x180322060, size 0x350, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_s_invSampleStep() ;

/// @brief Method get_BiomeRegionLookUp, addr 0x1803223b0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>* get_BiomeRegionLookUp() ;

static inline void setStaticF_s_invSampleStep(float_t  value) ;

/// @brief Method set_BiomeRegionLookUp, addr 0x1803223c0, size 0x20, virtual false, abstract: false, final false
inline void set_BiomeRegionLookUp(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbienceSampleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbienceSampleData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbienceSampleData(AmbienceSampleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbienceSampleData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbienceSampleData(AmbienceSampleData const& ) = delete;

/// @brief Field ATTENUATION_DIST offset 0xffffffff size 0x4
static constexpr float_t  ATTENUATION_DIST{static_cast<float_t>(60.0f)};

/// @brief Field BAKE_CAST_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  BAKE_CAST_HEIGHT{static_cast<float_t>(500.0f)};

/// @brief Field CLEARANCE_DIST offset 0xffffffff size 0x4
static constexpr float_t  CLEARANCE_DIST{static_cast<float_t>(10.0f)};

/// @brief Field ECHO_TEST_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  ECHO_TEST_HEIGHT{static_cast<float_t>(2.0f)};

/// @brief Field PUSH_EDGE_IN_DIST_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  PUSH_EDGE_IN_DIST_THRESHOLD{static_cast<float_t>(20.0f)};

/// @brief Field SAMPLE_STEP offset 0xffffffff size 0x4
static constexpr float_t  SAMPLE_STEP{static_cast<float_t>(10.0f)};

/// @brief Field SIDE_TO_EDGE_ATTENUATION_DIST offset 0xffffffff size 0x4
static constexpr float_t  SIDE_TO_EDGE_ATTENUATION_DIST{static_cast<float_t>(15.0f)};

/// @brief Field VEGETATION_RANGE offset 0xffffffff size 0x4
static constexpr float_t  VEGETATION_RANGE{static_cast<float_t>(50.0f)};

/// @brief Field VOID_DIST offset 0xffffffff size 0x4
static constexpr float_t  VOID_DIST{static_cast<float_t>(10.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4787};

/// @brief Field Layer, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___Layer;

/// @brief Field BiomesParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___BiomesParent;

/// @brief Field OceanDepthImage, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___OceanDepthImage;

/// @brief Field OceanImagePos, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___OceanImagePos;

/// @brief Field OceanImageSize, offset: 0x38, size: 0x4, def value: None
 float_t  ___OceanImageSize;

/// @brief Field BiomeSplines, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Splines::SplineContainer>>*  ___BiomeSplines;

/// @brief Field TopLeft, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___TopLeft;

/// @brief Field BottomRight, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___BottomRight;

/// @brief Field OceanCloseDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ___OceanCloseDistance;

/// @brief Field OceanFarDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___OceanFarDistance;

/// @brief Field BorderPolylines, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___BorderPolylines;

/// @brief Field BiomeRegions, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BiomeRegion*>*  ___BiomeRegions;

/// @brief Field VoidRegion, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::BiomeRegion*  ___VoidRegion;

/// @brief Field CastPoints, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___CastPoints;

/// @brief Field HitPoints, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___HitPoints;

/// @brief Field SamplePositions, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AmbienceSamplePosition>*  ___SamplePositions;

/// @brief Field SampleData, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  ___SampleData;

/// @brief Field InSplinePositions, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___InSplinePositions;

/// @brief Field OceanSampleData, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OceanSoundSample>*  ___OceanSampleData;

/// @brief Field BeachWavesData, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___BeachWavesData;

/// @brief Field RockyWaterData, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___RockyWaterData;

/// @brief Field ScatterTriggerInfo, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AmbienceScatterTriggerInfo*>  ___ScatterTriggerInfo;

/// @brief Field AllScatterPositions, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___AllScatterPositions;

/// @brief Field <BiomeRegionLookUp>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BiomeRegion*>*  ____BiomeRegionLookUp_k__BackingField;

/// @brief Field _xLength, offset: 0xd0, size: 0x4, def value: None
 int32_t  ____xLength;

/// @brief Field _yLength, offset: 0xd4, size: 0x4, def value: None
 int32_t  ____yLength;

/// @brief Field _splineSamplesTemp, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SplineSampleStruct,float_t>>*>*  ____splineSamplesTemp;

/// @brief Field _outputSamplesTemp, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  ____outputSamplesTemp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___Layer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___BiomesParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___OceanDepthImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___OceanImagePos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___OceanImageSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___BiomeSplines) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___TopLeft) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___BottomRight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___OceanCloseDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___OceanFarDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___BorderPolylines) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___BiomeRegions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___VoidRegion) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___CastPoints) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___HitPoints) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___SamplePositions) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___SampleData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___InSplinePositions) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___OceanSampleData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___BeachWavesData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___RockyWaterData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___ScatterTriggerInfo) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ___AllScatterPositions) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ____BiomeRegionLookUp_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ____xLength) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ____yLength) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ____splineSamplesTemp) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSampleData, ____outputSamplesTemp) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceSampleData) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
