#pragma once
// IWYU pragma private; include "Rewired/IFlightYokeTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFlightYokeTemplate)
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateHat;
}
namespace Rewired {
class IControllerTemplateThrottle;
}
namespace Rewired {
class IControllerTemplateYoke;
}
namespace Rewired {
class IControllerTemplate;
}
// Forward declare root types
namespace Rewired {
class IFlightYokeTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::IFlightYokeTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::IFlightYokeTemplate*, "Rewired", "IFlightYokeTemplate");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IFlightYokeTemplate
class CORDL_TYPE IFlightYokeTemplate {
public:
// Declarations
 __declspec(property(get=get_centerButton1)) ::Rewired::IControllerTemplateButton*  centerButton1;

 __declspec(property(get=get_centerButton2)) ::Rewired::IControllerTemplateButton*  centerButton2;

 __declspec(property(get=get_centerButton3)) ::Rewired::IControllerTemplateButton*  centerButton3;

 __declspec(property(get=get_centerButton4)) ::Rewired::IControllerTemplateButton*  centerButton4;

 __declspec(property(get=get_centerButton5)) ::Rewired::IControllerTemplateButton*  centerButton5;

 __declspec(property(get=get_centerButton6)) ::Rewired::IControllerTemplateButton*  centerButton6;

 __declspec(property(get=get_centerButton7)) ::Rewired::IControllerTemplateButton*  centerButton7;

 __declspec(property(get=get_centerButton8)) ::Rewired::IControllerTemplateButton*  centerButton8;

 __declspec(property(get=get_consoleButton1)) ::Rewired::IControllerTemplateButton*  consoleButton1;

 __declspec(property(get=get_consoleButton10)) ::Rewired::IControllerTemplateButton*  consoleButton10;

 __declspec(property(get=get_consoleButton2)) ::Rewired::IControllerTemplateButton*  consoleButton2;

 __declspec(property(get=get_consoleButton3)) ::Rewired::IControllerTemplateButton*  consoleButton3;

 __declspec(property(get=get_consoleButton4)) ::Rewired::IControllerTemplateButton*  consoleButton4;

 __declspec(property(get=get_consoleButton5)) ::Rewired::IControllerTemplateButton*  consoleButton5;

 __declspec(property(get=get_consoleButton6)) ::Rewired::IControllerTemplateButton*  consoleButton6;

 __declspec(property(get=get_consoleButton7)) ::Rewired::IControllerTemplateButton*  consoleButton7;

 __declspec(property(get=get_consoleButton8)) ::Rewired::IControllerTemplateButton*  consoleButton8;

 __declspec(property(get=get_consoleButton9)) ::Rewired::IControllerTemplateButton*  consoleButton9;

 __declspec(property(get=get_leftGripButton1)) ::Rewired::IControllerTemplateButton*  leftGripButton1;

 __declspec(property(get=get_leftGripButton2)) ::Rewired::IControllerTemplateButton*  leftGripButton2;

 __declspec(property(get=get_leftGripButton3)) ::Rewired::IControllerTemplateButton*  leftGripButton3;

 __declspec(property(get=get_leftGripButton4)) ::Rewired::IControllerTemplateButton*  leftGripButton4;

 __declspec(property(get=get_leftGripButton5)) ::Rewired::IControllerTemplateButton*  leftGripButton5;

 __declspec(property(get=get_leftGripButton6)) ::Rewired::IControllerTemplateButton*  leftGripButton6;

 __declspec(property(get=get_leftGripHat)) ::Rewired::IControllerTemplateHat*  leftGripHat;

 __declspec(property(get=get_leftPaddle)) ::Rewired::IControllerTemplateButton*  leftPaddle;

 __declspec(property(get=get_lever1)) ::Rewired::IControllerTemplateThrottle*  lever1;

 __declspec(property(get=get_lever2)) ::Rewired::IControllerTemplateThrottle*  lever2;

 __declspec(property(get=get_lever3)) ::Rewired::IControllerTemplateThrottle*  lever3;

 __declspec(property(get=get_lever4)) ::Rewired::IControllerTemplateThrottle*  lever4;

 __declspec(property(get=get_lever5)) ::Rewired::IControllerTemplateThrottle*  lever5;

 __declspec(property(get=get_mode1)) ::Rewired::IControllerTemplateButton*  mode1;

 __declspec(property(get=get_mode2)) ::Rewired::IControllerTemplateButton*  mode2;

 __declspec(property(get=get_mode3)) ::Rewired::IControllerTemplateButton*  mode3;

 __declspec(property(get=get_rightGripButton1)) ::Rewired::IControllerTemplateButton*  rightGripButton1;

 __declspec(property(get=get_rightGripButton2)) ::Rewired::IControllerTemplateButton*  rightGripButton2;

 __declspec(property(get=get_rightGripButton3)) ::Rewired::IControllerTemplateButton*  rightGripButton3;

 __declspec(property(get=get_rightGripButton4)) ::Rewired::IControllerTemplateButton*  rightGripButton4;

 __declspec(property(get=get_rightGripButton5)) ::Rewired::IControllerTemplateButton*  rightGripButton5;

 __declspec(property(get=get_rightGripButton6)) ::Rewired::IControllerTemplateButton*  rightGripButton6;

 __declspec(property(get=get_rightGripHat)) ::Rewired::IControllerTemplateHat*  rightGripHat;

 __declspec(property(get=get_rightPaddle)) ::Rewired::IControllerTemplateButton*  rightPaddle;

 __declspec(property(get=get_wheel1Down)) ::Rewired::IControllerTemplateButton*  wheel1Down;

 __declspec(property(get=get_wheel1Press)) ::Rewired::IControllerTemplateButton*  wheel1Press;

 __declspec(property(get=get_wheel1Up)) ::Rewired::IControllerTemplateButton*  wheel1Up;

 __declspec(property(get=get_wheel2Down)) ::Rewired::IControllerTemplateButton*  wheel2Down;

 __declspec(property(get=get_wheel2Press)) ::Rewired::IControllerTemplateButton*  wheel2Press;

 __declspec(property(get=get_wheel2Up)) ::Rewired::IControllerTemplateButton*  wheel2Up;

 __declspec(property(get=get_yoke)) ::Rewired::IControllerTemplateYoke*  yoke;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Method get_centerButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton1() ;

/// @brief Method get_centerButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton2() ;

/// @brief Method get_centerButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton3() ;

/// @brief Method get_centerButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton4() ;

/// @brief Method get_centerButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton5() ;

/// @brief Method get_centerButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton6() ;

/// @brief Method get_centerButton7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton7() ;

/// @brief Method get_centerButton8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_centerButton8() ;

/// @brief Method get_consoleButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton1() ;

/// @brief Method get_consoleButton10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton10() ;

/// @brief Method get_consoleButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton2() ;

/// @brief Method get_consoleButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton3() ;

/// @brief Method get_consoleButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton4() ;

/// @brief Method get_consoleButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton5() ;

/// @brief Method get_consoleButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton6() ;

/// @brief Method get_consoleButton7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton7() ;

/// @brief Method get_consoleButton8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton8() ;

/// @brief Method get_consoleButton9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_consoleButton9() ;

/// @brief Method get_leftGripButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftGripButton1() ;

/// @brief Method get_leftGripButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftGripButton2() ;

/// @brief Method get_leftGripButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftGripButton3() ;

/// @brief Method get_leftGripButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftGripButton4() ;

/// @brief Method get_leftGripButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftGripButton5() ;

/// @brief Method get_leftGripButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftGripButton6() ;

/// @brief Method get_leftGripHat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_leftGripHat() ;

/// @brief Method get_leftPaddle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftPaddle() ;

/// @brief Method get_lever1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_lever1() ;

/// @brief Method get_lever2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_lever2() ;

/// @brief Method get_lever3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_lever3() ;

/// @brief Method get_lever4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_lever4() ;

/// @brief Method get_lever5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_lever5() ;

/// @brief Method get_mode1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_mode1() ;

/// @brief Method get_mode2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_mode2() ;

/// @brief Method get_mode3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_mode3() ;

/// @brief Method get_rightGripButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightGripButton1() ;

/// @brief Method get_rightGripButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightGripButton2() ;

/// @brief Method get_rightGripButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightGripButton3() ;

/// @brief Method get_rightGripButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightGripButton4() ;

/// @brief Method get_rightGripButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightGripButton5() ;

/// @brief Method get_rightGripButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightGripButton6() ;

/// @brief Method get_rightGripHat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_rightGripHat() ;

/// @brief Method get_rightPaddle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightPaddle() ;

/// @brief Method get_wheel1Down, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheel1Down() ;

/// @brief Method get_wheel1Press, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheel1Press() ;

/// @brief Method get_wheel1Up, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheel1Up() ;

/// @brief Method get_wheel2Down, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheel2Down() ;

/// @brief Method get_wheel2Press, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheel2Press() ;

/// @brief Method get_wheel2Up, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheel2Up() ;

/// @brief Method get_yoke, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateYoke* get_yoke() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IFlightYokeTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFlightYokeTemplate(IFlightYokeTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
