#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindRow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RebindRow)
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
class RebindAction;
}
namespace UnityEngine::UI {
class Selectable;
}
// Forward declare root types
namespace GlobalNamespace {
class RebindRow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RebindRow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindRow*, "", "RebindRow");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RebindRow
class CORDL_TYPE RebindRow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field button, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::UnityEngine::UI::Selectable>  button;

/// @brief Field label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::UnityW<::GlobalNamespace::LocalizedText>  label;

/// @brief Field rebindAction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindAction, put=__cordl_internal_set_rebindAction)) ::GlobalNamespace::RebindAction*  rebindAction;

/// @brief Field status, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::UnityW<::GlobalNamespace::LocalizedText>  status;

/// @brief Method ActionBack, addr 0x1804547d0, size 0x30, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method Clear, addr 0x180454800, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GlobalNamespace::RebindRow* New_ctor() ;

/// @brief Method SelectToRebind, addr 0x180454820, size 0x20, virtual false, abstract: false, final false
inline void SelectToRebind() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get_button() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_label() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_label() ;

constexpr ::GlobalNamespace::RebindAction* const& __cordl_internal_get_rebindAction() const;

constexpr ::GlobalNamespace::RebindAction*& __cordl_internal_get_rebindAction() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_status() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::UI::Selectable>  value) ;

constexpr void __cordl_internal_set_label(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_rebindAction(::GlobalNamespace::RebindAction*  value) ;

constexpr void __cordl_internal_set_status(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RebindRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RebindRow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RebindRow(RebindRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RebindRow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RebindRow(RebindRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5320};

/// @brief Field label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___label;

/// @brief Field status, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___status;

/// @brief Field rebindAction, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::RebindAction*  ___rebindAction;

/// @brief Field button, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ___button;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RebindRow, ___label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindRow, ___status) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindRow, ___rebindAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindRow, ___button) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RebindRow) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
