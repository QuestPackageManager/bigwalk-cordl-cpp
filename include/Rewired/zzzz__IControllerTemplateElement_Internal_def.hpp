#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateElement_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IControllerTemplateElement_Internal)
namespace Rewired {
struct ControllerElementTarget;
}
namespace Rewired {
struct ControllerTemplateElementTarget;
}
namespace Rewired {
class IControllerTemplateElement;
}
namespace Rewired {
class IControllerTemplate;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateElement_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateElement_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateElement_Internal*, "Rewired", "IControllerTemplateElement_Internal");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateElement_Internal
class CORDL_TYPE IControllerTemplateElement_Internal {
public:
// Declarations
 __declspec(property(get=get_elementCount)) int32_t  elementCount;

 __declspec(property(get=get_parent)) ::Rewired::IControllerTemplate*  parent;

/// @brief Method GetElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateElement* GetElement(int32_t  index) ;

/// @brief Method GetElementTargets, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetElementTargets(::Rewired::ControllerElementTarget  find, ::by_ref<::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateElementTarget>*>  list) ;

/// @brief Method get_elementCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_elementCount() ;

/// @brief Method get_parent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplate* get_parent() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateElement_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateElement_Internal(IControllerTemplateElement_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1896};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
