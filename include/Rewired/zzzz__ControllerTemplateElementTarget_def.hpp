#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateElementTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControllerTemplateElementTarget)
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct ControllerTemplateElementType;
}
namespace Rewired {
class IControllerTemplateElement;
}
namespace Rewired {
class IControllerTemplate;
}
// Forward declare root types
namespace Rewired {
struct ControllerTemplateElementTarget;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerTemplateElementTarget);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerTemplateElementTarget, "Rewired", "ControllerTemplateElementTarget");
// Dependencies Rewired.AxisRange
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerTemplateElementTarget
struct CORDL_TYPE ControllerTemplateElementTarget {
public:
// Declarations
 __declspec(property(get=get_template)) ::Rewired::IControllerTemplate*  _cordl_template;

 __declspec(property(get=get_axisRange, put=set_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_descriptiveName)) ::StringW  descriptiveName;

 __declspec(property(get=get_element, put=set_element)) ::Rewired::IControllerTemplateElement*  element;

 __declspec(property(get=get_elementType)) ::Rewired::ControllerTemplateElementType  elementType;

 __declspec(property(get=get_hasTarget)) bool  hasTarget;

/// @brief Method .ctor, addr 0x181916180, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerTemplateElementTarget  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819178c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::IControllerTemplateElement*  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_axisRange, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisRange get_axisRange() ;

/// @brief Method get_descriptiveName, addr 0x181917910, size 0x200, virtual false, abstract: false, final false
inline ::StringW get_descriptiveName() ;

/// @brief Method get_element, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::IControllerTemplateElement* get_element() ;

/// @brief Method get_elementType, addr 0x181917b10, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateElementType get_elementType() ;

/// @brief Method get_hasTarget, addr 0x18175b340, size 0x20, virtual false, abstract: false, final false
inline bool get_hasTarget() ;

/// @brief Method get_template, addr 0x181917b40, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::IControllerTemplate* get_template() ;

/// @brief Method set_axisRange, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_axisRange(::Rewired::AxisRange  value) ;

/// @brief Method set_element, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_element(::Rewired::IControllerTemplateElement*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateElementTarget() ;

// Ctor Parameters [CppParam { name: "LSDUqAgahVbGzHFXERnIbuWIkeUSA", ty: "::Rewired::IControllerTemplateElement*", modifiers: "", def_value: None }, CppParam { name: "VYbSQxGVnSgTEjuJwcgnMCKlEaWt", ty: "::Rewired::AxisRange", modifiers: "", def_value: None }]
constexpr ControllerTemplateElementTarget(::Rewired::IControllerTemplateElement*  LSDUqAgahVbGzHFXERnIbuWIkeUSA, ::Rewired::AxisRange  VYbSQxGVnSgTEjuJwcgnMCKlEaWt) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field LSDUqAgahVbGzHFXERnIbuWIkeUSA, offset: 0x0, size: 0x8, def value: None
 ::Rewired::IControllerTemplateElement*  LSDUqAgahVbGzHFXERnIbuWIkeUSA;

/// @brief Field VYbSQxGVnSgTEjuJwcgnMCKlEaWt, offset: 0x8, size: 0x4, def value: None
 ::Rewired::AxisRange  VYbSQxGVnSgTEjuJwcgnMCKlEaWt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerTemplateElementTarget, LSDUqAgahVbGzHFXERnIbuWIkeUSA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateElementTarget, VYbSQxGVnSgTEjuJwcgnMCKlEaWt) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerTemplateElementTarget) == 0x10, "Size mismatch!");

} // namespace end def Rewired
