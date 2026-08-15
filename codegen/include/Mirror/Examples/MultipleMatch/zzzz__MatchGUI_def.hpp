#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MatchGUI)
namespace Mirror::Examples::MultipleMatch {
class CanvasController;
}
namespace Mirror::Examples::MultipleMatch {
struct MatchInfo;
}
namespace System {
struct Guid;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
class MatchGUI;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleMatch::MatchGUI*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchGUI*, "Mirror.Examples.MultipleMatch", "MatchGUI");
// Dependencies System.Guid, UnityEngine.MonoBehaviour
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.MatchGUI
class CORDL_TYPE MatchGUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field canvasController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasController, put=__cordl_internal_set_canvasController)) ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  canvasController;

/// @brief Field image, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_image, put=__cordl_internal_set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

/// @brief Field matchId, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_matchId, put=__cordl_internal_set_matchId)) ::System::Guid  matchId;

/// @brief Field matchName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchName, put=__cordl_internal_set_matchName)) ::UnityW<::UnityEngine::UI::Text>  matchName;

/// @brief Field playerCount, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCount, put=__cordl_internal_set_playerCount)) ::UnityW<::UnityEngine::UI::Text>  playerCount;

/// @brief Field toggleButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleButton, put=__cordl_internal_set_toggleButton)) ::UnityW<::UnityEngine::UI::Toggle>  toggleButton;

/// @brief Method Awake, addr 0x18155c980, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetMatchId, addr 0x18155ca10, size 0x50, virtual false, abstract: false, final false
inline ::System::Guid GetMatchId() ;

static inline ::Mirror::Examples::MultipleMatch::MatchGUI* New_ctor() ;

/// @brief Method OnToggleClicked, addr 0x18155ca60, size 0x230, virtual false, abstract: false, final false
inline void OnToggleClicked() ;

/// @brief Method SetMatchInfo, addr 0x18155cc90, size 0x110, virtual false, abstract: false, final false
inline void SetMatchInfo(::Mirror::Examples::MultipleMatch::MatchInfo  infos) ;

/// @brief Method <Awake>b__6_0, addr 0x18155cda0, size 0x10, virtual false, abstract: false, final false
inline void _Awake_b__6_0(bool  _p0_) ;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController> const& __cordl_internal_get_canvasController() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>& __cordl_internal_get_canvasController() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_image() ;

constexpr ::System::Guid const& __cordl_internal_get_matchId() const;

constexpr ::System::Guid& __cordl_internal_get_matchId() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_matchName() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_matchName() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerCount() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerCount() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_toggleButton() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_toggleButton() ;

constexpr void __cordl_internal_set_canvasController(::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  value) ;

constexpr void __cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_matchId(::System::Guid  value) ;

constexpr void __cordl_internal_set_matchName(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_playerCount(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_toggleButton(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchGUI(MatchGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchGUI(MatchGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19301};

/// @brief Field matchId, offset: 0x20, size: 0x10, def value: None
 ::System::Guid  ___matchId;

/// @brief Field image, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___image;

/// @brief Field toggleButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ___toggleButton;

/// @brief Field matchName, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___matchName;

/// @brief Field playerCount, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerCount;

/// @brief Field canvasController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  ___canvasController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchGUI, ___matchId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchGUI, ___image) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchGUI, ___toggleButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchGUI, ___matchName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchGUI, ___playerCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchGUI, ___canvasController) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchGUI) == 0x58, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
