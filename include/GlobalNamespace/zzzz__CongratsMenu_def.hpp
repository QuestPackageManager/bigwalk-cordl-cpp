#pragma once
// IWYU pragma private; include "GlobalNamespace/CongratsMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HouseHouse/Medal/zzzz__MedalType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CongratsMenu)
namespace GlobalNamespace {
class ManagedButton;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class CongratsMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CongratsMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CongratsMenu*, "", "CongratsMenu");
// Dependencies HouseHouse.Medal.MedalType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CongratsMenu
class CORDL_TYPE CongratsMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field continueButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_continueButton, put=__cordl_internal_set_continueButton)) ::UnityW<::GlobalNamespace::ManagedButton>  continueButton;

/// @brief Field fadeGroup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeGroup, put=__cordl_internal_set_fadeGroup)) ::UnityW<::UnityEngine::CanvasGroup>  fadeGroup;

/// @brief Field fadeInCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeInCurve, put=__cordl_internal_set_fadeInCurve)) ::UnityEngine::AnimationCurve*  fadeInCurve;

/// @brief Field medalType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_medalType, put=__cordl_internal_set_medalType)) ::HouseHouse::Medal::MedalType  medalType;

/// @brief Field menuOpenTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_menuOpenTime, put=__cordl_internal_set_menuOpenTime)) float_t  menuOpenTime;

/// @brief Field revealButtonTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_revealButtonTime, put=__cordl_internal_set_revealButtonTime)) float_t  revealButtonTime;

/// @brief Method ActionContinue, addr 0x1804310c0, size 0x90, virtual false, abstract: false, final false
inline void ActionContinue() ;

/// @brief Method GoToTitleMenu, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void GoToTitleMenu() ;

static inline ::GlobalNamespace::CongratsMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804311c0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x180431210, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& __cordl_internal_get_continueButton() const;

constexpr ::UnityW<::GlobalNamespace::ManagedButton>& __cordl_internal_get_continueButton() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_fadeGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_fadeGroup() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_fadeInCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_fadeInCurve() ;

constexpr ::HouseHouse::Medal::MedalType const& __cordl_internal_get_medalType() const;

constexpr ::HouseHouse::Medal::MedalType& __cordl_internal_get_medalType() ;

constexpr float_t const& __cordl_internal_get_menuOpenTime() const;

constexpr float_t& __cordl_internal_get_menuOpenTime() ;

constexpr float_t const& __cordl_internal_get_revealButtonTime() const;

constexpr float_t& __cordl_internal_get_revealButtonTime() ;

constexpr void __cordl_internal_set_continueButton(::UnityW<::GlobalNamespace::ManagedButton>  value) ;

constexpr void __cordl_internal_set_fadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_fadeInCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value) ;

constexpr void __cordl_internal_set_menuOpenTime(float_t  value) ;

constexpr void __cordl_internal_set_revealButtonTime(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CongratsMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CongratsMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CongratsMenu(CongratsMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CongratsMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CongratsMenu(CongratsMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5275};

/// @brief Field fadeInCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___fadeInCurve;

/// @brief Field fadeGroup, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___fadeGroup;

/// @brief Field revealButtonTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___revealButtonTime;

/// @brief Field continueButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ManagedButton>  ___continueButton;

/// @brief Field medalType, offset: 0x40, size: 0x4, def value: None
 ::HouseHouse::Medal::MedalType  ___medalType;

/// @brief Field menuOpenTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___menuOpenTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CongratsMenu, ___fadeInCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CongratsMenu, ___fadeGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CongratsMenu, ___revealButtonTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CongratsMenu, ___continueButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CongratsMenu, ___medalType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CongratsMenu, ___menuOpenTime) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CongratsMenu) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
