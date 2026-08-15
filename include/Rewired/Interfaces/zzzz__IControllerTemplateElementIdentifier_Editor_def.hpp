#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerTemplateElementIdentifier_Editor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IControllerTemplateElementIdentifier_Editor)
namespace Rewired::Interfaces {
class IControllerElementIdentifierCommon_Internal;
}
namespace Rewired::Interfaces {
class IControllerTemplateElementIdentifier;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IControllerTemplateElementIdentifier_Editor;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*, "Rewired.Interfaces", "IControllerTemplateElementIdentifier_Editor");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IControllerTemplateElementIdentifier_Editor
class CORDL_TYPE IControllerTemplateElementIdentifier_Editor {
public:
// Declarations
 __declspec(property(get=get_alternateScriptingName)) ::StringW  alternateScriptingName;

 __declspec(property(get=get_scriptingName)) ::StringW  scriptingName;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr operator  ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr operator  ::Rewired::Interfaces::IControllerTemplateElementIdentifier*() noexcept;

/// @brief Method get_alternateScriptingName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_alternateScriptingName() ;

/// @brief Method get_scriptingName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_scriptingName() ;

/// @brief Convert to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* i___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr ::Rewired::Interfaces::IControllerTemplateElementIdentifier* i___Rewired__Interfaces__IControllerTemplateElementIdentifier() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateElementIdentifier_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateElementIdentifier_Editor(IControllerTemplateElementIdentifier_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
