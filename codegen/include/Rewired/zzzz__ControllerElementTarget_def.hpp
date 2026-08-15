#pragma once
// IWYU pragma private; include "Rewired/ControllerElementTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerElementTarget)
namespace Rewired {
class ActionElementMap;
}
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
namespace Rewired {
class IControllerElementTarget;
}
// Forward declare root types
namespace Rewired {
struct ControllerElementTarget;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerElementTarget);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerElementTarget, "Rewired", "ControllerElementTarget");
// Dependencies Rewired.AxisRange
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerElementTarget
struct CORDL_TYPE ControllerElementTarget {
public:
// Declarations
 __declspec(property(get=get_axisRange, put=set_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_descriptiveName)) ::StringW  descriptiveName;

 __declspec(property(get=get_element, put=set_element)) ::Rewired::Controller_Element*  element;

 __declspec(property(get=get_elementIdentifierId)) int32_t  elementIdentifierId;

 __declspec(property(get=get_elementType)) ::Rewired::ControllerElementType  elementType;

 __declspec(property(get=get_hasTarget)) bool  hasTarget;

/// @brief Method .ctor, addr 0x181916070, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181916180, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerElementTarget  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819161d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_axisRange, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisRange get_axisRange() ;

/// @brief Method get_controller, addr 0x181916250, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_descriptiveName, addr 0x181916270, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_descriptiveName() ;

/// @brief Method get_element, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Controller_Element* get_element() ;

/// @brief Method get_elementIdentifierId, addr 0x1819162e0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierId() ;

/// @brief Method get_elementType, addr 0x181916300, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementType get_elementType() ;

/// @brief Method get_hasTarget, addr 0x18175b340, size 0x20, virtual false, abstract: false, final false
inline bool get_hasTarget() ;

/// @brief Method op_Implicit, addr 0x181916320, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::ControllerElementTarget op_Implicit___Rewired__ControllerElementTarget(::Rewired::ActionElementMap*  actionElementMap) ;

/// @brief Method set_axisRange, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_axisRange(::Rewired::AxisRange  value) ;

/// @brief Method set_element, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_element(::Rewired::Controller_Element*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerElementTarget() ;

// Ctor Parameters [CppParam { name: "QvVnHwXchFYTFaWBdpqKkmaMFAYn", ty: "::Rewired::Controller_Element*", modifiers: "", def_value: None }, CppParam { name: "ELTlOtkncZnTAWCuomTdddKSNbED", ty: "::Rewired::AxisRange", modifiers: "", def_value: None }]
constexpr ControllerElementTarget(::Rewired::Controller_Element*  QvVnHwXchFYTFaWBdpqKkmaMFAYn, ::Rewired::AxisRange  ELTlOtkncZnTAWCuomTdddKSNbED) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1874};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field QvVnHwXchFYTFaWBdpqKkmaMFAYn, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Controller_Element*  QvVnHwXchFYTFaWBdpqKkmaMFAYn;

/// @brief Field ELTlOtkncZnTAWCuomTdddKSNbED, offset: 0x8, size: 0x4, def value: None
 ::Rewired::AxisRange  ELTlOtkncZnTAWCuomTdddKSNbED;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerElementTarget, QvVnHwXchFYTFaWBdpqKkmaMFAYn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerElementTarget, ELTlOtkncZnTAWCuomTdddKSNbED) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerElementTarget) == 0x10, "Size mismatch!");

} // namespace end def Rewired
