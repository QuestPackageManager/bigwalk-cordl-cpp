#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(StyledScriptableObject)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledScriptableObject;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledScriptableObject*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledScriptableObject*, "Boxophobic.StyledGUI", "StyledScriptableObject");
// Dependencies UnityEngine.ScriptableObject
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledScriptableObject
class CORDL_TYPE StyledScriptableObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Boxophobic::StyledGUI::StyledScriptableObject* New_ctor() ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledScriptableObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledScriptableObject(StyledScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledScriptableObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledScriptableObject(StyledScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Boxophobic::StyledGUI::StyledScriptableObject) == 0x18, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
