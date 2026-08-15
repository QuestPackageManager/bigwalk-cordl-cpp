#pragma once
// IWYU pragma private; include "Rewired/HOTASTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HOTASTemplate)
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
namespace Rewired {
class IHOTASTemplate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class HOTASTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::HOTASTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::HOTASTemplate*, "Rewired", "HOTASTemplate");
// Dependencies Rewired.ControllerTemplate, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.HOTASTemplate
class CORDL_TYPE HOTASTemplate : public ::Rewired::ControllerTemplate {
public:
// Declarations
 __declspec(property(get=Rewired_IHOTASTemplate_get_leftPedal)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_leftPedal;

 __declspec(property(get=Rewired_IHOTASTemplate_get_mode1)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_mode1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_mode2)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_mode2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_mode3)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_mode3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_rightPedal)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_rightPedal;

 __declspec(property(get=Rewired_IHOTASTemplate_get_slidePedals)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_slidePedals;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stick)) ::Rewired::IControllerTemplateStick*  Rewired_IHOTASTemplate_stick;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton10)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton10;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton11)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton11;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton12)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton12;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton5;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton6;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton7;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton8;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickBaseButton9)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickBaseButton9;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton10)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton10;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton5;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton6;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton7;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton8;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickButton9)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickButton9;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickHat1)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_stickHat1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickHat2)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_stickHat2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickHat3)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_stickHat3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickHat4)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_stickHat4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickMiniStick1)) ::Rewired::IControllerTemplateThumbStick*  Rewired_IHOTASTemplate_stickMiniStick1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickMiniStick2)) ::Rewired::IControllerTemplateThumbStick*  Rewired_IHOTASTemplate_stickMiniStick2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickPinkyButton)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickPinkyButton;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickPinkyTrigger)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickPinkyTrigger;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickTrigger)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickTrigger;

 __declspec(property(get=Rewired_IHOTASTemplate_get_stickTriggerStage2)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_stickTriggerStage2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttle1)) ::Rewired::IControllerTemplateThrottle*  Rewired_IHOTASTemplate_throttle1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttle2)) ::Rewired::IControllerTemplateThrottle*  Rewired_IHOTASTemplate_throttle2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton10)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton10;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton11)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton11;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton12)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton12;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton13)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton13;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton14)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton14;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton15)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton15;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton5;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton6;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton7;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton8;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleBaseButton9)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleBaseButton9;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton10)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton10;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton5;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton6;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton7;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton8;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleButton9)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleButton9;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleDial1)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleDial1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleDial2)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleDial2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleDial3)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleDial3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleDial4)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleDial4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleHat1)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_throttleHat1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleHat2)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_throttleHat2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleHat3)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_throttleHat3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleHat4)) ::Rewired::IControllerTemplateHat*  Rewired_IHOTASTemplate_throttleHat4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleMiniStick)) ::Rewired::IControllerTemplateThumbStick*  Rewired_IHOTASTemplate_throttleMiniStick;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleSlider1)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleSlider1;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleSlider2)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleSlider2;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleSlider3)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleSlider3;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleSlider4)) ::Rewired::IControllerTemplateAxis*  Rewired_IHOTASTemplate_throttleSlider4;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel1Back)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel1Back;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel1Forward)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel1Forward;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel1Press)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel1Press;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel2Back)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel2Back;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel2Forward)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel2Forward;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel2Press)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel2Press;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel3Back)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel3Back;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel3Forward)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel3Forward;

 __declspec(property(get=Rewired_IHOTASTemplate_get_throttleWheel3Press)) ::Rewired::IControllerTemplateButton*  Rewired_IHOTASTemplate_throttleWheel3Press;

/// @brief Field typeGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_typeGuid, put=setStaticF_typeGuid)) ::System::Guid  typeGuid;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Convert operator to "::Rewired::IHOTASTemplate"
constexpr operator  ::Rewired::IHOTASTemplate*() noexcept;

static inline ::Rewired::HOTASTemplate* New_ctor(::System::Object*  payload) ;

/// @brief Method Rewired.IHOTASTemplate.get_leftPedal, addr 0x1803942a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_leftPedal() ;

/// @brief Method Rewired.IHOTASTemplate.get_mode1, addr 0x180393c40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_mode1() ;

/// @brief Method Rewired.IHOTASTemplate.get_mode2, addr 0x180393c60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_mode2() ;

/// @brief Method Rewired.IHOTASTemplate.get_mode3, addr 0x180393c80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_mode3() ;

/// @brief Method Rewired.IHOTASTemplate.get_rightPedal, addr 0x1803942c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_rightPedal() ;

/// @brief Method Rewired.IHOTASTemplate.get_slidePedals, addr 0x1803942e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_slidePedals() ;

/// @brief Method Rewired.IHOTASTemplate.get_stick, addr 0x180394460, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateStick* Rewired_IHOTASTemplate_get_stick() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton1, addr 0x180393fe0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton1() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton10, addr 0x180394300, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton10() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton11, addr 0x180394320, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton11() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton12, addr 0x180394340, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton12() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton2, addr 0x180393b00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton2() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton3, addr 0x180393b20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton3() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton4, addr 0x180393b40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton4() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton5, addr 0x180393b60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton5() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton6, addr 0x180393b80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton6() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton7, addr 0x180393ba0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton7() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton8, addr 0x180393bc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton8() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickBaseButton9, addr 0x180393be0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickBaseButton9() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton1, addr 0x1803941a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton1() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton10, addr 0x180393f80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton10() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton2, addr 0x180393d40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton2() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton3, addr 0x180393d60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton3() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton4, addr 0x180393d80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton4() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton5, addr 0x180393da0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton5() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton6, addr 0x180393dc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton6() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton7, addr 0x180393de0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton7() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton8, addr 0x180393f40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton8() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickButton9, addr 0x180393f60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickButton9() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickHat1, addr 0x180394360, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_stickHat1() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickHat2, addr 0x180394380, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_stickHat2() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickHat3, addr 0x1803943a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_stickHat3() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickHat4, addr 0x1803943c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_stickHat4() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickMiniStick1, addr 0x1803943e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThumbStick* Rewired_IHOTASTemplate_get_stickMiniStick1() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickMiniStick2, addr 0x180394400, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThumbStick* Rewired_IHOTASTemplate_get_stickMiniStick2() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickPinkyButton, addr 0x180394180, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickPinkyButton() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickPinkyTrigger, addr 0x180394420, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickPinkyTrigger() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickTrigger, addr 0x180394440, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickTrigger() ;

/// @brief Method Rewired.IHOTASTemplate.get_stickTriggerStage2, addr 0x180394160, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_stickTriggerStage2() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttle1, addr 0x180394480, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_IHOTASTemplate_get_throttle1() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttle2, addr 0x1803944a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_IHOTASTemplate_get_throttle2() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton1, addr 0x180394020, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton1() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton10, addr 0x1803944c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton10() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton11, addr 0x1803944e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton11() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton12, addr 0x180394500, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton12() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton13, addr 0x180394520, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton13() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton14, addr 0x180394540, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton14() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton15, addr 0x180394560, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton15() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton2, addr 0x180393ee0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton2() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton3, addr 0x180393f00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton3() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton4, addr 0x180393f20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton4() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton5, addr 0x180394580, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton5() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton6, addr 0x1803945a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton6() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton7, addr 0x1803945c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton7() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton8, addr 0x1803945e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton8() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleBaseButton9, addr 0x180394600, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleBaseButton9() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton1, addr 0x180393d00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton1() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton10, addr 0x180393e20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton10() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton2, addr 0x180393d20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton2() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton3, addr 0x180393c00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton3() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton4, addr 0x180394080, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton4() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton5, addr 0x180394040, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton5() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton6, addr 0x180394060, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton6() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton7, addr 0x1803940e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton7() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton8, addr 0x1803940a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton8() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleButton9, addr 0x1803940c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleButton9() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleDial1, addr 0x180394620, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleDial1() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleDial2, addr 0x180394640, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleDial2() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleDial3, addr 0x180394660, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleDial3() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleDial4, addr 0x180394680, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleDial4() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleHat1, addr 0x1803946a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_throttleHat1() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleHat2, addr 0x1803946c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_throttleHat2() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleHat3, addr 0x1803946e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_throttleHat3() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleHat4, addr 0x180394700, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IHOTASTemplate_get_throttleHat4() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleMiniStick, addr 0x180394720, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThumbStick* Rewired_IHOTASTemplate_get_throttleMiniStick() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleSlider1, addr 0x180394740, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleSlider1() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleSlider2, addr 0x180394760, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleSlider2() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleSlider3, addr 0x180394780, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleSlider3() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleSlider4, addr 0x1803947a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IHOTASTemplate_get_throttleSlider4() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel1Back, addr 0x1803947c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel1Back() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel1Forward, addr 0x1803947e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel1Forward() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel1Press, addr 0x180394800, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel1Press() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel2Back, addr 0x180394820, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel2Back() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel2Forward, addr 0x180394840, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel2Forward() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel2Press, addr 0x180394860, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel2Press() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel3Back, addr 0x180394880, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel3Back() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel3Forward, addr 0x1803948a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel3Forward() ;

/// @brief Method Rewired.IHOTASTemplate.get_throttleWheel3Press, addr 0x1803948c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IHOTASTemplate_get_throttleWheel3Press() ;

/// @brief Method .ctor, addr 0x180393af0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  payload) ;

static inline ::System::Guid getStaticF_typeGuid() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

/// @brief Convert to "::Rewired::IHOTASTemplate"
constexpr ::Rewired::IHOTASTemplate* i___Rewired__IHOTASTemplate() noexcept;

static inline void setStaticF_typeGuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HOTASTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HOTASTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HOTASTemplate(HOTASTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HOTASTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HOTASTemplate(HOTASTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5650};

/// @brief Field elementId_leftPedal offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftPedal{static_cast<int32_t>(0xa8)};

/// @brief Field elementId_mode1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_mode1{static_cast<int32_t>(0x2c)};

/// @brief Field elementId_mode2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_mode2{static_cast<int32_t>(0x2d)};

/// @brief Field elementId_mode3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_mode3{static_cast<int32_t>(0x2e)};

/// @brief Field elementId_rightPedal offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightPedal{static_cast<int32_t>(0xa9)};

/// @brief Field elementId_slidePedals offset 0xffffffff size 0x4
static constexpr int32_t  elementId_slidePedals{static_cast<int32_t>(0xaa)};

/// @brief Field elementId_stick offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stick{static_cast<int32_t>(0xab)};

/// @brief Field elementId_stickBaseButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton1{static_cast<int32_t>(0x12)};

/// @brief Field elementId_stickBaseButton10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton10{static_cast<int32_t>(0x1b)};

/// @brief Field elementId_stickBaseButton11 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton11{static_cast<int32_t>(0xa1)};

/// @brief Field elementId_stickBaseButton12 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton12{static_cast<int32_t>(0xa2)};

/// @brief Field elementId_stickBaseButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton2{static_cast<int32_t>(0x13)};

/// @brief Field elementId_stickBaseButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton3{static_cast<int32_t>(0x14)};

/// @brief Field elementId_stickBaseButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton4{static_cast<int32_t>(0x15)};

/// @brief Field elementId_stickBaseButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton5{static_cast<int32_t>(0x16)};

/// @brief Field elementId_stickBaseButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton6{static_cast<int32_t>(0x17)};

/// @brief Field elementId_stickBaseButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton7{static_cast<int32_t>(0x18)};

/// @brief Field elementId_stickBaseButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton8{static_cast<int32_t>(0x19)};

/// @brief Field elementId_stickBaseButton9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickBaseButton9{static_cast<int32_t>(0x1a)};

/// @brief Field elementId_stickButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton1{static_cast<int32_t>(0x6)};

/// @brief Field elementId_stickButton10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton10{static_cast<int32_t>(0xf)};

/// @brief Field elementId_stickButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton2{static_cast<int32_t>(0x7)};

/// @brief Field elementId_stickButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton3{static_cast<int32_t>(0x8)};

/// @brief Field elementId_stickButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton4{static_cast<int32_t>(0x9)};

/// @brief Field elementId_stickButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton5{static_cast<int32_t>(0xa)};

/// @brief Field elementId_stickButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton6{static_cast<int32_t>(0xb)};

/// @brief Field elementId_stickButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton7{static_cast<int32_t>(0xc)};

/// @brief Field elementId_stickButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton8{static_cast<int32_t>(0xd)};

/// @brief Field elementId_stickButton9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickButton9{static_cast<int32_t>(0xe)};

/// @brief Field elementId_stickHat1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1{static_cast<int32_t>(0xae)};

/// @brief Field elementId_stickHat1Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1Down{static_cast<int32_t>(0x20)};

/// @brief Field elementId_stickHat1DownLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1DownLeft{static_cast<int32_t>(0x21)};

/// @brief Field elementId_stickHat1DownRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1DownRight{static_cast<int32_t>(0x1f)};

/// @brief Field elementId_stickHat1Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1Left{static_cast<int32_t>(0x22)};

/// @brief Field elementId_stickHat1Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1Right{static_cast<int32_t>(0x1e)};

/// @brief Field elementId_stickHat1Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1Up{static_cast<int32_t>(0x1c)};

/// @brief Field elementId_stickHat1UpRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1UpRight{static_cast<int32_t>(0x1d)};

/// @brief Field elementId_stickHat1Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat1Up_Left{static_cast<int32_t>(0x23)};

/// @brief Field elementId_stickHat2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2{static_cast<int32_t>(0xaf)};

/// @brief Field elementId_stickHat2Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Down{static_cast<int32_t>(0x28)};

/// @brief Field elementId_stickHat2Down_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Down_Left{static_cast<int32_t>(0x29)};

/// @brief Field elementId_stickHat2Down_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Down_Right{static_cast<int32_t>(0x27)};

/// @brief Field elementId_stickHat2Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Left{static_cast<int32_t>(0x2a)};

/// @brief Field elementId_stickHat2Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Right{static_cast<int32_t>(0x26)};

/// @brief Field elementId_stickHat2Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Up{static_cast<int32_t>(0x24)};

/// @brief Field elementId_stickHat2Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Up_Left{static_cast<int32_t>(0x2b)};

/// @brief Field elementId_stickHat2Up_right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat2Up_right{static_cast<int32_t>(0x25)};

/// @brief Field elementId_stickHat3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3{static_cast<int32_t>(0xb0)};

/// @brief Field elementId_stickHat3Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Down{static_cast<int32_t>(0x58)};

/// @brief Field elementId_stickHat3Down_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Down_Left{static_cast<int32_t>(0x59)};

/// @brief Field elementId_stickHat3Down_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Down_Right{static_cast<int32_t>(0x57)};

/// @brief Field elementId_stickHat3Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Left{static_cast<int32_t>(0x5a)};

/// @brief Field elementId_stickHat3Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Right{static_cast<int32_t>(0x56)};

/// @brief Field elementId_stickHat3Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Up{static_cast<int32_t>(0x54)};

/// @brief Field elementId_stickHat3Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Up_Left{static_cast<int32_t>(0x5b)};

/// @brief Field elementId_stickHat3Up_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat3Up_Right{static_cast<int32_t>(0x55)};

/// @brief Field elementId_stickHat4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4{static_cast<int32_t>(0xb1)};

/// @brief Field elementId_stickHat4Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Down{static_cast<int32_t>(0x60)};

/// @brief Field elementId_stickHat4Down_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Down_Left{static_cast<int32_t>(0x61)};

/// @brief Field elementId_stickHat4Down_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Down_Right{static_cast<int32_t>(0x5f)};

/// @brief Field elementId_stickHat4Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Left{static_cast<int32_t>(0x62)};

/// @brief Field elementId_stickHat4Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Right{static_cast<int32_t>(0x5e)};

/// @brief Field elementId_stickHat4Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Up{static_cast<int32_t>(0x5c)};

/// @brief Field elementId_stickHat4Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Up_Left{static_cast<int32_t>(0x63)};

/// @brief Field elementId_stickHat4Up_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickHat4Up_Right{static_cast<int32_t>(0x5d)};

/// @brief Field elementId_stickMiniStick1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick1{static_cast<int32_t>(0xac)};

/// @brief Field elementId_stickMiniStick1Press offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick1Press{static_cast<int32_t>(0x50)};

/// @brief Field elementId_stickMiniStick1X offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick1X{static_cast<int32_t>(0x4e)};

/// @brief Field elementId_stickMiniStick1Y offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick1Y{static_cast<int32_t>(0x4f)};

/// @brief Field elementId_stickMiniStick2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick2{static_cast<int32_t>(0xad)};

/// @brief Field elementId_stickMiniStick2Press offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick2Press{static_cast<int32_t>(0x53)};

/// @brief Field elementId_stickMiniStick2X offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick2X{static_cast<int32_t>(0x51)};

/// @brief Field elementId_stickMiniStick2Y offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickMiniStick2Y{static_cast<int32_t>(0x52)};

/// @brief Field elementId_stickPinkyButton offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickPinkyButton{static_cast<int32_t>(0x5)};

/// @brief Field elementId_stickPinkyTrigger offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickPinkyTrigger{static_cast<int32_t>(0x9a)};

/// @brief Field elementId_stickRotate offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickRotate{static_cast<int32_t>(0x2)};

/// @brief Field elementId_stickTrigger offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickTrigger{static_cast<int32_t>(0x3)};

/// @brief Field elementId_stickTriggerStage2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickTriggerStage2{static_cast<int32_t>(0x4)};

/// @brief Field elementId_stickX offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickX{static_cast<int32_t>(0x0)};

/// @brief Field elementId_stickY offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stickY{static_cast<int32_t>(0x1)};

/// @brief Field elementId_throttle1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle1{static_cast<int32_t>(0xb2)};

/// @brief Field elementId_throttle1Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle1Axis{static_cast<int32_t>(0x31)};

/// @brief Field elementId_throttle1MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle1MinDetent{static_cast<int32_t>(0xa6)};

/// @brief Field elementId_throttle2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle2{static_cast<int32_t>(0xb3)};

/// @brief Field elementId_throttle2Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle2Axis{static_cast<int32_t>(0x9b)};

/// @brief Field elementId_throttle2MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle2MinDetent{static_cast<int32_t>(0xa7)};

/// @brief Field elementId_throttleBaseButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton1{static_cast<int32_t>(0x3c)};

/// @brief Field elementId_throttleBaseButton10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton10{static_cast<int32_t>(0x45)};

/// @brief Field elementId_throttleBaseButton11 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton11{static_cast<int32_t>(0x84)};

/// @brief Field elementId_throttleBaseButton12 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton12{static_cast<int32_t>(0x85)};

/// @brief Field elementId_throttleBaseButton13 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton13{static_cast<int32_t>(0x86)};

/// @brief Field elementId_throttleBaseButton14 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton14{static_cast<int32_t>(0x87)};

/// @brief Field elementId_throttleBaseButton15 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton15{static_cast<int32_t>(0x88)};

/// @brief Field elementId_throttleBaseButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton2{static_cast<int32_t>(0x3d)};

/// @brief Field elementId_throttleBaseButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton3{static_cast<int32_t>(0x3e)};

/// @brief Field elementId_throttleBaseButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton4{static_cast<int32_t>(0x3f)};

/// @brief Field elementId_throttleBaseButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton5{static_cast<int32_t>(0x40)};

/// @brief Field elementId_throttleBaseButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton6{static_cast<int32_t>(0x41)};

/// @brief Field elementId_throttleBaseButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton7{static_cast<int32_t>(0x42)};

/// @brief Field elementId_throttleBaseButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton8{static_cast<int32_t>(0x43)};

/// @brief Field elementId_throttleBaseButton9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleBaseButton9{static_cast<int32_t>(0x44)};

/// @brief Field elementId_throttleButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton1{static_cast<int32_t>(0x32)};

/// @brief Field elementId_throttleButton10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton10{static_cast<int32_t>(0x3b)};

/// @brief Field elementId_throttleButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton2{static_cast<int32_t>(0x33)};

/// @brief Field elementId_throttleButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton3{static_cast<int32_t>(0x34)};

/// @brief Field elementId_throttleButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton4{static_cast<int32_t>(0x35)};

/// @brief Field elementId_throttleButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton5{static_cast<int32_t>(0x36)};

/// @brief Field elementId_throttleButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton6{static_cast<int32_t>(0x37)};

/// @brief Field elementId_throttleButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton7{static_cast<int32_t>(0x38)};

/// @brief Field elementId_throttleButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton8{static_cast<int32_t>(0x39)};

/// @brief Field elementId_throttleButton9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleButton9{static_cast<int32_t>(0x3a)};

/// @brief Field elementId_throttleDial1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleDial1{static_cast<int32_t>(0x4a)};

/// @brief Field elementId_throttleDial2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleDial2{static_cast<int32_t>(0x8e)};

/// @brief Field elementId_throttleDial3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleDial3{static_cast<int32_t>(0x8f)};

/// @brief Field elementId_throttleDial4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleDial4{static_cast<int32_t>(0x90)};

/// @brief Field elementId_throttleHat1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1{static_cast<int32_t>(0xb5)};

/// @brief Field elementId_throttleHat1Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Down{static_cast<int32_t>(0x68)};

/// @brief Field elementId_throttleHat1Down_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Down_Left{static_cast<int32_t>(0x69)};

/// @brief Field elementId_throttleHat1Down_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Down_Right{static_cast<int32_t>(0x67)};

/// @brief Field elementId_throttleHat1Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Left{static_cast<int32_t>(0x6a)};

/// @brief Field elementId_throttleHat1Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Right{static_cast<int32_t>(0x66)};

/// @brief Field elementId_throttleHat1Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Up{static_cast<int32_t>(0x64)};

/// @brief Field elementId_throttleHat1Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Up_Left{static_cast<int32_t>(0x6b)};

/// @brief Field elementId_throttleHat1Up_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat1Up_Right{static_cast<int32_t>(0x65)};

/// @brief Field elementId_throttleHat2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2{static_cast<int32_t>(0xb6)};

/// @brief Field elementId_throttleHat2Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Down{static_cast<int32_t>(0x70)};

/// @brief Field elementId_throttleHat2Down_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Down_Left{static_cast<int32_t>(0x71)};

/// @brief Field elementId_throttleHat2Down_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Down_Right{static_cast<int32_t>(0x6f)};

/// @brief Field elementId_throttleHat2Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Left{static_cast<int32_t>(0x72)};

/// @brief Field elementId_throttleHat2Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Right{static_cast<int32_t>(0x6e)};

/// @brief Field elementId_throttleHat2Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Up{static_cast<int32_t>(0x6c)};

/// @brief Field elementId_throttleHat2Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Up_Left{static_cast<int32_t>(0x73)};

/// @brief Field elementId_throttleHat2Up_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat2Up_Right{static_cast<int32_t>(0x6d)};

/// @brief Field elementId_throttleHat3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3{static_cast<int32_t>(0xb7)};

/// @brief Field elementId_throttleHat3Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Down{static_cast<int32_t>(0x78)};

/// @brief Field elementId_throttleHat3Down_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Down_Left{static_cast<int32_t>(0x79)};

/// @brief Field elementId_throttleHat3Down_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Down_Right{static_cast<int32_t>(0x77)};

/// @brief Field elementId_throttleHat3Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Left{static_cast<int32_t>(0x7a)};

/// @brief Field elementId_throttleHat3Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Right{static_cast<int32_t>(0x76)};

/// @brief Field elementId_throttleHat3Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Up{static_cast<int32_t>(0x74)};

/// @brief Field elementId_throttleHat3Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Up_Left{static_cast<int32_t>(0x7b)};

/// @brief Field elementId_throttleHat3Up_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat3Up_Right{static_cast<int32_t>(0x75)};

/// @brief Field elementId_throttleHat4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4{static_cast<int32_t>(0xb8)};

/// @brief Field elementId_throttleHat4Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Down{static_cast<int32_t>(0x80)};

/// @brief Field elementId_throttleHat4Down_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Down_Left{static_cast<int32_t>(0x81)};

/// @brief Field elementId_throttleHat4Down_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Down_Right{static_cast<int32_t>(0x7f)};

/// @brief Field elementId_throttleHat4Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Left{static_cast<int32_t>(0x82)};

/// @brief Field elementId_throttleHat4Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Right{static_cast<int32_t>(0x7e)};

/// @brief Field elementId_throttleHat4Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Up{static_cast<int32_t>(0x7c)};

/// @brief Field elementId_throttleHat4Up_Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Up_Left{static_cast<int32_t>(0x83)};

/// @brief Field elementId_throttleHat4Up_Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleHat4Up_Right{static_cast<int32_t>(0x7d)};

/// @brief Field elementId_throttleMiniStick offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleMiniStick{static_cast<int32_t>(0xb4)};

/// @brief Field elementId_throttleMiniStickPress offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleMiniStickPress{static_cast<int32_t>(0x4d)};

/// @brief Field elementId_throttleMiniStickX offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleMiniStickX{static_cast<int32_t>(0x4b)};

/// @brief Field elementId_throttleMiniStickY offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleMiniStickY{static_cast<int32_t>(0x4c)};

/// @brief Field elementId_throttleSlider1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleSlider1{static_cast<int32_t>(0x46)};

/// @brief Field elementId_throttleSlider2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleSlider2{static_cast<int32_t>(0x47)};

/// @brief Field elementId_throttleSlider3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleSlider3{static_cast<int32_t>(0x48)};

/// @brief Field elementId_throttleSlider4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleSlider4{static_cast<int32_t>(0x49)};

/// @brief Field elementId_throttleWheel1Back offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel1Back{static_cast<int32_t>(0x92)};

/// @brief Field elementId_throttleWheel1Forward offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel1Forward{static_cast<int32_t>(0x91)};

/// @brief Field elementId_throttleWheel1Press offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel1Press{static_cast<int32_t>(0x93)};

/// @brief Field elementId_throttleWheel2Back offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel2Back{static_cast<int32_t>(0x95)};

/// @brief Field elementId_throttleWheel2Forward offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel2Forward{static_cast<int32_t>(0x94)};

/// @brief Field elementId_throttleWheel2Press offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel2Press{static_cast<int32_t>(0x96)};

/// @brief Field elementId_throttleWheel3Back offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel3Back{static_cast<int32_t>(0x98)};

/// @brief Field elementId_throttleWheel3Forward offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel3Forward{static_cast<int32_t>(0x97)};

/// @brief Field elementId_throttleWheel3Press offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttleWheel3Press{static_cast<int32_t>(0x99)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::HOTASTemplate) == 0x78, "Size mismatch!");

} // namespace end def Rewired
