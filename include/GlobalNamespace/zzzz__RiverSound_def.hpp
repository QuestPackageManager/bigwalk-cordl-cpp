#pragma once
// IWYU pragma private; include "GlobalNamespace/RiverSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RiverSound)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class PolyLine_ClosestPoint;
}
namespace GlobalNamespace {
class PolyLine;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RiverSound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RiverSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RiverSound*, "", "RiverSound");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RiverSound
class CORDL_TYPE RiverSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Field _asset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__asset, put=__cordl_internal_set__asset)) ::UnityW<::GlobalNamespace::AudioAsset>  _asset;

/// @brief Field _closest, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__closest, put=__cordl_internal_set__closest)) ::GlobalNamespace::PolyLine_ClosestPoint*  _closest;

/// @brief Field _event, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__event, put=__cordl_internal_set__event)) ::GlobalNamespace::AudioEvent*  _event;

/// @brief Field _intensities, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__intensities, put=__cordl_internal_set__intensities)) ::System::Collections::Generic::List_1<float_t>*  _intensities;

/// @brief Field _intensity, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__intensity, put=__cordl_internal_set__intensity)) float_t  _intensity;

/// @brief Field _lerpSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpSpeed, put=__cordl_internal_set__lerpSpeed)) float_t  _lerpSpeed;

/// @brief Field _maxDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _maxDistanceSquared, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistanceSquared, put=__cordl_internal_set__maxDistanceSquared)) float_t  _maxDistanceSquared;

/// @brief Field _midPointIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__midPointIndex, put=__cordl_internal_set__midPointIndex)) int32_t  _midPointIndex;

/// @brief Field _polyline, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__polyline, put=__cordl_internal_set__polyline)) ::UnityW<::GlobalNamespace::PolyLine>  _polyline;

/// @brief Field _slerp, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__slerp, put=__cordl_internal_set__slerp)) bool  _slerp;

/// @brief Field _transform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1803dceb0, size 0x1f0, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1803dd0a0, size 0x510, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method Awake, addr 0x1803dd5b0, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::RiverSound* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803dd630, size 0x70, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method <AudioSlowUpdate>b__17_0, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t _AudioSlowUpdate_b__17_0() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get__asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get__asset() ;

constexpr ::GlobalNamespace::PolyLine_ClosestPoint* const& __cordl_internal_get__closest() const;

constexpr ::GlobalNamespace::PolyLine_ClosestPoint*& __cordl_internal_get__closest() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__event() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__event() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__intensities() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__intensities() ;

constexpr float_t const& __cordl_internal_get__intensity() const;

constexpr float_t& __cordl_internal_get__intensity() ;

constexpr float_t const& __cordl_internal_get__lerpSpeed() const;

constexpr float_t& __cordl_internal_get__lerpSpeed() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr float_t const& __cordl_internal_get__maxDistanceSquared() const;

constexpr float_t& __cordl_internal_get__maxDistanceSquared() ;

constexpr int32_t const& __cordl_internal_get__midPointIndex() const;

constexpr int32_t& __cordl_internal_get__midPointIndex() ;

constexpr ::UnityW<::GlobalNamespace::PolyLine> const& __cordl_internal_get__polyline() const;

constexpr ::UnityW<::GlobalNamespace::PolyLine>& __cordl_internal_get__polyline() ;

constexpr bool const& __cordl_internal_get__slerp() const;

constexpr bool& __cordl_internal_get__slerp() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__closest(::GlobalNamespace::PolyLine_ClosestPoint*  value) ;

constexpr void __cordl_internal_set__event(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__intensities(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set__intensity(float_t  value) ;

constexpr void __cordl_internal_set__lerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxDistanceSquared(float_t  value) ;

constexpr void __cordl_internal_set__midPointIndex(int32_t  value) ;

constexpr void __cordl_internal_set__polyline(::UnityW<::GlobalNamespace::PolyLine>  value) ;

constexpr void __cordl_internal_set__slerp(bool  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1803dd6a0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initialized, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RiverSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RiverSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RiverSound(RiverSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RiverSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RiverSound(RiverSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4866};

/// @brief Field _asset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ____asset;

/// @brief Field _polyline, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PolyLine>  ____polyline;

/// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _midPointIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ____midPointIndex;

/// @brief Field _maxDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ____maxDistance;

/// @brief Field _lerpSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____lerpSpeed;

/// @brief Field _slerp, offset: 0x44, size: 0x1, def value: None
 bool  ____slerp;

/// @brief Field _intensities, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ____intensities;

/// @brief Field _maxDistanceSquared, offset: 0x50, size: 0x4, def value: None
 float_t  ____maxDistanceSquared;

/// @brief Field _intensity, offset: 0x54, size: 0x4, def value: None
 float_t  ____intensity;

/// @brief Field _closest, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::PolyLine_ClosestPoint*  ____closest;

/// @brief Field _event, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____event;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RiverSound, ____asset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____polyline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____midPointIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____maxDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____lerpSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____slerp) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____intensities) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____maxDistanceSquared) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____intensity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____closest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RiverSound, ____event) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RiverSound) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
