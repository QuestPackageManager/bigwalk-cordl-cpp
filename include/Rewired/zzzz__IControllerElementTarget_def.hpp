#pragma once
// IWYU pragma private; include "Rewired/IControllerElementTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IControllerElementTarget)
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class Controller_Element;
}
namespace Rewired {
class Controller;
}
// Forward declare root types
namespace Rewired {
class IControllerElementTarget;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerElementTarget*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerElementTarget*, "Rewired", "IControllerElementTarget");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerElementTarget
class CORDL_TYPE IControllerElementTarget {
public:
// Declarations
 __declspec(property(get=get_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_descriptiveName)) ::StringW  descriptiveName;

 __declspec(property(get=get_element)) ::Rewired::Controller_Element*  element;

 __declspec(property(get=get_elementIdentifierId)) int32_t  elementIdentifierId;

 __declspec(property(get=get_elementType)) ::Rewired::ControllerElementType  elementType;

 __declspec(property(get=get_hasTarget)) bool  hasTarget;

/// @brief Method get_axisRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::AxisRange get_axisRange() ;

/// @brief Method get_controller, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_descriptiveName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_descriptiveName() ;

/// @brief Method get_element, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller_Element* get_element() ;

/// @brief Method get_elementIdentifierId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_elementIdentifierId() ;

/// @brief Method get_elementType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerElementType get_elementType() ;

/// @brief Method get_hasTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_hasTarget() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerElementTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerElementTarget(IControllerElementTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
