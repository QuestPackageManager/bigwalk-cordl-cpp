#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/CanvasUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CanvasUI)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Mirror::Examples::Basic {
class CanvasUI;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Basic::CanvasUI*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Basic::CanvasUI*, "Mirror.Examples.Basic", "CanvasUI");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::Basic {
// Is value type: false
// CS Name: Mirror.Examples.Basic.CanvasUI
class CORDL_TYPE CanvasUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Mirror::Examples::Basic::CanvasUI>  instance;

/// @brief Field mainPanel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainPanel, put=__cordl_internal_set_mainPanel)) ::UnityW<::UnityEngine::RectTransform>  mainPanel;

/// @brief Field playersPanel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersPanel, put=__cordl_internal_set_playersPanel)) ::UnityW<::UnityEngine::RectTransform>  playersPanel;

/// @brief Method Awake, addr 0x181557960, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPlayersPanel, addr 0x181557990, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RectTransform> GetPlayersPanel() ;

static inline ::Mirror::Examples::Basic::CanvasUI* New_ctor() ;

/// @brief Method SetActive, addr 0x1815579c0, size 0x50, virtual false, abstract: false, final false
static inline void SetActive(bool  active) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_mainPanel() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_mainPanel() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_playersPanel() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_playersPanel() ;

constexpr void __cordl_internal_set_mainPanel(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_playersPanel(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::Basic::CanvasUI> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::Mirror::Examples::Basic::CanvasUI>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasUI(CanvasUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasUI(CanvasUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19346};

/// @brief Field mainPanel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___mainPanel;

/// @brief Field playersPanel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___playersPanel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Basic::CanvasUI, ___mainPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::CanvasUI, ___playersPanel) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Basic::CanvasUI) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::Basic
