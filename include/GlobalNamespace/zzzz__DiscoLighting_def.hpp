#pragma once
// IWYU pragma private; include "GlobalNamespace/DiscoLighting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscoLighting)
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class DiscoLighting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DiscoLighting*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DiscoLighting*, "", "DiscoLighting");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DiscoLighting
class CORDL_TYPE DiscoLighting : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Field Lighting, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lighting, put=__cordl_internal_set_Lighting)) ::UnityW<::UnityEngine::Light>  Lighting;

/// @brief Field _audibleGroups, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__audibleGroups, put=__cordl_internal_set__audibleGroups)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  _audibleGroups;

/// @brief Field _beatInPeriod, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__beatInPeriod, put=__cordl_internal_set__beatInPeriod)) int32_t  _beatInPeriod;

/// @brief Field _beatInterval, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__beatInterval, put=__cordl_internal_set__beatInterval)) float_t  _beatInterval;

/// @brief Field _currentHue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__currentHue, put=setStaticF__currentHue)) float_t  _currentHue;

/// @brief Field _currentIntensity, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentIntensity, put=__cordl_internal_set__currentIntensity)) float_t  _currentIntensity;

/// @brief Field _currentLightingColor, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentLightingColor, put=__cordl_internal_set__currentLightingColor)) ::UnityEngine::Color  _currentLightingColor;

/// @brief Field _currentMeshColor, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentMeshColor, put=__cordl_internal_set__currentMeshColor)) ::UnityEngine::Color  _currentMeshColor;

/// @brief Field _initialLightingColor, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__initialLightingColor, put=__cordl_internal_set__initialLightingColor)) ::UnityEngine::Color  _initialLightingColor;

/// @brief Field _initialMeshColor, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get__initialMeshColor, put=__cordl_internal_set__initialMeshColor)) ::UnityEngine::Color  _initialMeshColor;

/// @brief Field _lastBeatTime, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastBeatTime, put=__cordl_internal_set__lastBeatTime)) float_t  _lastBeatTime;

/// @brief Field _lastVol, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastVol, put=__cordl_internal_set__lastVol)) float_t  _lastVol;

/// @brief Field _nextColor, offset 0xac, size 0x10 
 __declspec(property(get=__cordl_internal_get__nextColor, put=__cordl_internal_set__nextColor)) ::UnityEngine::Color  _nextColor;

/// @brief Field _nextHueDiff, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextHueDiff, put=__cordl_internal_set__nextHueDiff)) float_t  _nextHueDiff;

/// @brief Field _targetLightingColor, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetLightingColor, put=__cordl_internal_set__targetLightingColor)) ::UnityEngine::Color  _targetLightingColor;

/// @brief Field _targetMeshColor, offset 0x7c, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetMeshColor, put=__cordl_internal_set__targetMeshColor)) ::UnityEngine::Color  _targetMeshColor;

/// @brief Field offset, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int32_t  offset;

/// @brief Field period, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_period, put=__cordl_internal_set_period)) int32_t  period;

/// @brief Field propertyBlockHelper, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelper, put=__cordl_internal_set_propertyBlockHelper)) ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field specificColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_specificColor, put=__cordl_internal_set_specificColor)) ::UnityEngine::Color  specificColor;

/// @brief Field useSpecificColor, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSpecificColor, put=__cordl_internal_set_useSpecificColor)) bool  useSpecificColor;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x180332830, size 0x2f0, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method Awake, addr 0x180332b20, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ColorHSVDiff, addr 0x180332bc0, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Color ColorHSVDiff(::UnityEngine::Color  color, float_t  hueDiff, float_t  saturationDiff, float_t  valueDiff) ;

/// @brief Method GetNextColor, addr 0x180332cd0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetNextColor() ;

static inline ::GlobalNamespace::DiscoLighting* New_ctor() ;

/// @brief Method OnBeat, addr 0x180332d90, size 0x410, virtual false, abstract: false, final false
inline void OnBeat(::GlobalNamespace::MusicGroup*  musicGroup, int32_t  beat, float_t  maxVol) ;

/// @brief Method OnDisable, addr 0x1803331a0, size 0x200, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803333a0, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnNoBeatAudible, addr 0x1803334c0, size 0x110, virtual false, abstract: false, final false
inline void OnNoBeatAudible(::GlobalNamespace::MusicGroup*  musicGroup) ;

/// @brief Method SetMeshAndLight, addr 0x1803335d0, size 0xc0, virtual false, abstract: false, final false
inline void SetMeshAndLight(::UnityEngine::Color  lightColor, ::UnityEngine::Color  meshColor) ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_Lighting() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_Lighting() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>* const& __cordl_internal_get__audibleGroups() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*& __cordl_internal_get__audibleGroups() ;

constexpr int32_t const& __cordl_internal_get__beatInPeriod() const;

constexpr int32_t& __cordl_internal_get__beatInPeriod() ;

constexpr float_t const& __cordl_internal_get__beatInterval() const;

constexpr float_t& __cordl_internal_get__beatInterval() ;

constexpr float_t const& __cordl_internal_get__currentIntensity() const;

constexpr float_t& __cordl_internal_get__currentIntensity() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentLightingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentLightingColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentMeshColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentMeshColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__initialLightingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__initialLightingColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__initialMeshColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__initialMeshColor() ;

constexpr float_t const& __cordl_internal_get__lastBeatTime() const;

constexpr float_t& __cordl_internal_get__lastBeatTime() ;

constexpr float_t const& __cordl_internal_get__lastVol() const;

constexpr float_t& __cordl_internal_get__lastVol() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__nextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__nextColor() ;

constexpr float_t const& __cordl_internal_get__nextHueDiff() const;

constexpr float_t& __cordl_internal_get__nextHueDiff() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__targetLightingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__targetLightingColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__targetMeshColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__targetMeshColor() ;

constexpr int32_t const& __cordl_internal_get_offset() const;

constexpr int32_t& __cordl_internal_get_offset() ;

constexpr int32_t const& __cordl_internal_get_period() const;

constexpr int32_t& __cordl_internal_get_period() ;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& __cordl_internal_get_propertyBlockHelper() const;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& __cordl_internal_get_propertyBlockHelper() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_specificColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_specificColor() ;

constexpr bool const& __cordl_internal_get_useSpecificColor() const;

constexpr bool& __cordl_internal_get_useSpecificColor() ;

constexpr void __cordl_internal_set_Lighting(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__audibleGroups(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  value) ;

constexpr void __cordl_internal_set__beatInPeriod(int32_t  value) ;

constexpr void __cordl_internal_set__beatInterval(float_t  value) ;

constexpr void __cordl_internal_set__currentIntensity(float_t  value) ;

constexpr void __cordl_internal_set__currentLightingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentMeshColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__initialLightingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__initialMeshColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__lastBeatTime(float_t  value) ;

constexpr void __cordl_internal_set__lastVol(float_t  value) ;

constexpr void __cordl_internal_set__nextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__nextHueDiff(float_t  value) ;

constexpr void __cordl_internal_set__targetLightingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__targetMeshColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_offset(int32_t  value) ;

constexpr void __cordl_internal_set_period(int32_t  value) ;

constexpr void __cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_specificColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_useSpecificColor(bool  value) ;

/// @brief Method .ctor, addr 0x180333690, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF__currentHue() ;

/// @brief Method get_Initialized, addr 0x1802dc4d0, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

static inline void setStaticF__currentHue(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiscoLighting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiscoLighting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiscoLighting(DiscoLighting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiscoLighting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiscoLighting(DiscoLighting const& ) = delete;

/// @brief Field HUE_STEP offset 0xffffffff size 0x4
static constexpr float_t  HUE_STEP{static_cast<float_t>(0.3f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4826};

/// @brief Field Lighting, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___Lighting;

/// @brief Field propertyBlockHelper, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  ___propertyBlockHelper;

/// @brief Field period, offset: 0x30, size: 0x4, def value: None
 int32_t  ___period;

/// @brief Field offset, offset: 0x34, size: 0x4, def value: None
 int32_t  ___offset;

/// @brief Field useSpecificColor, offset: 0x38, size: 0x1, def value: None
 bool  ___useSpecificColor;

/// @brief Field specificColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___specificColor;

/// @brief Field _initialLightingColor, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ____initialLightingColor;

/// @brief Field _initialMeshColor, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Color  ____initialMeshColor;

/// @brief Field _targetLightingColor, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Color  ____targetLightingColor;

/// @brief Field _targetMeshColor, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Color  ____targetMeshColor;

/// @brief Field _currentLightingColor, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentLightingColor;

/// @brief Field _currentMeshColor, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentMeshColor;

/// @brief Field _nextColor, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Color  ____nextColor;

/// @brief Field _nextHueDiff, offset: 0xbc, size: 0x4, def value: None
 float_t  ____nextHueDiff;

/// @brief Field _currentIntensity, offset: 0xc0, size: 0x4, def value: None
 float_t  ____currentIntensity;

/// @brief Field _audibleGroups, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicGroup>>*  ____audibleGroups;

/// @brief Field _beatInterval, offset: 0xd0, size: 0x4, def value: None
 float_t  ____beatInterval;

/// @brief Field _lastBeatTime, offset: 0xd4, size: 0x4, def value: None
 float_t  ____lastBeatTime;

/// @brief Field _lastVol, offset: 0xd8, size: 0x4, def value: None
 float_t  ____lastVol;

/// @brief Field _beatInPeriod, offset: 0xdc, size: 0x4, def value: None
 int32_t  ____beatInPeriod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiscoLighting, ___Lighting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ___propertyBlockHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ___period) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ___offset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ___useSpecificColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ___specificColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____initialLightingColor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____initialMeshColor) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____targetLightingColor) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____targetMeshColor) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____currentLightingColor) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____currentMeshColor) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____nextColor) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____nextHueDiff) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____currentIntensity) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____audibleGroups) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____beatInterval) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____lastBeatTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____lastVol) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoLighting, ____beatInPeriod) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DiscoLighting) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
