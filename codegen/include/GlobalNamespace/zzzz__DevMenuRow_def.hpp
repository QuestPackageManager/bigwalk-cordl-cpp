#pragma once
// IWYU pragma private; include "GlobalNamespace/DevMenuRow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DevMenuRow)
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class DevMenuRow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevMenuRow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevMenuRow*, "", "DevMenuRow");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevMenuRow
class CORDL_TYPE DevMenuRow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field button, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::UnityEngine::UI::Button>  button;

/// @brief Field labelText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_labelText, put=__cordl_internal_set_labelText)) ::UnityW<::GlobalNamespace::LocalizedText>  labelText;

/// @brief Method Assign, addr 0x180420ce0, size 0x60, virtual false, abstract: false, final false
inline void Assign(::StringW  label, ::UnityEngine::Events::UnityAction*  action) ;

static inline ::GlobalNamespace::DevMenuRow* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_button() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_labelText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_labelText() ;

constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_labelText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevMenuRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevMenuRow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevMenuRow(DevMenuRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevMenuRow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevMenuRow(DevMenuRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5216};

/// @brief Field labelText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___labelText;

/// @brief Field button, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___button;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevMenuRow, ___labelText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevMenuRow, ___button) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevMenuRow) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
