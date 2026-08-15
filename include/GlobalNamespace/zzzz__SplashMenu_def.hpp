#pragma once
// IWYU pragma private; include "GlobalNamespace/SplashMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplashMenu)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class SplashMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SplashMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplashMenu*, "", "SplashMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplashMenu
class CORDL_TYPE SplashMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _entryTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__entryTime, put=__cordl_internal_set__entryTime)) float_t  _entryTime;

/// @brief Field alphaCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_alphaCurve, put=__cordl_internal_set_alphaCurve)) ::UnityEngine::AnimationCurve*  alphaCurve;

/// @brief Field duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field fadeGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeGroup, put=__cordl_internal_set_fadeGroup)) ::UnityW<::UnityEngine::CanvasGroup>  fadeGroup;

/// @brief Method ActionContinue, addr 0x180440110, size 0xb0, virtual false, abstract: false, final false
inline void ActionContinue() ;

/// @brief Method GoToTitleMenu, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void GoToTitleMenu() ;

static inline ::GlobalNamespace::SplashMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804401c0, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1804401e0, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__entryTime() const;

constexpr float_t& __cordl_internal_get__entryTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_alphaCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_alphaCurve() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_fadeGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_fadeGroup() ;

constexpr void __cordl_internal_set__entryTime(float_t  value) ;

constexpr void __cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_fadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplashMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplashMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplashMenu(SplashMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplashMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplashMenu(SplashMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5305};

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field alphaCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___alphaCurve;

/// @brief Field fadeGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___fadeGroup;

/// @brief Field _entryTime, offset: 0x38, size: 0x4, def value: None
 float_t  ____entryTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplashMenu, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplashMenu, ___alphaCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplashMenu, ___fadeGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplashMenu, ____entryTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplashMenu) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
