#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuFade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MenuFade)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuFade;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenuFade*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuFade*, "", "MenuFade");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuFade
class CORDL_TYPE MenuFade : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _entryTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__entryTime, put=__cordl_internal_set__entryTime)) float_t  _entryTime;

/// @brief Field alphaCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_alphaCurve, put=__cordl_internal_set_alphaCurve)) ::UnityEngine::AnimationCurve*  alphaCurve;

/// @brief Field duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field fadeGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeGroup, put=__cordl_internal_set_fadeGroup)) ::UnityW<::UnityEngine::CanvasGroup>  fadeGroup;

/// @brief Field fadeImage, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeImage, put=__cordl_internal_set_fadeImage)) ::UnityW<::UnityEngine::UI::Image>  fadeImage;

static inline ::GlobalNamespace::MenuFade* New_ctor() ;

/// @brief Method OnDisable, addr 0x180424e60, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180424e70, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetFadeAlpha, addr 0x180424ee0, size 0xf0, virtual false, abstract: false, final false
inline void SetFadeAlpha(float_t  alpha) ;

/// @brief Method Update, addr 0x180424fd0, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__entryTime() const;

constexpr float_t& __cordl_internal_get__entryTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_alphaCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_alphaCurve() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_fadeGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_fadeGroup() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_fadeImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_fadeImage() ;

constexpr void __cordl_internal_set__entryTime(float_t  value) ;

constexpr void __cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_fadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_fadeImage(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenuFade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenuFade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuFade(MenuFade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuFade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuFade(MenuFade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5232};

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field alphaCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___alphaCurve;

/// @brief Field fadeGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___fadeGroup;

/// @brief Field fadeImage, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___fadeImage;

/// @brief Field _entryTime, offset: 0x40, size: 0x4, def value: None
 float_t  ____entryTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuFade, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuFade, ___alphaCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuFade, ___fadeGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuFade, ___fadeImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuFade, ____entryTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuFade) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
