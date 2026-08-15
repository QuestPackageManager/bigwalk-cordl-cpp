#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledMonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StyledMonoBehaviour)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledMonoBehaviour;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledMonoBehaviour*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledMonoBehaviour*, "Boxophobic.StyledGUI", "StyledMonoBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledMonoBehaviour
class CORDL_TYPE StyledMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Boxophobic::StyledGUI::StyledMonoBehaviour* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledMonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledMonoBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledMonoBehaviour(StyledMonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledMonoBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledMonoBehaviour(StyledMonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21187};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Boxophobic::StyledGUI::StyledMonoBehaviour) == 0x20, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
