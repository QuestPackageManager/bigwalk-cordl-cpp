#pragma once
// IWYU pragma private; include "Rewired/IRacingWheelTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRacingWheelTemplate)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateDPad;
}
namespace Rewired {
class IControllerTemplate;
}
// Forward declare root types
namespace Rewired {
class IRacingWheelTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::IRacingWheelTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::IRacingWheelTemplate*, "Rewired", "IRacingWheelTemplate");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IRacingWheelTemplate
class CORDL_TYPE IRacingWheelTemplate {
public:
// Declarations
 __declspec(property(get=get_accelerator)) ::Rewired::IControllerTemplateAxis*  accelerator;

 __declspec(property(get=get_brake)) ::Rewired::IControllerTemplateAxis*  brake;

 __declspec(property(get=get_clutch)) ::Rewired::IControllerTemplateAxis*  clutch;

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

 __declspec(property(get=get_dPad)) ::Rewired::IControllerTemplateDPad*  dPad;

 __declspec(property(get=get_horn)) ::Rewired::IControllerTemplateButton*  horn;

 __declspec(property(get=get_reverseGear)) ::Rewired::IControllerTemplateButton*  reverseGear;

 __declspec(property(get=get_select)) ::Rewired::IControllerTemplateButton*  select;

 __declspec(property(get=get_shiftDown)) ::Rewired::IControllerTemplateButton*  shiftDown;

 __declspec(property(get=get_shiftUp)) ::Rewired::IControllerTemplateButton*  shiftUp;

 __declspec(property(get=get_shifter1)) ::Rewired::IControllerTemplateButton*  shifter1;

 __declspec(property(get=get_shifter10)) ::Rewired::IControllerTemplateButton*  shifter10;

 __declspec(property(get=get_shifter2)) ::Rewired::IControllerTemplateButton*  shifter2;

 __declspec(property(get=get_shifter3)) ::Rewired::IControllerTemplateButton*  shifter3;

 __declspec(property(get=get_shifter4)) ::Rewired::IControllerTemplateButton*  shifter4;

 __declspec(property(get=get_shifter5)) ::Rewired::IControllerTemplateButton*  shifter5;

 __declspec(property(get=get_shifter6)) ::Rewired::IControllerTemplateButton*  shifter6;

 __declspec(property(get=get_shifter7)) ::Rewired::IControllerTemplateButton*  shifter7;

 __declspec(property(get=get_shifter8)) ::Rewired::IControllerTemplateButton*  shifter8;

 __declspec(property(get=get_shifter9)) ::Rewired::IControllerTemplateButton*  shifter9;

 __declspec(property(get=get_start)) ::Rewired::IControllerTemplateButton*  start;

 __declspec(property(get=get_systemButton)) ::Rewired::IControllerTemplateButton*  systemButton;

 __declspec(property(get=get_wheel)) ::Rewired::IControllerTemplateAxis*  wheel;

 __declspec(property(get=get_wheelButton1)) ::Rewired::IControllerTemplateButton*  wheelButton1;

 __declspec(property(get=get_wheelButton10)) ::Rewired::IControllerTemplateButton*  wheelButton10;

 __declspec(property(get=get_wheelButton2)) ::Rewired::IControllerTemplateButton*  wheelButton2;

 __declspec(property(get=get_wheelButton3)) ::Rewired::IControllerTemplateButton*  wheelButton3;

 __declspec(property(get=get_wheelButton4)) ::Rewired::IControllerTemplateButton*  wheelButton4;

 __declspec(property(get=get_wheelButton5)) ::Rewired::IControllerTemplateButton*  wheelButton5;

 __declspec(property(get=get_wheelButton6)) ::Rewired::IControllerTemplateButton*  wheelButton6;

 __declspec(property(get=get_wheelButton7)) ::Rewired::IControllerTemplateButton*  wheelButton7;

 __declspec(property(get=get_wheelButton8)) ::Rewired::IControllerTemplateButton*  wheelButton8;

 __declspec(property(get=get_wheelButton9)) ::Rewired::IControllerTemplateButton*  wheelButton9;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Method get_accelerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_accelerator() ;

/// @brief Method get_brake, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_brake() ;

/// @brief Method get_clutch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_clutch() ;

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

/// @brief Method get_dPad, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateDPad* get_dPad() ;

/// @brief Method get_horn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_horn() ;

/// @brief Method get_reverseGear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_reverseGear() ;

/// @brief Method get_select, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_select() ;

/// @brief Method get_shiftDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shiftDown() ;

/// @brief Method get_shiftUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shiftUp() ;

/// @brief Method get_shifter1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter1() ;

/// @brief Method get_shifter10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter10() ;

/// @brief Method get_shifter2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter2() ;

/// @brief Method get_shifter3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter3() ;

/// @brief Method get_shifter4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter4() ;

/// @brief Method get_shifter5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter5() ;

/// @brief Method get_shifter6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter6() ;

/// @brief Method get_shifter7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter7() ;

/// @brief Method get_shifter8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter8() ;

/// @brief Method get_shifter9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_shifter9() ;

/// @brief Method get_start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_start() ;

/// @brief Method get_systemButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_systemButton() ;

/// @brief Method get_wheel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_wheel() ;

/// @brief Method get_wheelButton1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton1() ;

/// @brief Method get_wheelButton10, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton10() ;

/// @brief Method get_wheelButton2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton2() ;

/// @brief Method get_wheelButton3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton3() ;

/// @brief Method get_wheelButton4, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton4() ;

/// @brief Method get_wheelButton5, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton5() ;

/// @brief Method get_wheelButton6, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton6() ;

/// @brief Method get_wheelButton7, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton7() ;

/// @brief Method get_wheelButton8, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton8() ;

/// @brief Method get_wheelButton9, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_wheelButton9() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IRacingWheelTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRacingWheelTemplate(IRacingWheelTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5643};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
