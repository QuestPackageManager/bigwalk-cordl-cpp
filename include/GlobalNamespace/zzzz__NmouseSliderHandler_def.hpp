#pragma once
// IWYU pragma private; include "GlobalNamespace/NmouseSliderHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NmouseSliderHandler)
namespace Rewired::Components {
class PlayerMouse;
}
namespace Rewired::Integration::UnityUI {
class RewiredStandaloneInputModule;
}
namespace Rewired {
class Player;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class NmouseSliderHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NmouseSliderHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NmouseSliderHandler*, "", "NmouseSliderHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NmouseSliderHandler
class CORDL_TYPE NmouseSliderHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isDragging, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDragging, put=__cordl_internal_set_isDragging)) bool  isDragging;

/// @brief Field leftClickActionName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftClickActionName, put=__cordl_internal_set_leftClickActionName)) ::StringW  leftClickActionName;

/// @brief Field player, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::Rewired::Player*  player;

/// @brief Field playerId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerId, put=__cordl_internal_set_playerId)) int32_t  playerId;

/// @brief Field playerMouse, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerMouse, put=__cordl_internal_set_playerMouse)) ::UnityW<::Rewired::Components::PlayerMouse>  playerMouse;

/// @brief Field rewiredInputModule, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rewiredInputModule, put=__cordl_internal_set_rewiredInputModule)) ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  rewiredInputModule;

/// @brief Field slider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_slider, put=__cordl_internal_set_slider)) ::UnityW<::UnityEngine::UI::Slider>  slider;

/// @brief Field sliderRect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sliderRect, put=__cordl_internal_set_sliderRect)) ::UnityW<::UnityEngine::RectTransform>  sliderRect;

/// @brief Method Awake, addr 0x18037ef20, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::NmouseSliderHandler* New_ctor() ;

/// @brief Method OnDisable, addr 0x18037ef50, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Start, addr 0x18037ef90, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateNMouseStatus, addr 0x18037f010, size 0x200, virtual false, abstract: false, final false
inline void UpdateNMouseStatus() ;

/// @brief Method UpdateSliderValue, addr 0x18037f210, size 0x100, virtual false, abstract: false, final false
inline void UpdateSliderValue(::UnityEngine::Vector2  mouseScreenPos) ;

constexpr bool const& __cordl_internal_get_isDragging() const;

constexpr bool& __cordl_internal_get_isDragging() ;

constexpr ::StringW const& __cordl_internal_get_leftClickActionName() const;

constexpr ::StringW& __cordl_internal_get_leftClickActionName() ;

constexpr ::Rewired::Player* const& __cordl_internal_get_player() const;

constexpr ::Rewired::Player*& __cordl_internal_get_player() ;

constexpr int32_t const& __cordl_internal_get_playerId() const;

constexpr int32_t& __cordl_internal_get_playerId() ;

constexpr ::UnityW<::Rewired::Components::PlayerMouse> const& __cordl_internal_get_playerMouse() const;

constexpr ::UnityW<::Rewired::Components::PlayerMouse>& __cordl_internal_get_playerMouse() ;

constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule> const& __cordl_internal_get_rewiredInputModule() const;

constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>& __cordl_internal_get_rewiredInputModule() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_slider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_slider() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_sliderRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_sliderRect() ;

constexpr void __cordl_internal_set_isDragging(bool  value) ;

constexpr void __cordl_internal_set_leftClickActionName(::StringW  value) ;

constexpr void __cordl_internal_set_player(::Rewired::Player*  value) ;

constexpr void __cordl_internal_set_playerId(int32_t  value) ;

constexpr void __cordl_internal_set_playerMouse(::UnityW<::Rewired::Components::PlayerMouse>  value) ;

constexpr void __cordl_internal_set_rewiredInputModule(::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  value) ;

constexpr void __cordl_internal_set_slider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set_sliderRect(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x18037f310, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NmouseSliderHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NmouseSliderHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NmouseSliderHandler(NmouseSliderHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NmouseSliderHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NmouseSliderHandler(NmouseSliderHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5549};

/// @brief Field playerId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___playerId;

/// @brief Field sliderRect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___sliderRect;

/// @brief Field leftClickActionName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___leftClickActionName;

/// @brief Field playerMouse, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Rewired::Components::PlayerMouse>  ___playerMouse;

/// @brief Field rewiredInputModule, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  ___rewiredInputModule;

/// @brief Field slider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___slider;

/// @brief Field player, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Player*  ___player;

/// @brief Field isDragging, offset: 0x58, size: 0x1, def value: None
 bool  ___isDragging;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___playerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___sliderRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___leftClickActionName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___playerMouse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___rewiredInputModule) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___slider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___player) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NmouseSliderHandler, ___isDragging) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NmouseSliderHandler) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
