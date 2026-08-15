#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicReactiveLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MusicReactiveLight)
namespace GlobalNamespace {
class MusicPlayer;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicReactiveLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicReactiveLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicReactiveLight*, "", "MusicReactiveLight");
// Dependencies PropertyBlockHelper, UnityEngine.Light, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicReactiveLight
class CORDL_TYPE MusicReactiveLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field amplitudeCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_amplitudeCurve, put=__cordl_internal_set_amplitudeCurve)) ::UnityEngine::AnimationCurve*  amplitudeCurve;

/// @brief Field lights, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lights, put=__cordl_internal_set_lights)) ::ArrayW<::UnityW<::UnityEngine::Light>>  lights;

/// @brief Field maxIntensity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxIntensity, put=__cordl_internal_set_maxIntensity)) float_t  maxIntensity;

/// @brief Field maxPropertyValue, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPropertyValue, put=__cordl_internal_set_maxPropertyValue)) float_t  maxPropertyValue;

/// @brief Field minIntensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minIntensity, put=__cordl_internal_set_minIntensity)) float_t  minIntensity;

/// @brief Field minPropertyValue, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_minPropertyValue, put=__cordl_internal_set_minPropertyValue)) float_t  minPropertyValue;

/// @brief Field musicPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicPlayer, put=__cordl_internal_set_musicPlayer)) ::UnityW<::GlobalNamespace::MusicPlayer>  musicPlayer;

/// @brief Field propertyHelpers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyHelpers, put=__cordl_internal_set_propertyHelpers)) ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  propertyHelpers;

/// @brief Field propertyName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyName, put=__cordl_internal_set_propertyName)) ::StringW  propertyName;

static inline ::GlobalNamespace::MusicReactiveLight* New_ctor() ;

/// @brief Method Update, addr 0x180405210, size 0x200, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_amplitudeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_amplitudeCurve() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Light>> const& __cordl_internal_get_lights() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Light>>& __cordl_internal_get_lights() ;

constexpr float_t const& __cordl_internal_get_maxIntensity() const;

constexpr float_t& __cordl_internal_get_maxIntensity() ;

constexpr float_t const& __cordl_internal_get_maxPropertyValue() const;

constexpr float_t& __cordl_internal_get_maxPropertyValue() ;

constexpr float_t const& __cordl_internal_get_minIntensity() const;

constexpr float_t& __cordl_internal_get_minIntensity() ;

constexpr float_t const& __cordl_internal_get_minPropertyValue() const;

constexpr float_t& __cordl_internal_get_minPropertyValue() ;

constexpr ::UnityW<::GlobalNamespace::MusicPlayer> const& __cordl_internal_get_musicPlayer() const;

constexpr ::UnityW<::GlobalNamespace::MusicPlayer>& __cordl_internal_get_musicPlayer() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& __cordl_internal_get_propertyHelpers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& __cordl_internal_get_propertyHelpers() ;

constexpr ::StringW const& __cordl_internal_get_propertyName() const;

constexpr ::StringW& __cordl_internal_get_propertyName() ;

constexpr void __cordl_internal_set_amplitudeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lights(::ArrayW<::UnityW<::UnityEngine::Light>>  value) ;

constexpr void __cordl_internal_set_maxIntensity(float_t  value) ;

constexpr void __cordl_internal_set_maxPropertyValue(float_t  value) ;

constexpr void __cordl_internal_set_minIntensity(float_t  value) ;

constexpr void __cordl_internal_set_minPropertyValue(float_t  value) ;

constexpr void __cordl_internal_set_musicPlayer(::UnityW<::GlobalNamespace::MusicPlayer>  value) ;

constexpr void __cordl_internal_set_propertyHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value) ;

constexpr void __cordl_internal_set_propertyName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicReactiveLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicReactiveLight", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicReactiveLight(MusicReactiveLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicReactiveLight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicReactiveLight(MusicReactiveLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5053};

/// @brief Field musicPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicPlayer>  ___musicPlayer;

/// @brief Field amplitudeCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___amplitudeCurve;

/// @brief Field lights, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Light>>  ___lights;

/// @brief Field minIntensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___minIntensity;

/// @brief Field maxIntensity, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxIntensity;

/// @brief Field propertyHelpers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  ___propertyHelpers;

/// @brief Field propertyName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___propertyName;

/// @brief Field minPropertyValue, offset: 0x50, size: 0x4, def value: None
 float_t  ___minPropertyValue;

/// @brief Field maxPropertyValue, offset: 0x54, size: 0x4, def value: None
 float_t  ___maxPropertyValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___musicPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___amplitudeCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___lights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___minIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___maxIntensity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___propertyHelpers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___propertyName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___minPropertyValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicReactiveLight, ___maxPropertyValue) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicReactiveLight) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
