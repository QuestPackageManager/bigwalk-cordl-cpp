#pragma once
// IWYU pragma private; include "Rewired/IHOTASTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHOTASTemplate)
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
class IControllerTemplateStick;
}
namespace Rewired {
class IControllerTemplateThrottle;
}
namespace Rewired {
class IControllerTemplateThumbStick;
}
namespace Rewired {
class IControllerTemplate;
}
// Forward declare root types
namespace Rewired {
class IHOTASTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::IHOTASTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::IHOTASTemplate*, "Rewired", "IHOTASTemplate");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IHOTASTemplate
class CORDL_TYPE IHOTASTemplate {
public:
// Declarations
 __declspec(property(get=get_leftPedal)) ::Rewired::IControllerTemplateAxis*  leftPedal;

 __declspec(property(get=get_mode1)) ::Rewired::IControllerTemplateButton*  mode1;

 __declspec(property(get=get_mode2)) ::Rewired::IControllerTemplateButton*  mode2;

 __declspec(property(get=get_mode3)) ::Rewired::IControllerTemplateButton*  mode3;

 __declspec(property(get=get_rightPedal)) ::Rewired::IControllerTemplateAxis*  rightPedal;

 __declspec(property(get=get_slidePedals)) ::Rewired::IControllerTemplateAxis*  slidePedals;

 __declspec(property(get=get_stick)) ::Rewired::IControllerTemplateStick*  stick;

 __declspec(property(get=get_stickBaseButton1)) ::Rewired::IControllerTemplateButton*  stickBaseButton1;

 __declspec(property(get=get_stickBaseButton10)) ::Rewired::IControllerTemplateButton*  stickBaseButton10;

 __declspec(property(get=get_stickBaseButton11)) ::Rewired::IControllerTemplateButton*  stickBaseButton11;

 __declspec(property(get=get_stickBaseButton12)) ::Rewired::IControllerTemplateButton*  stickBaseButton12;

 __declspec(property(get=get_stickBaseButton2)) ::Rewired::IControllerTemplateButton*  stickBaseButton2;

 __declspec(property(get=get_stickBaseButton3)) ::Rewired::IControllerTemplateButton*  stickBaseButton3;

 __declspec(property(get=get_stickBaseButton4)) ::Rewired::IControllerTemplateButton*  stickBaseButton4;

 __declspec(property(get=get_stickBaseButton5)) ::Rewired::IControllerTemplateButton*  stickBaseButton5;

 __declspec(property(get=get_stickBaseButton6)) ::Rewired::IControllerTemplateButton*  stickBaseButton6;

 __declspec(property(get=get_stickBaseButton7)) ::Rewired::IControllerTemplateButton*  stickBaseButton7;

 __declspec(property(get=get_stickBaseButton8)) ::Rewired::IControllerTemplateButton*  stickBaseButton8;

 __declspec(property(get=get_stickBaseButton9)) ::Rewired::IControllerTemplateButton*  stickBaseButton9;

 __declspec(property(get=get_stickButton1)) ::Rewired::IControllerTemplateButton*  stickButton1;

 __declspec(property(get=get_stickButton10)) ::Rewired::IControllerTemplateButton*  stickButton10;

 __declspec(property(get=get_stickButton2)) ::Rewired::IControllerTemplateButton*  stickButton2;

 __declspec(property(get=get_stickButton3)) ::Rewired::IControllerTemplateButton*  stickButton3;

 __declspec(property(get=get_stickButton4)) ::Rewired::IControllerTemplateButton*  stickButton4;

 __declspec(property(get=get_stickButton5)) ::Rewired::IControllerTemplateButton*  stickButton5;

 __declspec(property(get=get_stickButton6)) ::Rewired::IControllerTemplateButton*  stickButton6;

 __declspec(property(get=get_stickButton7)) ::Rewired::IControllerTemplateButton*  stickButton7;

 __declspec(property(get=get_stickButton8)) ::Rewired::IControllerTemplateButton*  stickButton8;

 __declspec(property(get=get_stickButton9)) ::Rewired::IControllerTemplateButton*  stickButton9;

 __declspec(property(get=get_stickHat1)) ::Rewired::IControllerTemplateHat*  stickHat1;

 __declspec(property(get=get_stickHat2)) ::Rewired::IControllerTemplateHat*  stickHat2;

 __declspec(property(get=get_stickHat3)) ::Rewired::IControllerTemplateHat*  stickHat3;

 __declspec(property(get=get_stickHat4)) ::Rewired::IControllerTemplateHat*  stickHat4;

 __declspec(property(get=get_stickMiniStick1)) ::Rewired::IControllerTemplateThumbStick*  stickMiniStick1;

 __declspec(property(get=get_stickMiniStick2)) ::Rewired::IControllerTemplateThumbStick*  stickMiniStick2;

 __declspec(property(get=get_stickPinkyButton)) ::Rewired::IControllerTemplateButton*  stickPinkyButton;

 __declspec(property(get=get_stickPinkyTrigger)) ::Rewired::IControllerTemplateButton*  stickPinkyTrigger;

 __declspec(property(get=get_stickTrigger)) ::Rewired::IControllerTemplateButton*  stickTrigger;

 __declspec(property(get=get_stickTriggerStage2)) ::Rewired::IControllerTemplateButton*  stickTriggerStage2;

 __declspec(property(get=get_throttle1)) ::Rewired::IControllerTemplateThrottle*  throttle1;

 __declspec(property(get=get_throttle2)) ::Rewired::IControllerTemplateThrottle*  throttle2;

 __declspec(property(get=get_throttleBaseButton1)) ::Rewired::IControllerTemplateButton*  throttleBaseButton1;

 __declspec(property(get=get_throttleBaseButton10)) ::Rewired::IControllerTemplateButton*  throttleBaseButton10;

 __declspec(property(get=get_throttleBaseButton11)) ::Rewired::IControllerTemplateButton*  throttleBaseButton11;

 __declspec(property(get=get_throttleBaseButton12)) ::Rewired::IControllerTemplateButton*  throttleBaseButton12;

 __declspec(property(get=get_throttleBaseButton13)) ::Rewired::IControllerTemplateButton*  throttleBaseButton13;

 __declspec(property(get=get_throttleBaseButton14)) ::Rewired::IControllerTemplateButton*  throttleBaseButton14;

 __declspec(property(get=get_throttleBaseButton15)) ::Rewired::IControllerTemplateButton*  throttleBaseButton15;

 __declspec(property(get=get_throttleBaseButton2)) ::Rewired::IControllerTemplateButton*  throttleBaseButton2;

 __declspec(property(get=get_throttleBaseButton3)) ::Rewired::IControllerTemplateButton*  throttleBaseButton3;

 __declspec(property(get=get_throttleBaseButton4)) ::Rewired::IControllerTemplateButton*  throttleBaseButton4;

 __declspec(property(get=get_throttleBaseButton5)) ::Rewired::IControllerTemplateButton*  throttleBaseButton5;

 __declspec(property(get=get_throttleBaseButton6)) ::Rewired::IControllerTemplateButton*  throttleBaseButton6;

 __declspec(property(get=get_throttleBaseButton7)) ::Rewired::IControllerTemplateButton*  throttleBaseButton7;

 __declspec(property(get=get_throttleBaseButton8)) ::Rewired::IControllerTemplateButton*  throttleBaseButton8;

 __declspec(property(get=get_throttleBaseButton9)) ::Rewired::IControllerTemplateButton*  throttleBaseButton9;

 __declspec(property(get=get_throttleButton1)) ::Rewired::IControllerTemplateButton*  throttleButton1;

 __declspec(property(get=get_throttleButton10)) ::Rewired::IControllerTemplateButton*  throttleButton10;

 __declspec(property(get=get_throttleButton2)) ::Rewired::IControllerTemplateButton*  throttleButton2;

 __declspec(property(get=get_throttleButton3)) ::Rewired::IControllerTemplateButton*  throttleButton3;

 __declspec(property(get=get_throttleButton4)) ::Rewired::IControllerTemplateButton*  throttleButton4;

 __declspec(property(get=get_throttleButton5)) ::Rewired::IControllerTemplateButton*  throttleButton5;

 __declspec(property(get=get_throttleButton6)) ::Rewired::IControllerTemplateButton*  throttleButton6;

 __declspec(property(get=get_throttleButton7)) ::Rewired::IControllerTemplateButton*  throttleButton7;

 __declspec(property(get=get_throttleButton8)) ::Rewired::IControllerTemplateButton*  throttleButton8;

 __declspec(property(get=get_throttleButton9)) ::Rewired::IControllerTemplateButton*  throttleButton9;

 __declspec(property(get=get_throttleDial1)) ::Rewired::IControllerTemplateAxis*  throttleDial1;

 __declspec(property(get=get_throttleDial2)) ::Rewired::IControllerTemplateAxis*  throttleDial2;

 __declspec(property(get=get_throttleDial3)) ::Rewired::IControllerTemplateAxis*  throttleDial3;

 __declspec(property(get=get_throttleDial4)) ::Rewired::IControllerTemplateAxis*  throttleDial4;

 __declspec(property(get=get_throttleHat1)) ::Rewired::IControllerTemplateHat*  throttleHat1;

 __declspec(property(get=get_throttleHat2)) ::Rewired::IControllerTemplateHat*  throttleHat2;

 __declspec(property(get=get_throttleHat3)) ::Rewired::IControllerTemplateHat*  throttleHat3;

 __declspec(property(get=get_throttleHat4)) ::Rewired::IControllerTemplateHat*  throttleHat4;

 __declspec(property(get=get_throttleMiniStick)) ::Rewired::IControllerTemplateThumbStick*  throttleMiniStick;

 __declspec(property(get=get_throttleSlider1)) ::Rewired::IControllerTemplateAxis*  throttleSlider1;

 __declspec(property(get=get_throttleSlider2)) ::Rewired::IControllerTemplateAxis*  throttleSlider2;

 __declspec(property(get=get_throttleSlider3)) ::Rewired::IControllerTemplateAxis*  throttleSlider3;

 __declspec(property(get=get_throttleSlider4)) ::Rewired::IControllerTemplateAxis*  throttleSlider4;

 __declspec(property(get=get_throttleWheel1Back)) ::Rewired::IControllerTemplateButton*  throttleWheel1Back;

 __declspec(property(get=get_throttleWheel1Forward)) ::Rewired::IControllerTemplateButton*  throttleWheel1Forward;

 __declspec(property(get=get_throttleWheel1Press)) ::Rewired::IControllerTemplateButton*  throttleWheel1Press;

 __declspec(property(get=get_throttleWheel2Back)) ::Rewired::IControllerTemplateButton*  throttleWheel2Back;

 __declspec(property(get=get_throttleWheel2Forward)) ::Rewired::IControllerTemplateButton*  throttleWheel2Forward;

 __declspec(property(get=get_throttleWheel2Press)) ::Rewired::IControllerTemplateButton*  throttleWheel2Press;

 __declspec(property(get=get_throttleWheel3Back)) ::Rewired::IControllerTemplateButton*  throttleWheel3Back;

 __declspec(property(get=get_throttleWheel3Forward)) ::Rewired::IControllerTemplateButton*  throttleWheel3Forward;

 __declspec(property(get=get_throttleWheel3Press)) ::Rewired::IControllerTemplateButton*  throttleWheel3Press;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Method get_leftPedal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_leftPedal() ;

/// @brief Method get_mode1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_mode1() ;

/// @brief Method get_mode2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_mode2() ;

/// @brief Method get_mode3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_mode3() ;

/// @brief Method get_rightPedal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rightPedal() ;

/// @brief Method get_slidePedals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_slidePedals() ;

/// @brief Method get_stick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateStick* get_stick() ;

/// @brief Method get_stickBaseButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton1() ;

/// @brief Method get_stickBaseButton10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton10() ;

/// @brief Method get_stickBaseButton11, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton11() ;

/// @brief Method get_stickBaseButton12, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton12() ;

/// @brief Method get_stickBaseButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton2() ;

/// @brief Method get_stickBaseButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton3() ;

/// @brief Method get_stickBaseButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton4() ;

/// @brief Method get_stickBaseButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton5() ;

/// @brief Method get_stickBaseButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton6() ;

/// @brief Method get_stickBaseButton7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton7() ;

/// @brief Method get_stickBaseButton8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton8() ;

/// @brief Method get_stickBaseButton9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickBaseButton9() ;

/// @brief Method get_stickButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton1() ;

/// @brief Method get_stickButton10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton10() ;

/// @brief Method get_stickButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton2() ;

/// @brief Method get_stickButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton3() ;

/// @brief Method get_stickButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton4() ;

/// @brief Method get_stickButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton5() ;

/// @brief Method get_stickButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton6() ;

/// @brief Method get_stickButton7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton7() ;

/// @brief Method get_stickButton8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton8() ;

/// @brief Method get_stickButton9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickButton9() ;

/// @brief Method get_stickHat1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_stickHat1() ;

/// @brief Method get_stickHat2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_stickHat2() ;

/// @brief Method get_stickHat3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_stickHat3() ;

/// @brief Method get_stickHat4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_stickHat4() ;

/// @brief Method get_stickMiniStick1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThumbStick* get_stickMiniStick1() ;

/// @brief Method get_stickMiniStick2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThumbStick* get_stickMiniStick2() ;

/// @brief Method get_stickPinkyButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickPinkyButton() ;

/// @brief Method get_stickPinkyTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickPinkyTrigger() ;

/// @brief Method get_stickTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickTrigger() ;

/// @brief Method get_stickTriggerStage2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_stickTriggerStage2() ;

/// @brief Method get_throttle1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_throttle1() ;

/// @brief Method get_throttle2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThrottle* get_throttle2() ;

/// @brief Method get_throttleBaseButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton1() ;

/// @brief Method get_throttleBaseButton10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton10() ;

/// @brief Method get_throttleBaseButton11, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton11() ;

/// @brief Method get_throttleBaseButton12, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton12() ;

/// @brief Method get_throttleBaseButton13, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton13() ;

/// @brief Method get_throttleBaseButton14, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton14() ;

/// @brief Method get_throttleBaseButton15, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton15() ;

/// @brief Method get_throttleBaseButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton2() ;

/// @brief Method get_throttleBaseButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton3() ;

/// @brief Method get_throttleBaseButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton4() ;

/// @brief Method get_throttleBaseButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton5() ;

/// @brief Method get_throttleBaseButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton6() ;

/// @brief Method get_throttleBaseButton7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton7() ;

/// @brief Method get_throttleBaseButton8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton8() ;

/// @brief Method get_throttleBaseButton9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleBaseButton9() ;

/// @brief Method get_throttleButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton1() ;

/// @brief Method get_throttleButton10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton10() ;

/// @brief Method get_throttleButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton2() ;

/// @brief Method get_throttleButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton3() ;

/// @brief Method get_throttleButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton4() ;

/// @brief Method get_throttleButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton5() ;

/// @brief Method get_throttleButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton6() ;

/// @brief Method get_throttleButton7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton7() ;

/// @brief Method get_throttleButton8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton8() ;

/// @brief Method get_throttleButton9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleButton9() ;

/// @brief Method get_throttleDial1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleDial1() ;

/// @brief Method get_throttleDial2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleDial2() ;

/// @brief Method get_throttleDial3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleDial3() ;

/// @brief Method get_throttleDial4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleDial4() ;

/// @brief Method get_throttleHat1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_throttleHat1() ;

/// @brief Method get_throttleHat2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_throttleHat2() ;

/// @brief Method get_throttleHat3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_throttleHat3() ;

/// @brief Method get_throttleHat4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateHat* get_throttleHat4() ;

/// @brief Method get_throttleMiniStick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThumbStick* get_throttleMiniStick() ;

/// @brief Method get_throttleSlider1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleSlider1() ;

/// @brief Method get_throttleSlider2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleSlider2() ;

/// @brief Method get_throttleSlider3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleSlider3() ;

/// @brief Method get_throttleSlider4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttleSlider4() ;

/// @brief Method get_throttleWheel1Back, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel1Back() ;

/// @brief Method get_throttleWheel1Forward, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel1Forward() ;

/// @brief Method get_throttleWheel1Press, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel1Press() ;

/// @brief Method get_throttleWheel2Back, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel2Back() ;

/// @brief Method get_throttleWheel2Forward, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel2Forward() ;

/// @brief Method get_throttleWheel2Press, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel2Press() ;

/// @brief Method get_throttleWheel3Back, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel3Back() ;

/// @brief Method get_throttleWheel3Forward, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel3Forward() ;

/// @brief Method get_throttleWheel3Press, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_throttleWheel3Press() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IHOTASTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHOTASTemplate(IHOTASTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5644};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
