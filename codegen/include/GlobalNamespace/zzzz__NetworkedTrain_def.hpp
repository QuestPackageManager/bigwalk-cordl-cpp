#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkedTrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__TrainCarPositioner_def.hpp"
#include "GlobalNamespace/zzzz__TrainCar_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedTrain)
namespace GlobalNamespace {
struct NetworkedTrain_CullMode;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct NativeSpline;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkedTrain_CullMode;
}
namespace GlobalNamespace {
class NetworkedTrain;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkedTrain_CullMode);
MARK_REF_T(::GlobalNamespace::NetworkedTrain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkedTrain_CullMode, "", "NetworkedTrain/CullMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkedTrain*, "", "NetworkedTrain");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkedTrain/CullMode
struct CORDL_TYPE NetworkedTrain_CullMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkedTrain_CullMode_Unwrapped
enum struct __NetworkedTrain_CullMode_Unwrapped : int32_t {
__E_NoCulling = static_cast<int32_t>(0x0),
__E_SimpleCulling = static_cast<int32_t>(0x1),
__E_Proxy = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkedTrain_CullMode_Unwrapped () const noexcept {
return static_cast<__NetworkedTrain_CullMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkedTrain_CullMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkedTrain_CullMode(int32_t  value__) noexcept;

/// @brief Field NoCulling value: I32(0)
static ::GlobalNamespace::NetworkedTrain_CullMode const NoCulling;

/// @brief Field Proxy value: I32(2)
static ::GlobalNamespace::NetworkedTrain_CullMode const Proxy;

/// @brief Field SimpleCulling value: I32(1)
static ::GlobalNamespace::NetworkedTrain_CullMode const SimpleCulling;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkedTrain_CullMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkedTrain_CullMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkBehaviour, NetworkedTrain::CullMode, PeckSystemReference, TrainCar, TrainCarPositioner, Unity.Collections.NativeArray`1<T>, UnityEngine.Splines.NativeSpline, UnityEngine.Splines.SplineContainer
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkedTrain
class CORDL_TYPE NetworkedTrain : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using CullMode = ::GlobalNamespace::NetworkedTrain_CullMode;

 __declspec(property(get=get_CurrentSpeed)) float_t  CurrentSpeed;

 __declspec(property(get=get_NetworksyncDistance, put=set_NetworksyncDistance)) float_t  NetworksyncDistance;

 __declspec(property(get=get_NetworksyncSpeed, put=set_NetworksyncSpeed)) float_t  NetworksyncSpeed;

 __declspec(property(get=get_NetworksyncSplineIndex, put=set_NetworksyncSplineIndex)) int32_t  NetworksyncSplineIndex;

 __declspec(property(get=get_NetworksyncTime, put=set_NetworksyncTime)) double_t  NetworksyncTime;

 __declspec(property(get=get_NetworktargetSpeed, put=set_NetworktargetSpeed)) float_t  NetworktargetSpeed;

/// @brief Field _cableSpeed, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__cableSpeed, put=__cordl_internal_set__cableSpeed)) float_t  _cableSpeed;

/// @brief Field _currentDistance, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentDistance, put=__cordl_internal_set__currentDistance)) float_t  _currentDistance;

/// @brief Field _currentSpeed, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSpeed, put=__cordl_internal_set__currentSpeed)) float_t  _currentSpeed;

/// @brief Field _currentSplineIndex, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSplineIndex, put=__cordl_internal_set__currentSplineIndex)) int32_t  _currentSplineIndex;

/// @brief Field _nativeSplines, offset 0x110, size 0x10 
 __declspec(property(get=__cordl_internal_get__nativeSplines, put=__cordl_internal_set__nativeSplines)) ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  _nativeSplines;

/// @brief Field _splineDistanceCache, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__splineDistanceCache, put=__cordl_internal_set__splineDistanceCache)) ::ArrayW<float_t>  _splineDistanceCache;

/// @brief Field _totalDistanceCache, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalDistanceCache, put=__cordl_internal_set__totalDistanceCache)) float_t  _totalDistanceCache;

/// @brief Field _trainCars, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__trainCars, put=__cordl_internal_set__trainCars)) ::ArrayW<::GlobalNamespace::TrainCarPositioner>  _trainCars;

/// @brief Field acceleration, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceleration, put=__cordl_internal_set_acceleration)) float_t  acceleration;

/// @brief Field bank, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_bank, put=__cordl_internal_set_bank)) bool  bank;

/// @brief Field carGap, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_carGap, put=__cordl_internal_set_carGap)) float_t  carGap;

/// @brief Field cars, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cars, put=__cordl_internal_set_cars)) ::ArrayW<::UnityW<::GlobalNamespace::TrainCar>>  cars;

/// @brief Field cullMode, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_cullMode, put=__cordl_internal_set_cullMode)) ::GlobalNamespace::NetworkedTrain_CullMode  cullMode;

/// @brief Field deceleration, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_deceleration, put=__cordl_internal_set_deceleration)) float_t  deceleration;

/// @brief Field engineSystem, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_engineSystem, put=__cordl_internal_set_engineSystem)) ::GlobalNamespace::PeckSystemReference  engineSystem;

/// @brief Field fullSpeed, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullSpeed, put=__cordl_internal_set_fullSpeed)) float_t  fullSpeed;

/// @brief Field hasCable, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCable, put=__cordl_internal_set_hasCable)) bool  hasCable;

/// @brief Field lastPlacedDistance, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPlacedDistance, put=__cordl_internal_set_lastPlacedDistance)) double_t  lastPlacedDistance;

/// @brief Field lastPlacedSplineIndex, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPlacedSplineIndex, put=__cordl_internal_set_lastPlacedSplineIndex)) int32_t  lastPlacedSplineIndex;

/// @brief Field logVerbose, offset 0xed, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerPositions, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPositions, put=__cordl_internal_set_playerPositions)) ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  playerPositions;

/// @brief Field splines, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_splines, put=__cordl_internal_set_splines)) ::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>>  splines;

/// @brief Field syncDistance, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncDistance, put=__cordl_internal_set_syncDistance)) float_t  syncDistance;

/// @brief Field syncSpeed, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncSpeed, put=__cordl_internal_set_syncSpeed)) float_t  syncSpeed;

/// @brief Field syncSplineIndex, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncSplineIndex, put=__cordl_internal_set_syncSplineIndex)) int32_t  syncSplineIndex;

/// @brief Field syncTime, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncTime, put=__cordl_internal_set_syncTime)) double_t  syncTime;

/// @brief Field targetSpeed, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSpeed, put=__cordl_internal_set_targetSpeed)) float_t  targetSpeed;

/// @brief Method Awake, addr 0x18040a8c0, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x18040a980, size 0x1e0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method EnginePeck, addr 0x18040ab60, size 0x60, virtual false, abstract: false, final false
inline void EnginePeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method FixedUpdate, addr 0x18040abc0, size 0x6a0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetCarPositionAndTangent, addr 0x18040b260, size 0xe0, virtual false, abstract: false, final false
static inline void GetCarPositionAndTangent(::UnityEngine::Splines::NativeSpline  nativeSpline, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent) ;

/// @brief Method GetDistanceFraction, addr 0x18040b340, size 0x50, virtual false, abstract: false, final false
inline float_t GetDistanceFraction() ;

/// @brief Method GetProgressedPosition, addr 0x18040b390, size 0x150, virtual false, abstract: false, final false
inline void GetProgressedPosition(int32_t  startSplineIndex, float_t  startDistance, float_t  speed, double_t  progressedTime, ::by_ref<int32_t>  splineIndex, ::by_ref<float_t>  splineDistance) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::NetworkedTrain* New_ctor() ;

/// @brief Method OnDisable, addr 0x18040b4e0, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18040b5a0, size 0xe0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18040b680, size 0x280, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlaceAllCars, addr 0x18040b900, size 0x420, virtual false, abstract: false, final false
inline void PlaceAllCars(int32_t  trackIndex, double_t  runningDistance) ;

/// @brief Method SerializeSyncVars, addr 0x18040bd20, size 0x100, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetCache, addr 0x18040be20, size 0x110, virtual false, abstract: false, final false
inline void SetCache() ;

/// @brief Method SetDistance, addr 0x18040bf30, size 0x10, virtual false, abstract: false, final false
inline void SetDistance(float_t  distance) ;

/// @brief Method UpdateCullStateForAllCars, addr 0x18040bf40, size 0x400, virtual false, abstract: false, final false
inline void UpdateCullStateForAllCars() ;

constexpr float_t const& __cordl_internal_get__cableSpeed() const;

constexpr float_t& __cordl_internal_get__cableSpeed() ;

constexpr float_t const& __cordl_internal_get__currentDistance() const;

constexpr float_t& __cordl_internal_get__currentDistance() ;

constexpr float_t const& __cordl_internal_get__currentSpeed() const;

constexpr float_t& __cordl_internal_get__currentSpeed() ;

constexpr int32_t const& __cordl_internal_get__currentSplineIndex() const;

constexpr int32_t& __cordl_internal_get__currentSplineIndex() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline> const& __cordl_internal_get__nativeSplines() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>& __cordl_internal_get__nativeSplines() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__splineDistanceCache() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__splineDistanceCache() ;

constexpr float_t const& __cordl_internal_get__totalDistanceCache() const;

constexpr float_t& __cordl_internal_get__totalDistanceCache() ;

constexpr ::ArrayW<::GlobalNamespace::TrainCarPositioner> const& __cordl_internal_get__trainCars() const;

constexpr ::ArrayW<::GlobalNamespace::TrainCarPositioner>& __cordl_internal_get__trainCars() ;

constexpr float_t const& __cordl_internal_get_acceleration() const;

constexpr float_t& __cordl_internal_get_acceleration() ;

constexpr bool const& __cordl_internal_get_bank() const;

constexpr bool& __cordl_internal_get_bank() ;

constexpr float_t const& __cordl_internal_get_carGap() const;

constexpr float_t& __cordl_internal_get_carGap() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrainCar>> const& __cordl_internal_get_cars() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrainCar>>& __cordl_internal_get_cars() ;

constexpr ::GlobalNamespace::NetworkedTrain_CullMode const& __cordl_internal_get_cullMode() const;

constexpr ::GlobalNamespace::NetworkedTrain_CullMode& __cordl_internal_get_cullMode() ;

constexpr float_t const& __cordl_internal_get_deceleration() const;

constexpr float_t& __cordl_internal_get_deceleration() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_engineSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_engineSystem() ;

constexpr float_t const& __cordl_internal_get_fullSpeed() const;

constexpr float_t& __cordl_internal_get_fullSpeed() ;

constexpr bool const& __cordl_internal_get_hasCable() const;

constexpr bool& __cordl_internal_get_hasCable() ;

constexpr double_t const& __cordl_internal_get_lastPlacedDistance() const;

constexpr double_t& __cordl_internal_get_lastPlacedDistance() ;

constexpr int32_t const& __cordl_internal_get_lastPlacedSplineIndex() const;

constexpr int32_t& __cordl_internal_get_lastPlacedSplineIndex() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& __cordl_internal_get_playerPositions() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& __cordl_internal_get_playerPositions() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>> const& __cordl_internal_get_splines() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>>& __cordl_internal_get_splines() ;

constexpr float_t const& __cordl_internal_get_syncDistance() const;

constexpr float_t& __cordl_internal_get_syncDistance() ;

constexpr float_t const& __cordl_internal_get_syncSpeed() const;

constexpr float_t& __cordl_internal_get_syncSpeed() ;

constexpr int32_t const& __cordl_internal_get_syncSplineIndex() const;

constexpr int32_t& __cordl_internal_get_syncSplineIndex() ;

constexpr double_t const& __cordl_internal_get_syncTime() const;

constexpr double_t& __cordl_internal_get_syncTime() ;

constexpr float_t const& __cordl_internal_get_targetSpeed() const;

constexpr float_t& __cordl_internal_get_targetSpeed() ;

constexpr void __cordl_internal_set__cableSpeed(float_t  value) ;

constexpr void __cordl_internal_set__currentDistance(float_t  value) ;

constexpr void __cordl_internal_set__currentSpeed(float_t  value) ;

constexpr void __cordl_internal_set__currentSplineIndex(int32_t  value) ;

constexpr void __cordl_internal_set__nativeSplines(::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  value) ;

constexpr void __cordl_internal_set__splineDistanceCache(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__totalDistanceCache(float_t  value) ;

constexpr void __cordl_internal_set__trainCars(::ArrayW<::GlobalNamespace::TrainCarPositioner>  value) ;

constexpr void __cordl_internal_set_acceleration(float_t  value) ;

constexpr void __cordl_internal_set_bank(bool  value) ;

constexpr void __cordl_internal_set_carGap(float_t  value) ;

constexpr void __cordl_internal_set_cars(::ArrayW<::UnityW<::GlobalNamespace::TrainCar>>  value) ;

constexpr void __cordl_internal_set_cullMode(::GlobalNamespace::NetworkedTrain_CullMode  value) ;

constexpr void __cordl_internal_set_deceleration(float_t  value) ;

constexpr void __cordl_internal_set_engineSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_fullSpeed(float_t  value) ;

constexpr void __cordl_internal_set_hasCable(bool  value) ;

constexpr void __cordl_internal_set_lastPlacedDistance(double_t  value) ;

constexpr void __cordl_internal_set_lastPlacedSplineIndex(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerPositions(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value) ;

constexpr void __cordl_internal_set_splines(::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>>  value) ;

constexpr void __cordl_internal_set_syncDistance(float_t  value) ;

constexpr void __cordl_internal_set_syncSpeed(float_t  value) ;

constexpr void __cordl_internal_set_syncSplineIndex(int32_t  value) ;

constexpr void __cordl_internal_set_syncTime(double_t  value) ;

constexpr void __cordl_internal_set_targetSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x18040c340, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentSpeed, addr 0x18040c370, size 0x10, virtual false, abstract: false, final false
inline float_t get_CurrentSpeed() ;

/// @brief Method get_NetworksyncDistance, addr 0x18040c380, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworksyncDistance() ;

/// @brief Method get_NetworksyncSpeed, addr 0x180371800, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworksyncSpeed() ;

/// @brief Method get_NetworksyncSplineIndex, addr 0x18040c390, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworksyncSplineIndex() ;

/// @brief Method get_NetworksyncTime, addr 0x18040c3a0, size 0x10, virtual false, abstract: false, final false
inline double_t get_NetworksyncTime() ;

/// @brief Method get_NetworktargetSpeed, addr 0x18040c3b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworktargetSpeed() ;

/// @brief Method set_NetworksyncDistance, addr 0x18040c3c0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworksyncDistance(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworksyncSpeed, addr 0x18040c450, size 0x90, virtual false, abstract: false, final false
inline void set_NetworksyncSpeed(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworksyncSplineIndex, addr 0x18040c4e0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworksyncSplineIndex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworksyncTime, addr 0x18040c560, size 0x90, virtual false, abstract: false, final false
inline void set_NetworksyncTime(::ByRefConst<double_t>  value) ;

/// @brief Method set_NetworktargetSpeed, addr 0x18040c5f0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworktargetSpeed(::ByRefConst<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedTrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedTrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedTrain(NetworkedTrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedTrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedTrain(NetworkedTrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5139};

/// @brief Field engineSystem, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___engineSystem;

/// @brief Field cullMode, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::NetworkedTrain_CullMode  ___cullMode;

/// @brief Field splines, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>>  ___splines;

/// @brief Field _splineDistanceCache, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<float_t>  ____splineDistanceCache;

/// @brief Field _totalDistanceCache, offset: 0xa8, size: 0x4, def value: None
 float_t  ____totalDistanceCache;

/// @brief Field cars, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrainCar>>  ___cars;

/// @brief Field bank, offset: 0xb8, size: 0x1, def value: None
 bool  ___bank;

/// @brief Field _trainCars, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TrainCarPositioner>  ____trainCars;

/// @brief Field syncTime, offset: 0xc8, size: 0x8, def value: None
 double_t  ___syncTime;

/// @brief Field syncSpeed, offset: 0xd0, size: 0x4, def value: None
 float_t  ___syncSpeed;

/// @brief Field syncSplineIndex, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___syncSplineIndex;

/// @brief Field syncDistance, offset: 0xd8, size: 0x4, def value: None
 float_t  ___syncDistance;

/// @brief Field targetSpeed, offset: 0xdc, size: 0x4, def value: None
 float_t  ___targetSpeed;

/// @brief Field acceleration, offset: 0xe0, size: 0x4, def value: None
 float_t  ___acceleration;

/// @brief Field deceleration, offset: 0xe4, size: 0x4, def value: None
 float_t  ___deceleration;

/// @brief Field fullSpeed, offset: 0xe8, size: 0x4, def value: None
 float_t  ___fullSpeed;

/// @brief Field hasCable, offset: 0xec, size: 0x1, def value: None
 bool  ___hasCable;

/// @brief Field logVerbose, offset: 0xed, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field carGap, offset: 0xf0, size: 0x4, def value: None
 float_t  ___carGap;

/// @brief Field _currentSplineIndex, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____currentSplineIndex;

/// @brief Field _currentDistance, offset: 0xf8, size: 0x4, def value: None
 float_t  ____currentDistance;

/// @brief Field _currentSpeed, offset: 0xfc, size: 0x4, def value: None
 float_t  ____currentSpeed;

/// @brief Field _cableSpeed, offset: 0x100, size: 0x4, def value: None
 float_t  ____cableSpeed;

/// @brief Field lastPlacedSplineIndex, offset: 0x104, size: 0x4, def value: None
 int32_t  ___lastPlacedSplineIndex;

/// @brief Field lastPlacedDistance, offset: 0x108, size: 0x8, def value: None
 double_t  ___lastPlacedDistance;

/// @brief Field _nativeSplines, offset: 0x110, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  ____nativeSplines;

/// @brief Field playerPositions, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  ___playerPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___engineSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___cullMode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___splines) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____splineDistanceCache) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____totalDistanceCache) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___cars) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___bank) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____trainCars) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___syncTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___syncSpeed) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___syncSplineIndex) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___syncDistance) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___targetSpeed) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___acceleration) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___deceleration) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___fullSpeed) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___hasCable) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___logVerbose) == 0xed, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___carGap) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____currentSplineIndex) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____currentDistance) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____currentSpeed) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____cableSpeed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___lastPlacedSplineIndex) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___lastPlacedDistance) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ____nativeSplines) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkedTrain, ___playerPositions) == 0x120, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkedTrain) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
