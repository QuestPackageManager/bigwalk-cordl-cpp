#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMinigunContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMinigunContainer)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioMinigunContainer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioMinigunContainer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioMinigunContainer*, "", "AudioMinigunContainer");
// Dependencies AudioRandomContainer
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioMinigunContainer
class CORDL_TYPE AudioMinigunContainer : public ::GlobalNamespace::AudioRandomContainer {
public:
// Declarations
 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_HibernationDistance)) float_t  HibernationDistance;

 __declspec(property(get=get_LerpSpeed)) float_t  LerpSpeed;

 __declspec(property(get=get_LookAtCamera)) bool  LookAtCamera;

 __declspec(property(get=get_MaxInterval)) float_t  MaxInterval;

 __declspec(property(get=get_MaxSourceRadius)) float_t  MaxSourceRadius;

 __declspec(property(get=get_MinInterval)) float_t  MinInterval;

 __declspec(property(get=get_MinSourceRadius)) float_t  MinSourceRadius;

 __declspec(property(get=get_StopOnHit)) bool  StopOnHit;

 __declspec(property(get=get_TargetDistance)) float_t  TargetDistance;

 __declspec(property(get=get_TargetRadius)) float_t  TargetRadius;

/// @brief Field _duration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _hibernationDistance, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__hibernationDistance, put=__cordl_internal_set__hibernationDistance)) float_t  _hibernationDistance;

/// @brief Field _lerpSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpSpeed, put=__cordl_internal_set__lerpSpeed)) float_t  _lerpSpeed;

/// @brief Field _lookAtCamera, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get__lookAtCamera, put=__cordl_internal_set__lookAtCamera)) bool  _lookAtCamera;

/// @brief Field _maxInterval, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxInterval, put=__cordl_internal_set__maxInterval)) float_t  _maxInterval;

/// @brief Field _maxSourceRadius, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSourceRadius, put=__cordl_internal_set__maxSourceRadius)) float_t  _maxSourceRadius;

/// @brief Field _minInterval, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__minInterval, put=__cordl_internal_set__minInterval)) float_t  _minInterval;

/// @brief Field _minSourceRadius, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__minSourceRadius, put=__cordl_internal_set__minSourceRadius)) float_t  _minSourceRadius;

/// @brief Field _stopOnHit, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__stopOnHit, put=__cordl_internal_set__stopOnHit)) bool  _stopOnHit;

/// @brief Field _targetDistance, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetDistance, put=__cordl_internal_set__targetDistance)) float_t  _targetDistance;

/// @brief Field _targetRadius, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetRadius, put=__cordl_internal_set__targetRadius)) float_t  _targetRadius;

/// @brief Method Approximately, addr 0x1804831d0, size 0x50, virtual false, abstract: false, final false
static inline bool Approximately(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  allowedDifference) ;

/// @brief Method DrawMinigunGizmos, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void DrawMinigunGizmos(::UnityEngine::Transform*  transform, bool  frameOnly) ;

/// @brief Method GetNextInterval, addr 0x180483220, size 0x20, virtual false, abstract: false, final false
inline float_t GetNextInterval() ;

/// @brief Method GetNextSourcePosition, addr 0x180483240, size 0x260, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNextSourcePosition(::UnityEngine::Transform*  centerTransform, ::by_ref<::UnityEngine::Vector3>  targetPosition) ;

static inline ::GlobalNamespace::AudioMinigunContainer* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr float_t const& __cordl_internal_get__hibernationDistance() const;

constexpr float_t& __cordl_internal_get__hibernationDistance() ;

constexpr float_t const& __cordl_internal_get__lerpSpeed() const;

constexpr float_t& __cordl_internal_get__lerpSpeed() ;

constexpr bool const& __cordl_internal_get__lookAtCamera() const;

constexpr bool& __cordl_internal_get__lookAtCamera() ;

constexpr float_t const& __cordl_internal_get__maxInterval() const;

constexpr float_t& __cordl_internal_get__maxInterval() ;

constexpr float_t const& __cordl_internal_get__maxSourceRadius() const;

constexpr float_t& __cordl_internal_get__maxSourceRadius() ;

constexpr float_t const& __cordl_internal_get__minInterval() const;

constexpr float_t& __cordl_internal_get__minInterval() ;

constexpr float_t const& __cordl_internal_get__minSourceRadius() const;

constexpr float_t& __cordl_internal_get__minSourceRadius() ;

constexpr bool const& __cordl_internal_get__stopOnHit() const;

constexpr bool& __cordl_internal_get__stopOnHit() ;

constexpr float_t const& __cordl_internal_get__targetDistance() const;

constexpr float_t& __cordl_internal_get__targetDistance() ;

constexpr float_t const& __cordl_internal_get__targetRadius() const;

constexpr float_t& __cordl_internal_get__targetRadius() ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__hibernationDistance(float_t  value) ;

constexpr void __cordl_internal_set__lerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__lookAtCamera(bool  value) ;

constexpr void __cordl_internal_set__maxInterval(float_t  value) ;

constexpr void __cordl_internal_set__maxSourceRadius(float_t  value) ;

constexpr void __cordl_internal_set__minInterval(float_t  value) ;

constexpr void __cordl_internal_set__minSourceRadius(float_t  value) ;

constexpr void __cordl_internal_set__stopOnHit(bool  value) ;

constexpr void __cordl_internal_set__targetDistance(float_t  value) ;

constexpr void __cordl_internal_set__targetRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x1804834a0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Duration, addr 0x180483500, size 0x10, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_HibernationDistance, addr 0x180483510, size 0x10, virtual false, abstract: false, final false
inline float_t get_HibernationDistance() ;

/// @brief Method get_LerpSpeed, addr 0x180483520, size 0x10, virtual false, abstract: false, final false
inline float_t get_LerpSpeed() ;

/// @brief Method get_LookAtCamera, addr 0x1803b2d70, size 0x10, virtual false, abstract: false, final false
inline bool get_LookAtCamera() ;

/// @brief Method get_MaxInterval, addr 0x180483530, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxInterval() ;

/// @brief Method get_MaxSourceRadius, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxSourceRadius() ;

/// @brief Method get_MinInterval, addr 0x180403860, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinInterval() ;

/// @brief Method get_MinSourceRadius, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinSourceRadius() ;

/// @brief Method get_StopOnHit, addr 0x1803b2d60, size 0x10, virtual false, abstract: false, final false
inline bool get_StopOnHit() ;

/// @brief Method get_TargetDistance, addr 0x180474bc0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TargetDistance() ;

/// @brief Method get_TargetRadius, addr 0x1802e58b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TargetRadius() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMinigunContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMinigunContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMinigunContainer(AudioMinigunContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMinigunContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMinigunContainer(AudioMinigunContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17529};

/// @brief Field _minSourceRadius, offset: 0x64, size: 0x4, def value: None
 float_t  ____minSourceRadius;

/// @brief Field _maxSourceRadius, offset: 0x68, size: 0x4, def value: None
 float_t  ____maxSourceRadius;

/// @brief Field _targetRadius, offset: 0x6c, size: 0x4, def value: None
 float_t  ____targetRadius;

/// @brief Field _targetDistance, offset: 0x70, size: 0x4, def value: None
 float_t  ____targetDistance;

/// @brief Field _minInterval, offset: 0x74, size: 0x4, def value: None
 float_t  ____minInterval;

/// @brief Field _maxInterval, offset: 0x78, size: 0x4, def value: None
 float_t  ____maxInterval;

/// @brief Field _duration, offset: 0x7c, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _lerpSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ____lerpSpeed;

/// @brief Field _stopOnHit, offset: 0x84, size: 0x1, def value: None
 bool  ____stopOnHit;

/// @brief Field _lookAtCamera, offset: 0x85, size: 0x1, def value: None
 bool  ____lookAtCamera;

/// @brief Field _hibernationDistance, offset: 0x88, size: 0x4, def value: None
 float_t  ____hibernationDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____minSourceRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____maxSourceRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____targetRadius) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____targetDistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____minInterval) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____maxInterval) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____duration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____lerpSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____stopOnHit) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____lookAtCamera) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMinigunContainer, ____hibernationDistance) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioMinigunContainer) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
