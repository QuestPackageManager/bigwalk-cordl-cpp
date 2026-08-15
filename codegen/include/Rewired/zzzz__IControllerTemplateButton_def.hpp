#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IControllerTemplateButton)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateButtonSource;
}
namespace Rewired {
class IControllerTemplateElement;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateButton;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateButton*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateButton*, "Rewired", "IControllerTemplateButton");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateButton
class CORDL_TYPE IControllerTemplateButton {
public:
// Declarations
 __declspec(property(get=get_AsAxis)) ::Rewired::IControllerTemplateAxis*  AsAxis;

 __declspec(property(get=get_justChangedState)) bool  justChangedState;

 __declspec(property(get=get_justPressed)) bool  justPressed;

 __declspec(property(get=get_justReleased)) bool  justReleased;

 __declspec(property(get=get_pressure)) float_t  pressure;

 __declspec(property(get=get_pressurePrev)) float_t  pressurePrev;

 __declspec(property(get=get_source)) ::Rewired::IControllerTemplateButtonSource*  source;

 __declspec(property(get=get_value)) bool  value;

 __declspec(property(get=get_valuePrev)) bool  valuePrev;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method get_AsAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_AsAxis() ;

/// @brief Method get_justChangedState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_justChangedState() ;

/// @brief Method get_justPressed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_justPressed() ;

/// @brief Method get_justReleased, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_justReleased() ;

/// @brief Method get_pressure, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_pressure() ;

/// @brief Method get_pressurePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_pressurePrev() ;

/// @brief Method get_source, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButtonSource* get_source() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_value() ;

/// @brief Method get_valuePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_valuePrev() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateButton(IControllerTemplateButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1881};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
