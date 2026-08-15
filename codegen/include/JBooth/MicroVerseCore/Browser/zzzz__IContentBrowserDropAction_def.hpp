#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Browser/IContentBrowserDropAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContentBrowserDropAction)
// Forward declare root types
namespace JBooth::MicroVerseCore::Browser {
class IContentBrowserDropAction;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*, "JBooth.MicroVerseCore.Browser", "IContentBrowserDropAction");
// Dependencies 
namespace JBooth::MicroVerseCore::Browser {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Browser.IContentBrowserDropAction
class CORDL_TYPE IContentBrowserDropAction {
public:
// Declarations
/// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute(::by_ref<bool>  destroyAfterExecute) ;

// Ctor Parameters [CppParam { name: "", ty: "IContentBrowserDropAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IContentBrowserDropAction(IContentBrowserDropAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18062};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore::Browser
