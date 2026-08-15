#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsMenu)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreditsMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreditsMenu*, "", "CreditsMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsMenu
class CORDL_TYPE CreditsMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field elapsedTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedTime, put=__cordl_internal_set_elapsedTime)) float_t  elapsedTime;

/// @brief Field fastForwardMultiplier, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastForwardMultiplier, put=__cordl_internal_set_fastForwardMultiplier)) float_t  fastForwardMultiplier;

/// @brief Field mouse0Cleared, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_mouse0Cleared, put=__cordl_internal_set_mouse0Cleared)) bool  mouse0Cleared;

/// @brief Field mouse1Cleared, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_mouse1Cleared, put=__cordl_internal_set_mouse1Cleared)) bool  mouse1Cleared;

/// @brief Field rectTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rectTransform, put=__cordl_internal_set_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  rectTransform;

/// @brief Field rewindMultiplier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rewindMultiplier, put=__cordl_internal_set_rewindMultiplier)) float_t  rewindMultiplier;

/// @brief Method ActionGoToTitleMenu, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void ActionGoToTitleMenu() ;

static inline ::GlobalNamespace::CreditsMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x180431580, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1804315a0, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_elapsedTime() const;

constexpr float_t& __cordl_internal_get_elapsedTime() ;

constexpr float_t const& __cordl_internal_get_fastForwardMultiplier() const;

constexpr float_t& __cordl_internal_get_fastForwardMultiplier() ;

constexpr bool const& __cordl_internal_get_mouse0Cleared() const;

constexpr bool& __cordl_internal_get_mouse0Cleared() ;

constexpr bool const& __cordl_internal_get_mouse1Cleared() const;

constexpr bool& __cordl_internal_get_mouse1Cleared() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_rectTransform() ;

constexpr float_t const& __cordl_internal_get_rewindMultiplier() const;

constexpr float_t& __cordl_internal_get_rewindMultiplier() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_elapsedTime(float_t  value) ;

constexpr void __cordl_internal_set_fastForwardMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_mouse0Cleared(bool  value) ;

constexpr void __cordl_internal_set_mouse1Cleared(bool  value) ;

constexpr void __cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_rewindMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsMenu(CreditsMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsMenu(CreditsMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5279};

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field elapsedTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___elapsedTime;

/// @brief Field rectTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___rectTransform;

/// @brief Field fastForwardMultiplier, offset: 0x30, size: 0x4, def value: None
 float_t  ___fastForwardMultiplier;

/// @brief Field rewindMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  ___rewindMultiplier;

/// @brief Field mouse0Cleared, offset: 0x38, size: 0x1, def value: None
 bool  ___mouse0Cleared;

/// @brief Field mouse1Cleared, offset: 0x39, size: 0x1, def value: None
 bool  ___mouse1Cleared;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsMenu, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsMenu, ___elapsedTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsMenu, ___rectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsMenu, ___fastForwardMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsMenu, ___rewindMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsMenu, ___mouse0Cleared) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsMenu, ___mouse1Cleared) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreditsMenu) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
