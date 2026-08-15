#pragma once
// IWYU pragma private; include "GlobalNamespace/UIUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UIUtils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class UIUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UIUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIUtils*, "", "UIUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIUtils
class CORDL_TYPE UIUtils : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::UIUtils* New_ctor() ;

/// @brief Method ResetButtonNavigationExplicitVertical, addr 0x18038f1f0, size 0x2f0, virtual false, abstract: false, final false
static inline void ResetButtonNavigationExplicitVertical(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*  buttonList) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIUtils(UIUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIUtils(UIUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5564};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UIUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
