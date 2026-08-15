#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IControllerTemplateElement)
namespace Rewired {
struct ControllerTemplateElementType;
}
namespace Rewired {
class IControllerTemplateElementSource;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateElement;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateElement*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateElement*, "Rewired", "IControllerTemplateElement");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateElement
class CORDL_TYPE IControllerTemplateElement {
public:
// Declarations
 __declspec(property(get=get_descriptiveName)) ::StringW  descriptiveName;

 __declspec(property(get=get_exists)) bool  exists;

 __declspec(property(get=get_id)) int32_t  id;

 __declspec(property(get=get_source)) ::Rewired::IControllerTemplateElementSource*  source;

 __declspec(property(get=get_type)) ::Rewired::ControllerTemplateElementType  type;

/// @brief Method get_descriptiveName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_descriptiveName() ;

/// @brief Method get_exists, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_exists() ;

/// @brief Method get_id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_source, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateElementSource* get_source() ;

/// @brief Method get_type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerTemplateElementType get_type() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateElement(IControllerTemplateElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1880};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
