#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionSound)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioImpactConfig;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class CollisionSoundGUI3D;
}
namespace GlobalNamespace {
class CollisionSoundGUI;
}
namespace GlobalNamespace {
struct CollisionSound_ImpactSize;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
struct WaterDepthSampleData_GetDepthMode;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
// Forward declare root types
namespace GlobalNamespace {
struct CollisionSound_ImpactSize;
}
namespace GlobalNamespace {
class CollisionSound;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CollisionSound_ImpactSize);
MARK_REF_T(::GlobalNamespace::CollisionSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionSound_ImpactSize, "", "CollisionSound/ImpactSize");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionSound*, "", "CollisionSound");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CollisionSound/ImpactSize
struct CORDL_TYPE CollisionSound_ImpactSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollisionSound_ImpactSize_Unwrapped
enum struct __CollisionSound_ImpactSize_Unwrapped : int32_t {
__E_One = static_cast<int32_t>(0x0),
__E_Two = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionSound_ImpactSize_Unwrapped () const noexcept {
return static_cast<__CollisionSound_ImpactSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CollisionSound_ImpactSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionSound_ImpactSize(int32_t  value__) noexcept;

/// @brief Field One value: I32(0)
static ::GlobalNamespace::CollisionSound_ImpactSize const One;

/// @brief Field Two value: I32(1)
static ::GlobalNamespace::CollisionSound_ImpactSize const Two;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionSound_ImpactSize, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionSound_ImpactSize) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CollisionSound::ImpactSize, UnityEngine.MonoBehaviour, UnityEngine.Vector3, WaterDepthSampleData::GetDepthMode
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollisionSound
class CORDL_TYPE CollisionSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ImpactSize = ::GlobalNamespace::CollisionSound_ImpactSize;

/// @brief Field DebugMode, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugMode, put=__cordl_internal_set_DebugMode)) bool  DebugMode;

/// @brief Field ImpactConfig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImpactConfig, put=__cordl_internal_set_ImpactConfig)) ::UnityW<::GlobalNamespace::AudioImpactConfig>  ImpactConfig;

 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Field Prop, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prop, put=__cordl_internal_set_Prop)) ::UnityW<::GlobalNamespace::Prop>  Prop;

/// @brief Field Rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Rb, put=__cordl_internal_set_Rb)) ::UnityW<::UnityEngine::Rigidbody>  Rb;

/// @brief Field RollAxis, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_RollAxis, put=__cordl_internal_set_RollAxis)) ::UnityEngine::Vector3  RollAxis;

/// @brief Field Size, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Size, put=__cordl_internal_set_Size)) ::GlobalNamespace::CollisionSound_ImpactSize  Size;

/// @brief Field WaterTestSize, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_WaterTestSize, put=__cordl_internal_set_WaterTestSize)) float_t  WaterTestSize;

/// @brief Field <DepthMode>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DepthMode_k__BackingField, put=setStaticF__DepthMode_k__BackingField)) ::GlobalNamespace::WaterDepthSampleData_GetDepthMode  _DepthMode_k__BackingField;

/// @brief Field <GUIDebug3D>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__GUIDebug3D_k__BackingField, put=setStaticF__GUIDebug3D_k__BackingField)) ::GlobalNamespace::CollisionSoundGUI3D*  _GUIDebug3D_k__BackingField;

/// @brief Field <GUIDebug>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__GUIDebug_k__BackingField, put=setStaticF__GUIDebug_k__BackingField)) ::GlobalNamespace::CollisionSoundGUI*  _GUIDebug_k__BackingField;

/// @brief Field _cachedTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTransform, put=__cordl_internal_set__cachedTransform)) ::UnityW<::UnityEngine::Transform>  _cachedTransform;

/// @brief Field _currentState, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) int32_t  _currentState;

/// @brief Field _hardAudioEvent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardAudioEvent, put=__cordl_internal_set__hardAudioEvent)) ::GlobalNamespace::AudioEvent*  _hardAudioEvent;

/// @brief Field _hardRollVol, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardRollVol, put=__cordl_internal_set__hardRollVol)) ::GlobalNamespace::AudioVolume*  _hardRollVol;

/// @brief Field _hardRollingController, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardRollingController, put=__cordl_internal_set__hardRollingController)) ::UnityW<::GlobalNamespace::AudioSourceController>  _hardRollingController;

/// @brief Field _hasHardRoll, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasHardRoll, put=__cordl_internal_set__hasHardRoll)) bool  _hasHardRoll;

/// @brief Field _hasRollAxis, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRollAxis, put=__cordl_internal_set__hasRollAxis)) bool  _hasRollAxis;

/// @brief Field _hasSoftRoll, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasSoftRoll, put=__cordl_internal_set__hasSoftRoll)) bool  _hasSoftRoll;

/// @brief Field _lastContactDistance, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastContactDistance, put=__cordl_internal_set__lastContactDistance)) float_t  _lastContactDistance;

/// @brief Field _lastContactPoint, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastContactPoint, put=__cordl_internal_set__lastContactPoint)) ::UnityEngine::Vector3  _lastContactPoint;

/// @brief Field _lastDirection, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastDirection, put=__cordl_internal_set__lastDirection)) ::UnityEngine::Vector3  _lastDirection;

/// @brief Field _lastImpactIntensity, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastImpactIntensity, put=__cordl_internal_set__lastImpactIntensity)) float_t  _lastImpactIntensity;

/// @brief Field _lastRollingSpeeds, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastRollingSpeeds, put=__cordl_internal_set__lastRollingSpeeds)) ::ArrayW<float_t>  _lastRollingSpeeds;

/// @brief Field _lastTestedWaterDepth, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastTestedWaterDepth, put=__cordl_internal_set__lastTestedWaterDepth)) float_t  _lastTestedWaterDepth;

/// @brief Field _lastWaterTestPoint, offset 0x100, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastWaterTestPoint, put=__cordl_internal_set__lastWaterTestPoint)) ::UnityEngine::Vector3  _lastWaterTestPoint;

/// @brief Field _lastWaterTestPointSpeed, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWaterTestPointSpeed, put=__cordl_internal_set__lastWaterTestPointSpeed)) float_t  _lastWaterTestPointSpeed;

/// @brief Field _preAngVel, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get__preAngVel, put=__cordl_internal_set__preAngVel)) ::UnityEngine::Vector3  _preAngVel;

/// @brief Field _preCOM, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get__preCOM, put=__cordl_internal_set__preCOM)) ::UnityEngine::Vector3  _preCOM;

/// @brief Field _preVel, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get__preVel, put=__cordl_internal_set__preVel)) ::UnityEngine::Vector3  _preVel;

/// @brief Field _rollingSpeed, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__rollingSpeed, put=__cordl_internal_set__rollingSpeed)) float_t  _rollingSpeed;

/// @brief Field _sampleHeightHelper, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sampleHeightHelper, put=__cordl_internal_set__sampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _sampleHeightHelper;

/// @brief Field _shouldUpdate, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldUpdate, put=__cordl_internal_set__shouldUpdate)) bool  _shouldUpdate;

/// @brief Field _softAudioEvent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__softAudioEvent, put=__cordl_internal_set__softAudioEvent)) ::GlobalNamespace::AudioEvent*  _softAudioEvent;

/// @brief Field _softRollVol, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__softRollVol, put=__cordl_internal_set__softRollVol)) ::GlobalNamespace::AudioVolume*  _softRollVol;

/// @brief Field _softRollingController, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__softRollingController, put=__cordl_internal_set__softRollingController)) ::UnityW<::GlobalNamespace::AudioSourceController>  _softRollingController;

/// @brief Field _speedCounter, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__speedCounter, put=__cordl_internal_set__speedCounter)) int32_t  _speedCounter;

/// @brief Field _tooFar, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__tooFar, put=__cordl_internal_set__tooFar)) bool  _tooFar;

/// @brief Field _waterDepth, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__waterDepth, put=__cordl_internal_set__waterDepth)) float_t  _waterDepth;

/// @brief Field _waterImpactDeepEvent, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterImpactDeepEvent, put=__cordl_internal_set__waterImpactDeepEvent)) ::GlobalNamespace::AudioEvent*  _waterImpactDeepEvent;

/// @brief Field _waterImpactEvent, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterImpactEvent, put=__cordl_internal_set__waterImpactEvent)) ::GlobalNamespace::AudioEvent*  _waterImpactEvent;

/// @brief Field _waterSound, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterSound, put=__cordl_internal_set__waterSound)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  _waterSound;

/// @brief Field _waterSoundDeep, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterSoundDeep, put=__cordl_internal_set__waterSoundDeep)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  _waterSoundDeep;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x18032d980, size 0x440, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioGetXCallback, addr 0x18032ddc0, size 0x20, virtual false, abstract: false, final false
inline bool AudioGetXCallback(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method AudioLateUpdate, addr 0x18032dde0, size 0xea0, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x18032ec80, size 0x30, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method Awake, addr 0x18032ecb0, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateDistance, addr 0x18032ee30, size 0x140, virtual false, abstract: false, final false
inline void CalculateDistance() ;

/// @brief Method GetImpactVelocity, addr 0x18032ef70, size 0x10, virtual false, abstract: false, final false
inline float_t GetImpactVelocity() ;

/// @brief Method InitAudioEvents, addr 0x18032ef80, size 0x1c0, virtual false, abstract: false, final false
inline void InitAudioEvents() ;

static inline ::GlobalNamespace::CollisionSound* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x18032f140, size 0x1600, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x180330740, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x1803307d0, size 0x260, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PassCollsion, addr 0x180330a30, size 0xd0, virtual false, abstract: false, final false
inline void PassCollsion(::UnityEngine::Collision*  collision) ;

/// @brief Method PrintGUILog, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void PrintGUILog(::GlobalNamespace::AudioEvent*  audioEvent, ::StringW  title) ;

/// @brief Method Start, addr 0x180330b00, size 0xe0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method <AudioLateUpdate>b__62_2, addr 0x180330be0, size 0x10, virtual false, abstract: false, final false
inline float_t _AudioLateUpdate_b__62_2() ;

/// @brief Method <AudioLateUpdate>b__62_3, addr 0x180330be0, size 0x10, virtual false, abstract: false, final false
inline float_t _AudioLateUpdate_b__62_3() ;

/// @brief Method <AudioLateUpdate>g___clearRef|62_0, addr 0x180330bf0, size 0x50, virtual false, abstract: false, final false
static inline void _AudioLateUpdate_g___clearRef_62_0(::GlobalNamespace::CollisionSound*  s, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <AudioLateUpdate>g___clearRef|62_1, addr 0x180330c40, size 0x50, virtual false, abstract: false, final false
static inline void _AudioLateUpdate_g___clearRef_62_1(::GlobalNamespace::CollisionSound*  s, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <OnCollisionEnter>b__65_0, addr 0x180330c90, size 0x20, virtual false, abstract: false, final false
inline float_t _OnCollisionEnter_b__65_0() ;

/// @brief Method <OnCollisionEnter>b__65_1, addr 0x180330c90, size 0x20, virtual false, abstract: false, final false
inline float_t _OnCollisionEnter_b__65_1() ;

constexpr bool const& __cordl_internal_get_DebugMode() const;

constexpr bool& __cordl_internal_get_DebugMode() ;

constexpr ::UnityW<::GlobalNamespace::AudioImpactConfig> const& __cordl_internal_get_ImpactConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioImpactConfig>& __cordl_internal_get_ImpactConfig() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_Prop() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_Prop() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_Rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_Rb() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RollAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RollAxis() ;

constexpr ::GlobalNamespace::CollisionSound_ImpactSize const& __cordl_internal_get_Size() const;

constexpr ::GlobalNamespace::CollisionSound_ImpactSize& __cordl_internal_get_Size() ;

constexpr float_t const& __cordl_internal_get_WaterTestSize() const;

constexpr float_t& __cordl_internal_get_WaterTestSize() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cachedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cachedTransform() ;

constexpr int32_t const& __cordl_internal_get__currentState() const;

constexpr int32_t& __cordl_internal_get__currentState() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__hardAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__hardAudioEvent() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__hardRollVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__hardRollVol() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__hardRollingController() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__hardRollingController() ;

constexpr bool const& __cordl_internal_get__hasHardRoll() const;

constexpr bool& __cordl_internal_get__hasHardRoll() ;

constexpr bool const& __cordl_internal_get__hasRollAxis() const;

constexpr bool& __cordl_internal_get__hasRollAxis() ;

constexpr bool const& __cordl_internal_get__hasSoftRoll() const;

constexpr bool& __cordl_internal_get__hasSoftRoll() ;

constexpr float_t const& __cordl_internal_get__lastContactDistance() const;

constexpr float_t& __cordl_internal_get__lastContactDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastContactPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastContactPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastDirection() ;

constexpr float_t const& __cordl_internal_get__lastImpactIntensity() const;

constexpr float_t& __cordl_internal_get__lastImpactIntensity() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__lastRollingSpeeds() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__lastRollingSpeeds() ;

constexpr float_t const& __cordl_internal_get__lastTestedWaterDepth() const;

constexpr float_t& __cordl_internal_get__lastTestedWaterDepth() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastWaterTestPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastWaterTestPoint() ;

constexpr float_t const& __cordl_internal_get__lastWaterTestPointSpeed() const;

constexpr float_t& __cordl_internal_get__lastWaterTestPointSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__preAngVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__preAngVel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__preCOM() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__preCOM() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__preVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__preVel() ;

constexpr float_t const& __cordl_internal_get__rollingSpeed() const;

constexpr float_t& __cordl_internal_get__rollingSpeed() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__sampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__sampleHeightHelper() ;

constexpr bool const& __cordl_internal_get__shouldUpdate() const;

constexpr bool& __cordl_internal_get__shouldUpdate() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__softAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__softAudioEvent() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__softRollVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__softRollVol() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__softRollingController() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__softRollingController() ;

constexpr int32_t const& __cordl_internal_get__speedCounter() const;

constexpr int32_t& __cordl_internal_get__speedCounter() ;

constexpr bool const& __cordl_internal_get__tooFar() const;

constexpr bool& __cordl_internal_get__tooFar() ;

constexpr float_t const& __cordl_internal_get__waterDepth() const;

constexpr float_t& __cordl_internal_get__waterDepth() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__waterImpactDeepEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__waterImpactDeepEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__waterImpactEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__waterImpactEvent() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get__waterSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get__waterSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get__waterSoundDeep() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get__waterSoundDeep() ;

constexpr void __cordl_internal_set_DebugMode(bool  value) ;

constexpr void __cordl_internal_set_ImpactConfig(::UnityW<::GlobalNamespace::AudioImpactConfig>  value) ;

constexpr void __cordl_internal_set_Prop(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_Rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_RollAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Size(::GlobalNamespace::CollisionSound_ImpactSize  value) ;

constexpr void __cordl_internal_set_WaterTestSize(float_t  value) ;

constexpr void __cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__currentState(int32_t  value) ;

constexpr void __cordl_internal_set__hardAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__hardRollVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__hardRollingController(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__hasHardRoll(bool  value) ;

constexpr void __cordl_internal_set__hasRollAxis(bool  value) ;

constexpr void __cordl_internal_set__hasSoftRoll(bool  value) ;

constexpr void __cordl_internal_set__lastContactDistance(float_t  value) ;

constexpr void __cordl_internal_set__lastContactPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastImpactIntensity(float_t  value) ;

constexpr void __cordl_internal_set__lastRollingSpeeds(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__lastTestedWaterDepth(float_t  value) ;

constexpr void __cordl_internal_set__lastWaterTestPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastWaterTestPointSpeed(float_t  value) ;

constexpr void __cordl_internal_set__preAngVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__preCOM(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__preVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rollingSpeed(float_t  value) ;

constexpr void __cordl_internal_set__sampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__shouldUpdate(bool  value) ;

constexpr void __cordl_internal_set__softAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__softRollVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__softRollingController(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__speedCounter(int32_t  value) ;

constexpr void __cordl_internal_set__tooFar(bool  value) ;

constexpr void __cordl_internal_set__waterDepth(float_t  value) ;

constexpr void __cordl_internal_set__waterImpactDeepEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__waterImpactEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__waterSound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set__waterSoundDeep(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

/// @brief Method .ctor, addr 0x180330cb0, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode getStaticF__DepthMode_k__BackingField() ;

static inline ::GlobalNamespace::CollisionSoundGUI3D* getStaticF__GUIDebug3D_k__BackingField() ;

static inline ::GlobalNamespace::CollisionSoundGUI* getStaticF__GUIDebug_k__BackingField() ;

/// @brief Method get_DepthMode, addr 0x180330dd0, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode get_DepthMode() ;

/// @brief Method get_GUIDebug, addr 0x180330e10, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CollisionSoundGUI* get_GUIDebug() ;

/// @brief Method get_GUIDebug3D, addr 0x180330df0, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CollisionSoundGUI3D* get_GUIDebug3D() ;

/// @brief Method get_Initialized, addr 0x1802dc4d0, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

static inline void setStaticF__DepthMode_k__BackingField(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value) ;

static inline void setStaticF__GUIDebug3D_k__BackingField(::GlobalNamespace::CollisionSoundGUI3D*  value) ;

static inline void setStaticF__GUIDebug_k__BackingField(::GlobalNamespace::CollisionSoundGUI*  value) ;

/// @brief Method set_DepthMode, addr 0x180330e30, size 0x20, virtual false, abstract: false, final false
static inline void set_DepthMode(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value) ;

/// @brief Method set_GUIDebug, addr 0x180330e80, size 0x30, virtual false, abstract: false, final false
static inline void set_GUIDebug(::GlobalNamespace::CollisionSoundGUI*  value) ;

/// @brief Method set_GUIDebug3D, addr 0x180330e50, size 0x30, virtual false, abstract: false, final false
static inline void set_GUIDebug3D(::GlobalNamespace::CollisionSoundGUI3D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionSound(CollisionSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionSound(CollisionSound const& ) = delete;

/// @brief Field TOO_FAR_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  TOO_FAR_THRESHOLD{static_cast<float_t>(2500.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4818};

/// @brief Field Rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___Rb;

/// @brief Field Prop, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___Prop;

/// @brief Field ImpactConfig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioImpactConfig>  ___ImpactConfig;

/// @brief Field Size, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::CollisionSound_ImpactSize  ___Size;

/// @brief Field WaterTestSize, offset: 0x3c, size: 0x4, def value: None
 float_t  ___WaterTestSize;

/// @brief Field RollAxis, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RollAxis;

/// @brief Field DebugMode, offset: 0x4c, size: 0x1, def value: None
 bool  ___DebugMode;

/// @brief Field _cachedTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cachedTransform;

/// @brief Field _tooFar, offset: 0x58, size: 0x1, def value: None
 bool  ____tooFar;

/// @brief Field _shouldUpdate, offset: 0x59, size: 0x1, def value: None
 bool  ____shouldUpdate;

/// @brief Field _softAudioEvent, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____softAudioEvent;

/// @brief Field _hardAudioEvent, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____hardAudioEvent;

/// @brief Field _softRollingController, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____softRollingController;

/// @brief Field _hardRollingController, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____hardRollingController;

/// @brief Field _hasSoftRoll, offset: 0x80, size: 0x1, def value: None
 bool  ____hasSoftRoll;

/// @brief Field _hasHardRoll, offset: 0x81, size: 0x1, def value: None
 bool  ____hasHardRoll;

/// @brief Field _hasRollAxis, offset: 0x82, size: 0x1, def value: None
 bool  ____hasRollAxis;

/// @brief Field _preVel, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____preVel;

/// @brief Field _preAngVel, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____preAngVel;

/// @brief Field _preCOM, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____preCOM;

/// @brief Field _lastContactPoint, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastContactPoint;

/// @brief Field _lastDirection, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastDirection;

/// @brief Field _lastImpactIntensity, offset: 0xc0, size: 0x4, def value: None
 float_t  ____lastImpactIntensity;

/// @brief Field _lastContactDistance, offset: 0xc4, size: 0x4, def value: None
 float_t  ____lastContactDistance;

/// @brief Field _lastRollingSpeeds, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<float_t>  ____lastRollingSpeeds;

/// @brief Field _speedCounter, offset: 0xd0, size: 0x4, def value: None
 int32_t  ____speedCounter;

/// @brief Field _rollingSpeed, offset: 0xd4, size: 0x4, def value: None
 float_t  ____rollingSpeed;

/// @brief Field _softRollVol, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____softRollVol;

/// @brief Field _hardRollVol, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____hardRollVol;

/// @brief Field _currentState, offset: 0xe8, size: 0x4, def value: None
 int32_t  ____currentState;

/// @brief Field _sampleHeightHelper, offset: 0xf0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____sampleHeightHelper;

/// @brief Field _waterDepth, offset: 0xf8, size: 0x4, def value: None
 float_t  ____waterDepth;

/// @brief Field _lastTestedWaterDepth, offset: 0xfc, size: 0x4, def value: None
 float_t  ____lastTestedWaterDepth;

/// @brief Field _lastWaterTestPoint, offset: 0x100, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastWaterTestPoint;

/// @brief Field _lastWaterTestPointSpeed, offset: 0x10c, size: 0x4, def value: None
 float_t  ____lastWaterTestPointSpeed;

/// @brief Field _waterSound, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ____waterSound;

/// @brief Field _waterSoundDeep, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ____waterSoundDeep;

/// @brief Field _waterImpactEvent, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____waterImpactEvent;

/// @brief Field _waterImpactDeepEvent, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____waterImpactDeepEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionSound, ___Rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ___Prop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ___ImpactConfig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ___Size) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ___WaterTestSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ___RollAxis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ___DebugMode) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____cachedTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____tooFar) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____shouldUpdate) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____softAudioEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____hardAudioEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____softRollingController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____hardRollingController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____hasSoftRoll) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____hasHardRoll) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____hasRollAxis) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____preVel) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____preAngVel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____preCOM) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastContactPoint) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastDirection) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastImpactIntensity) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastContactDistance) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastRollingSpeeds) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____speedCounter) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____rollingSpeed) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____softRollVol) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____hardRollVol) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____currentState) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____sampleHeightHelper) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____waterDepth) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastTestedWaterDepth) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastWaterTestPoint) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____lastWaterTestPointSpeed) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____waterSound) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____waterSoundDeep) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____waterImpactEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSound, ____waterImpactDeepEvent) == 0x128, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionSound) == 0x130, "Size mismatch!");

} // namespace end def GlobalNamespace
