#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IElementIdentifierTool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IElementIdentifierTool)
namespace Rewired::Internal {
class GUIText;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IElementIdentifierTool;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IElementIdentifierTool*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IElementIdentifierTool*, "Rewired.Interfaces", "IElementIdentifierTool");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IElementIdentifierTool
class CORDL_TYPE IElementIdentifierTool {
public:
// Declarations
/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize(::Rewired::Internal::GUIText*  guiText) ;

/// @brief Method OnDestroy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

// Ctor Parameters [CppParam { name: "", ty: "IElementIdentifierTool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IElementIdentifierTool(IElementIdentifierTool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
