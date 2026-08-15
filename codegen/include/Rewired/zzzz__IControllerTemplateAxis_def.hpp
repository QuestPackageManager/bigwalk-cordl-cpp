#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IControllerTemplateAxis)
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
class IControllerTemplateAxisSource;
}
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateElement;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateAxis;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateAxis*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateAxis*, "Rewired", "IControllerTemplateAxis");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateAxis
class CORDL_TYPE IControllerTemplateAxis {
public:
// Declarations
 __declspec(property(get=get_AsButton)) ::Rewired::IControllerTemplateButton*  AsButton;

 __declspec(property(get=get_negativeDescriptiveName)) ::StringW  negativeDescriptiveName;

 __declspec(property(get=get_positiveDescriptiveName)) ::StringW  positiveDescriptiveName;

 __declspec(property(get=get_source)) ::Rewired::IControllerTemplateAxisSource*  source;

 __declspec(property(get=get_value)) float_t  value;

 __declspec(property(get=get_valuePrev)) float_t  valuePrev;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method GetDescriptiveName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetDescriptiveName(::Rewired::AxisRange  axisRange) ;

/// @brief Method get_AsButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_AsButton() ;

/// @brief Method get_negativeDescriptiveName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_negativeDescriptiveName() ;

/// @brief Method get_positiveDescriptiveName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_positiveDescriptiveName() ;

/// @brief Method get_source, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxisSource* get_source() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_value() ;

/// @brief Method get_valuePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_valuePrev() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateAxis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateAxis(IControllerTemplateAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
