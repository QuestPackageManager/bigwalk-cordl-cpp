#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IControllerTemplate)
namespace Rewired {
struct ControllerElementTarget;
}
namespace Rewired {
struct ControllerTemplateElementTarget;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class IControllerTemplateElement;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplate*, "Rewired", "IControllerTemplate");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplate
class CORDL_TYPE IControllerTemplate {
public:
// Declarations
 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_elementCount)) int32_t  elementCount;

 __declspec(property(get=get_elements)) ::System::Collections::Generic::IList_1<::Rewired::IControllerTemplateElement*>*  elements;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_typeGuid)) ::System::Guid  typeGuid;

/// @brief Method GetElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateElement* GetElement(int32_t  id) ;

/// @brief Method GetElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline T GetElement(int32_t  id) ;

/// @brief Method GetElementTargets, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetElementTargets(::Rewired::ControllerElementTarget  target, ::System::Collections::Generic::IList_1<::Rewired::ControllerTemplateElementTarget>*  results) ;

/// @brief Method get_controller, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_elementCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_elementCount() ;

/// @brief Method get_elements, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::IControllerTemplateElement*>* get_elements() ;

/// @brief Method get_name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_typeGuid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Guid get_typeGuid() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplate(IControllerTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1879};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
