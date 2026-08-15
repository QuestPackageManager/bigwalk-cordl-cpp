#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/CellGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/Examples/MultipleMatch/zzzz__CellValue_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CellGUI)
namespace Mirror::Examples::MultipleMatch {
class MatchController;
}
namespace Mirror {
class NetworkIdentity;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
class CellGUI;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleMatch::CellGUI*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::CellGUI*, "Mirror.Examples.MultipleMatch", "CellGUI");
// Dependencies Mirror.Examples.MultipleMatch.CellValue, UnityEngine.MonoBehaviour
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.CellGUI
class CORDL_TYPE CellGUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field button, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::UnityEngine::UI::Button>  button;

/// @brief Field cellValue, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get_cellValue, put=__cordl_internal_set_cellValue)) ::Mirror::Examples::MultipleMatch::CellValue  cellValue;

/// @brief Field image, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_image, put=__cordl_internal_set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

/// @brief Field matchController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchController, put=__cordl_internal_set_matchController)) ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  matchController;

/// @brief Field playerIdentity, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerIdentity, put=__cordl_internal_set_playerIdentity)) ::UnityW<::Mirror::NetworkIdentity>  playerIdentity;

/// @brief Method Awake, addr 0x181557a10, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MakePlay, addr 0x181557a50, size 0x120, virtual false, abstract: false, final false
inline void MakePlay() ;

static inline ::Mirror::Examples::MultipleMatch::CellGUI* New_ctor() ;

/// @brief Method SetPlayer, addr 0x181557b70, size 0x140, virtual false, abstract: false, final false
inline void SetPlayer(::Mirror::NetworkIdentity*  playerIdentity) ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_button() ;

constexpr ::Mirror::Examples::MultipleMatch::CellValue const& __cordl_internal_get_cellValue() const;

constexpr ::Mirror::Examples::MultipleMatch::CellValue& __cordl_internal_get_cellValue() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_image() ;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController> const& __cordl_internal_get_matchController() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>& __cordl_internal_get_matchController() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get_playerIdentity() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get_playerIdentity() ;

constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_cellValue(::Mirror::Examples::MultipleMatch::CellValue  value) ;

constexpr void __cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_matchController(::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  value) ;

constexpr void __cordl_internal_set_playerIdentity(::UnityW<::Mirror::NetworkIdentity>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CellGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CellGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CellGUI(CellGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CellGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CellGUI(CellGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19297};

/// @brief Field matchController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  ___matchController;

/// @brief Field cellValue, offset: 0x28, size: 0x2, def value: None
 ::Mirror::Examples::MultipleMatch::CellValue  ___cellValue;

/// @brief Field image, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___image;

/// @brief Field button, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___button;

/// @brief Field playerIdentity, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ___playerIdentity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::CellGUI, ___matchController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CellGUI, ___cellValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CellGUI, ___image) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CellGUI, ___button) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CellGUI, ___playerIdentity) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::CellGUI) == 0x48, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
