#pragma once
// IWYU pragma private; include "GlobalNamespace/TouchlessButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Button_def.hpp"
CORDL_MODULE_EXPORT(TouchlessButton)
// Forward declare root types
namespace GlobalNamespace {
class TouchlessButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TouchlessButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TouchlessButton*, "", "TouchlessButton");
// Dependencies UnityEngine.UI.Button
namespace GlobalNamespace {
// Is value type: false
// CS Name: TouchlessButton
class CORDL_TYPE TouchlessButton : public ::UnityEngine::UI::Button {
public:
// Declarations
static inline ::GlobalNamespace::TouchlessButton* New_ctor() ;

/// @brief Method .ctor, addr 0x1803899b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchlessButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchlessButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchlessButton(TouchlessButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchlessButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchlessButton(TouchlessButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5551};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TouchlessButton) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
