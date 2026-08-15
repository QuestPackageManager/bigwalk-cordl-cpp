#pragma once
// IWYU pragma private; include "Rewired/ISixDofControllerTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISixDofControllerTemplate)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateHat;
}
namespace Rewired {
class IControllerTemplateStick6D;
}
namespace Rewired {
class IControllerTemplateThrottle;
}
namespace Rewired {
class IControllerTemplate;
}
// Forward declare root types
namespace Rewired {
class ISixDofControllerTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::ISixDofControllerTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::ISixDofControllerTemplate*, "Rewired", "ISixDofControllerTemplate");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ISixDofControllerTemplate
class CORDL_TYPE ISixDofControllerTemplate {
public:
// Declarations
 __declspec(property(get=get_button1)) ::Rewired::IControllerTemplateButton*  button1;

 __declspec(property(get=get_button10)) ::Rewired::IControllerTemplateButton*  button10;

 __declspec(property(get=get_button11)) ::Rewired::IControllerTemplateButton*  button11;

 __declspec(property(get=get_button12)) ::Rewired::IControllerTemplateButton*  button12;

 __declspec(property(get=get_button13)) ::Rewired::IControllerTemplateButton*  button13;

 __declspec(property(get=get_button14)) ::Rewired::IControllerTemplateButton*  button14;

 __declspec(property(get=get_button15)) ::Rewired::IControllerTemplateButton*  button15;

 __declspec(property(get=get_button16)) ::Rewired::IControllerTemplateButton*  button16;

 __declspec(property(get=get_button17)) ::Rewired::IControllerTemplateButton*  button17;

 __declspec(property(get=get_button18)) ::Rewired::IControllerTemplateButton*  button18;

 __declspec(property(get=get_button19)) ::Rewired::IControllerTemplateButton*  button19;

 __declspec(property(get=get_button2)) ::Rewired::IControllerTemplateButton*  button2;

 __declspec(property(get=get_button20)) ::Rewired::IControllerTemplateButton*  button20;

 __declspec(property(get=get_button21)) ::Rewired::IControllerTemplateButton*  button21;

 __declspec(property(get=get_button22)) ::Rewired::IControllerTemplateButton*  button22;

 __declspec(property(get=get_button23)) ::Rewired::IControllerTemplateButton*  button23;

 __declspec(property(get=get_button24)) ::Rewired::IControllerTemplateButton*  button24;

 __declspec(property(get=get_button25)) ::Rewired::IControllerTemplateButton*  button25;

 __declspec(property(get=get_button26)) ::Rewired::IControllerTemplateButton*  button26;

 __declspec(property(get=get_button27)) ::Rewired::IControllerTemplateButton*  button27;

 __declspec(property(get=get_button28)) ::Rewired::IControllerTemplateButton*  button28;

 __declspec(property(get=get_button29)) ::Rewired::IControllerTemplateButton*  button29;

 __declspec(property(get=get_button3)) ::Rewired::IControllerTemplateButton*  button3;

 __declspec(property(get=get_button30)) ::Rewired::IControllerTemplateButton*  button30;

 __declspec(property(get=get_button31)) ::Rewired::IControllerTemplateButton*  button31;

 __declspec(property(get=get_button32)) ::Rewired::IControllerTemplateButton*  button32;

 __declspec(property(get=get_button4)) ::Rewired::IControllerTemplateButton*  button4;

 __declspec(property(get=get_button5)) ::Rewired::IControllerTemplateButton*  button5;

 __declspec(property(get=get_button6)) ::Rewired::IControllerTemplateButton*  button6;

 __declspec(property(get=get_button7)) ::Rewired::IControllerTemplateButton*  button7;

 __declspec(property(get=get_button8)) ::Rewired::IControllerTemplateButton*  button8;

 __declspec(property(get=get_button9)) ::Rewired::IControllerTemplateButton*  button9;

 __declspec(property(get=get_extraAxis1)) ::Rewired::IControllerTemplateAxis*  extraAxis1;

 __declspec(property(get=get_extraAxis2)) ::Rewired::IControllerTemplateAxis*  extraAxis2;

 __declspec(property(get=get_extraAxis3)) ::Rewired::IControllerTemplateAxis*  extraAxis3;

 __declspec(property(get=get_extraAxis4)) ::Rewired::IControllerTemplateAxis*  extraAxis4;

 __declspec(property(get=get_hat1)) ::Rewired::IControllerTemplateHat*  hat1;

 __declspec(property(get=get_hat2)) ::Rewired::IControllerTemplateHat*  hat2;

 __declspec(property(get=get_stick)) ::Rewired::IControllerTemplateStick6D*  stick;

 __declspec(property(get=get_throttle1)) ::Rewired::IControllerTemplateThrottle*  throttle1;

 __declspec(property(get=get_throttle2)) ::Rewired::IControllerTemplateThrottle*  throttle2;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Method get_button1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button1() ;

/// @brief Method get_button10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button10() ;

/// @brief Method get_button11, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button11() ;

/// @brief Method get_button12, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button12() ;

/// @brief Method get_button13, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button13() ;

/// @brief Method get_button14, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button14() ;

/// @brief Method get_button15, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button15() ;

/// @brief Method get_button16, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button16() ;

/// @brief Method get_button17, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button17() ;

/// @brief Method get_button18, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button18() ;

/// @brief Method get_button19, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button19() ;

/// @brief Method get_button2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button2() ;

/// @brief Method get_button20, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button20() ;

/// @brief Method get_button21, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button21() ;

/// @brief Method get_button22, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button22() ;

/// @brief Method get_button23, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button23() ;

/// @brief Method get_button24, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button24() ;

/// @brief Method get_button25, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button25() ;

/// @brief Method get_button26, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button26() ;

/// @brief Method get_button27, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button27() ;

/// @brief Method get_button28, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button28() ;

/// @brief Method get_button29, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button29() ;

/// @brief Method get_button3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button3() ;

/// @brief Method get_button30, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button30() ;

/// @brief Method get_button31, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button31() ;

/// @brief Method get_button32, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button32() ;

/// @brief Method get_button4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button4() ;

/// @brief Method get_button5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button5() ;

/// @brief Method get_button6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button6() ;

/// @brief Method get_button7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button7() ;

/// @brief Method get_button8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button8() ;

/// @brief Method get_button9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_button9() ;

/// @brief Method get_extraAxis1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_extraAxis1() ;

/// @brief Method get_extraAxis2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_extraAxis2() ;

/// @brief Method get_extraAxis3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_extraAxis3() ;

/// @brief Method get_extraAxis4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_extraAxis4() ;

/// @brief Method get_hat1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_hat1() ;

/// @brief Method get_hat2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_hat2() ;

/// @brief Method get_stick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateStick6D* get_stick() ;

/// @brief Method get_throttle1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_throttle1() ;

/// @brief Method get_throttle2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_throttle2() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISixDofControllerTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISixDofControllerTemplate(ISixDofControllerTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5647};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
