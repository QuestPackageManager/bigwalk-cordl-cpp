#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioListenerController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioPlayer_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioListenerController)
namespace GlobalNamespace {
class AudioCullingJobScheduler;
}
namespace GlobalNamespace {
class AudioPlayer;
}
namespace GlobalNamespace {
class CustomCullingGroup;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioListener;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioListenerController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioListenerController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioListenerController*, "", "AudioListenerController");
// Dependencies AudioPlayer, UnityEngine.BoundingSphere, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioListenerController
class CORDL_TYPE AudioListenerController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Listener)) ::UnityW<::UnityEngine::AudioListener>  Listener;

/// @brief Field OnMovingTooFast0, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMovingTooFast0, put=__cordl_internal_set_OnMovingTooFast0)) ::System::Action_1<::UnityEngine::Vector3>*  OnMovingTooFast0;

/// @brief Field OnMovingTooFast1, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMovingTooFast1, put=__cordl_internal_set_OnMovingTooFast1)) ::System::Action_1<::UnityEngine::Vector3>*  OnMovingTooFast1;

/// @brief Field OnMovingTooFast2, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMovingTooFast2, put=__cordl_internal_set_OnMovingTooFast2)) ::System::Action_1<::UnityEngine::Vector3>*  OnMovingTooFast2;

 __declspec(property(get=get_RandomPointsCenter, put=set_RandomPointsCenter)) ::UnityW<::UnityEngine::Transform>  RandomPointsCenter;

/// @brief Field <RandomPointsCenter>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__RandomPointsCenter_k__BackingField, put=__cordl_internal_set__RandomPointsCenter_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _RandomPointsCenter_k__BackingField;

/// @brief Field _audioPlayerCount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__audioPlayerCount, put=__cordl_internal_set__audioPlayerCount)) int32_t  _audioPlayerCount;

/// @brief Field _audioPlayers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioPlayers, put=__cordl_internal_set__audioPlayers)) ::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>>  _audioPlayers;

/// @brief Field _cullingDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__cullingDistance, put=__cordl_internal_set__cullingDistance)) float_t  _cullingDistance;

/// @brief Field _cullingGroup, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cullingGroup, put=__cordl_internal_set__cullingGroup)) ::GlobalNamespace::CustomCullingGroup*  _cullingGroup;

/// @brief Field _followMainCamera, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__followMainCamera, put=__cordl_internal_set__followMainCamera)) bool  _followMainCamera;

/// @brief Field _initialized, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _jobScheduler, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__jobScheduler, put=__cordl_internal_set__jobScheduler)) ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  _jobScheduler;

/// @brief Field _lastPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastPosition, put=__cordl_internal_set__lastPosition)) ::UnityEngine::Vector3  _lastPosition;

/// @brief Field _listener, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__listener, put=__cordl_internal_set__listener)) ::UnityW<::UnityEngine::AudioListener>  _listener;

/// @brief Field _results, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__results, put=__cordl_internal_set__results)) ::ArrayW<int32_t>  _results;

/// @brief Field _spheres, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__spheres, put=__cordl_internal_set__spheres)) ::ArrayW<::UnityEngine::BoundingSphere>  _spheres;

/// @brief Method DeregisterStaticAudioPlayer, addr 0x18047bbb0, size 0x130, virtual false, abstract: false, final false
inline void DeregisterStaticAudioPlayer(::GlobalNamespace::AudioPlayer*  player) ;

/// @brief Method EraseSwapBack, addr 0x18047bce0, size 0x60, virtual false, abstract: false, final false
inline void EraseSwapBack(int32_t  index) ;

/// @brief Method Initialize, addr 0x18047bd40, size 0x3a0, virtual false, abstract: false, final false
inline void Initialize(bool  followMainCamera, float_t  cullingDistance, int32_t  cullingSize) ;

static inline ::GlobalNamespace::AudioListenerController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18047c0e0, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RegisterStaticAudioPlayer, addr 0x18047c130, size 0x1c0, virtual false, abstract: false, final false
inline void RegisterStaticAudioPlayer(::GlobalNamespace::AudioPlayer*  player) ;

/// @brief Method UpdateListener, addr 0x18047c2f0, size 0x3e0, virtual false, abstract: false, final false
inline void UpdateListener() ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnMovingTooFast0() const;

constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnMovingTooFast0() ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnMovingTooFast1() const;

constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnMovingTooFast1() ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnMovingTooFast2() const;

constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnMovingTooFast2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__RandomPointsCenter_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__RandomPointsCenter_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__audioPlayerCount() const;

constexpr int32_t& __cordl_internal_get__audioPlayerCount() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>> const& __cordl_internal_get__audioPlayers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>>& __cordl_internal_get__audioPlayers() ;

constexpr float_t const& __cordl_internal_get__cullingDistance() const;

constexpr float_t& __cordl_internal_get__cullingDistance() ;

constexpr ::GlobalNamespace::CustomCullingGroup* const& __cordl_internal_get__cullingGroup() const;

constexpr ::GlobalNamespace::CustomCullingGroup*& __cordl_internal_get__cullingGroup() ;

constexpr bool const& __cordl_internal_get__followMainCamera() const;

constexpr bool& __cordl_internal_get__followMainCamera() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler> const& __cordl_internal_get__jobScheduler() const;

constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>& __cordl_internal_get__jobScheduler() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastPosition() ;

constexpr ::UnityW<::UnityEngine::AudioListener> const& __cordl_internal_get__listener() const;

constexpr ::UnityW<::UnityEngine::AudioListener>& __cordl_internal_get__listener() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__results() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__results() ;

constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& __cordl_internal_get__spheres() const;

constexpr ::ArrayW<::UnityEngine::BoundingSphere>& __cordl_internal_get__spheres() ;

constexpr void __cordl_internal_set_OnMovingTooFast0(::System::Action_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_OnMovingTooFast1(::System::Action_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_OnMovingTooFast2(::System::Action_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__RandomPointsCenter_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__audioPlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set__audioPlayers(::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>>  value) ;

constexpr void __cordl_internal_set__cullingDistance(float_t  value) ;

constexpr void __cordl_internal_set__cullingGroup(::GlobalNamespace::CustomCullingGroup*  value) ;

constexpr void __cordl_internal_set__followMainCamera(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__jobScheduler(::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  value) ;

constexpr void __cordl_internal_set__lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__listener(::UnityW<::UnityEngine::AudioListener>  value) ;

constexpr void __cordl_internal_set__results(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__spheres(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnMovingTooFast0, addr 0x18047c6d0, size 0x90, virtual false, abstract: false, final false
inline void add_OnMovingTooFast0(::System::Action_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method add_OnMovingTooFast1, addr 0x18047c760, size 0xa0, virtual false, abstract: false, final false
inline void add_OnMovingTooFast1(::System::Action_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method add_OnMovingTooFast2, addr 0x18047c800, size 0xa0, virtual false, abstract: false, final false
inline void add_OnMovingTooFast2(::System::Action_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method get_Initialized, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_Listener, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioListener> get_Listener() ;

/// @brief Method get_RandomPointsCenter, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RandomPointsCenter() ;

/// @brief Method remove_OnMovingTooFast0, addr 0x18047c8a0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnMovingTooFast0(::System::Action_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method remove_OnMovingTooFast1, addr 0x18047c930, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnMovingTooFast1(::System::Action_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method remove_OnMovingTooFast2, addr 0x18047c9d0, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnMovingTooFast2(::System::Action_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method set_RandomPointsCenter, addr 0x1803d5ad0, size 0x10, virtual false, abstract: false, final false
inline void set_RandomPointsCenter(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioListenerController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioListenerController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioListenerController(AudioListenerController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioListenerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioListenerController(AudioListenerController const& ) = delete;

/// @brief Field BOUNDING_SPHERE_RADIUS offset 0xffffffff size 0x4
static constexpr float_t  BOUNDING_SPHERE_RADIUS{static_cast<float_t>(1.0f)};

/// @brief Field MOVING_TOO_FAST_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  MOVING_TOO_FAST_THRESHOLD{static_cast<float_t>(5.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17525};

/// @brief Field _listener, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioListener>  ____listener;

/// @brief Field _initialized, offset: 0x28, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _followMainCamera, offset: 0x29, size: 0x1, def value: None
 bool  ____followMainCamera;

/// @brief Field _lastPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastPosition;

/// @brief Field _cullingDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ____cullingDistance;

/// @brief Field _cullingGroup, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::CustomCullingGroup*  ____cullingGroup;

/// @brief Field _spheres, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoundingSphere>  ____spheres;

/// @brief Field _audioPlayers, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>>  ____audioPlayers;

/// @brief Field _audioPlayerCount, offset: 0x58, size: 0x4, def value: None
 int32_t  ____audioPlayerCount;

/// @brief Field _results, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____results;

/// @brief Field _jobScheduler, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  ____jobScheduler;

/// @brief Field <RandomPointsCenter>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____RandomPointsCenter_k__BackingField;

/// @brief Field OnMovingTooFast0, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector3>*  ___OnMovingTooFast0;

/// @brief Field OnMovingTooFast1, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector3>*  ___OnMovingTooFast1;

/// @brief Field OnMovingTooFast2, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector3>*  ___OnMovingTooFast2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____listener) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____initialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____followMainCamera) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____lastPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____cullingDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____cullingGroup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____spheres) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____audioPlayers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____audioPlayerCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____results) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____jobScheduler) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____RandomPointsCenter_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ___OnMovingTooFast0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ___OnMovingTooFast1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioListenerController, ___OnMovingTooFast2) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioListenerController) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
