#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAmbienceZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioAmbienceZone)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioAmbienceZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioAmbienceZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioAmbienceZone*, "", "AudioAmbienceZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioAmbienceZone
class CORDL_TYPE AudioAmbienceZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BottomLeft, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BottomLeft, put=__cordl_internal_set_BottomLeft)) ::UnityW<::UnityEngine::Transform>  BottomLeft;

/// @brief Field DebugMode, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugMode, put=__cordl_internal_set_DebugMode)) bool  DebugMode;

/// @brief Field FalloffMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FalloffMap, put=__cordl_internal_set_FalloffMap)) ::UnityW<::UnityEngine::Texture2D>  FalloffMap;

/// @brief Field PlayCenter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayCenter, put=__cordl_internal_set_PlayCenter)) ::UnityW<::UnityEngine::Transform>  PlayCenter;

/// @brief Field Sound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sound, put=__cordl_internal_set_Sound)) ::UnityW<::GlobalNamespace::AudioAsset>  Sound;

/// @brief Field TopRight, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TopRight, put=__cordl_internal_set_TopRight)) ::UnityW<::UnityEngine::Transform>  TopRight;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Field _ambienceEvent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__ambienceEvent, put=__cordl_internal_set__ambienceEvent)) ::GlobalNamespace::AudioEvent*  _ambienceEvent;

/// @brief Field _currentVal, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentVal, put=__cordl_internal_set__currentVal)) float_t  _currentVal;

/// @brief Field _mapHeight, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__mapHeight, put=__cordl_internal_set__mapHeight)) float_t  _mapHeight;

/// @brief Field _mapWidth, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__mapWidth, put=__cordl_internal_set__mapWidth)) float_t  _mapWidth;

/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<float_t>  _values;

/// @brief Field _worldHeight, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldHeight, put=__cordl_internal_set__worldHeight)) float_t  _worldHeight;

/// @brief Field _worldWidth, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldWidth, put=__cordl_internal_set__worldWidth)) float_t  _worldWidth;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method Awake, addr 0x18046dd20, size 0x230, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetValue, addr 0x18046df50, size 0x180, virtual false, abstract: false, final false
inline float_t GetValue(::UnityEngine::Vector3  testPos) ;

/// @brief Method GetX, addr 0x18046e0d0, size 0x20, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::AudioAmbienceZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x18046e0f0, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18046e160, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x18046e1e0, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_BottomLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_BottomLeft() ;

constexpr bool const& __cordl_internal_get_DebugMode() const;

constexpr bool& __cordl_internal_get_DebugMode() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_FalloffMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_FalloffMap() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_PlayCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_PlayCenter() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Sound() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_TopRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_TopRight() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__ambienceEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__ambienceEvent() ;

constexpr float_t const& __cordl_internal_get__currentVal() const;

constexpr float_t& __cordl_internal_get__currentVal() ;

constexpr float_t const& __cordl_internal_get__mapHeight() const;

constexpr float_t& __cordl_internal_get__mapHeight() ;

constexpr float_t const& __cordl_internal_get__mapWidth() const;

constexpr float_t& __cordl_internal_get__mapWidth() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__values() ;

constexpr float_t const& __cordl_internal_get__worldHeight() const;

constexpr float_t& __cordl_internal_get__worldHeight() ;

constexpr float_t const& __cordl_internal_get__worldWidth() const;

constexpr float_t& __cordl_internal_get__worldWidth() ;

constexpr void __cordl_internal_set_BottomLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_DebugMode(bool  value) ;

constexpr void __cordl_internal_set_FalloffMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_PlayCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_TopRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__ambienceEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__currentVal(float_t  value) ;

constexpr void __cordl_internal_set__mapHeight(float_t  value) ;

constexpr void __cordl_internal_set__mapWidth(float_t  value) ;

constexpr void __cordl_internal_set__values(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__worldHeight(float_t  value) ;

constexpr void __cordl_internal_set__worldWidth(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_XProviderIdentifier, addr 0x18046e3c0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioAmbienceZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioAmbienceZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioAmbienceZone(AudioAmbienceZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioAmbienceZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioAmbienceZone(AudioAmbienceZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17481};

/// @brief Field Sound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Sound;

/// @brief Field FalloffMap, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___FalloffMap;

/// @brief Field PlayCenter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___PlayCenter;

/// @brief Field BottomLeft, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___BottomLeft;

/// @brief Field TopRight, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___TopRight;

/// @brief Field DebugMode, offset: 0x48, size: 0x1, def value: None
 bool  ___DebugMode;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ____values;

/// @brief Field _worldWidth, offset: 0x58, size: 0x4, def value: None
 float_t  ____worldWidth;

/// @brief Field _worldHeight, offset: 0x5c, size: 0x4, def value: None
 float_t  ____worldHeight;

/// @brief Field _mapWidth, offset: 0x60, size: 0x4, def value: None
 float_t  ____mapWidth;

/// @brief Field _mapHeight, offset: 0x64, size: 0x4, def value: None
 float_t  ____mapHeight;

/// @brief Field _ambienceEvent, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____ambienceEvent;

/// @brief Field _currentVal, offset: 0x70, size: 0x4, def value: None
 float_t  ____currentVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ___Sound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ___FalloffMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ___PlayCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ___BottomLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ___TopRight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ___DebugMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ____values) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ____worldWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ____worldHeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ____mapWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ____mapHeight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ____ambienceEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAmbienceZone, ____currentVal) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioAmbienceZone) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
