#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleNavigationOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConsoleNavigationOverride)
namespace UnityEngine::UI {
class Selectable;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsoleNavigationOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConsoleNavigationOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleNavigationOverride*, "", "ConsoleNavigationOverride");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.UI.Navigation
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleNavigationOverride
class CORDL_TYPE ConsoleNavigationOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field navigation, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_navigation, put=__cordl_internal_set_navigation)) ::UnityEngine::UI::Navigation  navigation;

/// @brief Field selectable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectable, put=__cordl_internal_set_selectable)) ::UnityW<::UnityEngine::UI::Selectable>  selectable;

static inline ::GlobalNamespace::ConsoleNavigationOverride* New_ctor() ;

constexpr ::UnityEngine::UI::Navigation const& __cordl_internal_get_navigation() const;

constexpr ::UnityEngine::UI::Navigation& __cordl_internal_get_navigation() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get_selectable() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get_selectable() ;

constexpr void __cordl_internal_set_navigation(::UnityEngine::UI::Navigation  value) ;

constexpr void __cordl_internal_set_selectable(::UnityW<::UnityEngine::UI::Selectable>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsoleNavigationOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsoleNavigationOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsoleNavigationOverride(ConsoleNavigationOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleNavigationOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsoleNavigationOverride(ConsoleNavigationOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5521};

/// @brief Field selectable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ___selectable;

/// @brief Field navigation, offset: 0x28, size: 0x28, def value: None
 ::UnityEngine::UI::Navigation  ___navigation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleNavigationOverride, ___selectable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleNavigationOverride, ___navigation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsoleNavigationOverride) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
